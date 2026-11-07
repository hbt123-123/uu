// rea decompile_all
// name: FUN_1003d9bf4
// address: 0x1003d9bf4
// body: available
// range: 0x1003d9bf4-0x1003d9e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003d9bf4(ulong param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong local_80;
  byte *local_78;
  undefined8 local_70;
  ulong uStack_68;
  
  lVar4 = 0;
  pbVar8 = param_2;
  __ss7UnicodeO6ScalarV10PropertiesVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uStack_68 = (ulong)param_2 >> 0x38 & 0xf;
  }
  local_70 = 0;
  local_80 = param_1;
  local_78 = param_2;
  _swift_bridgeObjectRetain();
  __sSS8IteratorV4nextSJSgyF();
  if (pbVar8 != (byte *)0x0) {
    do {
      pbVar7 = pbVar8;
      pbVar5 = param_2;
      pbVar8 = pbVar7;
      __sSJ8isLetterSbvg();
      if (((ulong)pbVar5 & 1) == 0) {
LAB_1003d9d70:
        _swift_bridgeObjectRelease();
      }
      else {
        uVar1 = (ulong)param_2 & 0xffffffffffff;
        if (((ulong)pbVar7 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pbVar7 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d9e78);
          (*pcVar3)();
        }
        if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar7 >> 0x3d & 1) == 0) {
            if (((ulong)param_2 >> 0x3c & 1) == 0) {
              pbVar8 = param_2;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_2,pbVar7);
            }
            else {
              pbVar8 = (byte *)(((ulong)pbVar7 & 0xfffffffffffffff) + 0x20);
            }
            uVar9 = (uint)*pbVar8;
          }
          else {
            uVar9 = (uint)param_2;
          }
          uVar6 = 0x10000;
          if ((char)uVar9 < '\0') {
            uVar6 = ((ulong)((int)LZCOUNT((uVar9 ^ 0xffffffff) & 0xff) - 0x18) & 0xff) << 0x10;
          }
        }
        else {
          uVar6 = 0;
          __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,param_2,pbVar7);
        }
        if (uVar1 * 4 - (uVar6 >> 0xe) == 0) {
          pbVar8 = param_2;
          FUN_1003d9990(param_2,pbVar7);
          if (((ulong)pbVar8 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d9e7c);
            (*pcVar3)();
          }
          __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(lVar11);
          __ss7UnicodeO6ScalarV10PropertiesV11isLowercaseSbvg();
          (**(code **)(lVar12 + 8))(lVar11,lVar4);
          if (((ulong)pbVar8 & 1) == 0) goto LAB_1003d9d3c;
LAB_1003d9e34:
          _swift_bridgeObjectRelease(pbVar7);
LAB_1003d9e3c:
          uVar10 = 1;
          goto LAB_1003d9e48;
        }
LAB_1003d9d3c:
        pbVar5 = param_2;
        pbVar8 = pbVar7;
        __sSJ13_isLowercasedSbvg();
        if (((ulong)pbVar5 & 1) == 0) goto LAB_1003d9d70;
        if (((ulong)pbVar7 >> 0x3c & 1) == 0) {
          uVar6 = 0;
          __ss11_StringGutsV20fastUTF8ScalarLength10startingAtS2i_tF(0,param_2,pbVar7);
          lVar2 = (uVar6 & 0xffffffffffff) * -4;
        }
        else {
          uVar6 = 0;
          __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,param_2,pbVar7);
          lVar2 = -(uVar6 >> 0xe);
        }
        if (uVar1 * 4 + lVar2 == 0) {
          pbVar8 = param_2;
          FUN_1003d9990(param_2,pbVar7);
          if (((ulong)pbVar8 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d9e80);
            (*pcVar3)();
          }
          __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(lVar11);
          __ss7UnicodeO6ScalarV10PropertiesV7isCasedSbvg();
          (**(code **)(lVar12 + 8))(lVar11,lVar4);
          if (((ulong)pbVar8 & 1) != 0) goto LAB_1003d9e34;
        }
        pbVar8 = param_2;
        __sSJ13_isUppercasedSbvg(param_2,pbVar7);
        if (((ulong)pbVar8 & 1) == 0) goto LAB_1003d9e34;
        pbVar8 = pbVar7;
        __sSJ13_isLowercasedSbvg();
        _swift_bridgeObjectRelease();
        if (((ulong)param_2 & 1) == 0) goto LAB_1003d9e3c;
      }
      __sSS8IteratorV4nextSJSgyF();
      param_2 = pbVar7;
    } while (pbVar8 != (byte *)0x0);
  }
  uVar10 = 0;
LAB_1003d9e48:
  _swift_bridgeObjectRelease(local_78);
  return uVar10;
}

