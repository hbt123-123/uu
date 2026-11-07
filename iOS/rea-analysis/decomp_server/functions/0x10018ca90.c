// rea decompile_all
// name: FUN_10018ca90
// address: 0x10018ca90
// body: available
// range: 0x10018ca90-0x10018cc63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018ca90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ID self;
  ID IVar4;
  char *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_10018c66c(puVar7);
    puVar3 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar2);
    if ((int)puVar3 == 1) {
      _swift_release(param_1);
      FUN_100040bb4(puVar7,&DAT_100a766c8,&DAT_10080b1d0);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar2);
      pcVar5 = "defaultManager";
      self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      IVar4 = self;
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar5);
      IVar4 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar4);
      if ((IVar4 & 1) == 0) {
        FUN_100191bb0(lVar6);
        _swift_release(param_1);
        (**(code **)(lVar8 + 8))(lVar6,lVar2);
      }
      else {
        (**(code **)(lVar8 + 8))(lVar6,lVar2);
        _swift_release(param_1);
      }
    }
  }
  return;
}

