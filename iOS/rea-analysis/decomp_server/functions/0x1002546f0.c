// rea decompile_all
// name: FUN_1002546f0
// address: 0x1002546f0
// body: available
// range: 0x1002546f0-0x100254877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002546f0(void)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = &stack0xffffffffffffffb0 + -uVar5;
  lVar6 = (long)puVar7 - uVar5;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar2 = NSFileManager::URLsForDirectory_inDomains_(IVar2,"URLsForDirectory:inDomains:",0xe,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar1);
  if (*(long *)(IVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar2);
    uVar3 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    (**(code **)(lVar9 + 0x10))
              (lVar6,IVar2 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    _swift_bridgeObjectRelease(IVar2);
    (**(code **)(lVar9 + 0x20))(lVar6 - uVar5,lVar6,lVar1);
    uVar4 = 0x80000001008a7b30;
    uVar3 = 0xd00000000000001a;
    __s10Foundation3URLV22appendingPathComponentyACSSF(puVar7,0xd00000000000001a,0x80000001008a7b30)
    ;
    __s10Foundation3URLV4pathSSvg();
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(puVar7,lVar1);
    (*pcVar8)(lVar6 - uVar5,lVar1);
  }
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar3;
  return auVar10;
}

