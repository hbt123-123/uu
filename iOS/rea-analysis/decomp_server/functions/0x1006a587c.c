// rea decompile_all
// name: FUN_1006a587c
// address: 0x1006a587c
// body: available
// range: 0x1006a587c-0x1006a6427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a6124 to 0x1006a6428 FUN_1006a6428 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006a61fc to 0x1006a66dc FUN_1006a66dc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006a6234 to 0x1006a7154 FUN_1006a7154 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006a62f4 to 0x1006a67f8 FUN_1006a67f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a587c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint local_184;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_184 = param_5;
LAB_1006a58ac:
  puVar11 = param_2 + -3;
  puVar5 = param_2 + -6;
  puVar6 = param_2 + -9;
  do {
    param_4 = -param_4;
    puVar3 = param_1;
    do {
      param_1 = puVar3;
      param_4 = param_4 + 1;
      uVar7 = (long)param_2 - (long)param_1;
      uVar9 = ((long)uVar7 >> 3) * -0x5555555555555555;
      if (2 < (long)uVar9) {
        if (uVar9 != 3) {
          if (uVar9 != 4) {
            if (uVar9 == 5) {
              FUN_1006a6428(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar11,param_3);
              return;
            }
            goto LAB_1006a5914;
          }
          puVar5 = param_1 + 3;
          (*(code *)*param_3)(puVar5,param_1);
          puVar6 = param_1 + 6;
          (*(code *)*param_3)(puVar6,param_1 + 3);
          if (((ulong)puVar5 & 1) == 0) {
            if ((int)puVar6 != 0) {
              uVar8 = param_1[5];
              uVar12 = param_1[4];
              uVar10 = param_1[3];
              param_1[4] = param_1[7];
              param_1[3] = param_1[6];
              param_1[5] = param_1[8];
              param_1[7] = uVar12;
              param_1[6] = uVar10;
              param_1[8] = uVar8;
              puVar5 = param_1 + 3;
              (*(code *)*param_3)(puVar5,param_1);
              if ((int)puVar5 != 0) {
                uVar12 = param_1[1];
                uVar10 = *param_1;
                uVar8 = param_1[2];
                param_1[1] = param_1[4];
                *param_1 = param_1[3];
                param_1[2] = param_1[5];
                param_1[4] = uVar12;
                param_1[3] = uVar10;
                param_1[5] = uVar8;
              }
            }
          }
          else {
            if ((int)puVar6 == 0) {
              uVar12 = param_1[1];
              uVar10 = *param_1;
              uVar8 = param_1[2];
              param_1[1] = param_1[4];
              *param_1 = param_1[3];
              param_1[2] = param_1[5];
              param_1[4] = uVar12;
              param_1[3] = uVar10;
              param_1[5] = uVar8;
              puVar5 = param_1 + 6;
              (*(code *)*param_3)(puVar5,param_1 + 3);
              if ((int)puVar5 == 0) goto LAB_1006a635c;
              uVar8 = param_1[5];
              uVar12 = param_1[4];
              uVar10 = param_1[3];
              param_1[4] = param_1[7];
              param_1[3] = param_1[6];
              param_1[5] = param_1[8];
              param_1[7] = uVar12;
              param_1[6] = uVar10;
            }
            else {
              uVar12 = param_1[1];
              uVar10 = *param_1;
              uVar8 = param_1[2];
              param_1[1] = param_1[7];
              *param_1 = param_1[6];
              param_1[2] = param_1[8];
              param_1[7] = uVar12;
              param_1[6] = uVar10;
            }
            param_1[8] = uVar8;
          }
LAB_1006a635c:
          puVar5 = puVar11;
          (*(code *)*param_3)(puVar11,param_1 + 6);
          if ((int)puVar5 == 0) {
            return;
          }
          uVar8 = param_1[8];
          uVar13 = param_1[7];
          uVar12 = param_1[6];
          uVar10 = param_2[-1];
          uVar14 = *puVar11;
          param_1[7] = param_2[-2];
          param_1[6] = uVar14;
          param_1[8] = uVar10;
          param_2[-2] = uVar13;
          *puVar11 = uVar12;
          param_2[-1] = uVar8;
          puVar5 = param_1 + 6;
          (*(code *)*param_3)(puVar5,param_1 + 3);
          if ((int)puVar5 == 0) {
            return;
          }
          uVar8 = param_1[5];
          uVar12 = param_1[4];
          uVar10 = param_1[3];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
          param_1[7] = uVar12;
          param_1[6] = uVar10;
          param_1[8] = uVar8;
LAB_1006a63c4:
          puVar5 = param_1 + 3;
          (*(code *)*param_3)(puVar5,param_1);
          if ((int)puVar5 == 0) {
            return;
          }
          uVar12 = param_1[1];
          uVar10 = *param_1;
          uVar8 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar12;
          param_1[3] = uVar10;
          param_1[5] = uVar8;
          return;
        }
        puVar5 = param_1 + 3;
        (*(code *)*param_3)(puVar5,param_1);
        puVar6 = puVar11;
        (*(code *)*param_3)(puVar11,param_1 + 3);
        if (((ulong)puVar5 & 1) == 0) {
          if ((int)puVar6 == 0) {
            return;
          }
          uVar8 = param_1[5];
          uVar13 = param_1[4];
          uVar12 = param_1[3];
          uVar10 = param_2[-1];
          uVar14 = *puVar11;
          param_1[4] = param_2[-2];
          param_1[3] = uVar14;
          param_1[5] = uVar10;
          param_2[-2] = uVar13;
          *puVar11 = uVar12;
          param_2[-1] = uVar8;
          goto LAB_1006a63c4;
        }
        if ((int)puVar6 == 0) {
          uVar12 = param_1[1];
          uVar10 = *param_1;
          uVar8 = param_1[2];
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar12;
          param_1[3] = uVar10;
          param_1[5] = uVar8;
          puVar5 = puVar11;
          (*(code *)*param_3)(puVar11,param_1 + 3);
          if ((int)puVar5 == 0) {
            return;
          }
          uVar8 = param_1[5];
          uVar13 = param_1[4];
          uVar12 = param_1[3];
          uVar10 = param_2[-1];
          uVar14 = *puVar11;
          param_1[4] = param_2[-2];
          param_1[3] = uVar14;
          param_1[5] = uVar10;
          param_2[-2] = uVar13;
          *puVar11 = uVar12;
          goto LAB_1006a6168;
        }
LAB_1006a613c:
        uVar13 = param_1[1];
        uVar10 = *param_1;
        uVar8 = param_1[2];
        uVar14 = param_2[-2];
        uVar12 = *puVar11;
        param_1[2] = param_2[-1];
        param_1[1] = uVar14;
        *param_1 = uVar12;
        param_2[-2] = uVar13;
        *puVar11 = uVar10;
LAB_1006a6168:
        param_2[-1] = uVar8;
        return;
      }
      if (uVar9 < 2) {
        return;
      }
      if (uVar9 == 2) {
        puVar5 = puVar11;
        (*(code *)*param_3)(puVar11,param_1);
        if ((int)puVar5 == 0) {
          return;
        }
        goto LAB_1006a613c;
      }
LAB_1006a5914:
      if ((long)uVar7 < 0x240) {
        if ((local_184 & 1) != 0) {
          FUN_1006a66dc(param_1,param_2,param_3);
          return;
        }
        FUN_1006a67f8(param_1,param_2,param_3);
        return;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_1006a7154(param_1,param_2,param_2,param_3);
        return;
      }
      uVar9 = uVar9 >> 1;
      puVar3 = param_1 + uVar9 * 3;
      if (uVar7 < 0xc01) {
        puVar1 = param_1;
        (*(code *)*param_3)(param_1,puVar3);
        puVar2 = puVar11;
        (*(code *)*param_3)(puVar11,param_1);
        if (((ulong)puVar1 & 1) == 0) {
          if ((int)puVar2 != 0) {
            uVar13 = param_1[1];
            uVar10 = *param_1;
            uVar8 = param_1[2];
            uVar14 = param_2[-2];
            uVar12 = *puVar11;
            param_1[2] = param_2[-1];
            param_1[1] = uVar14;
            *param_1 = uVar12;
            param_2[-2] = uVar13;
            *puVar11 = uVar10;
            param_2[-1] = uVar8;
            puVar1 = param_1;
            (*(code *)*param_3)(param_1,puVar3);
            if ((int)puVar1 != 0) {
              uVar13 = puVar3[1];
              uVar10 = *puVar3;
              uVar8 = puVar3[2];
              uVar14 = param_1[1];
              uVar12 = *param_1;
              puVar3[2] = param_1[2];
              puVar3[1] = uVar14;
              *puVar3 = uVar12;
              param_1[2] = uVar8;
              param_1[1] = uVar13;
              *param_1 = uVar10;
            }
          }
        }
        else {
          if ((int)puVar2 == 0) {
            uVar13 = puVar3[1];
            uVar10 = *puVar3;
            uVar8 = puVar3[2];
            uVar14 = param_1[1];
            uVar12 = *param_1;
            puVar3[2] = param_1[2];
            puVar3[1] = uVar14;
            *puVar3 = uVar12;
            param_1[2] = uVar8;
            param_1[1] = uVar13;
            *param_1 = uVar10;
            puVar3 = puVar11;
            (*(code *)*param_3)(puVar11,param_1);
            if ((int)puVar3 == 0) goto LAB_1006a5fa4;
            uStack_78 = param_1[1];
            local_80 = *param_1;
            local_70 = param_1[2];
            uVar10 = param_2[-2];
            uVar8 = *puVar11;
            param_1[2] = param_2[-1];
            param_1[1] = uVar10;
            *param_1 = uVar8;
          }
          else {
            uStack_78 = puVar3[1];
            local_80 = *puVar3;
            local_70 = puVar3[2];
            uVar10 = param_2[-2];
            uVar8 = *puVar11;
            puVar3[2] = param_2[-1];
            puVar3[1] = uVar10;
            *puVar3 = uVar8;
          }
          param_2[-2] = uStack_78;
          *puVar11 = local_80;
          param_2[-1] = local_70;
        }
      }
      else {
        puVar1 = puVar3;
        (*(code *)*param_3)(puVar3,param_1);
        puVar2 = puVar11;
        (*(code *)*param_3)(puVar11,puVar3);
        if (((ulong)puVar1 & 1) == 0) {
          if ((int)puVar2 != 0) {
            uVar13 = puVar3[1];
            uVar10 = *puVar3;
            uVar8 = puVar3[2];
            uVar14 = param_2[-2];
            uVar12 = *puVar11;
            puVar3[2] = param_2[-1];
            puVar3[1] = uVar14;
            *puVar3 = uVar12;
            param_2[-2] = uVar13;
            *puVar11 = uVar10;
            param_2[-1] = uVar8;
            puVar1 = puVar3;
            (*(code *)*param_3)(puVar3,param_1);
            if ((int)puVar1 != 0) {
              uVar13 = param_1[1];
              uVar10 = *param_1;
              uVar8 = param_1[2];
              uVar14 = puVar3[1];
              uVar12 = *puVar3;
              param_1[2] = puVar3[2];
              param_1[1] = uVar14;
              *param_1 = uVar12;
              puVar3[2] = uVar8;
              puVar3[1] = uVar13;
              *puVar3 = uVar10;
            }
          }
        }
        else {
          if ((int)puVar2 == 0) {
            uVar13 = param_1[1];
            uVar10 = *param_1;
            uVar8 = param_1[2];
            uVar14 = puVar3[1];
            uVar12 = *puVar3;
            param_1[2] = puVar3[2];
            param_1[1] = uVar14;
            *param_1 = uVar12;
            puVar3[2] = uVar8;
            puVar3[1] = uVar13;
            *puVar3 = uVar10;
            puVar1 = puVar11;
            (*(code *)*param_3)(puVar11,puVar3);
            if ((int)puVar1 == 0) goto LAB_1006a5b40;
            uStack_78 = puVar3[1];
            local_80 = *puVar3;
            local_70 = puVar3[2];
            uVar10 = param_2[-2];
            uVar8 = *puVar11;
            puVar3[2] = param_2[-1];
            puVar3[1] = uVar10;
            *puVar3 = uVar8;
          }
          else {
            uStack_78 = param_1[1];
            local_80 = *param_1;
            local_70 = param_1[2];
            uVar10 = param_2[-2];
            uVar8 = *puVar11;
            param_1[2] = param_2[-1];
            param_1[1] = uVar10;
            *param_1 = uVar8;
          }
          param_2[-2] = uStack_78;
          *puVar11 = local_80;
          param_2[-1] = local_70;
        }
LAB_1006a5b40:
        puVar4 = param_1 + uVar9 * 3 + -3;
        puVar1 = puVar4;
        (*(code *)*param_3)(puVar4,param_1 + 3);
        puVar2 = puVar5;
        (*(code *)*param_3)(puVar5,puVar4);
        if (((ulong)puVar1 & 1) == 0) {
          if ((int)puVar2 != 0) {
            uVar13 = param_1[uVar9 * 3 + -2];
            uVar10 = *puVar4;
            uVar8 = param_1[uVar9 * 3 + -1];
            uVar14 = param_2[-5];
            uVar12 = *puVar5;
            param_1[uVar9 * 3 + -1] = param_2[-4];
            param_1[uVar9 * 3 + -2] = uVar14;
            *puVar4 = uVar12;
            param_2[-5] = uVar13;
            *puVar5 = uVar10;
            param_2[-4] = uVar8;
            puVar1 = puVar4;
            (*(code *)*param_3)(puVar4,param_1 + 3);
            if ((int)puVar1 != 0) {
              uVar13 = param_1[4];
              uVar12 = param_1[3];
              uVar8 = param_1[5];
              uVar10 = param_1[uVar9 * 3 + -1];
              uVar14 = *puVar4;
              param_1[4] = param_1[uVar9 * 3 + -2];
              param_1[3] = uVar14;
              param_1[5] = uVar10;
              param_1[uVar9 * 3 + -1] = uVar8;
              param_1[uVar9 * 3 + -2] = uVar13;
              *puVar4 = uVar12;
            }
          }
        }
        else if ((int)puVar2 == 0) {
          uVar13 = param_1[4];
          uVar12 = param_1[3];
          uVar8 = param_1[5];
          uVar10 = param_1[uVar9 * 3 + -1];
          uVar14 = *puVar4;
          param_1[4] = param_1[uVar9 * 3 + -2];
          param_1[3] = uVar14;
          param_1[5] = uVar10;
          param_1[uVar9 * 3 + -1] = uVar8;
          param_1[uVar9 * 3 + -2] = uVar13;
          *puVar4 = uVar12;
          puVar1 = puVar5;
          (*(code *)*param_3)(puVar5,puVar4);
          if ((int)puVar1 != 0) {
            uVar13 = param_1[uVar9 * 3 + -2];
            uVar10 = *puVar4;
            uVar8 = param_1[uVar9 * 3 + -1];
            uVar14 = param_2[-5];
            uVar12 = *puVar5;
            param_1[uVar9 * 3 + -1] = param_2[-4];
            param_1[uVar9 * 3 + -2] = uVar14;
            *puVar4 = uVar12;
            param_2[-5] = uVar13;
            *puVar5 = uVar10;
            param_2[-4] = uVar8;
          }
        }
        else {
          uVar8 = param_1[5];
          uVar13 = param_1[4];
          uVar12 = param_1[3];
          uVar10 = param_2[-4];
          uVar14 = *puVar5;
          param_1[4] = param_2[-5];
          param_1[3] = uVar14;
          param_1[5] = uVar10;
          param_2[-5] = uVar13;
          *puVar5 = uVar12;
          param_2[-4] = uVar8;
        }
        puVar1 = param_1 + uVar9 * 3 + 3;
        (*(code *)*param_3)(puVar1,param_1 + 6);
        puVar2 = puVar6;
        (*(code *)*param_3)(puVar6,param_1 + uVar9 * 3 + 3);
        if (((ulong)puVar1 & 1) == 0) {
          if ((int)puVar2 != 0) {
            uVar13 = param_1[uVar9 * 3 + 4];
            uVar10 = param_1[uVar9 * 3 + 3];
            uVar8 = param_1[uVar9 * 3 + 5];
            uVar14 = param_2[-8];
            uVar12 = *puVar6;
            param_1[uVar9 * 3 + 5] = param_2[-7];
            param_1[uVar9 * 3 + 4] = uVar14;
            param_1[uVar9 * 3 + 3] = uVar12;
            param_2[-8] = uVar13;
            *puVar6 = uVar10;
            param_2[-7] = uVar8;
            puVar1 = param_1 + uVar9 * 3 + 3;
            (*(code *)*param_3)(puVar1,param_1 + 6);
            if ((int)puVar1 != 0) {
              uVar13 = param_1[7];
              uVar12 = param_1[6];
              uVar8 = param_1[8];
              uVar10 = param_1[uVar9 * 3 + 5];
              uVar14 = param_1[uVar9 * 3 + 3];
              param_1[7] = param_1[uVar9 * 3 + 4];
              param_1[6] = uVar14;
              param_1[8] = uVar10;
              param_1[uVar9 * 3 + 5] = uVar8;
              param_1[uVar9 * 3 + 4] = uVar13;
              param_1[uVar9 * 3 + 3] = uVar12;
            }
          }
        }
        else {
          if ((int)puVar2 == 0) {
            uVar13 = param_1[7];
            uVar12 = param_1[6];
            uVar8 = param_1[8];
            uVar10 = param_1[uVar9 * 3 + 5];
            uVar14 = param_1[uVar9 * 3 + 3];
            param_1[7] = param_1[uVar9 * 3 + 4];
            param_1[6] = uVar14;
            param_1[8] = uVar10;
            param_1[uVar9 * 3 + 5] = uVar8;
            param_1[uVar9 * 3 + 4] = uVar13;
            param_1[uVar9 * 3 + 3] = uVar12;
            puVar1 = puVar6;
            (*(code *)*param_3)(puVar6,param_1 + uVar9 * 3 + 3);
            if ((int)puVar1 == 0) goto LAB_1006a5e34;
            uVar13 = param_1[uVar9 * 3 + 4];
            uVar10 = param_1[uVar9 * 3 + 3];
            uVar8 = param_1[uVar9 * 3 + 5];
            uVar14 = param_2[-8];
            uVar12 = *puVar6;
            param_1[uVar9 * 3 + 5] = param_2[-7];
            param_1[uVar9 * 3 + 4] = uVar14;
            param_1[uVar9 * 3 + 3] = uVar12;
            param_2[-8] = uVar13;
            *puVar6 = uVar10;
          }
          else {
            uVar8 = param_1[8];
            uVar13 = param_1[7];
            uVar12 = param_1[6];
            uVar10 = param_2[-7];
            uVar14 = *puVar6;
            param_1[7] = param_2[-8];
            param_1[6] = uVar14;
            param_1[8] = uVar10;
            param_2[-8] = uVar13;
            *puVar6 = uVar12;
          }
          param_2[-7] = uVar8;
        }
LAB_1006a5e34:
        puVar2 = puVar3;
        (*(code *)*param_3)(puVar3,puVar4);
        puVar1 = param_1 + uVar9 * 3 + 3;
        (*(code *)*param_3)(puVar1,puVar3);
        if (((ulong)puVar2 & 1) == 0) {
          if ((int)puVar1 != 0) {
            uVar13 = puVar3[1];
            uVar10 = *puVar3;
            uVar8 = puVar3[2];
            uVar12 = param_1[uVar9 * 3 + 3];
            puVar3[1] = param_1[uVar9 * 3 + 4];
            *puVar3 = uVar12;
            puVar3[2] = param_1[uVar9 * 3 + 5];
            param_1[uVar9 * 3 + 5] = uVar8;
            param_1[uVar9 * 3 + 4] = uVar13;
            param_1[uVar9 * 3 + 3] = uVar10;
            puVar1 = puVar3;
            (*(code *)*param_3)(puVar3,puVar4);
            if ((int)puVar1 != 0) {
              uVar13 = param_1[uVar9 * 3 + -2];
              uVar10 = *puVar4;
              uVar8 = param_1[uVar9 * 3 + -1];
              uVar12 = *puVar3;
              param_1[uVar9 * 3 + -2] = puVar3[1];
              *puVar4 = uVar12;
              param_1[uVar9 * 3 + -1] = puVar3[2];
              puVar3[2] = uVar8;
              puVar3[1] = uVar13;
              *puVar3 = uVar10;
            }
          }
        }
        else {
          if ((int)puVar1 == 0) {
            uVar13 = param_1[uVar9 * 3 + -2];
            uVar10 = *puVar4;
            uVar8 = param_1[uVar9 * 3 + -1];
            uVar12 = *puVar3;
            param_1[uVar9 * 3 + -2] = puVar3[1];
            *puVar4 = uVar12;
            param_1[uVar9 * 3 + -1] = puVar3[2];
            puVar3[2] = uVar8;
            puVar3[1] = uVar13;
            *puVar3 = uVar10;
            puVar1 = param_1 + uVar9 * 3 + 3;
            (*(code *)*param_3)(puVar1,puVar3);
            if ((int)puVar1 == 0) goto LAB_1006a5f74;
            uStack_78 = puVar3[1];
            local_80 = *puVar3;
            local_70 = puVar3[2];
            uVar8 = param_1[uVar9 * 3 + 3];
            puVar3[1] = param_1[uVar9 * 3 + 4];
            *puVar3 = uVar8;
            puVar3[2] = param_1[uVar9 * 3 + 5];
          }
          else {
            uStack_78 = param_1[uVar9 * 3 + -2];
            local_80 = *puVar4;
            local_70 = param_1[uVar9 * 3 + -1];
            param_1[uVar9 * 3 + -2] = param_1[uVar9 * 3 + 4];
            *puVar4 = param_1[uVar9 * 3 + 3];
            param_1[uVar9 * 3 + -1] = param_1[uVar9 * 3 + 5];
          }
          param_1[uVar9 * 3 + 5] = local_70;
          param_1[uVar9 * 3 + 4] = uStack_78;
          param_1[uVar9 * 3 + 3] = local_80;
        }
LAB_1006a5f74:
        uVar13 = param_1[1];
        uVar10 = *param_1;
        uVar8 = param_1[2];
        uVar14 = puVar3[1];
        uVar12 = *puVar3;
        param_1[2] = puVar3[2];
        param_1[1] = uVar14;
        *param_1 = uVar12;
        puVar3[2] = uVar8;
        puVar3[1] = uVar13;
        *puVar3 = uVar10;
      }
LAB_1006a5fa4:
      if ((local_184 & 1) == 0) {
        puVar3 = param_1 + -3;
        (*(code *)*param_3)(puVar3,param_1);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_1006a68f0(param_1,param_2,param_3);
          goto LAB_1006a6044;
        }
      }
      puVar1 = param_1;
      puVar3 = param_2;
      FUN_1006a6a80(param_1,param_2,param_3);
      if (((ulong)puVar3 & 1) == 0) break;
      puVar2 = param_1;
      FUN_1006a6c0c(param_1,puVar1,param_3);
      puVar3 = puVar1 + 3;
      puVar4 = puVar3;
      FUN_1006a6c0c(puVar3,param_2,param_3);
      if ((int)puVar4 != 0) {
        param_4 = -param_4;
        param_2 = puVar1;
        if (((ulong)puVar2 & 1) != 0) {
          return;
        }
        goto LAB_1006a58ac;
      }
    } while (((ulong)puVar2 & 1) != 0);
    FUN_1006a587c(param_1,puVar1,param_3,-param_4,local_184 & 1);
    param_1 = puVar1 + 3;
LAB_1006a6044:
    local_184 = 0;
    param_4 = -param_4;
  } while( true );
}

