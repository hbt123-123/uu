// rea decompile_all
// name: FUN_100393cb8
// address: 0x100393cb8
// body: available
// range: 0x100393cb8-0x100393d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100393cb8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = param_2 + 6;
  uVar2 = param_2[0x16];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (0x37 < uVar2) {
    _bzero((void *)((long)puVar1 + lVar3),0x3f - uVar4);
    FUN_1003932a8(param_2,puVar1,1);
    lVar3 = 0;
  }
  _bzero((void *)((long)puVar1 + lVar3),0x38 - lVar3);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_1003932a8(param_2,puVar1,1);
  param_2[0x16] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}

