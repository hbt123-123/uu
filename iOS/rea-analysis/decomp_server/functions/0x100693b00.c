// rea decompile_all
// name: FUN_100693b00
// address: 0x100693b00
// body: available
// range: 0x100693b00-0x100693be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100693b00(int *param_1,int *param_2)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  
  uVar2 = *(ulong *)(param_1 + 2);
  piVar6 = *(int **)param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    piVar6 = param_1;
  }
  uVar3 = *(ulong *)(param_2 + 2);
  piVar7 = *(int **)param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    piVar7 = param_2;
  }
  piVar1 = piVar6 + uVar2;
  piVar9 = piVar1;
  if (uVar2 != 0 && uVar3 != 0) {
    piVar11 = piVar6;
    piVar12 = piVar6;
    do {
      while (piVar12 = piVar12 + 1, piVar8 = piVar7, lVar5 = uVar3 * 4, *piVar11 == *piVar7) {
        do {
          piVar8 = piVar8 + 1;
          piVar10 = piVar11;
          if (lVar5 + -4 == 0) break;
          if (piVar12 == piVar1) goto LAB_100693b44;
          iVar4 = *piVar12;
          piVar10 = piVar9;
          piVar12 = piVar12 + 1;
          lVar5 = lVar5 + -4;
        } while (iVar4 == *piVar8);
        piVar11 = piVar11 + 1;
        piVar9 = piVar10;
        piVar12 = piVar11;
        if (piVar11 == piVar1) goto LAB_100693b44;
      }
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar1);
  }
LAB_100693b44:
  if ((piVar9 != piVar1 || uVar3 == 0) && (long)piVar9 - (long)piVar6 != -4) {
    return uVar2 - uVar3 == (long)piVar9 - (long)piVar6 >> 2;
  }
  return false;
}

