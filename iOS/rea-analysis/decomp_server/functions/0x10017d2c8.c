// rea decompile_all
// name: FUN_10017d2c8
// address: 0x10017d2c8
// body: available
// range: 0x10017d2c8-0x10017d857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10017d2c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  long extraout_x12;
  long unaff_x20;
  byte *pbVar16;
  long lVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  byte abStack_e0 [16];
  ulong auStack_d0 [2];
  byte abStack_c0 [8];
  ID local_b8;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  pbVar14 = abStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = (long)pbVar14 - extraout_x12;
  puVar21 = &DAT_100a77ce8;
  FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar16 = (byte *)(lVar20 - extraout_x8_00);
  FUN_10017d858(pbVar16,param_1,param_2);
  pbVar5 = pbVar16;
  _swift_getEnumCaseMultiPayload(pbVar16,puVar21);
  if ((int)pbVar5 == 1) {
    puVar21 = (undefined *)(ulong)*pbVar16;
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar20,pbVar16,lVar4);
    puVar21 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cd340();
    lVar17 = *(long *)(param_3 + 0x10);
    if (lVar17 != 0) {
      puVar18 = (ulong *)(param_3 + 0x28);
      puVar7 = puVar21;
      do {
        puVar2 = (undefined *)puVar18[-1];
        puVar6 = (undefined *)*puVar18;
        uVar15 = (ulong)puVar2 & 0xffffffffffff;
        if (((ulong)puVar6 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)puVar6 >> 0x38 & 0xf;
        }
        if (uVar15 == 0) {
          _swift_bridgeObjectRetain(puVar6);
LAB_10017d638:
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined **)(pbVar16 + -0x10) = puVar2;
          *(undefined **)(pbVar16 + -8) = puVar6;
          FUN_1003fb45c(FUN_1001806d0,pbVar16 + -0x20,0xd0000000000000b1,0x8000000100896e70,
                        0xd000000000000016,0x8000000100897530,0x20,0);
          puVar11 = puVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar7 = puVar2;
          puVar10 = puVar6;
          local_70 = puVar21;
          FUN_1001a2c70();
          uVar15 = (ulong)~(uint)puVar10 & 1;
          lVar13 = *(long *)(puVar21 + 0x10) + uVar15;
          if (SCARRY8(*(long *)(puVar21 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10017d840);
            (*pcVar3)();
          }
          if (*(long *)(puVar21 + 0x18) < lVar13) {
            FUN_10006a270(lVar13,puVar11);
            puVar7 = puVar2;
            puVar21 = puVar6;
            FUN_1001a2c70();
            if (((uint)puVar10 & 1) != ((uint)puVar21 & 1)) {
LAB_10017d848:
              __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                        (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10017d858);
              (*pcVar3)();
            }
          }
          else if (((ulong)puVar11 & 1) == 0) {
            FUN_100064e5c();
          }
          if (((ulong)puVar10 & 1) == 0) {
            *(ulong *)(local_70 + ((ulong)puVar7 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_70 + ((ulong)puVar7 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar7 & 0x3f);
            puVar1 = (ulong *)(*(long *)(local_70 + 0x30) + (long)puVar7 * 0x10);
            *puVar1 = (ulong)puVar2;
            puVar1[1] = (ulong)puVar6;
            puVar7[*(long *)(local_70 + 0x38)] = 0;
            lVar13 = *(long *)(local_70 + 0x10);
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10017d844);
              (*pcVar3)();
            }
LAB_10017d75c:
            *(long *)(local_70 + 0x10) = lVar13 + 1;
            puVar6 = puVar7;
          }
          else {
            _swift_bridgeObjectRelease();
            puVar7[*(long *)(local_70 + 0x38)] = 0;
          }
        }
        else {
          local_80 = 0x2f;
          local_78 = 0xe100000000000000;
          local_70 = puVar2;
          puStack_68 = puVar6;
          FUN_10009ff0c();
          _swift_bridgeObjectRetain(puVar6);
          puVar8 = &local_80;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (puVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar7,puVar7);
          if (((ulong)puVar8 & 1) != 0) goto LAB_10017d638;
          local_80 = 0x5c;
          local_78 = 0xe100000000000000;
          puVar8 = &local_80;
          local_70 = puVar2;
          puStack_68 = puVar6;
          __sSy10FoundationE8containsySbqd__SyRd__lF
                    (puVar8,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar7,puVar7);
          if (((((ulong)puVar8 & 1) != 0) ||
              (((puVar2 == (undefined *)0x2e && (puVar6 == (undefined *)0xe100000000000000)) ||
               (puVar7 = puVar2,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (puVar2,puVar6,0x2e,0xe100000000000000,0), ((ulong)puVar7 & 1) != 0)))) ||
             (((puVar2 == (undefined *)0x2e2e && (puVar6 == (undefined *)0xe200000000000000)) ||
              (puVar7 = puVar2,
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (puVar2,puVar6,0x2e2e,0xe200000000000000,0), ((ulong)puVar7 & 1) != 0))))
          goto LAB_10017d638;
          local_b8 = *(ID *)(unaff_x20 + 0x10);
          puVar7 = puVar2;
          puVar11 = puVar6;
          __s10Foundation3URLV22appendingPathComponentyACSSF(pbVar14,puVar2,puVar6);
          __s10Foundation3URLV4pathSSvg();
          (**(code **)(lVar19 + 8))(pbVar14,lVar4);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar7,puVar11);
          _swift_bridgeObjectRelease(puVar11);
          IVar9 = _objc_msgSend(local_b8,"fileExistsAtPath:",puVar7);
          local_b8 = CONCAT44(local_b8._4_4_,(int)IVar9);
          puVar10 = puVar21;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar11 = puVar2;
          puVar12 = puVar6;
          local_70 = puVar21;
          FUN_1001a2c70();
          uVar15 = (ulong)~(uint)puVar12 & 1;
          puVar7 = (undefined *)(*(long *)(puVar21 + 0x10) + uVar15);
          if (SCARRY8(*(long *)(puVar21 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10017d848);
            (*pcVar3)();
          }
          if (*(long *)(puVar21 + 0x18) < (long)puVar7) {
            FUN_10006a270(puVar7,puVar10);
            puVar11 = puVar2;
            puVar21 = puVar6;
            FUN_1001a2c70();
            puVar7 = puVar11;
            if (((uint)puVar12 & 1) != ((uint)puVar21 & 1)) goto LAB_10017d848;
joined_r0x00010017d7b0:
            if (((ulong)puVar12 & 1) != 0) goto LAB_10017d76c;
LAB_10017d7b4:
            *(ulong *)(local_70 + ((ulong)puVar11 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_70 + ((ulong)puVar11 >> 6) * 8 + 0x40) |
                 1L << ((ulong)puVar11 & 0x3f);
            puVar1 = (ulong *)(*(long *)(local_70 + 0x30) + (long)puVar11 * 0x10);
            *puVar1 = (ulong)puVar2;
            puVar1[1] = (ulong)puVar6;
            puVar11[*(long *)(local_70 + 0x38)] = (char)local_b8;
            lVar13 = *(long *)(local_70 + 0x10);
            if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10017d7fc);
              (*pcVar3)();
            }
            goto LAB_10017d75c;
          }
          if (((ulong)puVar10 & 1) == 0) {
            FUN_100064e5c();
            goto joined_r0x00010017d7b0;
          }
          if (((ulong)puVar12 & 1) == 0) goto LAB_10017d7b4;
LAB_10017d76c:
          _swift_bridgeObjectRelease();
          puVar11[*(long *)(local_70 + 0x38)] = (char)local_b8;
        }
        puVar18 = puVar18 + 2;
        lVar17 = lVar17 + -1;
        puVar7 = puVar6;
        puVar21 = local_70;
      } while (lVar17 != 0);
    }
    (**(code **)(lVar19 + 8))(lVar20,lVar4);
  }
  auVar22[8] = (int)pbVar5 == 1;
  auVar22._0_8_ = puVar21;
  auVar22._9_7_ = 0;
  return auVar22;
}

