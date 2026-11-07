// rea decompile_all
// name: FUN_1004387a0
// address: 0x1004387a0
// body: available
// range: 0x1004387a0-0x10043886b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004387a0(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined4 *)(unaff_x20 + 0x1c) = 0;
  FUN_100438e38(&local_b8);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x80) = local_58;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x90) = local_48;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0xa0) = local_38;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x40) = local_98;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x50) = local_88;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x60) = local_78;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x70) = local_68;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x20) = local_b8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x30) = local_a8;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(unaff_x20 + 0xb0) = local_28;
  *(undefined **)(unaff_x20 + 0xb8) = puVar1;
  *(undefined1 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined **)(unaff_x20 + 200) = puVar1;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0xf0) = 1;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined1 *)(unaff_x20 + 0x110) = 1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x160) = 0xe000000000000000;
  return;
}

