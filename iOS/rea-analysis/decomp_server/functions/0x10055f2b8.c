// rea decompile_all
// name: FUN_10055f2b8
// address: 0x10055f2b8
// body: available
// range: 0x10055f2b8-0x10055f313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10055f2b8(char param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  bVar2 = (byte)(param_1 + 0x99U) < 0xfa;
  bVar1 = 0;
  if (!bVar2) {
    bVar1 = param_1 + 0xa9;
  }
  bVar3 = 0xf9 < (byte)(param_1 + 0xb9U);
  if (bVar3) {
    bVar1 = param_1 - 0x37;
  }
  uVar4 = (uint)bVar2;
  if (bVar3) {
    uVar4 = 0;
  }
  if (0xf5 < (byte)(param_1 - 0x3aU)) {
    uVar4 = 0;
    bVar1 = param_1 - 0x30;
  }
  return (uint)bVar1 | uVar4 << 8;
}

