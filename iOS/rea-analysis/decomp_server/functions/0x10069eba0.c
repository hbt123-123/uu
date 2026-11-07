// rea decompile_all
// name: FUN_10069eba0
// address: 0x10069eba0
// body: available
// range: 0x10069eba0-0x10069ec13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069eba0(failure *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_50 [32];
  
  piVar2 = ___error();
  iVar1 = *piVar2;
  if (-1 < *(int *)(param_1 + 0x70)) {
    _close();
  }
  piVar2 = ___error();
  *piVar2 = iVar1;
  FUN_10069e414(param_1,1);
  FUN_10069eff0(auStack_50,param_2);
  FUN_1006924cc(auStack_50);
  std::ios_base::failure::~failure(param_1);
  return;
}

