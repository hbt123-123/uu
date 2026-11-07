// rea decompile_all
// name: FUN_10038f22c
// address: 0x10038f22c
// body: available
// range: 0x10038f22c-0x10038f35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038f22c(long param_1,long param_2)

{
  long *plVar1;
  byte local_3a;
  byte local_39;
  long local_38;
  
  if (param_2 != 0) {
    local_38 = *(long *)(param_1 + 0xb8);
    if (local_38 != 0) {
      FUN_100392994();
    }
    FUN_10038774c(param_1);
    FUN_100386734(1,"MMKV_OSX.cpp","enumerateKeys",0x16a,"enumerate [%s] begin");
    if (*(long *)(param_1 + 0xb0) == 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x68) + 0x10);
      do {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) break;
        local_3a = 0;
        (**(code **)(param_2 + 0x10))(param_2,plVar1[2],&local_3a);
      } while ((local_3a & 1) == 0);
    }
    else {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x10);
      do {
        plVar1 = (long *)*plVar1;
        if (plVar1 == (long *)0x0) break;
        local_39 = 0;
        (**(code **)(param_2 + 0x10))(param_2,plVar1[2],&local_39);
      } while ((local_39 & 1) == 0);
    }
    FUN_100386734(1,"MMKV_OSX.cpp","enumerateKeys",0x17c,"enumerate [%s] finish");
    FUN_100385098(&local_38);
  }
  return;
}

