// rea decompile_all
// name: FUN_10056301c
// address: 0x10056301c
// body: available
// range: 0x10056301c-0x100563093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056301c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
    }
    else if ((long)(int)param_2 == param_2 >> 0x20) {
      return;
    }
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
      return;
    }
  }
  (**(code **)(param_5 + 0x1c0))(param_2,param_3,param_4,param_5);
  return;
}

