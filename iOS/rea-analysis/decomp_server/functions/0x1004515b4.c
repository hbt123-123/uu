// rea decompile_all
// name: FUN_1004515b4
// address: 0x1004515b4
// body: available
// range: 0x1004515b4-0x100451617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004515b4(void)

{
  long unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x98);
  local_40 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_18 = *(undefined8 *)(unaff_x20 + 0xb8);
  local_20 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x58);
  local_80 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x78);
  local_60 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x80);
  FUN_100040bb4(&local_80,&DAT_100a9ffb0,&DAT_10082b118);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  return;
}

