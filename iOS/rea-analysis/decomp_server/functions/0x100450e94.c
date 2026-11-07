// rea decompile_all
// name: FUN_100450e94
// address: 0x100450e94
// body: available
// range: 0x100450e94-0x100450ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100450e94(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  bVar4 = *param_1;
  uVar6 = *(undefined8 *)(param_1 + 8);
  bVar5 = param_1[0x10];
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x14);
  FUN_10000f4e0(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  *(ulong *)(unaff_x20 + 0x28) = (ulong)bVar4 & 1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
  *(ulong *)(unaff_x20 + 0x38) = (ulong)bVar5 & 1 | (ulong)uVar3 << 0x20;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return;
}

