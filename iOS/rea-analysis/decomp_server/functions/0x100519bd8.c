// rea decompile_all
// name: FUN_100519bd8
// address: 0x100519bd8
// body: available
// range: 0x100519bd8-0x10051ab2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100519bd8(ulong param_1,byte *******param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  byte *******pppppppbVar5;
  byte *******pppppppbVar6;
  byte ******ppppppbVar7;
  byte *******pppppppbVar8;
  uint uVar9;
  byte ******ppppppbVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  byte *pbVar13;
  int iVar14;
  byte *******pppppppbVar15;
  byte *pbVar16;
  byte *******pppppppbVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  byte *******local_98;
  byte *******local_90;
  ulong uStack_88;
  ulong local_80;
  byte *******local_78;
  undefined8 local_70;
  ulong local_68;
  
  local_68 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    local_68 = (ulong)param_2 >> 0x38 & 0xf;
  }
  local_70 = 0;
  pppppppbVar15 = param_2;
  local_80 = param_1;
  local_78 = param_2;
  _swift_bridgeObjectRetain();
  lVar19 = 0;
  bVar20 = false;
  lVar18 = 0;
  bVar2 = true;
  pppppppbVar6 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
  while (__sSS8IteratorV4nextSJSgyF(), pppppppbVar5 = pppppppbVar6,
        pppppppbVar15 != (byte *******)0x0) {
    if ((param_2 != (byte *******)0x2d) ||
       (pppppppbVar8 = pppppppbVar15, pppppppbVar15 != (byte *******)0xe100000000000000)) {
      uVar4 = 0x2d;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2d,0xe100000000000000,param_2,pppppppbVar15,0);
      if ((uVar4 & 1) != 0) goto LAB_100519ca4;
      if ((param_2 == (byte *******)0x30) && (pppppppbVar15 == (byte *******)0xe100000000000000)) {
LAB_100519cf4:
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pppppppbVar5 & 1) == 0) {
          pppppppbVar8 = (byte *******)((long)pppppppbVar6[2] + 1);
          pppppppbVar5 = (byte *******)0x0;
          FUN_100507398(0,pppppppbVar8,1,pppppppbVar6);
          pppppppbVar6 = pppppppbVar5;
        }
        ppppppbVar10 = pppppppbVar6[2];
        pppppppbVar17 = (byte *******)((long)ppppppbVar10 + 1);
        if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar10) {
          pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
          pppppppbVar8 = pppppppbVar17;
          FUN_100507398(pppppppbVar5,pppppppbVar17,1,pppppppbVar6);
          pppppppbVar6 = pppppppbVar5;
        }
        pppppppbVar6[2] = (byte ******)pppppppbVar17;
        pppppppbVar6[(long)ppppppbVar10 * 2 + 4] = (byte ******)param_2;
        pppppppbVar6[(long)ppppppbVar10 * 2 + 5] = (byte ******)pppppppbVar15;
        bVar3 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10051a2a8);
          (*pcVar1)();
        }
        goto LAB_100519c5c;
      }
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x30,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x31 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0x31;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x31,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x32 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x32,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x33 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0x33;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x33,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x34 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x34,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x35 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0x35;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x35,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x36 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x36,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x37 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0x37;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x37,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x38 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x38,0xe100000000000000,param_2,pppppppbVar15,0);
      if (((uVar4 & 1) != 0) ||
         (param_2 == (byte *******)0x39 && pppppppbVar15 == (byte *******)0xe100000000000000))
      goto LAB_100519cf4;
      uVar4 = 0x39;
      pppppppbVar8 = (byte *******)0xe100000000000000;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x39,0xe100000000000000,param_2,pppppppbVar15,0);
      if ((uVar4 & 1) != 0) goto LAB_100519cf4;
      if ((param_2 == (byte *******)0x2e) && (pppppppbVar15 == (byte *******)0xe100000000000000)) {
LAB_100519efc:
        _swift_bridgeObjectRelease(pppppppbVar15);
        if (bVar2) {
          local_90 = pppppppbVar6;
          _swift_bridgeObjectRetain(pppppppbVar6);
          pppppppbVar5 = (byte *******)&DAT_100aab188;
          FUN_100004bb4(&DAT_100aab188,&DAT_100837140);
          pppppppbVar8 = pppppppbVar5;
          FUN_10051bb98();
          pppppppbVar15 = (byte *******)&local_90;
          __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar15,pppppppbVar5,pppppppbVar8);
          pppppppbVar11 = (byte *******)((ulong)pppppppbVar5 >> 0x38 & 0xf);
          pppppppbVar8 = (byte *******)((ulong)pppppppbVar15 & 0xffffffffffff);
          pppppppbVar17 = pppppppbVar8;
          if (((ulong)pppppppbVar5 & 0x2000000000000000) != 0) {
            pppppppbVar17 = pppppppbVar11;
          }
          if (pppppppbVar17 != (byte *******)0x0) {
            if (((ulong)pppppppbVar5 >> 0x3c & 1) == 0) {
              if (((ulong)pppppppbVar5 >> 0x3d & 1) == 0) {
                if (((ulong)pppppppbVar15 >> 0x3c & 1) == 0) {
                  pppppppbVar8 = pppppppbVar5;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
                }
                else {
                  pppppppbVar15 = (byte *******)(((ulong)pppppppbVar5 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)pppppppbVar15 == 0x2b) {
                  if ((long)pppppppbVar8 < 1) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051aa44);
                    (*pcVar1)();
                  }
                  pbVar13 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10051a21c;
                  if (pppppppbVar15 == (byte *******)0x0) goto LAB_10051a1c0;
                  pppppppbVar17 = (byte *******)0x0;
                  do {
                    pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
                    if (((9 < *(byte *)pppppppbVar15 - 0x30) ||
                        (lVar18 = (long)pppppppbVar17 * 10,
                        SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar15 - 0x30),
                       pppppppbVar17 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_10051a21c;
                    uVar9 = 0;
                    pbVar13 = pbVar13 + -1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else if (*(byte *)pppppppbVar15 == 0x2d) {
                  if ((long)pppppppbVar8 < 1) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051aa40);
                    (*pcVar1)();
                  }
                  pbVar13 = (byte *)((long)pppppppbVar8 + -1);
                  if (pbVar13 == (byte *)0x0) {
LAB_10051a21c:
                    pppppppbVar17 = (byte *******)0x0;
                    uVar9 = 1;
                  }
                  else if (pppppppbVar15 == (byte *******)0x0) {
LAB_10051a1c0:
                    pppppppbVar17 = (byte *******)0x0;
                    uVar9 = 0;
                  }
                  else {
                    pppppppbVar17 = (byte *******)0x0;
                    do {
                      pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
                      if (((9 < *(byte *)pppppppbVar15 - 0x30) ||
                          (lVar18 = (long)pppppppbVar17 * 10,
                          SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f))
                         || (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar15 - 0x30),
                            pppppppbVar17 = (byte *******)(lVar18 - uVar4), SBORROW8(lVar18,uVar4)))
                      goto LAB_10051a21c;
                      uVar9 = 0;
                      pbVar13 = pbVar13 + -1;
                    } while (pbVar13 != (byte *)0x0);
                  }
                }
                else {
                  if (pppppppbVar8 == (byte *******)0x0) goto LAB_10051a21c;
                  if (pppppppbVar15 == (byte *******)0x0) goto LAB_10051a1c0;
                  pppppppbVar17 = (byte *******)0x0;
                  do {
                    if (((9 < *(byte *)pppppppbVar15 - 0x30) ||
                        (lVar18 = (long)pppppppbVar17 * 10,
                        SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar15 - 0x30),
                       pppppppbVar17 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_10051a21c;
                    uVar9 = 0;
                    pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
                    pppppppbVar8 = (byte *******)((long)pppppppbVar8 + -1);
                  } while (pppppppbVar8 != (byte *******)0x0);
                }
              }
              else {
                local_90 = pppppppbVar15;
                uStack_88 = (ulong)pppppppbVar5 & 0xffffffffffffff;
                uVar9 = (uint)pppppppbVar15 & 0xff;
                if (uVar9 == 0x2b) {
                  if (pppppppbVar11 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051aa3c);
                    (*pcVar1)();
                  }
                  pbVar13 = (byte *)((long)pppppppbVar11 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10051a21c;
                  pppppppbVar17 = (byte *******)0x0;
                  pbVar16 = (byte *)((ulong)&local_90 | 1);
                  do {
                    if (((9 < *pbVar16 - 0x30) ||
                        (lVar18 = (long)pppppppbVar17 * 10,
                        SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar16 - 0x30),
                       pppppppbVar17 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_10051a21c;
                    uVar9 = 0;
                    pbVar16 = pbVar16 + 1;
                    pbVar13 = pbVar13 + -1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else if (uVar9 == 0x2d) {
                  if (pppppppbVar11 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051aa38);
                    (*pcVar1)();
                  }
                  pbVar13 = (byte *)((long)pppppppbVar11 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10051a21c;
                  pppppppbVar17 = (byte *******)0x0;
                  pbVar16 = (byte *)((ulong)&local_90 | 1);
                  do {
                    if (((9 < *pbVar16 - 0x30) ||
                        (lVar18 = (long)pppppppbVar17 * 10,
                        SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*pbVar16 - 0x30),
                       pppppppbVar17 = (byte *******)(lVar18 - uVar4), SBORROW8(lVar18,uVar4)))
                    goto LAB_10051a21c;
                    uVar9 = 0;
                    pbVar16 = pbVar16 + 1;
                    pbVar13 = pbVar13 + -1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else {
                  if (pppppppbVar11 == (byte *******)0x0) goto LAB_10051a21c;
                  pppppppbVar17 = (byte *******)0x0;
                  pppppppbVar15 = (byte *******)&local_90;
                  do {
                    if (((9 < *(byte *)pppppppbVar15 - 0x30) ||
                        (lVar18 = (long)pppppppbVar17 * 10,
                        SUB168(SEXT816((long)pppppppbVar17) * SEXT816(10),8) != lVar18 >> 0x3f)) ||
                       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar15 - 0x30),
                       pppppppbVar17 = (byte *******)(lVar18 + uVar4), SCARRY8(lVar18,uVar4)))
                    goto LAB_10051a21c;
                    uVar9 = 0;
                    pppppppbVar15 = (byte *******)((long)pppppppbVar15 + 1);
                    pppppppbVar11 = (byte *******)((long)pppppppbVar11 + -1);
                  } while (pppppppbVar11 != (byte *******)0x0);
                }
              }
              pppppppbVar15 = pppppppbVar17;
              pppppppbVar17 = (byte *******)(ulong)uVar9;
            }
            else {
              pppppppbVar8 = pppppppbVar5;
              FUN_10051b3cc();
              pppppppbVar17 = pppppppbVar8;
            }
            _swift_bridgeObjectRelease(pppppppbVar6);
            _swift_bridgeObjectRelease();
            if ((((ulong)pppppppbVar17 & 1) == 0) &&
               ((byte *)0xffffff6d0c68c3fe < (byte *)((long)pppppppbVar15 - 0x4979cb9e01U))) {
              lVar18 = 0;
              bVar2 = false;
              pppppppbVar6 = (byte *******)PTR___swiftEmptyArrayStorage_100995ea0;
              goto LAB_100519c5c;
            }
            goto LAB_10051a3d0;
          }
          goto LAB_10051aabc;
        }
        break;
      }
      uVar4 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x2e,0xe100000000000000,param_2,pppppppbVar15,0);
      if ((uVar4 & 1) != 0) goto LAB_100519efc;
      if ((param_2 != (byte *******)0x73) || (pppppppbVar15 != (byte *******)0xe100000000000000)) {
        uVar4 = 0x73;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x73,0xe100000000000000,param_2,pppppppbVar15,0);
        if ((uVar4 & 1) != 0) goto LAB_10051a2d8;
        goto LAB_10051a3c0;
      }
LAB_10051a2d8:
      if (!bVar2) {
        if (lVar18 < 9) {
          lVar18 = lVar18 + -9;
          do {
            pppppppbVar5 = pppppppbVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            pppppppbVar8 = pppppppbVar6;
            if (((ulong)pppppppbVar5 & 1) == 0) {
              pppppppbVar8 = (byte *******)0x0;
              FUN_100507398(0,(long)pppppppbVar6[2] + 1,1,pppppppbVar6);
            }
            ppppppbVar10 = pppppppbVar8[2];
            pppppppbVar6 = pppppppbVar8;
            if ((byte ******)((ulong)pppppppbVar8[3] >> 1) <= ppppppbVar10) {
              pppppppbVar6 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar8[3]);
              FUN_100507398(pppppppbVar6,(byte ******)((long)ppppppbVar10 + 1U),1,pppppppbVar8);
            }
            pppppppbVar6[2] = (byte ******)((long)ppppppbVar10 + 1U);
            pppppppbVar6[(long)ppppppbVar10 * 2 + 4] = (byte ******)0x30;
            pppppppbVar6[(long)ppppppbVar10 * 2 + 5] = (byte ******)0xe100000000000000;
            bVar2 = lVar18 != -1;
            lVar18 = lVar18 + 1;
          } while (bVar2);
        }
        else if (lVar18 != 9) {
          lVar18 = lVar18 + 1;
          do {
            if (pppppppbVar6[2] == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10051aa48);
              (*pcVar1)();
            }
            pppppppbVar5 = pppppppbVar6;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pppppppbVar5 & 1) == 0) {
              FUN_1004fbde8();
              ppppppbVar10 = pppppppbVar6[2];
            }
            else {
              ppppppbVar10 = pppppppbVar6[2];
            }
            if (ppppppbVar10 == (byte ******)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10051a6e0);
              (*pcVar1)();
            }
            ppppppbVar7 = pppppppbVar6[((long)ppppppbVar10 + -1) * 2 + 5];
            pppppppbVar6[2] = (byte ******)((long)ppppppbVar10 + -1);
            _swift_bridgeObjectRelease(ppppppbVar7);
            lVar18 = lVar18 + -1;
          } while (10 < lVar18);
        }
        local_90 = pppppppbVar6;
        _swift_bridgeObjectRetain(pppppppbVar6);
        pppppppbVar8 = (byte *******)&DAT_100aab188;
        FUN_100004bb4(&DAT_100aab188,&DAT_100837140);
        pppppppbVar5 = pppppppbVar8;
        FUN_10051bb98();
        pppppppbVar17 = (byte *******)&local_90;
        __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar17,pppppppbVar8,pppppppbVar5);
        pppppppbVar12 = (byte *******)((ulong)pppppppbVar8 >> 0x38 & 0xf);
        pppppppbVar5 = (byte *******)((ulong)pppppppbVar17 & 0xffffffffffff);
        pppppppbVar11 = pppppppbVar5;
        if (((ulong)pppppppbVar8 & 0x2000000000000000) != 0) {
          pppppppbVar11 = pppppppbVar12;
        }
        if (pppppppbVar11 != (byte *******)0x0) {
          if (((ulong)pppppppbVar8 >> 0x3c & 1) == 0) {
            if (((ulong)pppppppbVar8 >> 0x3d & 1) == 0) {
              if (((ulong)pppppppbVar17 >> 0x3c & 1) == 0) {
                pppppppbVar5 = pppppppbVar8;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
              }
              else {
                pppppppbVar17 = (byte *******)(((ulong)pppppppbVar8 & 0xfffffffffffffff) + 0x20);
              }
              if (*(byte *)pppppppbVar17 == 0x2b) {
                if ((long)pppppppbVar5 < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab28);
                  (*pcVar1)();
                }
                pbVar13 = (byte *)((long)pppppppbVar5 + -1);
                if (pbVar13 != (byte *)0x0) {
                  if (pppppppbVar17 == (byte *******)0x0) goto LAB_10051a9a8;
                  pppppppbVar11 = (byte *******)0x0;
                  while( true ) {
                    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
                    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
                        (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                        lVar19 - iVar14 != 0)) ||
                       (uVar9 = *(byte *)pppppppbVar17 - 0x30 & 0xff,
                       pppppppbVar11 = (byte *******)(ulong)(iVar14 + uVar9), SCARRY4(iVar14,uVar9))
                       ) break;
                    bVar2 = false;
                    pbVar13 = pbVar13 + -1;
                    if (pbVar13 == (byte *)0x0) goto LAB_10051aa04;
                  }
                }
              }
              else if (*(byte *)pppppppbVar17 == 0x2d) {
                if ((long)pppppppbVar5 < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab20);
                  (*pcVar1)();
                }
                pbVar13 = (byte *)((long)pppppppbVar5 + -1);
                if (pbVar13 != (byte *)0x0) {
                  if (pppppppbVar17 == (byte *******)0x0) {
LAB_10051a9a8:
                    pppppppbVar11 = (byte *******)0x0;
                    bVar2 = false;
                    goto LAB_10051aa04;
                  }
                  pppppppbVar11 = (byte *******)0x0;
                  while( true ) {
                    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
                    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
                        (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                        lVar19 - iVar14 != 0)) ||
                       (uVar9 = *(byte *)pppppppbVar17 - 0x30 & 0xff,
                       pppppppbVar11 = (byte *******)(ulong)(iVar14 - uVar9), SBORROW4(iVar14,uVar9)
                       )) break;
                    bVar2 = false;
                    pbVar13 = pbVar13 + -1;
                    if (pbVar13 == (byte *)0x0) goto LAB_10051aa04;
                  }
                }
              }
              else if (pppppppbVar5 != (byte *******)0x0) {
                if (pppppppbVar17 == (byte *******)0x0) goto LAB_10051a9a8;
                pppppppbVar11 = (byte *******)0x0;
                while (((*(byte *)pppppppbVar17 - 0x30 < 10 &&
                        (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                        lVar19 - iVar14 == 0)) &&
                       (uVar9 = *(byte *)pppppppbVar17 - 0x30 & 0xff,
                       pppppppbVar11 = (byte *******)(ulong)(iVar14 + uVar9), !SCARRY4(iVar14,uVar9)
                       ))) {
                  bVar2 = false;
                  pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
                  pppppppbVar5 = (byte *******)((long)pppppppbVar5 + -1);
                  if (pppppppbVar5 == (byte *******)0x0) goto LAB_10051aa04;
                }
              }
