// rea decompile_all
// name: FUN_10020bbfc
// address: 0x10020bbfc
// body: available
// range: 0x10020bbfc-0x10020c057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010020bce0) */

undefined1  [16] FUN_10020bbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_120 [16];
  long *local_110;
  undefined8 *puStack_108;
  undefined *local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  long *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  long local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar5 = *(long *)(param_1 + 0x38);
  uVar9 = *(ulong *)(param_1 + 0x40);
  uVar3 = (uint)(uVar9 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar12 != 0) {
      if ((long)(int)lVar5 != lVar5 >> 0x20) goto LAB_10020bc58;
      goto LAB_10020bdac;
    }
    if ((uVar9 & 0xff000000000000) == 0) goto LAB_10020bdac;
LAB_10020bc58:
    FUN_100180c50();
    if (0xe < uVar9 >> 0x3c) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar8 = FUN_10020cffc;
      uVar6 = 0x20d;
      goto LAB_10020c020;
    }
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lVar14 = lVar5;
    uVar10 = uVar9;
    FUN_100436a0c();
    local_a8 = lVar14;
    local_a0 = uVar10;
    local_98 = param_3;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_110 = &local_a8;
    puStack_108 = &local_90;
    local_100 = (undefined *)((ulong)local_100 & 0xffffffffffffff00);
    local_f8 = 100;
    local_f0 = local_f0 & 0xffffffffffffff00;
    FUN_10012308c(FUN_10020d004,auStack_120,lVar5,uVar9);
    FUN_100006cc8(lVar5,uVar9);
    FUN_100040bb4(&local_90,&DAT_100a79820,&DAT_100812f70);
    uVar6 = local_98;
    uVar9 = local_a0;
    lVar5 = local_a8;
    _swift_bridgeObjectRetain(local_a8);
    FUN_100006cdc(uVar9,uVar6);
    lVar14 = *(long *)(lVar5 + 0x10);
    _swift_bridgeObjectRelease(lVar5);
    if (lVar14 == 0) {
      _swift_bridgeObjectRelease(lVar5);
      goto LAB_10020bf58;
    }
    lVar14 = *(long *)(lVar5 + 0x10);
    if (lVar14 == 0) {
      _swift_bridgeObjectRelease(lVar5);
      uVar6 = 0;
      puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
      goto LAB_10020c034;
    }
  }
  else {
    if ((uVar12 == 2) && (*(long *)(lVar5 + 0x10) != *(long *)(lVar5 + 0x18))) goto LAB_10020bc58;
LAB_10020bdac:
    lVar5 = *(long *)(param_1 + 0x10);
    lVar14 = *(long *)(lVar5 + 0x10);
    if (lVar14 == 0) {
LAB_10020bf58:
      if ((*(ulong *)(param_1 + 0x30) >> 0x3d & 1) == 0) {
        uVar9 = *(ulong *)(param_1 + 0x28) & 0xffffffffffff;
      }
      else {
        uVar9 = *(ulong *)(param_1 + 0x30) >> 0x38 & 0xf;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      if (uVar9 != 0) {
        local_f0 = param_1;
        FUN_1003fb48c(FUN_10020d028,&local_100,0xd0000000000000a6,0x80000001008a2d40,
                      &DAT_d000000000000013,0x80000001008a3630,0x21a,0);
        uVar6 = 0;
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        goto LAB_10020c034;
      }
      pcVar8 = FUN_10020d030;
      uVar6 = 0x217;
LAB_10020c020:
      local_f0 = param_1;
      FUN_1003fb4ec(pcVar8,&local_100,0xd0000000000000a6,0x80000001008a2d40,&DAT_d000000000000013,
                    0x80000001008a3630,uVar6,0);
      uVar6 = 1;
      puVar13 = (undefined *)0x4;
      goto LAB_10020c034;
    }
    _swift_bridgeObjectRetain(lVar5);
  }
  local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar6 = 0;
  FUN_10006ff30(0,lVar14,0);
  puVar13 = local_b8;
  FUN_10009ff0c();
  puVar4 = PTR___sSSN_1009957f8;
  puVar15 = (undefined8 *)(lVar5 + 0x38);
  local_d0 = lVar5;
  do {
    local_90 = puVar15[-3];
    uStack_88 = puVar15[-2];
    uVar1 = puVar15[-1];
    uVar2 = *puVar15;
    local_a8 = 0x2b5c5c;
    local_a0 = 0xe300000000000000;
    local_c8 = 0x2f;
    local_c0 = 0xe100000000000000;
    plVar7 = &local_a8;
    puVar11 = &local_c8;
    local_100 = puVar4;
    local_f8 = uVar6;
    local_f0 = uVar6;
    uStack_e8 = uVar6;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (plVar7,puVar11,0x400,0,0,1,puVar4,puVar4);
    uVar9 = *(ulong *)(puVar13 + 0x10);
    local_b8 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar9) {
      local_d8 = plVar7;
      FUN_10006ff30(1 < *(ulong *)(puVar13 + 0x18),uVar9 + 1,1);
      plVar7 = local_d8;
    }
    puVar13 = local_b8;
    puVar15 = puVar15 + 6;
    *(ulong *)(local_b8 + 0x10) = uVar9 + 1;
    *(long **)(local_b8 + uVar9 * 0x20 + 0x20) = plVar7;
    *(undefined8 **)(local_b8 + uVar9 * 0x20 + 0x28) = puVar11;
    *(undefined8 *)(local_b8 + uVar9 * 0x20 + 0x30) = uVar1;
    *(undefined8 *)(local_b8 + uVar9 * 0x20 + 0x38) = uVar2;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  _swift_bridgeObjectRelease(local_d0);
  uVar6 = 0;
LAB_10020c034:
  auVar16._8_8_ = uVar6;
  auVar16._0_8_ = puVar13;
  return auVar16;
}

