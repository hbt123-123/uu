// rea decompile_all
// name: FUN_10055f314
// address: 0x10055f314
// body: available
// range: 0x10055f314-0x100560443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10055f314(undefined8 *****param_1,ulong param_2)

{
  undefined8 *****pppppuVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 *****pppppuVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined8 ****local_88;
  ulong uStack_80;
  undefined8 ****local_78;
  ulong uStack_70;
  ulong local_68;
  
  local_68 = 0xf;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  local_78 = param_1;
  uStack_70 = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar2 != 0) {
    uVar21 = uVar2 << 2;
    uVar10 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar10 = 1;
    }
    uVar22 = 4L << uVar10;
    uVar12 = param_2 & 0xffffffffffffff;
    pppppuVar1 = (undefined8 *****)((param_2 & 0xfffffffffffffff) + 0x20);
    uVar7 = 0xf;
    do {
      uVar17 = uVar7 & 0xc;
      uVar13 = uVar7;
      if (uVar17 == uVar22) {
        FUN_10000caa8(uVar7,param_1,param_2);
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100560410);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppuVar6 = pppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          local_88 = param_1;
          uStack_80 = uVar12;
          pppppuVar6 = &local_88;
        }
        uVar10 = (uint)*(byte *)((long)pppppuVar6 + (uVar13 >> 0x10));
        if (uVar17 == uVar22) goto LAB_10055f488;
LAB_10055f438:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_10055f498;
LAB_10055f43c:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar10 = (uint)uVar13;
        if (uVar17 != uVar22) goto LAB_10055f438;
