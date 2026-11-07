// rea decompile_all
// name: FUN_1001994e8
// address: 0x1001994e8
// body: available
// range: 0x1001994e8-0x100199567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001994e8(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_88,0,0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  local_70 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x60);
  local_50 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x70);
  local_40 = *(undefined8 *)(unaff_x20 + 0x68);
  FUN_100121b5c(&local_70,auStack_c8);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  param_1[7] = uStack_38;
  param_1[6] = local_40;
  return;
}

