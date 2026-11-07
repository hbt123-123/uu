// rea decompile_all
// name: FUN_100563120
// address: 0x100563120
// body: available
// range: 0x100563120-0x100563163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100563120(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar1 = 5;
  }
  uVar3 = (uint)param_1;
  uVar2 = 3;
  if (0x1fffff < uVar3) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (0x3fff < uVar3) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (0x7f < uVar3) {
    uVar2 = uVar1;
  }
  uVar1 = 10;
  if ((param_1 & 0x80000000) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

