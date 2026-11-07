// rea decompile_all
// name: FUN_1005fdb64
// address: 0x1005fdb64
// body: available
// range: 0x1005fdb64-0x1005fdb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fdb64(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x6c);
  uVar1 = *(undefined8 *)(unaff_x20 + 100);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x74);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x8c);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x84);
  param_1[5] = *(undefined8 *)(unaff_x20 + 0x7c);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_x20 + 0x94);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x54);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x5c);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}

