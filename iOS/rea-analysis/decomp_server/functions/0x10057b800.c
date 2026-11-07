// rea decompile_all
// name: FUN_10057b800
// address: 0x10057b800
// body: available
// range: 0x10057b800-0x10057b867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057b800(void)

{
  long unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x50);
  local_40 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x58);
  local_20 = *(undefined1 *)(unaff_x20 + 0x68);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x30);
  local_60 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100040bb4(&local_60,&DAT_100aab4a8,&DAT_10083e020);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  return;
}

