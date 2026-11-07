// rea decompile_all
// name: FUN_1001a81fc
// address: 0x1001a81fc
// body: available
// range: 0x1001a81fc-0x1001a8587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a81fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 auStack_120 [4];
  undefined1 auStack_100 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_100 + lVar2;
  uVar19 = param_1[1];
  uVar17 = uVar19;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar17 < (long)uVar19) {
    if ((long)uVar19 < -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a8580);
      (*pcVar3)();
    }
    puVar18 = (undefined *)((long)uVar19 / 2);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < (long)uVar19) {
      puVar6 = puVar18;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar18,&DAT_10099a510);
      *(undefined **)(puVar6 + 0x10) = puVar18;
    }
    local_70 = puVar6 + 0x20;
    puStack_68 = puVar18;
    FUN_1001a8588(&local_70,&local_80,param_1,uVar17);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar6);
  }
  else {
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a8584);
      (*pcVar3)();
    }
    if (1 < uVar19) {
      param_1 = (undefined8 *)*param_1;
      lVar15 = -1;
      uVar17 = 1;
      puVar21 = param_1;
      do {
        puVar6 = (undefined *)param_1[uVar17 * 2];
        uVar20 = (param_1 + uVar17 * 2)[1];
        lVar16 = lVar15;
        puVar22 = puVar21;
        do {
          puVar18 = (undefined *)*puVar22;
          uVar1 = puVar22[1];
          _swift_bridgeObjectRetain(uVar20);
          _swift_bridgeObjectRetain(uVar1);
          uVar10 = uVar20;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar14);
          __s10Foundation3URLV17lastPathComponentSSvg();
          pcVar3 = *(code **)(lVar13 + 8);
          puVar7 = puVar14;
          (*pcVar3)(puVar14,lVar5);
          local_80 = 0x7070612e;
          local_78 = 0xe400000000000000;
          local_90 = 0;
          uStack_88 = 0xe000000000000000;
          local_70 = puVar6;
          puStack_68 = (undefined *)uVar10;
          FUN_10009ff0c();
          puVar6 = PTR___sSSN_1009957f8;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
          puVar8 = &local_80;
          puVar11 = &local_90;
          *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
          *(undefined **)((long)auStack_120 + lVar2) = PTR___sSSN_1009957f8;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar8,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
          _swift_bridgeObjectRelease(uVar10);
          uVar10 = uVar1;
          __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(puVar14);
          __s10Foundation3URLV17lastPathComponentSSvg();
          (*pcVar3)(puVar14,lVar5);
          local_80 = 0x7070612e;
          local_78 = 0xe400000000000000;
          local_90 = 0;
          uStack_88 = 0xe000000000000000;
          local_70 = puVar18;
          puStack_68 = (undefined *)uVar10;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x10) = puVar7;
          *(undefined1 **)((long)auStack_120 + lVar2 + 0x18) = puVar7;
          puVar9 = &local_80;
          puVar12 = &local_90;
          *(undefined1 **)((long)auStack_120 + lVar2 + 8) = puVar7;
          *(undefined **)((long)auStack_120 + lVar2) = puVar6;
          __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                    (puVar9,puVar12,0,0,0,1,puVar6,puVar6);
          _swift_bridgeObjectRelease(uVar10);
          if ((puVar8 == puVar9) && (puVar11 == puVar12)) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(uVar1);
            _swift_bridgeObjectRelease(puVar11);
            _swift_bridgeObjectRelease(puVar12);
            break;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puVar8,puVar11,puVar9,puVar12,1);
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(puVar12);
          if (((ulong)puVar8 & 1) == 0) break;
          if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a8588);
            (*pcVar3)();
          }
          puVar6 = (undefined *)puVar22[2];
          uVar20 = puVar22[3];
          puVar22[3] = puVar22[1];
          puVar22[2] = *puVar22;
          *puVar22 = puVar6;
          puVar22[1] = uVar20;
          bVar4 = lVar16 != -1;
          lVar16 = lVar16 + 1;
          puVar22 = puVar22 + -2;
        } while (bVar4);
        uVar17 = uVar17 + 1;
        puVar21 = puVar21 + 2;
        lVar15 = lVar15 + -1;
      } while (uVar17 != uVar19);
    }
  }
  return;
}

