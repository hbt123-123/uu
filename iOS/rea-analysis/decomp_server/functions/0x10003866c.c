// rea decompile_all
// name: FUN_10003866c
// address: 0x10003866c
// body: available
// range: 0x10003866c-0x1000388c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10003866c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = ((long)param_2 - (long)param_1) / 0x30;
  lVar2 = ((long)param_3 - (long)param_2) / 0x30;
  if (lVar6 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar6 * 6 <= param_4)) {
      _memmove(param_4,param_1,lVar6 * 0x30);
    }
    puVar5 = param_4 + lVar6 * 6;
    puVar7 = param_1;
    if (0x2f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        bVar1 = *(int *)(param_4 + 1) < *(int *)(param_2 + 1);
        if (*(int *)((long)param_2 + 4) != *(int *)((long)param_4 + 4)) {
          bVar1 = *(int *)((long)param_4 + 4) < *(int *)((long)param_2 + 4);
        }
        if (bVar1) {
          puVar8 = param_4;
          puVar4 = param_2;
          param_2 = param_2 + 6;
        }
        else {
          puVar8 = param_4 + 6;
          puVar4 = param_4;
        }
        param_4 = puVar8;
        if (puVar7 != puVar4) {
          uVar10 = puVar4[1];
          uVar9 = *puVar4;
          uVar11 = puVar4[2];
          uVar13 = puVar4[5];
          uVar12 = puVar4[4];
          puVar7[3] = puVar4[3];
          puVar7[2] = uVar11;
          puVar7[5] = uVar13;
          puVar7[4] = uVar12;
          puVar7[1] = uVar10;
          *puVar7 = uVar9;
        }
        puVar7 = puVar7 + 6;
      } while (param_4 < puVar5);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 6 <= param_4)) {
      _memmove(param_4,param_2,lVar2 * 0x30);
    }
    puVar4 = param_4 + lVar2 * 6;
    puVar5 = puVar4;
    puVar7 = param_2;
    if ((0x2f < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
      do {
        while( true ) {
          puVar8 = param_3 + -6;
          bVar1 = *(int *)(param_2 + -5) < *(int *)(puVar4 + -5);
          if (*(int *)((long)puVar4 + -0x2c) != *(int *)((long)param_2 + -0x2c)) {
            bVar1 = *(int *)((long)param_2 + -0x2c) < *(int *)((long)puVar4 + -0x2c);
          }
          if (!bVar1) break;
          puVar7 = param_2 + -6;
          if (param_3 != param_2) {
            uVar10 = param_2[-5];
            uVar9 = *puVar7;
            uVar11 = param_2[-4];
            uVar13 = param_2[-1];
            uVar12 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar11;
            param_3[-1] = uVar13;
            param_3[-2] = uVar12;
            param_3[-5] = uVar10;
            *puVar8 = uVar9;
          }
          puVar5 = puVar4;
          if ((puVar4 <= param_4) || (param_3 = puVar8, param_2 = puVar7, puVar7 <= param_1))
          goto LAB_100038860;
        }
        puVar5 = puVar4 + -6;
        if (param_3 != puVar4) {
          uVar10 = puVar4[-5];
          uVar9 = *puVar5;
          uVar11 = puVar4[-4];
          uVar13 = puVar4[-1];
          uVar12 = puVar4[-2];
          param_3[-3] = puVar4[-3];
          param_3[-4] = uVar11;
          param_3[-1] = uVar13;
          param_3[-2] = uVar12;
          param_3[-5] = uVar10;
          *puVar8 = uVar9;
        }
        puVar4 = puVar5;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar5);
    }
  }
LAB_100038860:
  lVar6 = (long)puVar5 - (long)param_4;
  sVar3 = (((ulong)(lVar6 / 6 + (lVar6 >> 0x3f)) >> 3) - (lVar6 >> 0x3f)) * 0x30;
  if ((puVar7 != param_4) || ((undefined8 *)((long)puVar5 + (sVar3 - lVar6)) <= puVar7)) {
    _memmove(puVar7,param_4,sVar3);
  }
  return 1;
}

