// rea decompile_all
// name: FUN_1001a0078
// address: 0x1001a0078
// body: available
// range: 0x1001a0078-0x1001a01e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001a0078(long param_1,int param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_2 == 10) {
    lVar7 = *(long *)(param_3 + 0x10) + 1;
    piVar6 = (int *)(param_3 + 0x2c);
    do {
      lVar7 = lVar7 + -1;
      bVar4 = lVar7 == 0;
      if (lVar7 == 0) break;
      iVar8 = *piVar6;
      piVar6 = piVar6 + 4;
    } while (iVar8 != 0);
    lVar7 = *(long *)(param_4 + 0x10) + 1;
    piVar6 = (int *)(param_4 + 0x2c);
    do {
      lVar7 = lVar7 + -1;
      bVar5 = lVar7 == 0;
      if (lVar7 == 0) break;
      iVar8 = *piVar6;
      piVar6 = piVar6 + 4;
    } while (iVar8 != 0);
    lVar7 = *(long *)(param_5 + 0x10);
  }
  else {
    bVar5 = false;
    bVar4 = false;
    lVar7 = *(long *)(param_5 + 0x10);
  }
  if (lVar7 != 0) {
    piVar6 = (int *)(param_5 + 0x38);
    lVar10 = lVar7;
    do {
      if (*piVar6 == 0 && piVar6[-6] == 1) {
        bVar1 = bVar4;
        if (piVar6[-5] != param_1 || piVar6[-3] != param_2) {
          bVar1 = true;
        }
        if (!(bool)(bVar5 | bVar1)) {
          bVar1 = false;
          iVar8 = piVar6[-4];
          uVar11 = 1;
          goto LAB_1001a0148;
        }
      }
      piVar6 = piVar6 + 7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar11 = 0;
    bVar1 = true;
    iVar8 = 0;
LAB_1001a0148:
    piVar6 = (int *)(param_5 + 0x38);
    do {
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a01e8);
        (*pcVar3)();
      }
      if (*piVar6 == 0 && piVar6[-6] == 2) {
        bVar2 = bVar4;
        if (piVar6[-5] != param_1 || piVar6[-3] != param_2) {
          bVar2 = true;
        }
        if (!(bool)(bVar5 | bVar2)) {
          if (iVar8 <= piVar6[-4]) {
            bVar1 = true;
          }
          uVar12 = 2;
          iVar9 = piVar6[-4];
          if (!bVar1) {
            uVar12 = uVar11;
            iVar9 = iVar8;
          }
          goto LAB_1001a01d0;
        }
      }
      piVar6 = piVar6 + 7;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar12 = uVar11;
    iVar9 = iVar8;
    if (!bVar1) {
LAB_1001a01d0:
      return CONCAT44(uVar12,iVar9);
    }
  }
  return 0;
}

