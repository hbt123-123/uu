// rea decompile_all
// name: SentryCrashWrapper::freeMemorySize
// address: 0x100749a40
// body: available
// range: 0x100749a40-0x100749a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryCrashWrapper::freeMemorySize(ID param_1,SEL param_2)

{
  uint *puVar1;
  unsigned_long_long uVar2;
  long lStack_58;
  uint auStack_50 [16];
  
  puVar1 = auStack_50;
  FUN_100799e20(puVar1,&lStack_58);
  uVar2 = lStack_58 * (ulong)auStack_50[0];
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

