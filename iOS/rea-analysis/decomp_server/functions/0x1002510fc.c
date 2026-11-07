// rea decompile_all
// name: FUN_1002510fc
// address: 0x1002510fc
// body: available
// range: 0x1002510fc-0x100251173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002510fc(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int local_34;
  
  local_34 = 0;
  uVar1 = param_1;
  FUN_1002512ac(param_1,param_2,&local_34);
  if ((int)uVar1 == 0) {
    uVar2 = (ulong)local_34;
    FUN_1002512ac(param_1,param_2,&local_34);
    uVar2 = uVar2 | (long)local_34 << 8;
    if ((int)param_1 != 0) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  return;
}

