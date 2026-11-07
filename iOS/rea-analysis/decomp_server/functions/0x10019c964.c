// rea decompile_all
// name: FUN_10019c964
// address: 0x10019c964
// body: available
// range: 0x10019c964-0x10019cb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10019c964(void)

{
  long lVar1;
  ID IVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = lVar4 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,"URLsForDirectory:inDomains:",5,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar1);
  if (*(long *)(IVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar2);
    lVar8 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    (**(code **)(lVar8 + 0x10))
              (lVar3,IVar2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    _swift_bridgeObjectRelease(IVar2);
    pcVar6 = *(code **)(lVar8 + 0x20);
    (*pcVar6)(lVar3 - extraout_x12_01,lVar3,lVar1);
    __s10Foundation3URLV22appendingPathComponentyACSSF(lVar4,0x6e65726566657250,0xeb00000000736563);
    __s10Foundation3URLV22appendingPathComponentyACSSF(puVar5,0xd00000000000001f,0x8000000100899ee0)
    ;
    pcVar7 = *(code **)(lVar8 + 8);
    (*pcVar7)(lVar4,lVar1);
    lVar8 = lVar4;
    (*pcVar6)(lVar4,puVar5,lVar1);
    __s10Foundation3URLV4pathSSvg();
    (*pcVar7)(lVar4,lVar1);
    (*pcVar7)(lVar3 - extraout_x12_01,lVar1);
  }
  auVar9._8_8_ = puVar5;
  auVar9._0_8_ = lVar8;
  return auVar9;
}

