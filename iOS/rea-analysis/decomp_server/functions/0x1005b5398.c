// rea decompile_all
// name: FUN_1005b5398
// address: 0x1005b5398
// body: available
// range: 0x1005b5398-0x1005b53db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b5398(undefined8 *param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)*param_1;
  bVar1 = *(byte *)(param_1 + 1);
  FUN_10051ff3c(*puVar2,puVar2[1],puVar2[2],(char)puVar2[3]);
  *puVar2 = (ulong)bVar1;
  puVar2[2] = 0x3000000000000000;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}

