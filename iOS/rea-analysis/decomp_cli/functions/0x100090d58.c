// rea decompile_all
// name: FUN_100090d58
// address: 0x100090d58
// body: available
// range: 0x100090d58-0x1000911bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100091024) */
/* WARNING: Removing unreachable block (ram,0x000100090ffc) */
/* WARNING: Removing unreachable block (ram,0x000100090ea8) */

void FUN_100090d58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  long local_110 [3];
  long local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar18 = *(long *)(unaff_x20 + 8);
  uVar11 = *(undefined8 *)(lVar18 + 0x10);
  lVar9 = *(long *)(lVar18 + 0x18);
  uVar17 = *param_2;
  uVar1 = param_2[1];
  uVar16 = param_2[2];
  uVar13 = *(undefined8 *)(lVar9 + 8);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar16);
  uVar2 = uVar11;
  FUN_1000772e8(uVar11,uVar13,2,0,0,0);
  local_d0 = uVar11;
  lStack_c8 = lVar9;
  local_c0 = uVar2;
  uStack_b8 = uVar13;
  local_b0 = uVar17;
  uStack_a8 = uVar1;
  local_a0 = uVar16;
  FUN_10008d094(&local_98);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(local_b0);
    _swift_bridgeObjectRelease(local_a0);
    uVar6 = *(ulong *)(lVar18 + 0x10);
    FUN_100079184(uVar6,*(undefined8 *)(lVar18 + 0x18));
    if ((uVar6 & 1) != 0) {
      FUN_100095304(local_88,uStack_80,local_78,0,lVar18,*(undefined8 *)(unaff_x20 + 0x10));
    }
    uVar10 = *(ulong *)(unaff_x20 + 0x10);
    lVar3 = 0;
    FUN_10007b5dc();
    lVar4 = lVar3;
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x40) = 0;
    puVar7 = PTR___swiftEmptyArrayStorage_1000f0740;
    puVar15 = (ulong *)(lVar4 + 0x48);
    *puVar15 = (ulong)PTR___swiftEmptyArrayStorage_1000f0740;
    *(undefined **)(lVar4 + 0x50) = puVar7;
    _swift_bridgeObjectRetain(uVar10);
    puVar5 = puVar7;
    FUN_1000737bc();
    *(undefined **)(lVar4 + 0x58) = puVar5;
    *(undefined8 *)(lVar4 + 0x18) = uStack_90;
    *(undefined8 *)(lVar4 + 0x10) = local_98;
    *(undefined8 *)(lVar4 + 0x28) = uStack_80;
    *(undefined8 *)(lVar4 + 0x20) = local_88;
    *(undefined8 *)(lVar4 + 0x30) = local_78;
    _swift_beginAccess(puVar15,auStack_e8,1,0);
    uVar6 = *puVar15;
    *puVar15 = uVar10;
    _swift_bridgeObjectRelease(uVar6);
    FUN_100097700();
    puVar14 = (undefined8 *)(lVar4 + 0x38);
    *puVar14 = puVar7;
    uVar11 = *(undefined8 *)(lVar18 + 0x10);
    lVar9 = *(long *)(lVar18 + 0x18);
    local_f8 = lVar3;
    FUN_100095888();
    puVar8 = &local_148;
    uStack_130 = uVar11;
    local_128 = lVar9;
    local_110[0] = lVar4;
    local_f0 = puVar7;
    FUN_100060d88(puVar8);
    uVar17 = *(undefined8 *)(*(long *)(lVar9 + 8) + 8);
    _swift_retain(lVar4);
    __sSe4fromxs7Decoder_p_tKcfCTj(puVar8,local_110,uVar11,uVar17);
    FUN_10006c8f8(&local_148,param_1);
    _swift_beginAccess(puVar14,local_110,0,0);
    uVar11 = *puVar14;
    _swift_bridgeObjectRetain(uVar11);
    FUN_1000973d8();
    _swift_bridgeObjectRelease(uVar11);
    uVar10 = *puVar15;
    uVar6 = uVar10;
    _swift_bridgeObjectRetain(uVar10);
    FUN_100093638();
    _swift_bridgeObjectRelease(uVar10);
    FUN_10006d9f4(uVar6);
    uVar11 = *(undefined8 *)(lVar18 + 0x10);
    uVar17 = *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8);
    lVar9 = *(long *)(param_1 + 0x18);
    lVar18 = *(long *)(param_1 + 0x20);
    FUN_10000eba0(param_1,lVar9);
    local_118 = *(undefined8 *)(lVar18 + 8);
    lStack_120 = lVar9;
    FUN_100060d88(&local_138);
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))();
    uVar12 = *(ulong *)(unaff_x20 + 0x10);
    uVar6 = uVar12;
    local_148 = uVar11;
    uStack_140 = uVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar10 = 0;
      FUN_10006f390(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar6 = *(ulong *)(uVar10 + 0x10);
    uVar12 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_10006f390(uVar12,uVar6 + 1,1,uVar10);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    lVar9 = uVar12 + uVar6 * 0x38;
    *(undefined8 *)(lVar9 + 0x50) = local_118;
    *(undefined8 *)(lVar9 + 0x38) = uStack_130;
    *(undefined8 *)(lVar9 + 0x30) = local_138;
    *(long *)(lVar9 + 0x48) = lStack_120;
    *(long *)(lVar9 + 0x40) = local_128;
    *(undefined8 *)(lVar9 + 0x28) = uStack_140;
    *(undefined8 *)(lVar9 + 0x20) = local_148;
    _swift_release(lVar4);
    *(ulong *)(unaff_x20 + 0x10) = uVar12;
  }
  else {
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(local_b0);
    _swift_bridgeObjectRelease(local_a0);
  }
  return;
}

