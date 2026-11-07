// rea decompile_all
// name: FUN_100078034
// address: 0x100078034
// body: available
// range: 0x100078034-0x1000786bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100078034(byte *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  byte *local_a8;
  ulong local_a0;
  undefined1 *local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  lVar4 = 0;
  local_b0 = param_2;
  local_a8 = param_1;
  __ss7UnicodeO6ScalarV10PropertiesVMa();
  local_90 = *(long *)(lVar4 + -8);
  local_98 = auStack_c0 + -(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar16 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar16 = param_4 >> 0x38 & 0xf;
  }
  uStack_68 = 0xe000000000000000;
  if (uVar16 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    uVar16 = uVar16 << 2;
    lStack_88 = lVar4;
    _swift_bridgeObjectRetain(param_4);
    uVar15 = 1;
    pbVar7 = (byte *)0xf;
    local_b8 = param_3;
    local_a0 = uVar16;
    do {
      pbVar5 = pbVar7;
      __sSS5index5afterSS5IndexVAD_tF(pbVar7,param_3,param_4);
      pbVar6 = pbVar7;
      __sSS5index5afterSS5IndexVAD_tF(pbVar7,param_3,param_4);
      uVar13 = param_3;
      __sSSySJSS5IndexVcig(pbVar7,param_3,param_4);
      uVar9 = (ulong)pbVar7 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar9 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786a0);
        (*pcVar3)();
      }
      if ((uVar13 >> 0x3c & 1) == 0) {
        if ((uVar13 >> 0x3d & 1) == 0) {
          if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
            pbVar12 = pbVar7;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pbVar7,uVar13);
          }
          else {
            pbVar12 = (byte *)((uVar13 & 0xfffffffffffffff) + 0x20);
          }
          uVar14 = (uint)*pbVar12;
        }
        else {
          uVar14 = (uint)pbVar7;
        }
        uVar8 = 0x10000;
        if ((char)uVar14 < '\0') {
          uVar8 = ((ulong)((int)LZCOUNT((uVar14 ^ 0xffffffff) & 0xff) - 0x18) & 0xff) << 0x10;
        }
      }
      else {
        uVar8 = 0;
        __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,pbVar7,uVar13);
      }
      if (uVar9 * 4 - (uVar8 >> 0xe) == 0) {
        pbVar12 = pbVar7;
        FUN_10007ab58(pbVar7,uVar13);
        puVar1 = local_98;
        if (((ulong)pbVar12 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786a8);
          (*pcVar3)();
        }
        __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
        __ss7UnicodeO6ScalarV10PropertiesV11isUppercaseSbvg();
        (**(code **)(local_90 + 8))(puVar1,lStack_88);
        uVar16 = local_a0;
        if (((ulong)pbVar12 & 1) == 0) goto LAB_100078200;
LAB_1000782dc:
        if ((uVar15 & 1) != 0) {
          uVar9 = local_70 & 0xffffffffffff;
          if ((uStack_68 & 0x2000000000000000) != 0) {
            uVar9 = uStack_68 >> 0x38 & 0xf;
          }
          if (uVar9 != 0) {
            local_80 = 0;
            uStack_78 = 0xe000000000000000;
            __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                      (&local_80,local_a8,local_b0,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                       PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
            uVar2 = uStack_78;
            __sSS6appendyySSF(local_80,uStack_78);
            _swift_bridgeObjectRelease(uVar2);
          }
        }
        if ((ulong)pbVar6 >> 0xe < uVar16) {
          pbVar12 = pbVar6;
          __sSSySJSS5IndexVcig(pbVar6,param_3,param_4);
          uVar16 = (ulong)pbVar12 & 0xffffffffffff;
          if ((param_3 & 0x2000000000000000) != 0) {
            uVar16 = param_3 >> 0x38 & 0xf;
          }
          if (uVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786a4);
            (*pcVar3)();
          }
          if ((param_3 >> 0x3c & 1) == 0) {
            lVar4 = 0;
            __ss11_StringGutsV20fastUTF8ScalarLength10startingAtS2i_tF(0,pbVar12,param_3);
            uVar9 = lVar4 << 0x10;
          }
          else {
            uVar9 = 0;
            __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,pbVar12,param_3);
          }
          if (uVar16 * 4 - (uVar9 >> 0xe) == 0) {
            pbVar10 = pbVar12;
            FUN_10007ab58(pbVar12,param_3);
            puVar1 = local_98;
            if (((ulong)pbVar10 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786ac);
              (*pcVar3)();
            }
            __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
            __ss7UnicodeO6ScalarV10PropertiesV11isUppercaseSbvg();
            (**(code **)(local_90 + 8))(puVar1,lStack_88);
            if (((ulong)pbVar10 & 1) == 0) goto LAB_1000783c4;
LAB_1000784a8:
            _swift_bridgeObjectRelease(param_3);
          }
          else {
LAB_1000783c4:
            pbVar10 = pbVar12;
            __sSJ13_isUppercasedSbvg(pbVar12,param_3);
            if (((ulong)pbVar10 & 1) == 0) {
              _swift_bridgeObjectRelease(param_3);
LAB_100078418:
              uVar15 = 0;
              param_3 = local_b8;
              uVar16 = local_a0;
              goto LAB_1000780d4;
            }
            uVar9 = 0;
            FUN_10007ac38(0xf,pbVar12,param_3);
            if ((param_3 >> 0x3c & 1) == 0) {
              uVar9 = uVar9 >> 0x10;
              uVar8 = uVar9;
              __ss11_StringGutsV20fastUTF8ScalarLength10startingAtS2i_tF(uVar9,pbVar12,param_3);
              lVar4 = (uVar8 + uVar9 & 0xffffffffffff) * -4;
            }
            else {
              __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF();
              lVar4 = -(uVar9 >> 0xe);
            }
            if (uVar16 * 4 + lVar4 == 0) {
              pbVar10 = pbVar12;
              FUN_10007ab58(pbVar12,param_3);
              puVar1 = local_98;
              if (((ulong)pbVar10 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786b8);
                (*pcVar3)();
              }
              __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
              __ss7UnicodeO6ScalarV10PropertiesV7isCasedSbvg();
              (**(code **)(local_90 + 8))(puVar1,lStack_88);
              if (((ulong)pbVar10 & 1) != 0) goto LAB_1000784a8;
            }
            pbVar10 = pbVar12;
            __sSJ13_isUppercasedSbvg(pbVar12,param_3);
            if (((ulong)pbVar10 & 1) == 0) goto LAB_1000784a8;
            __sSJ13_isLowercasedSbvg(pbVar12,param_3);
            _swift_bridgeObjectRelease(param_3);
            if (((ulong)pbVar12 & 1) != 0) goto LAB_100078418;
          }
          param_3 = local_b8;
          pbVar12 = pbVar6;
          __sSS5index5afterSS5IndexVAD_tF(pbVar6,local_b8,param_4);
          uVar16 = local_a0;
          if ((ulong)pbVar12 >> 0xe < local_a0) {
            __sSS5index5afterSS5IndexVAD_tF(pbVar6,param_3,param_4);
            uVar8 = param_3;
            __sSSySJSS5IndexVcig();
            uVar9 = 0;
            FUN_10007ac38(0xf,pbVar6,uVar8);
            if ((uVar8 >> 0x3c & 1) == 0) {
              uVar9 = uVar9 >> 0x10;
              uVar11 = uVar9;
              __ss11_StringGutsV20fastUTF8ScalarLength10startingAtS2i_tF(uVar9,pbVar6,uVar8);
              uVar9 = (uVar11 + uVar9) * 0x10000;
            }
            else {
              __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF();
            }
            uVar11 = (ulong)pbVar6 & 0xffffffffffff;
            if ((uVar8 & 0x2000000000000000) != 0) {
              uVar11 = uVar8 >> 0x38 & 0xf;
            }
            if (uVar9 >> 0xe == uVar11 * 4) {
              pbVar12 = pbVar6;
              FUN_10007ab58(pbVar6,uVar8);
              puVar1 = local_98;
              if (((ulong)pbVar12 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786b4);
                (*pcVar3)();
              }
              __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
              __ss7UnicodeO6ScalarV10PropertiesV11isLowercaseSbvg();
              (**(code **)(local_90 + 8))(puVar1,lStack_88);
              param_3 = local_b8;
              if (((ulong)pbVar12 & 1) == 0) goto LAB_100078580;
            }
            else {
LAB_100078580:
              pbVar12 = pbVar6;
              __sSJ13_isLowercasedSbvg(pbVar6,uVar8);
              if (((ulong)pbVar12 & 1) == 0) {
                _swift_bridgeObjectRelease(uVar8);
                goto LAB_1000780d0;
              }
              pbVar12 = pbVar6;
              __sSJ15_isSingleScalarSbvg(pbVar6,uVar8);
              if (((ulong)pbVar12 & 1) != 0) {
                pbVar12 = pbVar6;
                FUN_10007ab58(pbVar6,uVar8);
                puVar1 = local_98;
                if (((ulong)pbVar12 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786bc);
                  (*pcVar3)();
                }
                __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
                __ss7UnicodeO6ScalarV10PropertiesV7isCasedSbvg();
                (**(code **)(local_90 + 8))(puVar1,lStack_88);
                param_3 = local_b8;
                if (((ulong)pbVar12 & 1) != 0) goto LAB_100078610;
              }
              pbVar12 = pbVar6;
              __sSJ13_isUppercasedSbvg(pbVar6,uVar8);
              if (((ulong)pbVar12 & 1) != 0) {
                __sSJ13_isLowercasedSbvg(pbVar6,uVar8);
                _swift_bridgeObjectRelease(uVar8);
                uVar15 = (uint)pbVar6 ^ 1;
                goto LAB_1000780d4;
              }
            }
LAB_100078610:
            _swift_bridgeObjectRelease(uVar8);
            uVar15 = 1;
            goto LAB_1000780d4;
          }
        }
