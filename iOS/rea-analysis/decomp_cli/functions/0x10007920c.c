// rea decompile_all
// name: FUN_10007920c
// address: 0x10007920c
// body: available
// range: 0x10007920c-0x10007925b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10007920c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [120];
  long local_40;
  
  (**(code **)(param_2 + 0x10))(auStack_b8);
  puVar2 = auStack_b8;
  FUN_10006e954(puVar2);
  uVar1 = (uint)puVar2;
  if (local_40 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1000790fc();
  }
  return uVar1 & 1;
}