LAB_10051a9fc:
              pppppppbVar11 = (byte *******)0x0;
              bVar2 = true;
            }
            else {
              local_90 = pppppppbVar17;
              uStack_88 = (ulong)pppppppbVar8 & 0xffffffffffffff;
              uVar9 = (uint)pppppppbVar17 & 0xff;
              if (uVar9 == 0x2b) {
                if (pppppppbVar12 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab2c);
                  (*pcVar1)();
                }
                pbVar13 = (byte *)((long)pppppppbVar12 + -1);
                if (pbVar13 != (byte *)0x0) {
                  pppppppbVar11 = (byte *******)0x0;
                  pbVar16 = (byte *)((ulong)&local_90 | 1);
                  while (((*pbVar16 - 0x30 < 10 &&
                          (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                          lVar19 - iVar14 == 0)) &&
                         (uVar9 = *pbVar16 - 0x30 & 0xff,
                         pppppppbVar11 = (byte *******)(ulong)(iVar14 + uVar9),
                         !SCARRY4(iVar14,uVar9)))) {
                    bVar2 = false;
                    pbVar16 = pbVar16 + 1;
                    pbVar13 = pbVar13 + -1;
                    if (pbVar13 == (byte *)0x0) goto LAB_10051aa04;
                  }
                }
                goto LAB_10051a9fc;
              }
              if (uVar9 != 0x2d) {
                if (pppppppbVar12 != (byte *******)0x0) {
                  pppppppbVar11 = (byte *******)0x0;
                  pppppppbVar17 = (byte *******)&local_90;
                  while (((*(byte *)pppppppbVar17 - 0x30 < 10 &&
                          (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                          lVar19 - iVar14 == 0)) &&
                         (uVar9 = *(byte *)pppppppbVar17 - 0x30 & 0xff,
                         pppppppbVar11 = (byte *******)(ulong)(iVar14 + uVar9),
                         !SCARRY4(iVar14,uVar9)))) {
                    bVar2 = false;
                    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
                    pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
                    if (pppppppbVar12 == (byte *******)0x0) goto LAB_10051aa04;
                  }
                }
                goto LAB_10051a9fc;
              }
              if (pppppppbVar12 == (byte *******)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab24);
                (*pcVar1)();
              }
              pbVar13 = (byte *)((long)pppppppbVar12 + -1);
              if (pbVar13 == (byte *)0x0) goto LAB_10051a9fc;
              pppppppbVar11 = (byte *******)0x0;
              pbVar16 = (byte *)((ulong)&local_90 | 1);
              do {
                if (((9 < *pbVar16 - 0x30) ||
                    (lVar19 = (long)(int)pppppppbVar11 * 10, iVar14 = (int)lVar19,
                    lVar19 - iVar14 != 0)) ||
                   (uVar9 = *pbVar16 - 0x30 & 0xff,
                   pppppppbVar11 = (byte *******)(ulong)(iVar14 - uVar9), SBORROW4(iVar14,uVar9)))
                goto LAB_10051a9fc;
                bVar2 = false;
                pbVar16 = pbVar16 + 1;
                pbVar13 = pbVar13 + -1;
              } while (pbVar13 != (byte *)0x0);
            }
