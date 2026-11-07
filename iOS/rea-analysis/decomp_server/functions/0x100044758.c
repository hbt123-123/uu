// rea decompile_all
// name: FUN_100044758
// address: 0x100044758
// body: available
// range: 0x100044758-0x100044807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100044758(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_3 + 0x10);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_3 + 0x20);
    do {
      lVar3 = *plVar2;
      if ((param_2 & 1) == 0) {
        if (lVar3 == param_1) {
          return 1;
        }
      }
      else if (param_1 < 3) {
        if (param_1 == 0) {
          if (lVar3 == 0) {
            return 1;
          }
        }
        else if (param_1 == 1) {
          if (lVar3 == 1) {
            return 1;
          }
        }
        else if (lVar3 == 2) {
          return 1;
        }
      }
      else if (param_1 < 5) {
        if (param_1 == 3) {
          if (lVar3 == 3) {
            return 1;
          }
        }
        else if (lVar3 == 4) {
          return 1;
        }
      }
      else if (param_1 == 5) {
        if (lVar3 == 5) {
          return 1;
        }
      }
      else if (lVar3 == 6) {
        return 1;
      }
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 0;
}

