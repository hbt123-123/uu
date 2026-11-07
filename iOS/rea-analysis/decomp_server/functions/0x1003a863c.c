// rea decompile_all
// name: FUN_1003a863c
// address: 0x1003a863c
// body: available
// range: 0x1003a863c-0x1003a8797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a863c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ID self;
  ID IVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(puVar6,0xd00000000000004d,0x80000001008b2e40);
  puVar3 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1000ef618(puVar6);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar2);
    self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
    IVar4 = self;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    NSWorkspace::openURL_(self,"openURL:",IVar4);
    (**(code **)(lVar7 + 8))(lVar5,lVar2);
  }
  return;
}