LAB_10051aa04:
            _swift_bridgeObjectRelease(pppppppbVar8);
            pppppppbVar17 = pppppppbVar11;
            if (bVar2) goto LAB_10051aa1c;
          }
          else {
            pppppppbVar5 = pppppppbVar8;
            FUN_10051b2dc();
            _swift_bridgeObjectRelease(pppppppbVar8);
            if (((ulong)pppppppbVar17 >> 0x20 & 1) != 0) goto LAB_10051aa1c;
          }
          if ((bVar20) && (SBORROW4(0,(int)pppppppbVar17))) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab0c);
            (*pcVar1)();
          }
          goto LAB_10051aaa0;
        }
LAB_10051aa48:
        _swift_bridgeObjectRelease(pppppppbVar6);
        pppppppbVar6 = pppppppbVar8;
        goto LAB_10051aa1c;
      }
      local_90 = pppppppbVar6;
      _swift_bridgeObjectRetain(pppppppbVar6);
      pppppppbVar8 = (byte *******)&DAT_100aab188;
      FUN_100004bb4(&DAT_100aab188,&DAT_100837140);
      pppppppbVar5 = pppppppbVar8;
      FUN_10051bb98();
      pppppppbVar17 = (byte *******)&local_90;
      __sSSySSxcSTRzSJ7ElementRtzlufC(pppppppbVar17,pppppppbVar8,pppppppbVar5);
      pppppppbVar12 = (byte *******)((ulong)pppppppbVar8 >> 0x38 & 0xf);
      pppppppbVar5 = (byte *******)((ulong)pppppppbVar17 & 0xffffffffffff);
      pppppppbVar11 = pppppppbVar5;
      if (((ulong)pppppppbVar8 & 0x2000000000000000) != 0) {
        pppppppbVar11 = pppppppbVar12;
      }
      if (pppppppbVar11 == (byte *******)0x0) goto LAB_10051aa48;
      if (((ulong)pppppppbVar8 >> 0x3c & 1) != 0) {
        pppppppbVar11 = pppppppbVar8;
        FUN_10051b3cc();
        pppppppbVar5 = pppppppbVar11;
        _swift_bridgeObjectRelease(pppppppbVar8);
        local_98 = pppppppbVar17;
        if (((ulong)pppppppbVar11 & 1) == 0) goto LAB_10051a884;
        goto LAB_10051aa1c;
      }
      if (((ulong)pppppppbVar8 >> 0x3d & 1) != 0) {
        local_90 = pppppppbVar17;
        uStack_88 = (ulong)pppppppbVar8 & 0xffffffffffffff;
        uVar9 = (uint)pppppppbVar17 & 0xff;
        if (uVar9 == 0x2b) {
          if (pppppppbVar12 == (byte *******)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab1c);
            (*pcVar1)();
          }
          pbVar13 = (byte *)((long)pppppppbVar12 + -1);
          if (pbVar13 == (byte *)0x0) goto LAB_10051a868;
          local_98 = (byte *******)0x0;
          pbVar16 = (byte *)((ulong)&local_90 | 1);
          goto LAB_10051a764;
        }
        if (uVar9 != 0x2d) {
          if (pppppppbVar12 == (byte *******)0x0) goto LAB_10051a868;
          local_98 = (byte *******)0x0;
          pppppppbVar17 = (byte *******)&local_90;
          goto LAB_10051a820;
        }
        if (pppppppbVar12 == (byte *******)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab14);
          (*pcVar1)();
        }
        pbVar13 = (byte *)((long)pppppppbVar12 + -1);
        if (pbVar13 == (byte *)0x0) goto LAB_10051a868;
        local_98 = (byte *******)0x0;
        pbVar16 = (byte *)((ulong)&local_90 | 1);
        goto LAB_10051a5cc;
      }
      if (((ulong)pppppppbVar17 >> 0x3c & 1) == 0) {
        pppppppbVar5 = pppppppbVar8;
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      }
      else {
        pppppppbVar17 = (byte *******)(((ulong)pppppppbVar8 & 0xfffffffffffffff) + 0x20);
      }
      if (*(byte *)pppppppbVar17 == 0x2b) {
        if ((long)pppppppbVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab18);
          (*pcVar1)();
        }
        pbVar13 = (byte *)((long)pppppppbVar5 + -1);
        if (pbVar13 == (byte *)0x0) goto LAB_10051a868;
        if (pppppppbVar17 != (byte *******)0x0) {
          local_98 = (byte *******)0x0;
          goto LAB_10051a700;
        }
      }
      else if (*(byte *)pppppppbVar17 == 0x2d) {
        if ((long)pppppppbVar5 < 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10051ab10);
          (*pcVar1)();
        }
        pbVar13 = (byte *)((long)pppppppbVar5 + -1);
        if (pbVar13 == (byte *)0x0) goto LAB_10051a868;
        if (pppppppbVar17 != (byte *******)0x0) {
          local_98 = (byte *******)0x0;
          goto LAB_10051a378;
        }
      }
      else {
        if (pppppppbVar5 == (byte *******)0x0) goto LAB_10051a868;
        if (pppppppbVar17 != (byte *******)0x0) {
          local_98 = (byte *******)0x0;
          goto LAB_10051a7bc;
        }
      }
      local_98 = (byte *******)0x0;
      bVar2 = false;
      goto LAB_10051a870;
    }
