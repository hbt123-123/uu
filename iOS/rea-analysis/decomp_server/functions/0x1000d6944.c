// rea decompile_all
// name: FUN_1000d6944
// address: 0x1000d6944
// body: available
// range: 0x1000d6944-0x1000d6abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d6944(undefined8 param_1,ID param_2)

{
  long lVar1;
  ID IVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  IVar2 = _objc_msgSend(param_2,"URLsForDirectory:inDomains:",0xe,1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar2,lVar1);
  if (*(long *)(IVar2 + 0x10) == 0) {
    _swift_bridgeObjectRelease(IVar2);
    IVar2 = _objc_msgSend(param_2,"temporaryDirectory");
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,IVar2);
    __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF
              (param_1,0xd00000000000001b,0x80000001008868a0,1);
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
  }
  else {
    (**(code **)(lVar4 + 0x10))
              ((long)puVar3 - extraout_x12,
               IVar2 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)),lVar1);
    _swift_bridgeObjectRelease(IVar2);
    (**(code **)(lVar4 + 0x20))(param_1,(long)puVar3 - extraout_x12,lVar1);
  }
  return;
}

