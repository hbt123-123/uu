// rea decompile_all
// name: FUN_100139850
// address: 0x100139850
// body: available
// range: 0x100139850-0x100139aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100139850(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x38;
  lVar2 = ((long)param_3 - (long)param_2) / 0x38;
  if (lVar1 < lVar2) {
    if ((param_4 != param_1) || (param_1 + lVar1 * 7 <= param_4)) {
      _memmove(param_4,param_1,lVar1 * 0x38);
    }
    puVar3 = param_4 + lVar1 * 7;
    puVar5 = param_1;
    if (0x37 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*(int *)(param_2 + 2) < *(int *)(param_4 + 2)) {
          puVar4 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 7;
        }
        else {
          puVar4 = param_4 + 7;
          puVar6 = param_4;
        }
        param_4 = puVar4;
        if (puVar5 != puVar6) {
          uVar8 = puVar6[1];
          uVar7 = *puVar6;
          uVar10 = puVar6[3];
          uVar9 = puVar6[2];
          uVar12 = puVar6[5];
          uVar11 = puVar6[4];
          puVar5[6] = puVar6[6];
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
          puVar5[5] = uVar12;
          puVar5[4] = uVar11;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
        }
        puVar5 = puVar5 + 7;
      } while (param_4 < puVar3);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar2 * 7 <= param_4)) {
      _memmove(param_4,param_2,lVar2 * 0x38);
    }
    puVar3 = param_4 + lVar2 * 7;
    puVar5 = param_2;
    if ((0x37 < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
      do {
        while (puVar6 = param_3 + -7, *(int *)(puVar3 + -5) < *(int *)(param_2 + -5)) {
          puVar5 = param_2 + -7;
          if (param_3 != param_2) {
            uVar8 = param_2[-6];
            uVar7 = *puVar5;
            uVar10 = param_2[-4];
            uVar9 = param_2[-5];
            uVar12 = param_2[-2];
            uVar11 = param_2[-3];
            param_3[-1] = param_2[-1];
            param_3[-4] = uVar10;
            param_3[-5] = uVar9;
            param_3[-2] = uVar12;
            param_3[-3] = uVar11;
            param_3[-6] = uVar8;
            *puVar6 = uVar7;
          }
          if ((puVar3 <= param_4) || (param_3 = puVar6, param_2 = puVar5, puVar5 <= param_1))
          goto LAB_100139a50;
        }
        puVar4 = puVar3 + -7;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-6];
          uVar7 = *puVar4;
          uVar10 = puVar3[-4];
          uVar9 = puVar3[-5];
          uVar12 = puVar3[-2];
          uVar11 = puVar3[-3];
          param_3[-1] = puVar3[-1];
          param_3[-4] = uVar10;
          param_3[-5] = uVar9;
          param_3[-2] = uVar12;
          param_3[-3] = uVar11;
          param_3[-6] = uVar8;
          *puVar6 = uVar7;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_100139a50:
  lVar1 = ((long)puVar3 - (long)param_4) / 0x38;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 7 <= puVar5)) {
    _memmove(puVar5,param_4,lVar1 * 0x38);
  }
  return 1;
}

