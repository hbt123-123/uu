// rea decompile_all
// name: FUN_10016d2fc
// address: 0x10016d2fc
// body: available
// range: 0x10016d2fc-0x10016d3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10016d2fc(void)

{
  long unaff_x20;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100139ca0(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  FUN_100006cc8(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  FUN_100006cc8(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x140);
  local_30 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x120);
  local_50 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_18 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_20 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xe0);
  local_90 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x100);
  local_70 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xc0);
  local_b0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 200);
  FUN_100040bb4(&local_d0,&DAT_100a79f58,&DAT_10080f710);
  return;
}

