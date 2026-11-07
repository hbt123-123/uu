// rea decompile_all
// name: FUN_1004b88a4
// address: 0x1004b88a4
// body: available
// range: 0x1004b88a4-0x1004b8bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004b88a4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  
  uVar6 = *param_1;
  uStack_a8 = param_1[1];
  uVar7 = param_1[2];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  bVar3 = (byte)param_1[0xc];
  local_b0 = uVar6;
  local_a0 = uVar7;
  uStack_98 = uVar8;
  local_90 = uVar9;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 == 0) {
        uStack_80 = param_1[6];
        local_88 = param_1[5];
        local_78 = param_1[7];
        if ((char)param_2[0xc] == '\0') {
          uStack_108 = param_2[1];
          local_110 = *param_2;
          uStack_f8 = param_2[3];
          uStack_100 = param_2[2];
          uStack_e8 = param_2[5];
          local_f0 = param_2[4];
          uStack_d8 = param_2[7];
          uStack_e0 = param_2[6];
          puVar5 = &local_b0;
          FUN_1004b779c(puVar5,&local_110);
          uVar4 = (uint)puVar5;
          goto LAB_1004b8bac;
        }
      }
      else {
        uStack_80 = param_1[6];
        local_88 = param_1[5];
        uStack_70 = param_1[8];
        local_78 = param_1[7];
        uStack_60 = param_1[10];
        local_68 = param_1[9];
        local_58 = param_1[0xb];
        if ((char)param_2[0xc] == '\x01') {
          uStack_e8 = param_2[5];
          local_f0 = param_2[4];
          uStack_d8 = param_2[7];
          uStack_e0 = param_2[6];
          uStack_c8 = param_2[9];
          local_d0 = param_2[8];
          uStack_b8 = param_2[0xb];
          uStack_c0 = param_2[10];
          uStack_108 = param_2[1];
          local_110 = *param_2;
          uStack_f8 = param_2[3];
          uStack_100 = param_2[2];
          puVar5 = &local_b0;
          FUN_1004b79e4(puVar5,&local_110);
          uVar4 = (uint)puVar5;
          goto LAB_1004b8bac;
        }
      }
    }
    else if (bVar3 == 2) {
      uStack_80 = param_1[6];
      local_88 = param_1[5];
      uStack_70 = param_1[8];
      local_78 = param_1[7];
      if ((char)param_2[0xc] == '\x02') {
        uStack_e8 = param_2[5];
        local_f0 = param_2[4];
        uStack_d8 = param_2[7];
        uStack_e0 = param_2[6];
        local_d0 = param_2[8];
        uStack_108 = param_2[1];
        local_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        puVar5 = &local_b0;
        FUN_1004b7d0c(puVar5,&local_110);
        uVar4 = (uint)puVar5;
        goto LAB_1004b8bac;
      }
    }
    else {
      uStack_80 = param_1[6];
      local_88 = param_1[5];
      local_78 = param_1[7];
      if ((char)param_2[0xc] == '\x03') {
        uStack_108 = param_2[1];
        local_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        uStack_e8 = param_2[5];
        local_f0 = param_2[4];
        uStack_d8 = param_2[7];
        uStack_e0 = param_2[6];
        puVar5 = &local_b0;
        FUN_1004b7f64(puVar5,&local_110);
        uVar4 = (uint)puVar5;
        goto LAB_1004b8bac;
      }
    }
  }
  else if (bVar3 < 6) {
    if (bVar3 == 4) {
      uStack_80 = param_1[6];
      local_88 = param_1[5];
      local_78 = param_1[7];
      if ((char)param_2[0xc] == '\x04') {
        uStack_108 = param_2[1];
        local_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        uStack_e8 = param_2[5];
        local_f0 = param_2[4];
        uStack_d8 = param_2[7];
        uStack_e0 = param_2[6];
        puVar5 = &local_b0;
        FUN_1004b81bc(puVar5,&local_110);
        uVar4 = (uint)puVar5;
        goto LAB_1004b8bac;
      }
    }
    else {
      uStack_80 = param_1[6];
      local_88 = param_1[5];
      uStack_70 = param_1[8];
      local_78 = param_1[7];
      if ((char)param_2[0xc] == '\x05') {
        uStack_e8 = param_2[5];
        local_f0 = param_2[4];
        uStack_d8 = param_2[7];
        uStack_e0 = param_2[6];
        local_d0 = param_2[8];
        uStack_108 = param_2[1];
        local_110 = *param_2;
        uStack_f8 = param_2[3];
        uStack_100 = param_2[2];
        puVar5 = &local_b0;
        FUN_1004b82fc(puVar5,&local_110);
        uVar4 = (uint)puVar5;
        goto LAB_1004b8bac;
      }
    }
  }
  else if (bVar3 == 6) {
    uStack_80 = param_1[6];
    local_88 = param_1[5];
    uStack_70 = param_1[8];
    local_78 = param_1[7];
    uStack_60 = param_1[10];
    local_68 = param_1[9];
    local_58 = param_1[0xb];
    if ((char)param_2[0xc] == '\x06') {
      uStack_e8 = param_2[5];
      local_f0 = param_2[4];
      uStack_d8 = param_2[7];
      uStack_e0 = param_2[6];
      uStack_c8 = param_2[9];
      local_d0 = param_2[8];
      uStack_b8 = param_2[0xb];
      uStack_c0 = param_2[10];
      uStack_108 = param_2[1];
      local_110 = *param_2;
      uStack_f8 = param_2[3];
      uStack_100 = param_2[2];
      puVar5 = &local_b0;
      FUN_1004b8628(puVar5,&local_110);
      uVar4 = (uint)puVar5;
      goto LAB_1004b8bac;
    }
  }
  else if ((char)param_2[0xc] == '\a') {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar10 = param_2[4];
    if ((((uVar6 == *param_2) && (uStack_a8 == param_2[1])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar6,uStack_a8,*param_2,param_2[1],0), (uVar6 & 1) != 0)) &&
       ((FUN_10042918c(uVar7,uVar1), (uVar7 & 1) != 0 &&
        (FUN_1000094a4(uVar8,uVar9,uVar2,uVar10), (uVar8 & 1) != 0)))) {
      uVar4 = 1;
      goto LAB_1004b8bac;
    }
  }
  uVar4 = 0;
LAB_1004b8bac:
  return uVar4 & 1;
}

