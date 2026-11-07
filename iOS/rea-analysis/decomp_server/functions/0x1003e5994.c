// rea decompile_all
// name: FUN_1003e5994
// address: 0x1003e5994
// body: available
// range: 0x1003e5994-0x1003e5ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e5994(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined8 local_88 [3];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = *(long *)(param_2 + -8);
  lVar1 = param_1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  _swift_beginAccess(lVar1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_70,0,0);
    local_88[0] = *(undefined8 *)(param_1 + 0x10);
    uVar2 = 0;
    __sSaMa(0,param_2);
    puVar3 = PTR___sSayxGSlsMc_1009958b0;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar2);
    uVar4 = uVar2;
    __sSlsE7isEmptySbvg(uVar2,puVar3);
    if ((uVar4 & 1) == 0) {
      _swift_beginAccess(param_1 + 0x10,local_88,0x21,0);
      puVar3 = PTR___sSayxGSmsMc_1009958b8;
      _swift_getWitnessTable(PTR___sSayxGSmsMc_1009958b8,uVar2);
      __sSmsE11removeFirst7ElementQzyF
                (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,puVar3);
      (**(code **)(lVar5 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2);
      _swift_endAccess(local_88);
    }
    _swift_release(param_1);
  }
  return;
}

