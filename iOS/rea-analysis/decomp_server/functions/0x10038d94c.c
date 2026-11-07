// rea decompile_all
// name: FUN_10038d94c
// address: 0x10038d94c
// body: available
// range: 0x10038d94c-0x10038dabf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038d94c(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  uVar1 = *(uint *)(lVar3 + 8);
  lVar4 = *param_1;
  uVar2 = *(uint *)(lVar4 + 8);
  lVar5 = *param_3;
  if (uVar1 < uVar2) {
    if (*(uint *)(lVar5 + 8) < uVar1) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar3;
      *param_2 = lVar4;
      lVar5 = *param_3;
      if (uVar2 <= *(uint *)(lVar5 + 8)) goto LAB_10038d9e0;
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
    lVar5 = lVar4;
  }
  else if (*(uint *)(lVar5 + 8) < uVar1) {
    *param_2 = lVar5;
    *param_3 = lVar3;
    lVar4 = *param_1;
    lVar5 = lVar3;
    if (*(uint *)(*param_2 + 8) < *(uint *)(lVar4 + 8)) {
      *param_1 = *param_2;
      *param_2 = lVar4;
      lVar5 = *param_3;
    }
  }
LAB_10038d9e0:
  if (*(uint *)(*param_4 + 8) < *(uint *)(lVar5 + 8)) {
    *param_3 = *param_4;
    *param_4 = lVar5;
    lVar5 = *param_2;
    if (*(uint *)(*param_3 + 8) < *(uint *)(lVar5 + 8)) {
      *param_2 = *param_3;
      *param_3 = lVar5;
      lVar5 = *param_1;
      if (*(uint *)(*param_2 + 8) < *(uint *)(lVar5 + 8)) {
        *param_1 = *param_2;
        *param_2 = lVar5;
      }
    }
  }
  lVar5 = *param_4;
  if (*(uint *)(*param_5 + 8) < *(uint *)(lVar5 + 8)) {
    *param_4 = *param_5;
    *param_5 = lVar5;
    lVar5 = *param_3;
    if (*(uint *)(*param_4 + 8) < *(uint *)(lVar5 + 8)) {
      *param_3 = *param_4;
      *param_4 = lVar5;
      lVar5 = *param_2;
      if (*(uint *)(*param_3 + 8) < *(uint *)(lVar5 + 8)) {
        *param_2 = *param_3;
        *param_3 = lVar5;
        lVar5 = *param_1;
        if (*(uint *)(*param_2 + 8) < *(uint *)(lVar5 + 8)) {
          *param_1 = *param_2;
          *param_2 = lVar5;
        }
      }
    }
  }
  return;
}

