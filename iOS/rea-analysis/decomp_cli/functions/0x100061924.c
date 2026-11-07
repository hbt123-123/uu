// rea decompile_all
// name: FUN_100061924
// address: 0x100061924
// body: available
// range: 0x100061924-0x100061993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100061924(undefined1 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_1000f7b08;
  _swift_allocObject(&DAT_1000f7b08,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  puVar1[0x18] = param_1;
  uVar2 = param_3[4];
  uVar4 = param_3[7];
  uVar3 = param_3[6];
  *(undefined8 *)(puVar1 + 0x48) = param_3[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar2;
  *(undefined8 *)(puVar1 + 0x58) = uVar4;
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  *(undefined8 *)(puVar1 + 0x60) = param_3[8];
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  *(undefined8 *)(puVar1 + 0x28) = param_3[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  return FUN_100061994;
}

