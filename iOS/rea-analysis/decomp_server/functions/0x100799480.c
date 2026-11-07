// rea decompile_all
// name: FUN_100799480
// address: 0x100799480
// body: available
// range: 0x100799480-0x1007994b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


unsigned_long_long FUN_100799480(ID param_1,SEL param_2)

{
  uint *puVar1;
  unsigned_long_long uVar2;
  long local_58;
  uint local_50 [16];
  
  puVar1 = local_50;
  FUN_100799e20(puVar1,&local_58);
  uVar2 = local_58 * (ulong)local_50[0];
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