LAB_10055f488:
        FUN_10000caa8(uVar7,param_1,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055f43c;
LAB_10055f498:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100560414);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      local_68 = uVar7;
      if ((uVar10 & 0xff) != 0x5c) {
        puVar14 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar8;
        if (((ulong)puVar14 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar7 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
        puVar8[uVar7 + 0x20] = (char)uVar10;
        goto LAB_10055f3cc;
      }
      if (uVar21 == uVar7 >> 0xe) goto switchD_10055f63c_caseD_23;
      uVar13 = uVar7;
      if ((uVar7 & 0xc) == uVar22) {
        FUN_10000caa8();
      }
      if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100560418);
        (*pcVar5)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pppppuVar6 = pppppuVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppppuVar6 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          local_88 = param_1;
          uStack_80 = uVar12;
          pppppuVar6 = &local_88;
        }
        uVar10 = (uint)*(byte *)((long)pppppuVar6 + (uVar13 >> 0x10));
      }
      else {
        __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(uVar13,param_1,param_2);
        uVar10 = (uint)uVar13;
      }
      if ((uVar7 & 0xc) == uVar22) {
        FUN_10000caa8();
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055f574;
LAB_10055f5ec:
        if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10056041c);
          (*pcVar5)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
      }
      else {
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_10055f5ec;
LAB_10055f574:
        uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
      }
      local_68 = uVar7;
      if ((uVar10 - 0x38 & 0xff) < 0xf8) {
        switch(uVar10 & 0xff) {
        case 0x22:
        case 0x27:
        case 0x3f:
        case 0x5c:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = (char)uVar10;
          break;
        default:
switchD_10055f63c_caseD_23:
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRelease(param_2);
          puVar14 = (undefined *)0x0;
          uVar16 = 0;
          goto LAB_1005603e4;
        case 0x55:
        case 0x75:
          pppppuVar6 = &local_78;
          FUN_1005605a0();
          if (((ulong)pppppuVar6 >> 0x20 & 1) != 0) goto switchD_10055f63c_caseD_23;
          uVar15 = (uint)pppppuVar6;
          if ((uVar10 & 0xff) == 0x55) {
            pppppuVar6 = &local_78;
            FUN_1005605a0();
            if (((ulong)pppppuVar6 >> 0x20 & 1) != 0) goto switchD_10055f63c_caseD_23;
            uVar10 = uVar15 * 0x10000;
            uVar15 = (uint)pppppuVar6 + uVar10;
            if (CARRY4((uint)pppppuVar6,uVar10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100560430);
              (*pcVar5)();
            }
          }
          if (uVar15 < 0x80) {
            puVar14 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar14 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar7 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
            puVar8[uVar7 + 0x20] = (byte)uVar15;
            break;
          }
          if (uVar15 < 0x800) {
            puVar14 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar14 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar7 = *(ulong *)(puVar9 + 0x10);
            uVar13 = *(ulong *)(puVar9 + 0x18);
            uVar17 = uVar13 >> 1;
            lVar19 = uVar7 + 1;
            puVar8 = puVar9;
            if (uVar17 <= uVar7) {
              puVar8 = (undefined *)(ulong)(1 < uVar13);
              FUN_100506f84(puVar8,lVar19,1,puVar9);
              uVar13 = *(ulong *)(puVar8 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar8 + 0x10) = lVar19;
            puVar8[uVar7 + 0x20] = (byte)(uVar15 >> 6) | 0xc0;
            lVar20 = uVar7 + 2;
            if ((long)uVar17 < lVar20) {
              puVar14 = (undefined *)(ulong)(1 < uVar13);
              FUN_100506f84(puVar14,lVar20,1,puVar8);
              puVar8 = puVar14;
            }
LAB_10055f9f4:
            *(long *)(puVar8 + 0x10) = lVar20;
            puVar14 = puVar8 + lVar19;
          }
          else {
            if (uVar15 >> 0x10 != 0) {
              if (0x10ffff < uVar15) goto switchD_10055f63c_caseD_23;
              puVar14 = puVar8;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar9 = puVar8;
              if (((ulong)puVar14 & 1) == 0) {
                puVar9 = (undefined *)0x0;
                FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
              }
              uVar7 = *(ulong *)(puVar9 + 0x10);
              uVar13 = *(ulong *)(puVar9 + 0x18);
              uVar17 = uVar13 >> 1;
              puVar8 = puVar9;
              if (uVar17 <= uVar7) {
                puVar8 = (undefined *)(ulong)(1 < uVar13);
                FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
                uVar13 = *(ulong *)(puVar8 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
              puVar8[uVar7 + 0x20] = (byte)(uVar15 >> 0x12) | 0xf0;
              lVar19 = uVar7 + 2;
              puVar14 = puVar8;
              if ((long)uVar17 < lVar19) {
                puVar14 = (undefined *)(ulong)(1 < uVar13);
                FUN_100506f84(puVar14,lVar19,1,puVar8);
                uVar13 = *(ulong *)(puVar14 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar14 + 0x10) = lVar19;
              puVar14[uVar7 + 0x21] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
              lVar19 = uVar7 + 3;
              puVar9 = puVar14;
              if ((long)uVar17 < lVar19) {
                puVar9 = (undefined *)(ulong)(1 < uVar13);
                FUN_100506f84(puVar9,lVar19,1,puVar14);
                uVar13 = *(ulong *)(puVar9 + 0x18);
                uVar17 = uVar13 >> 1;
              }
              *(long *)(puVar9 + 0x10) = lVar19;
              puVar9[uVar7 + 0x22] = (byte)(uVar15 >> 6) & 0x3f | 0x80;
              lVar20 = uVar7 + 4;
              puVar8 = puVar9;
              if ((long)uVar17 < lVar20) {
                puVar8 = (undefined *)(ulong)(1 < uVar13);
                FUN_100506f84(puVar8,lVar20,1,puVar9);
              }
              goto LAB_10055f9f4;
            }
            puVar14 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar14 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar7 = *(ulong *)(puVar9 + 0x10);
            uVar13 = *(ulong *)(puVar9 + 0x18);
            uVar17 = uVar13 >> 1;
            puVar8 = puVar9;
            if (uVar17 <= uVar7) {
              puVar8 = (undefined *)(ulong)(1 < uVar13);
              FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
              uVar13 = *(ulong *)(puVar8 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
            puVar8[uVar7 + 0x20] = (byte)(uVar15 >> 0xc) | 0xe0;
            lVar19 = uVar7 + 2;
            puVar14 = puVar8;
            if ((long)uVar17 < lVar19) {
              puVar14 = (undefined *)(ulong)(1 < uVar13);
              FUN_100506f84(puVar14,lVar19,1,puVar8);
              uVar13 = *(ulong *)(puVar14 + 0x18);
              uVar17 = uVar13 >> 1;
            }
            *(long *)(puVar14 + 0x10) = lVar19;
            puVar14[uVar7 + 0x21] = (byte)(uVar15 >> 6) & 0x3f | 0x80;
            lVar20 = uVar7 + 3;
            puVar8 = puVar14;
            if ((long)uVar17 < lVar20) {
              puVar8 = (undefined *)(ulong)(1 < uVar13);
              FUN_100506f84(puVar8,lVar20,1,puVar14);
            }
            *(long *)(puVar8 + 0x10) = lVar20;
            puVar14 = puVar8 + lVar19;
          }
          puVar14[0x20] = (byte)uVar15 & 0x3f | 0x80;
          break;
        case 0x61:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 7;
          break;
        case 0x62:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 8;
          break;
        case 0x66:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 0xc;
          break;
        case 0x6e:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 10;
          break;
        case 0x72:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 0xd;
          break;
        case 0x74:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 9;
          break;
        case 0x76:
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = 0xb;
          break;
        case 0x78:
          if (uVar21 == uVar7 >> 0xe) goto switchD_10055f63c_caseD_23;
          uVar17 = uVar7 & 0xc;
          uVar13 = uVar7;
          if (uVar17 == uVar22) {
            FUN_10000caa8(uVar7,param_1,param_2);
          }
          uVar18 = uVar13 >> 0x10;
          if (uVar2 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10056042c);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) != 0) {
              local_88 = param_1;
              uStack_80 = uVar12;
              uVar10 = (uint)*(byte *)((long)&local_88 + uVar18);
              goto joined_r0x00010055f9a0;
            }
            pppppuVar6 = pppppuVar1;
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppppuVar6 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
            uVar10 = (uint)*(byte *)((long)pppppuVar6 + uVar18);
            if (uVar17 == uVar22) goto LAB_10055fa20;
LAB_10055f9a4:
            if ((param_2 >> 0x3c & 1) != 0) goto LAB_10055fa38;
LAB_10055f9a8:
            uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar10 = (uint)uVar13;
joined_r0x00010055f9a0:
            if (uVar17 != uVar22) goto LAB_10055f9a4;
LAB_10055fa20:
            FUN_10000caa8(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055f9a8;
LAB_10055fa38:
            if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100560438);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar7,param_1,param_2);
          }
          if ((uVar10 - 0x3a & 0xff) < 0xf6) {
            if ((uVar10 - 0x47 & 0xff) < 0xfa) {
              if (((uVar10 & 0xff) < 0x61) || (0x66 < (uVar10 & 0xff)))
              goto switchD_10055f63c_caseD_23;
              iVar11 = 0xa9;
            }
            else {
              iVar11 = 0xc9;
            }
          }
          else {
            iVar11 = 0xd0;
          }
          uVar10 = uVar10 + iVar11;
          pppppuVar6 = param_1;
          uVar13 = param_2;
          if (uVar21 != uVar7 >> 0xe) {
            uVar13 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              FUN_10000caa8(uVar7,param_1,param_2);
            }
            uVar17 = uVar13 >> 0x10;
            if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10056043c);
              (*pcVar5)();
            }
            if ((param_2 >> 0x3c & 1) == 0) {
              if ((param_2 >> 0x3d & 1) == 0) {
                pppppuVar6 = pppppuVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  pppppuVar6 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
                uVar15 = (uint)*(byte *)((long)pppppuVar6 + uVar17);
              }
              else {
                local_88 = param_1;
                uStack_80 = uVar12;
                uVar15 = (uint)*(byte *)((long)&local_88 + uVar17);
              }
            }
            else {
              __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
              uVar15 = (uint)uVar13;
            }
            uVar13 = uVar7;
            if ((uVar7 & 0xc) == uVar22) {
              FUN_10000caa8(uVar7,param_1,param_2);
              if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055fb8c;
LAB_100560160:
              if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100560440);
                (*pcVar5)();
              }
              __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar13,param_1,param_2);
            }
            else {
              if ((param_2 >> 0x3c & 1) != 0) goto LAB_100560160;
LAB_10055fb8c:
              uVar13 = (uVar13 & 0xffffffffffff0000) + 0x10004;
            }
            local_68 = uVar13;
            FUN_10055f2b8();
            pppppuVar6 = param_1;
            uVar13 = param_2;
            if (((uVar15 >> 8 & 1) == 0) &&
               (uVar10 = (uVar10 & 0xf) * 0x10 + (uVar15 & 0xff),
               pppppuVar6 = (undefined8 *****)local_78, uVar13 = uStack_70, uVar7 = local_68,
               uVar10 >> 8 != 0)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100560444);
              (*pcVar5)();
            }
          }
          local_68 = uVar7;
          uStack_70 = uVar13;
          local_78 = pppppuVar6;
          _swift_bridgeObjectRetain(param_2);
          puVar14 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar8;
          if (((ulong)puVar14 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar7 = *(ulong *)(puVar9 + 0x10);
          puVar8 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
          }
          *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
          puVar8[uVar7 + 0x20] = (char)uVar10;
          _swift_bridgeObjectRelease(param_2);
        }
      }
      else {
        cVar3 = (char)uVar10 + -0x30;
        if (uVar21 != uVar7 >> 0xe) {
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            FUN_10000caa8(uVar7,param_1,param_2);
          }
          uVar17 = uVar13 >> 0x10;
          if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100560420);
            (*pcVar5)();
          }
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              pppppuVar6 = pppppuVar1;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                pppppuVar6 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
              }
              uVar15 = (uint)*(byte *)((long)pppppuVar6 + uVar17);
            }
            else {
              local_88 = param_1;
              uStack_80 = uVar12;
              uVar15 = (uint)*(byte *)((long)&local_88 + uVar17);
            }
          }
          else {
            __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
            uVar15 = (uint)uVar13;
          }
          uVar13 = uVar7;
          if ((uVar7 & 0xc) == uVar22) {
            FUN_10000caa8(uVar7,param_1,param_2);
            if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055f7b8;
LAB_10055fbc0:
            if (uVar2 <= uVar13 >> 0x10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100560424);
              (*pcVar5)();
            }
            __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
          }
          else {
            if ((param_2 >> 0x3c & 1) != 0) goto LAB_10055fbc0;
LAB_10055f7b8:
            uVar13 = (uVar13 & 0xffffffffffff0000) + 0x10004;
          }
          if (0xf7 < (uVar15 - 0x38 & 0xff)) {
            bVar4 = (char)uVar15 - 0x30;
            if (uVar21 != uVar13 >> 0xe) {
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                FUN_10000caa8(uVar13,param_1,param_2);
              }
              uVar17 = uVar7 >> 0x10;
              if (uVar2 <= uVar17) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100560428);
                (*pcVar5)();
              }
              if ((param_2 >> 0x3c & 1) == 0) {
                if ((param_2 >> 0x3d & 1) == 0) {
                  pppppuVar6 = pppppuVar1;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    pppppuVar6 = param_1;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                  }
                  uVar15 = (uint)*(byte *)((long)pppppuVar6 + uVar17);
                }
                else {
                  local_88 = param_1;
                  uStack_80 = uVar12;
                  uVar15 = (uint)*(byte *)((long)&local_88 + uVar17);
                }
              }
              else {
                __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
                uVar15 = (uint)uVar7;
              }
              uVar7 = uVar13;
              if ((uVar13 & 0xc) == uVar22) {
                FUN_10000caa8(uVar13,param_1,param_2);
                if ((param_2 >> 0x3c & 1) == 0) goto LAB_10055fcb0;
LAB_10055fd60:
                if (uVar2 <= uVar7 >> 0x10) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100560434);
                  (*pcVar5)();
                }
                __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF();
              }
              else {
                if ((param_2 >> 0x3c & 1) != 0) goto LAB_10055fd60;
LAB_10055fcb0:
                uVar7 = (uVar7 & 0xffffffffffff0000) + 0x10004;
              }
              local_68 = uVar7;
              if (0xf7 < (uVar15 - 0x38 & 0xff)) {
                _swift_bridgeObjectRetain(param_2);
                puVar14 = puVar8;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar9 = puVar8;
                if (((ulong)puVar14 & 1) == 0) {
                  puVar9 = (undefined *)0x0;
                  FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
                }
                uVar7 = *(ulong *)(puVar9 + 0x10);
                puVar8 = puVar9;
                if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                  FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
                }
                *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
                puVar8[uVar7 + 0x20] = (char)uVar15 + (bVar4 * '\b' | (byte)(uVar10 << 6)) + -0x30;
                _swift_bridgeObjectRelease(param_2);
                goto LAB_10055f3cc;
              }
            }
            _swift_bridgeObjectRetain(param_2);
            puVar14 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar8;
            if (((ulong)puVar14 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
            }
            uVar7 = *(ulong *)(puVar9 + 0x10);
            puVar8 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar7) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_100506f84(puVar8,uVar7 + 1,1,puVar9);
            }
            *(ulong *)(puVar8 + 0x10) = uVar7 + 1;
            puVar8[uVar7 + 0x20] = bVar4 | cVar3 * '\b';
            _swift_bridgeObjectRelease(param_2);
            local_78 = param_1;
            uStack_70 = param_2;
            local_68 = uVar13;
            goto LAB_10055f3cc;
          }
        }
        _swift_bridgeObjectRetain(param_2);
        puVar14 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar8;
        if (((ulong)puVar14 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100506f84(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar13 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar13) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100506f84(puVar8,uVar13 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar13 + 1;
        puVar8[uVar13 + 0x20] = cVar3;
        _swift_bridgeObjectRelease(param_2);
        local_78 = param_1;
        uStack_70 = param_2;
        local_68 = uVar7;
      }
LAB_10055f3cc:
      uVar7 = local_68;
    } while (uVar21 != local_68 >> 0xe);
  }
  uVar16 = *(undefined8 *)(puVar8 + 0x10);
  puVar14 = puVar8 + 0x20;
  FUN_10054c680(puVar14,uVar16);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(param_2);
LAB_1005603e4:
  auVar23._8_8_ = uVar16;
  auVar23._0_8_ = puVar14;
  return auVar23;
}