LAB_1000780d0:
        uVar15 = 0;
      }
      else {
LAB_100078200:
        pbVar12 = pbVar7;
        __sSJ13_isUppercasedSbvg(pbVar7,uVar13);
        if (((ulong)pbVar12 & 1) != 0) {
          if ((uVar13 >> 0x3c & 1) == 0) {
            uVar8 = 0;
            __ss11_StringGutsV20fastUTF8ScalarLength10startingAtS2i_tF(0,pbVar7,uVar13);
            lVar4 = (uVar8 & 0xffffffffffff) * -4;
          }
          else {
            uVar8 = 0;
            __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,pbVar7,uVar13);
            lVar4 = -(uVar8 >> 0xe);
          }
          if (uVar9 * 4 + lVar4 == 0) {
            pbVar12 = pbVar7;
            FUN_10007ab58(pbVar7,uVar13);
            puVar1 = local_98;
            if (((ulong)pbVar12 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000786b0);
              (*pcVar3)();
            }
            __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(local_98);
            __ss7UnicodeO6ScalarV10PropertiesV7isCasedSbvg();
            (**(code **)(local_90 + 8))(puVar1,lStack_88);
            if (((ulong)pbVar12 & 1) != 0) goto LAB_1000782dc;
          }
          pbVar12 = pbVar7;
          __sSJ13_isUppercasedSbvg(pbVar7,uVar13);
          if ((((ulong)pbVar12 & 1) == 0) ||
             (pbVar12 = pbVar7, __sSJ13_isLowercasedSbvg(pbVar7,uVar13), ((ulong)pbVar12 & 1) == 0))
          goto LAB_1000782dc;
        }
        if ((pbVar7 == local_a8) && (uVar13 == local_b0)) goto LAB_1000780d0;
        pbVar6 = pbVar7;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (pbVar7,uVar13,local_a8,local_b0,0);
        uVar15 = (uint)pbVar6 ^ 1;
      }
LAB_1000780d4:
      uVar9 = uVar13;
      __sSJ10lowercasedSSyF(pbVar7,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      __sSS6appendyySSF(pbVar7,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      pbVar7 = pbVar5;
    } while (uVar16 != (ulong)pbVar5 >> 0xe);
    _swift_bridgeObjectRelease(param_4);
  }
  auVar17._8_8_ = uStack_68;
  auVar17._0_8_ = local_70;
  return auVar17;
}

