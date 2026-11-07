// rea decompile_all
// name: FUN_10058f954
// address: 0x10058f954
// body: available
// range: 0x10058f954-0x10058f9cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058f954(void)

{
  long unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  local_50 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
  local_30 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_28 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
  uStack_1f = *(undefined8 *)(unaff_x20 + 0x99);
  uStack_27 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x30);
  local_90 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x50);
  local_70 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x58);
  FUN_100040bb4(&local_90,&DAT_100aab4b0,&DAT_100837c20);
  _swift_deallocClassInstance();
  return;
}

