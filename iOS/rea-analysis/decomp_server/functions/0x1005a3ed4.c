// rea decompile_all
// name: FUN_1005a3ed4
// address: 0x1005a3ed4
// body: available
// range: 0x1005a3ed4-0x1005a4167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a3ed4(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  
  uVar3 = *param_1;
  FUN_10056e12c(uVar3,*param_2);
  if ((uVar3 & 1) != 0) {
    uVar3 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar3 == 0) goto LAB_1005a3f44;
    }
    else if ((uVar3 != 0) &&
            (((uVar4 = param_1[3], uVar4 == param_2[3] && (param_1[4] == uVar3)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar4 & 1) != 0)))) {
LAB_1005a3f44:
      bVar1 = *(byte *)(param_2 + 6);
      if ((param_1[6] & 1) == 0) {
        if (param_1[5] != param_2[5]) {
          bVar1 = 1;
        }
        if ((bVar1 & 1) == 0) goto LAB_1005a3f6c;
      }
      else if (bVar1 != 0) {
LAB_1005a3f6c:
        bVar1 = *(byte *)(param_2 + 8);
        if ((param_1[8] & 1) == 0) {
          if (param_1[7] != param_2[7]) {
            bVar1 = 1;
          }
          if ((bVar1 & 1) == 0) goto LAB_1005a3f94;
        }
        else if (bVar1 != 0) {
LAB_1005a3f94:
          bVar1 = *(byte *)(param_2 + 10);
          if ((param_1[10] & 1) == 0) {
            if ((double)param_1[9] != (double)param_2[9]) {
              bVar1 = 1;
            }
            if ((bVar1 & 1) == 0) goto LAB_1005a3fbc;
          }
          else if (bVar1 != 0) {
LAB_1005a3fbc:
            uVar7 = param_1[0xc];
            uVar4 = param_1[0xb];
            uVar3 = param_2[0xc];
            uVar6 = param_2[0xb];
            local_70 = uVar6;
            uStack_68 = uVar3;
            local_60 = uVar4;
            uStack_58 = uVar7;
            if (uVar7 >> 0x3c < 0xf) {
              if (0xe < uVar3 >> 0x3c) goto LAB_1005a403c;
              FUN_10007f314(&local_60,auStack_80,&DAT_100aab700,&DAT_100838020);
              FUN_10007f314(&local_70,auStack_80,&DAT_100aab700,&DAT_100838020);
              uVar5 = uVar4;
              FUN_1000094a4(uVar4,uVar7,uVar6,uVar3);
              FUN_100006cc8(uVar6,uVar3);
              FUN_100006cc8(uVar4,uVar7);
              if ((uVar5 & 1) != 0) goto LAB_1005a411c;
            }
            else if (uVar3 >> 0x3c < 0xf) {
LAB_1005a403c:
              FUN_10007f314(&local_60,auStack_80,&DAT_100aab700,&DAT_100838020);
              FUN_10007f314(&local_70,auStack_80,&DAT_100aab700,&DAT_100838020);
              FUN_100006cc8(uVar4,uVar7);
              FUN_100006cc8(uVar6,uVar3);
            }
            else {
              FUN_10007f314(&local_60,auStack_80,&DAT_100aab700,&DAT_100838020);
              FUN_10007f314(&local_70,auStack_80,&DAT_100aab700,&DAT_100838020);
              FUN_100006cc8(uVar4,uVar7);
LAB_1005a411c:
              uVar3 = param_2[0xe];
              if (param_1[0xe] == 0) {
                if (uVar3 == 0) goto LAB_1005a4158;
              }
              else if ((uVar3 != 0) &&
                      (((uVar4 = param_1[0xd], uVar4 == param_2[0xd] && (param_1[0xe] == uVar3)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar4 & 1) != 0)))) {
LAB_1005a4158:
                uVar3 = param_1[1];
                FUN_1000094a4(uVar3,param_1[2],param_2[1],param_2[2]);
                uVar2 = (uint)uVar3;
                goto LAB_1005a4090;
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_1005a4090:
  return uVar2 & 1;
}

