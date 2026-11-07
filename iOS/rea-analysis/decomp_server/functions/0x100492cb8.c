// rea decompile_all
// name: FUN_100492cb8
// address: 0x100492cb8
// body: available
// range: 0x100492cb8-0x100492d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100492d1c to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100492cb8(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == *param_2) {
    lVar2 = *(long *)(param_1 + 2);
    lVar3 = *(long *)(param_2 + 2);
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      if (lVar2 != lVar3) {
        return 0;
      }
    }
    else if (lVar3 < 4) {
      if (lVar3 < 2) {
        if (lVar3 == 0) {
          if (lVar2 != 0) {
            return 0;
          }
        }
        else if (lVar2 != 1) {
          return 0;
        }
      }
      else if (lVar3 == 2) {
        if (lVar2 != 2) {
          return 0;
        }
      }
      else if (lVar2 != 3) {
        return 0;
      }
    }
    else if (lVar3 < 6) {
      if (lVar3 == 4) {
        if (lVar2 != 4) {
          return 0;
        }
      }
      else if (lVar2 != 5) {
        return 0;
      }
    }
    else if (lVar3 == 6) {
      if (lVar2 != 6) {
        return 0;
      }
    }
    else if (lVar2 != 7) {
      return 0;
    }
    if (param_1[5] == param_2[5]) {
      uVar1 = *(undefined8 *)(param_1 + 6);
      FUN_1000094a4(uVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 6),
                    *(undefined8 *)(param_2 + 8));
      return uVar1;
    }
  }
  return 0;
}