LAB_100519ca4:
    if (lVar19 != 0) {
LAB_10051a3c0:
      _swift_bridgeObjectRelease(pppppppbVar15);
      break;
    }
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)pppppppbVar5 & 1) == 0) {
      pppppppbVar8 = (byte *******)((long)pppppppbVar6[2] + 1);
      pppppppbVar5 = (byte *******)0x0;
      FUN_100507398(0,pppppppbVar8,1,pppppppbVar6);
      pppppppbVar6 = pppppppbVar5;
    }
    ppppppbVar10 = pppppppbVar6[2];
    pppppppbVar17 = (byte *******)((long)ppppppbVar10 + 1);
    if ((byte ******)((ulong)pppppppbVar6[3] >> 1) <= ppppppbVar10) {
      pppppppbVar5 = (byte *******)(ulong)((byte ******)0x1 < pppppppbVar6[3]);
      pppppppbVar8 = pppppppbVar17;
      FUN_100507398(pppppppbVar5,pppppppbVar17,1,pppppppbVar6);
      pppppppbVar6 = pppppppbVar5;
    }
    pppppppbVar6[2] = (byte ******)pppppppbVar17;
    pppppppbVar6[(long)ppppppbVar10 * 2 + 4] = (byte ******)param_2;
    pppppppbVar6[(long)ppppppbVar10 * 2 + 5] = (byte ******)pppppppbVar15;
    bVar20 = true;
