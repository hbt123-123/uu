// rea decompile_all
// name: FUN_100583800
// address: 0x100583800
// body: available
// range: 0x100583800-0x100583863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100583800(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  long unaff_x20;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = *(undefined1 *)(param_1 + 5);
  uVar6 = *(ushort *)(param_1 + 2);
  FUN_1005419bc(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined1 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  *(ulong *)(unaff_x20 + 0x60) = (ulong)uVar6;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x78) = uVar5;
  return;
}

