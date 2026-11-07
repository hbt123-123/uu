// rea decompile_all
// name: FUN_100643f90
// address: 0x100643f90
// body: available
// range: 0x100643f90-0x100643ff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100643f90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = &DAT_100ab7e10;
  FUN_100004bb4(&DAT_100ab7e10,&DAT_100848cb8);
  _swift_allocObject();
  puVar3 = puVar2;
  _malloc_size();
  puVar1 = puVar3 + -0x19;
  if (0x1f < (long)puVar3) {
    puVar1 = puVar3 + -0x20;
  }
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  return puVar2;
}

