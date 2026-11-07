// rea decompile_all
// name: FUN_10040ffb0
// address: 0x10040ffb0
// body: available
// range: 0x10040ffb0-0x10040ffe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040ffb0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  param_1[9] = *(undefined8 *)(unaff_x20 + 0x70);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  param_1[0xd] = *(undefined8 *)(unaff_x20 + 0x90);
  param_1[0xc] = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x91);
  *(undefined8 *)((long)param_1 + 0x71) = *(undefined8 *)(unaff_x20 + 0x99);
  *(undefined8 *)((long)param_1 + 0x69) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x30);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  param_1[5] = *(undefined8 *)(unaff_x20 + 0x50);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  return;
}

