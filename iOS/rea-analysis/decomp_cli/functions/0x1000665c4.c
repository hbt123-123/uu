// rea decompile_all
// name: FUN_1000665c4
// address: 0x1000665c4
// body: available
// range: 0x1000665c4-0x100066997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000665c4(ulong param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_d0 [16];
  undefined8 auStack_c0 [2];
  long local_b0;
  long local_a8;
  undefined1 auStack_a0 [16];
  ulong *local_90;
  ulong local_88;
  byte *local_80;
  undefined8 local_78;
  ulong uStack_70;
  
  lVar3 = 0;
  __ss7UnicodeO6ScalarV10PropertiesVMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_b0 + lVar1;
  local_88 = 0x2d;
  local_80 = (byte *)0xe100000000000000;
  uVar4 = 0;
  local_90 = &local_88;
  FUN_1000b374c(FUN_10002236c,auStack_a0,param_3,param_4);
  if ((uVar4 & 1) == 0) {
    local_88 = 0x5f;
    local_80 = (byte *)0xe100000000000000;
    local_a8 = lVar3;
    *(ulong **)((long)auStack_c0 + lVar1) = &local_88;
    uVar4 = 0;
    FUN_1000b374c(FUN_1000224ec,auStack_d0 + lVar1,param_3,param_4);
    if ((uVar4 & 1) != 0) {
      local_88 = param_1;
      local_80 = (byte *)param_2;
      _swift_bridgeObjectRetain(param_2);
      uVar9 = 0x5f;
      goto LAB_100066954;
    }
    uVar4 = param_3;
    pbVar5 = param_4;
    FUN_10007b11c();
    if (pbVar5 != (byte *)0x0) {
      pbVar6 = pbVar5;
      __sSJ11isLowercaseSbvg();
      _swift_bridgeObjectRelease(pbVar5);
      if ((uVar4 & 1) != 0) {
        uStack_70 = param_3 & 0xffffffffffff;
        if (((ulong)param_4 & 0x2000000000000000) != 0) {
          uStack_70 = (ulong)param_4 >> 0x38 & 0xf;
        }
        local_78 = 0;
        pbVar5 = param_4;
        local_88 = param_3;
        local_80 = param_4;
        _swift_bridgeObjectRetain();
        __sSS8IteratorV4nextSJSgyF();
        local_b0 = lVar13;
        while (pbVar6 != (byte *)0x0) {
          uVar4 = (ulong)pbVar5 & 0xffffffffffff;
          if (((ulong)pbVar6 & 0x2000000000000000) != 0) {
            uVar4 = (ulong)pbVar6 >> 0x38 & 0xf;
          }
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100066990);
            (*pcVar2)();
          }
          uVar12 = (uint)pbVar5;
          if (((ulong)pbVar6 >> 0x3c & 1) == 0) {
            uVar11 = uVar12;
            if (((ulong)pbVar6 >> 0x3d & 1) == 0) {
              if (((ulong)pbVar5 >> 0x3c & 1) == 0) {
                pbVar8 = pbVar5;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pbVar5,pbVar6);
              }
              else {
                pbVar8 = (byte *)(((ulong)pbVar6 & 0xfffffffffffffff) + 0x20);
              }
              uVar11 = (uint)*pbVar8;
            }
            uVar7 = 0x10000;
            if ((char)uVar11 < '\0') {
              uVar7 = ((ulong)((int)LZCOUNT((uVar11 ^ 0xffffffff) & 0xff) - 0x18) & 0xff) << 0x10;
            }
          }
          else {
            uVar7 = 0;
            __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,pbVar5,pbVar6);
          }
          if (uVar4 * 4 - (uVar7 >> 0xe) == 0) {
            pbVar8 = pbVar5;
            FUN_10007ab58(pbVar5,pbVar6);
            if (((ulong)pbVar8 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100066994);
              (*pcVar2)();
            }
            __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(lVar14);
            __ss7UnicodeO6ScalarV10PropertiesV11isUppercaseSbvg();
            (**(code **)(local_b0 + 8))(lVar14,local_a8);
            if (((ulong)pbVar8 & 1) == 0) goto LAB_1000667c8;
LAB_100066910:
            _swift_bridgeObjectRelease(pbVar6);
LAB_100066918:
            _swift_bridgeObjectRelease(local_80);
            FUN_100066494(param_1,param_2,param_3,param_4);
            return;
          }
LAB_1000667c8:
          pbVar8 = pbVar5;
          pbVar10 = pbVar6;
          __sSJ13_isUppercasedSbvg();
          if (((ulong)pbVar8 & 1) == 0) {
            _swift_bridgeObjectRelease();
          }
          else {
            if (((ulong)pbVar6 >> 0x3c & 1) == 0) {
              if (((ulong)pbVar6 >> 0x3d & 1) == 0) {
                if (((ulong)pbVar5 >> 0x3c & 1) == 0) {
                  pbVar8 = pbVar5;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(pbVar5,pbVar6);
                }
                else {
                  pbVar8 = (byte *)(((ulong)pbVar6 & 0xfffffffffffffff) + 0x20);
                }
                uVar12 = (uint)*pbVar8;
              }
              uVar7 = 0x10000;
              if ((char)uVar12 < '\0') {
                uVar7 = ((ulong)((int)LZCOUNT((uVar12 ^ 0xffffffff) & 0xff) - 0x18) & 0xff) << 0x10;
              }
            }
            else {
              uVar7 = 0;
              __sSS17UnicodeScalarViewV13_foreignIndex5afterSS0E0VAF_tF(0xf,pbVar5,pbVar6);
            }
            if (uVar4 * 4 - (uVar7 >> 0xe) == 0) {
              pbVar8 = pbVar5;
              FUN_10007ab58(pbVar5,pbVar6);
              if (((ulong)pbVar8 >> 0x20 & 1) != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100066998);
                (*pcVar2)();
              }
              __ss7UnicodeO6ScalarV10propertiesAD10PropertiesVvg(lVar14);
              __ss7UnicodeO6ScalarV10PropertiesV7isCasedSbvg();
              (**(code **)(local_b0 + 8))(lVar14,local_a8);
              if (((ulong)pbVar8 & 1) != 0) goto LAB_100066910;
            }
            pbVar8 = pbVar5;
            __sSJ13_isUppercasedSbvg(pbVar5,pbVar6);
            if (((ulong)pbVar8 & 1) == 0) goto LAB_100066910;
            pbVar10 = pbVar6;
            __sSJ13_isLowercasedSbvg();
            _swift_bridgeObjectRelease();
            if (((ulong)pbVar5 & 1) == 0) goto LAB_100066918;
          }
          __sSS8IteratorV4nextSJSgyF();
          pbVar5 = pbVar6;
          pbVar6 = pbVar10;
        }
        _swift_bridgeObjectRelease(local_80);
      }
    }
    local_88 = param_1;
    local_80 = (byte *)param_2;
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    local_88 = param_1;
    local_80 = (byte *)param_2;
    _swift_bridgeObjectRetain(param_2);
  }
  uVar9 = 0x2d;
LAB_100066954:
  __sSS6appendyySSF(uVar9,0xe100000000000000);
  __sSS6appendyySSF(param_3,param_4);
  return;
}

