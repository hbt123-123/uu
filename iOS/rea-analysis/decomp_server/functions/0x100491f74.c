// rea decompile_all
// name: FUN_100491f74
// address: 0x100491f74
// body: available
// range: 0x100491f74-0x1004923af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100491f74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  
  uVar6 = *param_1;
  uVar10 = param_1[1];
  uVar13 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  uStack_78 = param_1[5];
  local_70 = param_1[6];
  uVar4 = (uint)(local_70 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3d) & 1;
  local_a0 = uVar6;
  uStack_98 = uVar10;
  local_90 = uVar13;
  uStack_88 = uVar5;
  if (uVar4 < 3) {
    if (uVar4 == 0) {
      uVar9 = param_2[4];
      if ((((uint)(param_2[6] >> 0x3b) & 6) == 0 && ((uint)(uVar9 >> 0x3d) & 1) == 0) &&
         ((((uint)uVar6 ^ (uint)*param_2) & 1) == 0)) {
        uVar6 = param_2[2];
        uVar8 = param_2[3];
        FUN_10042af60(uVar10,param_2[1]);
        if (((uVar10 & 1) != 0) && (FUN_1000e3c6c(uVar13,uVar6), (uVar13 & 1) != 0)) {
          FUN_1000094a4(uVar5,uVar1 & 0xdfffffffffffffff,uVar8,uVar9 & 0xdfffffffffffffff);
          goto joined_r0x0001004920f4;
        }
      }
    }
    else if (uVar4 == 1) {
      uVar9 = param_2[4];
      if (((uint)(param_2[6] >> 0x3b) & 6 | (uint)(uVar9 >> 0x3d) & 1) == 1) {
        uVar13 = *param_2;
        lVar11 = *(long *)(uVar6 + 0x10);
        if (lVar11 == *(long *)(uVar13 + 0x10)) {
          uVar2 = param_2[1];
          uVar8 = param_2[3];
          if (lVar11 != 0 && uVar6 != uVar13) {
            piVar12 = (int *)(uVar6 + 0x20);
            piVar14 = (int *)(uVar13 + 0x20);
            do {
              if (lVar11 == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1004923b0);
                (*pcVar3)();
              }
              if (*piVar12 != *piVar14) goto LAB_100492388;
              piVar12 = piVar12 + 1;
              piVar14 = piVar14 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          if ((param_2[2] & 1) == 0) {
            if (uVar10 == uVar2) goto LAB_100492284;
          }
          else if ((long)uVar2 < 3) {
            if (uVar2 == 0) {
joined_r0x000100492274:
              if (uVar10 == 0) {
LAB_100492284:
                FUN_1000094a4(uVar5,uVar1 & 0xdfffffffffffffff,uVar8,uVar9 & 0xdfffffffffffffff);
                goto joined_r0x0001004920f4;
              }
            }
            else if (uVar2 == 1) {
              if (uVar10 == 1) goto LAB_100492284;
            }
            else if (uVar10 == 2) goto LAB_100492284;
          }
          else if (uVar2 == 3) {
            if (uVar10 == 3) goto LAB_100492284;
          }
          else if (uVar2 == 4) {
            if (uVar10 == 4) goto LAB_100492284;
          }
          else if (uVar10 == 5) goto LAB_100492284;
        }
      }
    }
    else {
      local_58 = param_1[9];
      local_80 = uVar1 & 0xdfffffffffffffff;
      local_70 = local_70 & 0xcfffffffffffffff;
      uStack_60 = param_1[8];
      local_68 = param_1[7];
      if (((uint)(param_2[6] >> 0x3b) & 6 | (uint)(param_2[4] >> 0x3d) & 1) == 2) {
        local_a8 = param_2[9];
        uStack_c8 = param_2[5];
        local_d0 = param_2[4] & 0xdfffffffffffffff;
        local_c0 = param_2[6] & 0xcfffffffffffffff;
        uStack_e8 = param_2[1];
        local_f0 = *param_2;
        uStack_d8 = param_2[3];
        uStack_e0 = param_2[2];
        uStack_b0 = param_2[8];
        local_b8 = param_2[7];
        puVar7 = &local_a0;
        FUN_100491b74(puVar7,&local_f0);
        uVar4 = (uint)puVar7;
        goto LAB_10049238c;
      }
    }
  }
  else if (uVar4 == 3) {
    if (((uint)(param_2[6] >> 0x3b) & 6 | (uint)(param_2[4] >> 0x3d) & 1) == 3) {
      uVar1 = *param_2;
      uVar5 = param_2[1];
      uVar9 = param_2[2];
      if (uVar13 != uVar9) {
        _swift_retain(uVar13);
        _swift_retain(uVar9);
        uVar8 = uVar13;
        FUN_10048cb28(uVar13,uVar9);
        _swift_release(uVar9);
        _swift_release(uVar13);
        if ((uVar8 & 1) == 0) goto LAB_100492388;
      }
      FUN_1000094a4(uVar6,uVar10,uVar1,uVar5);
      uVar5 = uVar6;
joined_r0x0001004920f4:
      if ((uVar5 & 1) != 0) {
        uVar4 = 1;
        goto LAB_10049238c;
      }
    }
  }
  else if (uVar4 == 4) {
    uVar9 = param_2[4];
    if ((((uint)(param_2[6] >> 0x3b) & 6 | (uint)(uVar9 >> 0x3d) & 1) == 4) &&
       ((uint)uVar6 == (uint)*param_2)) {
      uVar6 = param_2[1];
      uVar8 = param_2[3];
      if ((param_2[2] & 1) == 0) {
        if (uVar10 == uVar6) goto LAB_10049226c;
      }
      else if ((long)uVar6 < 4) {
        if ((long)uVar6 < 2) {
          if (uVar6 == 0) {
            if (uVar10 == 0) {
LAB_10049226c:
              uVar10 = (param_2[2] ^ uVar13) >> 0x20;
              goto joined_r0x000100492274;
            }
          }
          else if (uVar10 == 1) goto LAB_10049226c;
        }
        else if (uVar6 == 2) {
          if (uVar10 == 2) goto LAB_10049226c;
        }
        else if (uVar10 == 3) goto LAB_10049226c;
      }
      else if ((long)uVar6 < 6) {
        if (uVar6 == 4) {
          if (uVar10 == 4) goto LAB_10049226c;
        }
        else if (uVar10 == 5) goto LAB_10049226c;
      }
      else if (uVar6 == 6) {
        if (uVar10 == 6) goto LAB_10049226c;
      }
      else if (uVar10 == 7) goto LAB_10049226c;
    }
  }
  else {
    local_80 = uVar1 & 0xdfffffffffffffff;
    local_70 = local_70 & 0xcfffffffffffffff;
    if (((uint)(param_2[6] >> 0x3b) & 6 | (uint)(param_2[4] >> 0x3d) & 1) == 5) {
      uStack_c8 = param_2[5];
      local_d0 = param_2[4] & 0xdfffffffffffffff;
      local_c0 = param_2[6] & 0xcfffffffffffffff;
      uStack_e8 = param_2[1];
      local_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      puVar7 = &local_a0;
      FUN_100491e60(puVar7,&local_f0);
      uVar4 = (uint)puVar7;
      goto LAB_10049238c;
    }
  }
LAB_100492388:
  uVar4 = 0;
LAB_10049238c:
  return uVar4 & 1;
}

