// rea decompile_all
// name: FUN_1002703b4
// address: 0x1002703b4
// body: available
// range: 0x1002703b4-0x1002703f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002703b4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[3]);
  _swift_release(unaff_x20[5]);
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  uVar1 = param_1[4];
  unaff_x20[5] = param_1[5];
  unaff_x20[4] = uVar1;
  return;
}

