// rea decompile_all
// name: FUN_1003ea2d8
// address: 0x1003ea2d8
// body: available
// range: 0x1003ea2d8-0x1003ea4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ea2d8(void)

{
  long lVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_b0 [80];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar5 = "defaultManager";
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = self;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar5);
  IVar2 = NSFileManager::fileExistsAtPath_(self,"fileExistsAtPath:",IVar2);
  if ((IVar2 & 1) == 0) {
    __s10Foundation3URLV25deletingLastPathComponentACyF(puVar6,0);
    puVar3 = &DAT_100a8d368;
    FUN_100004bb4(&DAT_100a8d368,&DAT_1008236c0);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined **)(puVar3 + 0x40) = PTR___ss5Int16VN_100995c50;
    *(undefined2 *)(puVar3 + 0x28) = 0x1ff;
    puVar4 = puVar3;
    FUN_100406820(puVar3);
    _swift_setDeallocating(puVar3);
    FUN_1003eacf0(puVar3 + 0x20);
    FUN_100406634(puVar4);
    if (unaff_x21 == 0) {
      (**(code **)(lVar7 + 8))(puVar6,lVar1);
      _swift_bridgeObjectRelease(puVar4);
      FUN_1003f2770(_TtC8UUCommon11FileMonitor::fileURL,0x1b6);
    }
    else {
      (**(code **)(lVar7 + 8))(puVar6,lVar1);
      _swift_bridgeObjectRelease(puVar4);
    }
  }
  return;
}

