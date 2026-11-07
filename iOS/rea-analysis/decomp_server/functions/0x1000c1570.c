// rea decompile_all
// name: FUN_1000c1570
// address: 0x1000c1570
// body: available
// range: 0x1000c1570-0x1000c19af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000c1570(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 auStack_b0 [16];
  ulong *local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  uVar7 = *param_1;
  if ((uVar7 == 0x6d6f74737563 && param_1[1] == 0xe600000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar7 & 1) != 0)) {
    uVar7 = param_1[8];
    if (uVar7 == 0) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    uVar15 = param_1[7];
    uVar14 = uVar15 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar14 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar7 = param_1[3];
    if (uVar7 != 0) {
      uVar14 = param_1[2];
      plVar17 = (long *)(param_1[9] + 0x30);
      lVar8 = *(long *)(param_1[9] + 0x10) + 1;
      do {
        lVar8 = lVar8 + -1;
        if (lVar8 == 0) goto LAB_1000c17d8;
        uVar15 = plVar17[-2];
        uVar18 = plVar17[-1];
        lVar16 = *plVar17;
        if (uVar15 == uVar14 && uVar7 == uVar18) break;
        plVar17 = plVar17 + 3;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar15,uVar18,uVar14,uVar7,0);
      } while ((uVar15 & 1) == 0);
      if (*(long *)(lVar16 + 0x10) != 0) {
        _swift_bridgeObjectRetain_n(lVar16,2);
        _swift_bridgeObjectRetain(uVar18);
        lVar8 = 0x746c7561666564;
        uVar7 = 0;
        FUN_1001a2c70();
        if ((uVar7 & 1) != 0) {
          puVar13 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar8 * 0x60);
          local_88 = *puVar13;
          uVar1 = puVar13[1];
          uVar10 = puVar13[2];
          uVar2 = puVar13[3];
          local_70 = puVar13[4];
          uVar3 = puVar13[5];
          local_78 = puVar13[6];
          uVar4 = puVar13[7];
          local_80 = puVar13[8];
          uVar5 = puVar13[9];
          uVar11 = puVar13[10];
          uVar6 = puVar13[0xb];
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRelease_n(lVar16,2);
          _swift_bridgeObjectRelease(uVar18);
          puVar9 = &DAT_100a75b18;
          FUN_100004bb4(&DAT_100a75b18,&DAT_10080ac70);
          _swift_allocObject();
          *(undefined8 *)(puVar9 + 0x18) = 6;
          *(undefined8 *)(puVar9 + 0x10) = 3;
          uVar12 = uVar2;
          FUN_1000bf184();
          _swift_bridgeObjectRelease(uVar2);
          puVar9[0x20] = 0;
          *(undefined8 *)(puVar9 + 0x28) = local_88;
          *(undefined8 *)(puVar9 + 0x30) = uVar1;
          *(undefined8 *)(puVar9 + 0x38) = uVar10;
          *(undefined8 *)(puVar9 + 0x40) = uVar12;
          uVar10 = uVar6;
          FUN_1000bf184();
          _swift_bridgeObjectRelease(uVar6);
          puVar9[0x48] = 1;
          *(undefined8 *)(puVar9 + 0x50) = local_80;
          *(undefined8 *)(puVar9 + 0x58) = uVar5;
          *(undefined8 *)(puVar9 + 0x60) = uVar11;
          *(undefined8 *)(puVar9 + 0x68) = uVar10;
          uVar10 = local_78;
          uVar11 = uVar4;
          FUN_1000bf184();
          _swift_bridgeObjectRelease(uVar4);
          puVar9[0x70] = 2;
          *(undefined8 *)(puVar9 + 0x78) = local_70;
          *(undefined8 *)(puVar9 + 0x80) = uVar3;
          *(undefined8 *)(puVar9 + 0x88) = uVar10;
          *(undefined8 *)(puVar9 + 0x90) = uVar11;
          return puVar9;
        }
        _swift_bridgeObjectRelease_n(lVar16,2);
        _swift_bridgeObjectRelease(uVar18);
      }
    }
LAB_1000c17d8:
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    uVar15 = param_1[5];
    uVar7 = param_1[6];
    uVar14 = uVar15 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar14 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = param_1;
    FUN_1003fb4bc(FUN_1000c2120,auStack_b0,0xd00000000000009f,0x8000000100882d60,0xd00000000000001c,
                  0x8000000100883d40,0x324,0);
    local_68 = puVar9;
  }
  FUN_10006fd6c(0,3,0);
  puVar9 = local_68;
  uVar14 = *(ulong *)(local_68 + 0x10);
  uVar18 = *(ulong *)(local_68 + 0x18);
  lVar8 = uVar14 + 1;
  _swift_bridgeObjectRetain(uVar7);
  if (uVar18 >> 1 <= uVar14) {
    FUN_10006fd6c(1 < uVar18,lVar8,1);
    puVar9 = local_68;
  }
  *(long *)(puVar9 + 0x10) = lVar8;
  puVar9[uVar14 * 0x28 + 0x20] = 0;
  *(ulong *)(puVar9 + uVar14 * 0x28 + 0x28) = uVar15;
  *(ulong *)(puVar9 + uVar14 * 0x28 + 0x30) = uVar7;
  *(undefined8 *)(puVar9 + uVar14 * 0x28 + 0x38) = 0;
  *(undefined8 *)(puVar9 + uVar14 * 0x28 + 0x40) = 0;
  uVar18 = *(ulong *)(puVar9 + 0x18);
  lVar16 = uVar14 + 2;
  _swift_bridgeObjectRetain(uVar7);
  if ((long)(uVar18 >> 1) < lVar16) {
    FUN_10006fd6c(1 < uVar18,lVar16,1);
    puVar9 = local_68;
  }
  *(long *)(puVar9 + 0x10) = lVar16;
  puVar9[lVar8 * 0x28 + 0x20] = 1;
  *(ulong *)(puVar9 + lVar8 * 0x28 + 0x28) = uVar15;
  *(ulong *)(puVar9 + lVar8 * 0x28 + 0x30) = uVar7;
  *(undefined8 *)(puVar9 + lVar8 * 0x28 + 0x38) = 0;
  *(undefined8 *)(puVar9 + lVar8 * 0x28 + 0x40) = 0;
  uVar18 = *(ulong *)(puVar9 + 0x18);
  lVar8 = uVar14 + 3;
  _swift_bridgeObjectRetain(uVar7);
  if ((long)(uVar18 >> 1) < lVar8) {
    FUN_10006fd6c(1 < uVar18,lVar8,1);
  }
  *(long *)(local_68 + 0x10) = lVar8;
  local_68[lVar16 * 0x28 + 0x20] = 2;
  *(ulong *)(local_68 + lVar16 * 0x28 + 0x28) = uVar15;
  *(ulong *)(local_68 + lVar16 * 0x28 + 0x30) = uVar7;
  *(undefined8 *)(local_68 + lVar16 * 0x28 + 0x38) = 0;
  *(undefined8 *)(local_68 + lVar16 * 0x28 + 0x40) = 0;
  return local_68;
}

