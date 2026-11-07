// rea decompile_all
// name: FUN_1006a6c0c
// address: 0x1006a6c0c
// body: available
// range: 0x1006a6c0c-0x1006a7153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1006a6c0c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  
  uVar5 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      puVar3 = param_2 + -3;
      puVar2 = puVar3;
      (*(code *)*param_3)(puVar3,param_1);
      if ((int)puVar2 == 0) {
        return true;
      }
      uVar6 = param_1[2];
      uVar12 = param_1[1];
      uVar11 = *param_1;
      uVar7 = param_2[-1];
      uVar13 = *puVar3;
      param_1[1] = param_2[-2];
      *param_1 = uVar13;
      param_1[2] = uVar7;
      param_2[-2] = uVar12;
      *puVar3 = uVar11;
      param_2[-1] = uVar6;
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      puVar4 = param_2 + -3;
      puVar2 = param_1 + 3;
      (*(code *)*param_3)(puVar2,param_1);
      puVar3 = puVar4;
      (*(code *)*param_3)(puVar4,param_1 + 3);
      if (((ulong)puVar2 & 1) != 0) {
        if ((int)puVar3 == 0) {
          uVar6 = param_1[2];
          uVar11 = param_1[1];
          uVar7 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar11;
          param_1[3] = uVar7;
          param_1[5] = uVar6;
          puVar2 = puVar4;
          (*(code *)*param_3)(puVar4,param_1 + 3);
          if ((int)puVar2 == 0) {
            return true;
          }
          uVar6 = param_1[5];
          uVar12 = param_1[4];
          uVar11 = param_1[3];
          uVar7 = param_2[-1];
          uVar13 = *puVar4;
          param_1[4] = param_2[-2];
          param_1[3] = uVar13;
          param_1[5] = uVar7;
        }
        else {
          uVar6 = param_1[2];
          uVar12 = param_1[1];
          uVar11 = *param_1;
          uVar7 = param_2[-1];
          uVar13 = *puVar4;
          param_1[1] = param_2[-2];
          *param_1 = uVar13;
          param_1[2] = uVar7;
        }
        param_2[-2] = uVar12;
        *puVar4 = uVar11;
        param_2[-1] = uVar6;
        return true;
      }
      if ((int)puVar3 == 0) {
        return true;
      }
      uVar6 = param_1[5];
      uVar12 = param_1[4];
      uVar11 = param_1[3];
      uVar7 = param_2[-1];
      uVar13 = *puVar4;
      param_1[4] = param_2[-2];
      param_1[3] = uVar13;
      param_1[5] = uVar7;
      param_2[-2] = uVar12;
      *puVar4 = uVar11;
      param_2[-1] = uVar6;
      goto LAB_1006a70ec;
    }
    if (uVar5 == 4) {
      puVar4 = param_2 + -3;
      puVar2 = param_1 + 3;
      (*(code *)*param_3)(puVar2,param_1);
      puVar3 = param_1 + 6;
      (*(code *)*param_3)(puVar3,param_1 + 3);
      if (((ulong)puVar2 & 1) == 0) {
        if ((int)puVar3 != 0) {
          uVar6 = param_1[5];
          uVar11 = param_1[4];
          uVar7 = param_1[3];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
          param_1[7] = uVar11;
          param_1[6] = uVar7;
          param_1[8] = uVar6;
          puVar2 = param_1 + 3;
          (*(code *)*param_3)(puVar2,param_1);
          if ((int)puVar2 != 0) {
            uVar6 = param_1[2];
            uVar11 = param_1[1];
            uVar7 = *param_1;
            param_1[1] = param_1[4];
            *param_1 = param_1[3];
            param_1[2] = param_1[5];
            param_1[4] = uVar11;
            param_1[3] = uVar7;
            param_1[5] = uVar6;
          }
        }
      }
      else {
        if ((int)puVar3 == 0) {
          uVar6 = param_1[2];
          uVar11 = param_1[1];
          uVar7 = *param_1;
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          param_1[2] = param_1[5];
          param_1[4] = uVar11;
          param_1[3] = uVar7;
          param_1[5] = uVar6;
          puVar2 = param_1 + 6;
          (*(code *)*param_3)(puVar2,param_1 + 3);
          if ((int)puVar2 == 0) goto LAB_1006a7084;
          uVar6 = param_1[5];
          uVar11 = param_1[4];
          uVar7 = param_1[3];
          param_1[4] = param_1[7];
          param_1[3] = param_1[6];
          param_1[5] = param_1[8];
        }
        else {
          uVar6 = param_1[2];
          uVar11 = param_1[1];
          uVar7 = *param_1;
          param_1[1] = param_1[7];
          *param_1 = param_1[6];
          param_1[2] = param_1[8];
        }
        param_1[7] = uVar11;
        param_1[6] = uVar7;
        param_1[8] = uVar6;
      }
LAB_1006a7084:
      puVar2 = puVar4;
      (*(code *)*param_3)(puVar4,param_1 + 6);
      if ((int)puVar2 == 0) {
        return true;
      }
      uVar6 = param_1[8];
      uVar12 = param_1[7];
      uVar11 = param_1[6];
      uVar7 = param_2[-1];
      uVar13 = *puVar4;
      param_1[7] = param_2[-2];
      param_1[6] = uVar13;
      param_1[8] = uVar7;
      param_2[-2] = uVar12;
      *puVar4 = uVar11;
      param_2[-1] = uVar6;
      puVar2 = param_1 + 6;
      (*(code *)*param_3)(puVar2,param_1 + 3);
      if ((int)puVar2 == 0) {
        return true;
      }
      uVar6 = param_1[5];
      uVar11 = param_1[4];
      uVar7 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = param_1[6];
      param_1[5] = param_1[8];
      param_1[7] = uVar11;
      param_1[6] = uVar7;
      param_1[8] = uVar6;
LAB_1006a70ec:
      puVar2 = param_1 + 3;
      (*(code *)*param_3)(puVar2,param_1);
      if ((int)puVar2 == 0) {
        return true;
      }
      uVar6 = param_1[2];
      uVar11 = param_1[1];
      uVar7 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar11;
      param_1[3] = uVar7;
      param_1[5] = uVar6;
      return true;
    }
    if (uVar5 == 5) {
      FUN_1006a6428(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3,param_3);
      return true;
    }
  }
  puVar2 = param_1 + 6;
  puVar3 = param_1 + 3;
  (*(code *)*param_3)(puVar3,param_1);
  puVar4 = puVar2;
  (*(code *)*param_3)(puVar2,param_1 + 3);
  if (((ulong)puVar3 & 1) == 0) {
    if ((int)puVar4 != 0) {
      uVar6 = param_1[5];
      uVar11 = param_1[4];
      uVar7 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar2;
      param_1[5] = param_1[8];
      param_1[7] = uVar11;
      *puVar2 = uVar7;
      param_1[8] = uVar6;
      puVar3 = param_1 + 3;
      (*(code *)*param_3)(puVar3,param_1);
      if ((int)puVar3 != 0) {
        uVar6 = param_1[2];
        uVar11 = param_1[1];
        uVar7 = *param_1;
        param_1[1] = param_1[4];
        *param_1 = param_1[3];
        param_1[2] = param_1[5];
        param_1[4] = uVar11;
        param_1[3] = uVar7;
        param_1[5] = uVar6;
      }
    }
  }
  else {
    if ((int)puVar4 == 0) {
      uVar6 = param_1[2];
      uVar11 = param_1[1];
      uVar7 = *param_1;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      param_1[2] = param_1[5];
      param_1[4] = uVar11;
      param_1[3] = uVar7;
      param_1[5] = uVar6;
      puVar3 = puVar2;
      (*(code *)*param_3)(puVar2,param_1 + 3);
      if ((int)puVar3 == 0) goto LAB_1006a6f44;
      uVar6 = param_1[5];
      uVar11 = param_1[4];
      uVar7 = param_1[3];
      param_1[4] = param_1[7];
      param_1[3] = *puVar2;
      param_1[5] = param_1[8];
    }
    else {
      uVar6 = param_1[2];
      uVar11 = param_1[1];
      uVar7 = *param_1;
      param_1[1] = param_1[7];
      *param_1 = *puVar2;
      param_1[2] = param_1[8];
    }
    param_1[7] = uVar11;
    *puVar2 = uVar7;
    param_1[8] = uVar6;
  }