LAB_100519c5c:
    bVar3 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    param_2 = pppppppbVar5;
    pppppppbVar15 = pppppppbVar8;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10051a2a4);
      (*pcVar1)();
    }
  }
  goto LAB_10051a3cc;
  while( true ) {
    bVar2 = false;
    pbVar16 = pbVar16 + 1;
    pbVar13 = pbVar13 + -1;
    if (pbVar13 == (byte *)0x0) break;
LAB_10051a764:
    if (((9 < *pbVar16 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar16 - 0x30), local_98 = (byte *******)(lVar19 + uVar4),
       SCARRY8(lVar19,uVar4))) goto LAB_10051a868;
  }
  goto LAB_10051a870;
  while( true ) {
    bVar2 = false;
    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
    pppppppbVar12 = (byte *******)((long)pppppppbVar12 + -1);
    if (pppppppbVar12 == (byte *******)0x0) break;
LAB_10051a820:
    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar17 - 0x30),
       local_98 = (byte *******)(lVar19 + uVar4), SCARRY8(lVar19,uVar4))) goto LAB_10051a868;
  }
  goto LAB_10051a870;
  while( true ) {
    bVar2 = false;
    pbVar16 = pbVar16 + 1;
    pbVar13 = pbVar13 + -1;
    if (pbVar13 == (byte *)0x0) break;
LAB_10051a5cc:
    if (((9 < *pbVar16 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*pbVar16 - 0x30), local_98 = (byte *******)(lVar19 - uVar4),
       SBORROW8(lVar19,uVar4))) goto LAB_10051a868;
  }
  goto LAB_10051a870;
  while( true ) {
    bVar2 = false;
    pbVar13 = pbVar13 + -1;
    if (pbVar13 == (byte *)0x0) break;
LAB_10051a700:
    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar17 - 0x30),
       local_98 = (byte *******)(lVar19 + uVar4), SCARRY8(lVar19,uVar4))) goto LAB_10051a868;
  }
  goto LAB_10051a870;
  while( true ) {
    bVar2 = false;
    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
    pppppppbVar5 = (byte *******)((long)pppppppbVar5 + -1);
    if (pppppppbVar5 == (byte *******)0x0) break;
LAB_10051a7bc:
    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar17 - 0x30),
       local_98 = (byte *******)(lVar19 + uVar4), SCARRY8(lVar19,uVar4))) goto LAB_10051a868;
  }
  goto LAB_10051a870;
