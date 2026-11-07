// rea decompile_all
// name: FUN_10049ce7c
// address: 0x10049ce7c
// body: available
// range: 0x10049ce7c-0x10049d18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10049ce7c(ulong *param_1,ulong *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  double dStack_80;
  double local_78;
  
  local_a8 = *param_1;
  uVar7 = param_1[1];
  local_98 = param_1[2];
  uStack_90 = param_1[3];
  local_88 = param_1[4];
  dVar2 = (double)param_1[5];
  dVar1 = (double)param_1[6];
  uVar6 = param_1[7];
  uVar9 = param_1[9];
  uVar4 = (uint)(uVar9 >> 0x3b) & 6 | (uint)(uVar6 >> 0x3f);
  if (uVar4 < 3) {
    uVar3 = (uint)(local_a8 >> 8);
    if (uVar4 == 0) {
      if (((uint)(param_2[9] >> 0x3b) & 6) == 0 && -1 < (long)param_2[7]) {
        local_a8 = local_a8 ^ *param_2;
        if (((((local_a8 & 1) == 0) && ((uVar3 & 1) != (uint)((*param_2 & 0x100) == 0))) &&
            (local_a8 >> 0x20 == 0)) &&
           (((int)uVar7 == (int)param_2[1] &&
            (((uint)(uVar7 >> 0x20) & 1) == ((uint)(param_2[1] >> 0x20) & 1))))) {
          uVar7 = param_2[4] & 0xff;
          if ((local_88 & 0xff) == 2) {
            if (uVar7 == 2) {
LAB_10049d150:
              FUN_1000094a4(local_98,uStack_90,param_2[2],param_2[3]);
              uVar7 = local_98;
              goto joined_r0x00010049d15c;
            }
          }
          else if ((uVar7 != 2) && ((((uint)local_88 ^ (uint)param_2[4]) & 1) == 0))
          goto LAB_10049d150;
        }
      }
    }
    else if (uVar4 == 1) {
      uVar11 = param_2[7];
      uVar10 = param_2[9];
      if (((((uint)(uVar10 >> 0x3b) & 6 | (uint)(uVar11 >> 0x3f)) == 1) && (local_a8 == *param_2))
         && (uVar7 == param_2[1])) {
        uVar7 = param_1[8];
        uVar12 = param_2[4];
        dVar14 = (double)param_2[5];
        dVar13 = (double)param_2[6];
        uVar8 = param_2[8];
        FUN_1000094a4(local_98,uStack_90,param_2[2],param_2[3]);
        if (((((int)uVar6 == (int)uVar11) && ((local_98 & 1) != 0)) &&
            ((uint)local_88 == (uint)uVar12)) && ((dVar14 == dVar2 && (dVar13 == dVar1)))) {
          FUN_1000094a4(uVar7,uVar9 & 0xcfffffffffffffff,uVar8,uVar10 & 0xcfffffffffffffff);
          goto joined_r0x00010049d15c;
        }
      }
    }
    else if (((((((uint)(param_2[9] >> 0x3b) & 6 | (uint)(param_2[7] >> 0x3f)) == 2) &&
               (uVar6 = *param_2, (((uint)local_a8 ^ (uint)uVar6) & 1) == 0)) &&
              ((uVar3 & 1) == ((uint)(uVar6 >> 8) & 1))) &&
             ((((uint)(local_a8 >> 0x10) & 1) == ((uint)(uVar6 >> 0x10) & 1) &&
              (((uint)(local_a8 >> 0x18) & 1) == ((uint)(uVar6 >> 0x18) & 1))))) &&
            (((uint)(local_a8 >> 0x20) & 1) == ((uint)(uVar6 >> 0x20) & 1))) {
LAB_10049d12c:
      FUN_1000094a4(uVar7,local_98,param_2[1],param_2[2]);
joined_r0x00010049d15c:
      if ((uVar7 & 1) != 0) {
        uVar4 = 1;
        goto LAB_10049d164;
      }
    }
  }
  else if (uVar4 == 3) {
    if (((uint)(param_2[9] >> 0x3b) & 6 | (uint)(param_2[7] >> 0x3f)) == 3) {
LAB_10049d120:
      if ((((uint)local_a8 ^ (uint)*param_2) & 1) == 0) goto LAB_10049d12c;
    }
  }
  else if (uVar4 == 4) {
    if (((uint)(param_2[9] >> 0x3b) & 6 | (uint)(param_2[7] >> 0x3f)) == 4) {
      local_b0 = param_2[6];
      uStack_d8 = param_2[1];
      local_e0 = *param_2;
      uStack_c8 = param_2[3];
      uStack_d0 = param_2[2];
      uStack_b8 = param_2[5];
      local_c0 = param_2[4];
      puVar5 = &local_a8;
      uStack_a0 = uVar7;
      dStack_80 = dVar2;
      local_78 = dVar1;
      FUN_10049cda4(puVar5,&local_e0);
      uVar4 = (uint)puVar5;
      goto LAB_10049d164;
    }
  }
  else if (((uint)(param_2[9] >> 0x3b) & 6 | (uint)(param_2[7] >> 0x3f)) == 5) goto LAB_10049d120;
  uVar4 = 0;
LAB_10049d164:
  return uVar4 & 1;
}

