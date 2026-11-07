// rea decompile_all
// name: FUN_100062168
// address: 0x100062168
// body: available
// range: 0x100062168-0x1000621cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100062168(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = &DAT_1000f7b80;
  _swift_allocObject(&DAT_1000f7b80,0x60,7);
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(puVar1 + 0x30) = param_2[3];
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  uVar2 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined8 *)(puVar1 + 0x40) = param_2[5];
  *(undefined8 *)(puVar1 + 0x38) = uVar2;
  *(undefined8 *)(puVar1 + 0x50) = uVar6;
  *(undefined8 *)(puVar1 + 0x48) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = param_2[8];
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  return FUN_100062210;
}

