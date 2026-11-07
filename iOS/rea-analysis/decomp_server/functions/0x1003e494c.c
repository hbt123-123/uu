// rea decompile_all
// name: FUN_1003e494c
// address: 0x1003e494c
// body: available
// range: 0x1003e494c-0x1003e4b6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e494c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __sSqMa(0,param_4);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_a8 + (-8 - extraout_x8);
  lVar10 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    local_b0 = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
    lVar9 = *(long *)(param_1 + 0x10);
    lVar3 = lVar9;
    _swift_bridgeObjectRetain();
    __sSa5countSivg();
    _swift_bridgeObjectRelease(lVar9);
    if (param_2 < lVar3) {
      (**(code **)(lVar7 + 0x10))(puVar8,param_3,lVar2);
      puVar4 = puVar8;
      (**(code **)(lVar10 + 0x30))(puVar8,1,param_4);
      puVar5 = local_b0;
      if ((int)puVar4 == 1) {
        _swift_release(param_1);
        pcVar6 = *(code **)(lVar7 + 8);
        puVar5 = puVar8;
        param_4 = lVar2;
      }
      else {
        (**(code **)(lVar10 + 0x20))(local_b0,puVar8,param_4);
        _swift_beginAccess(param_1 + 0x10,auStack_a8,0x21,0);
        __sSaMa(0,param_4);
        __sSa21_makeMutableAndUniqueyyF();
        lVar2 = *(long *)(param_1 + 0x10);
        FUN_1003e62d8(param_2,lVar2,param_4);
        __ss12_ArrayBufferV7_natives011_ContiguousaB0VyxGvg(lVar2,param_4);
        bVar1 = *(byte *)(lVar10 + 0x50);
        _swift_release();
        (**(code **)(lVar10 + 0x18))
                  (lVar2 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)) +
                   *(long *)(lVar10 + 0x48) * param_2,puVar5,param_4);
        _swift_endAccess(auStack_a8);
        _swift_release(param_1);
        pcVar6 = *(code **)(lVar10 + 8);
      }
      (*pcVar6)(puVar5,param_4);
    }
    else {
      _swift_release(param_1);
    }
  }
  return;
}

