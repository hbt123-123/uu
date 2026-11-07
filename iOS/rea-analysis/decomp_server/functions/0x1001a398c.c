// rea decompile_all
// name: FUN_1001a398c
// address: 0x1001a398c
// body: available
// range: 0x1001a398c-0x1001a39f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a398c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_40;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    FUN_100074c5c();
  }
  uStack_38 = *(undefined8 *)(uVar2 + 0x10);
  local_40 = uVar2 + 0x20;
  FUN_1001a81fc(&local_40);
  *param_1 = uVar2;
  return;
}

