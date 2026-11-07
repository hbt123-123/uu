// rea decompile_all
// name: FUN_1003e5854
// address: 0x1003e5854
// body: available
// range: 0x1003e5854-0x1003e5977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e5854(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar1 = param_1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  _swift_beginAccess(lVar1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar1 = lVar3;
    _swift_bridgeObjectRetain();
    __sSa5countSivg();
    _swift_bridgeObjectRelease(lVar3);
    if (param_2 < lVar1) {
      _swift_beginAccess(param_1 + 0x10,auStack_98,0x21,0);
      uVar2 = 0;
      __sSaMa(0,param_3);
      __sSa6remove2atxSi_tF(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,uVar2);
      (**(code **)(lVar4 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
      _swift_endAccess(auStack_98);
    }
    _swift_release(param_1);
  }
  return;
}

