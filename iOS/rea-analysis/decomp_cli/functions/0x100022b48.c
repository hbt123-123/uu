// rea decompile_all
// name: FUN_100022b48
// address: 0x100022b48
// body: available
// range: 0x100022b48-0x100022bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100022b48(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 auStack_68 [72];
  
  FUN_1000657bc();
  FUN_10005fe24(auStack_68,0x4a2074757074754f,0xeb000000004e4f53);
  bVar2 = 0;
  uVar1 = 0;
  FUN_100061924();
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(byte *)(param_1 + 2) = bVar2 & 1;
  return;
}

