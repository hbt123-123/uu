// rea decompile_all
// name: FUN_10044da60
// address: 0x10044da60
// body: available
// range: 0x10044da60-0x10044dabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044da60(ulong param_1)

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
  
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  local_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x48);
  local_40 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_100040bb4(&local_60,&DAT_100a9ff68,&DAT_10082b0d0);
  *(ulong *)(unaff_x20 + 0x20) = param_1 & 0xffffffff;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0x2000000000000000;
  return;
}

