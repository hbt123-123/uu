// rea decompile_all
// name: FUN_1005c96d0
// address: 0x1005c96d0
// body: available
// range: 0x1005c96d0-0x1005c9897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005c96d0(undefined8 ***param_1,ulong param_2)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 **local_68;
  ulong uStack_60;
  
  pppuVar2 = (undefined8 ***)((ulong)param_1 & 0xffffffffffff);
  if ((param_2 & 0x2000000000000000) != 0) {
    pppuVar2 = (undefined8 ***)(param_2 >> 0x38 & 0xf);
  }
  if (pppuVar2 == (undefined8 ***)0x0) {
    uVar3 = 1;
  }
  else {
    pppuVar5 = pppuVar2;
    if ((param_2 >> 0x3c & 1) != 0) {
      pppuVar5 = param_1;
      __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    }
    if (pppuVar5 == (undefined8 ***)0x80) {
      lVar7 = 0;
      do {
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            pppuVar5 = (undefined8 ***)((param_2 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_1 >> 0x3c & 1) == 0) {
              pppuVar5 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
          }
          else {
            local_68 = param_1;
            uStack_60 = param_2 & 0xffffffffffffff;
            pppuVar5 = &local_68;
          }
          pbVar6 = (byte *)((long)pppuVar5 + lVar7);
          uVar3 = (uint)*pbVar6;
          if ((char)*pbVar6 < '\0') {
            uVar1 = (int)LZCOUNT(uVar3 ^ 0xff) - 0x18U & 0xff;
            if (uVar1 < 3) {
              if (uVar1 == 1) goto LAB_1005c9780;
              uVar3 = pbVar6[1] & 0x3f | (uVar3 & 0x1f) << 6;
              pppuVar5 = (undefined8 ***)0x2;
            }
            else if (uVar1 == 3) {
              uVar3 = (uVar3 & 0xf) << 0xc | (pbVar6[1] & 0x3f) << 6 | pbVar6[2] & 0x3f;
              pppuVar5 = (undefined8 ***)0x3;
            }
            else {
              uVar3 = (uVar3 & 0xf) << 0x12 | (pbVar6[1] & 0x3f) << 0xc | (pbVar6[2] & 0x3f) << 6 |
                      pbVar6[3] & 0x3f;
              pppuVar5 = (undefined8 ***)0x4;
            }
          }
          else {
LAB_1005c9780:
            pppuVar5 = (undefined8 ***)0x1;
          }
        }
        else {
          lVar4 = lVar7 << 0x10;
          pppuVar5 = param_1;
          __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                    (lVar4,param_1,param_2);
          uVar3 = (uint)lVar4;
        }
        if ((uVar3 - 0x3a < 0xfffffff6) &&
           ((0x25 < uVar3 - 0x41 || ((1L << ((ulong)(uVar3 - 0x41) & 0x3f) & 0x3f0000003fU) == 0))))
        goto LAB_1005c9874;
        lVar7 = (long)pppuVar5 + lVar7;
      } while (lVar7 < (long)pppuVar2);
      FUN_1005c9638(param_1,param_2);
      uVar3 = (uint)param_1;
    }
    else {
LAB_1005c9874:
      uVar3 = 0;
    }
  }
  return uVar3 & 1;
}