LAB_10051a868:
  local_98 = (byte *******)0x0;
  bVar2 = true;
  goto LAB_10051a870;
  while( true ) {
    bVar2 = false;
    pbVar13 = pbVar13 + -1;
    if (pbVar13 == (byte *)0x0) break;
LAB_10051a378:
    pppppppbVar17 = (byte *******)((long)pppppppbVar17 + 1);
    if (((9 < *(byte *)pppppppbVar17 - 0x30) ||
        (lVar19 = (long)local_98 * 10,
        SUB168(SEXT816((long)local_98) * SEXT816(10),8) != lVar19 >> 0x3f)) ||
       (uVar4 = (ulong)(byte)(*(byte *)pppppppbVar17 - 0x30),
       local_98 = (byte *******)(lVar19 - uVar4), SBORROW8(lVar19,uVar4))) goto LAB_10051a868;
  }
LAB_10051a870:
  _swift_bridgeObjectRelease(pppppppbVar8);
  if (!bVar2) {
LAB_10051a884:
    if ((byte *)0xffffff6d0c68c3fe < (byte *)((long)local_98 - 0x4979cb9e01U)) {
LAB_10051aaa0:
      __sSS8IteratorV4nextSJSgyF();
      pppppppbVar8 = local_78;
      if (pppppppbVar5 == (byte *******)0x0) {
        _swift_bridgeObjectRelease(pppppppbVar6);
        _swift_bridgeObjectRelease(pppppppbVar15);
        _swift_bridgeObjectRelease(pppppppbVar8);
        return;
      }
      _swift_bridgeObjectRelease(pppppppbVar6);
      pppppppbVar6 = pppppppbVar15;
LAB_10051aabc:
      _swift_bridgeObjectRelease(pppppppbVar6);
      goto LAB_10051a3cc;
    }
  }
LAB_10051aa1c:
  _swift_bridgeObjectRelease(pppppppbVar6);
  pppppppbVar5 = pppppppbVar15;
LAB_10051a3cc:
  _swift_bridgeObjectRelease();
LAB_10051a3d0:
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,pppppppbVar5,0,0);
  pppppppbVar5[1] = (byte ******)0xe;
  *pppppppbVar5 = (byte ******)0x0;
  _swift_willThrow();
  _swift_bridgeObjectRelease(local_78);
  return;
}