LAB_1006a6f44:
  if (param_1 + 9 != param_2) {
    lVar9 = 0;
    iVar10 = 0;
    puVar3 = param_1 + 9;
    do {
      puVar4 = puVar3;
      puVar3 = puVar4;
      (*(code *)*param_3)(puVar4,puVar2);
      if ((int)puVar3 != 0) {
        uStack_2d8 = puVar4[1];
        local_2e0 = *puVar4;
        local_2d0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        lVar1 = lVar9;
        do {
          lVar8 = lVar1;
          if (*(char *)((long)param_1 + lVar8 + 0x5f) < '\0') {
            operator_delete(*(void **)((long)param_1 + lVar8 + 0x48));
          }
          *(undefined8 *)((long)param_1 + lVar8 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x38);
          *(undefined8 *)((long)param_1 + lVar8 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x30);
          *(undefined8 *)((long)param_1 + lVar8 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x40);
          *(undefined1 *)((long)param_1 + lVar8 + 0x47) = 0;
          *(undefined1 *)((long)param_1 + lVar8 + 0x30) = 0;
          puVar2 = param_1;
          if (lVar8 == -0x30) goto LAB_1006a6ff8;
          uVar5 = 0;
          (*(code *)*param_3)(&local_2e0,(long)param_1 + lVar8 + 0x18);
          lVar1 = lVar8 + -0x18;
        } while ((uVar5 & 1) != 0);
        puVar2 = (undefined8 *)((long)param_1 + lVar8 + 0x30);
        if (*(char *)((long)param_1 + lVar8 + 0x47) < '\0') {
          operator_delete((void *)*puVar2);
        }
LAB_1006a6ff8:
        puVar2[1] = uStack_2d8;
        *puVar2 = local_2e0;
        puVar2[2] = local_2d0;
        iVar10 = iVar10 + 1;
        if (iVar10 == 8) {
          return puVar4 + 3 == param_2;
        }
      }
      lVar9 = lVar9 + 0x18;
      puVar3 = puVar4 + 3;
      puVar2 = puVar4;
    } while (puVar4 + 3 != param_2);
  }
  return true;
}

