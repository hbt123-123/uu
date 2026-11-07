// rea decompile_all
// name: FUN_1002c65ec
// address: 0x1002c65ec
// body: available
// range: 0x1002c65ec-0x1002c664f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c65ec(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 < 3) {
    uVar2 = *(ulong *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_1 + 8) = uVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _swift_retain(uVar1);
  }
  param_1[0x18] = param_2[0x18];
  return;
}

