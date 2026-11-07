// rea decompile_all
// name: FUN_1005c4020
// address: 0x1005c4020
// body: available
// range: 0x1005c4020-0x1005c423f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005c4020(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar7 = param_1[5];
    uVar6 = param_1[4];
    uVar4 = param_1[6];
    uVar8 = param_2[5];
    uVar2 = param_2[4];
    uVar5 = param_2[6];
    local_a0 = uVar2;
    uStack_98 = uVar8;
    local_90 = uVar5;
    local_80 = uVar6;
    uStack_78 = uVar7;
    local_70 = uVar4;
    if (uVar4 == 0) {
      if (uVar5 != 0) goto LAB_1005c40e4;
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
      FUN_10008f148(uVar6,uVar7,0);
LAB_1005c41f0:
      uVar2 = param_1[2];
      FUN_1000094a4(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_1005c41fc;
    }
    if (uVar5 == 0) {
LAB_1005c40e4:
      FUN_10007f314(&local_80,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
      FUN_10008f148(uVar6,uVar7,uVar4);
LAB_1005c4138:
      FUN_10008f148(uVar2,uVar8,uVar5);
    }
    else {
      if (uVar4 == uVar5) {
        FUN_10007f314(&local_80,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
        FUN_10007f314(&local_a0,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
      }
      else {
        FUN_10007f314(&local_80,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
        FUN_10007f314(&local_a0,auStack_b8,&DAT_100aad3d0,&DAT_10083e010);
        uVar3 = uVar5;
        FUN_1004f813c();
        if ((uVar3 & 1) == 0) {
          FUN_10008f148(uVar2,uVar8,uVar5);
          uVar2 = uVar6;
          uVar8 = uVar7;
          uVar5 = uVar4;
          goto LAB_1005c4138;
        }
      }
      uVar3 = uVar6;
      FUN_1000094a4(uVar6,uVar7,uVar2,uVar8);
      FUN_10008f148(uVar2,uVar8,uVar5);
      FUN_10008f148(uVar6,uVar7,uVar4);
      if ((uVar3 & 1) != 0) goto LAB_1005c41f0;
    }
  }
  uVar1 = 0;
LAB_1005c41fc:
  return uVar1 & 1;
}

