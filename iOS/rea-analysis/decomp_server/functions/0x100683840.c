// rea decompile_all
// name: FUN_100683840
// address: 0x100683840
// body: available
// range: 0x100683840-0x100683893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100683840(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined7 uStack_38;
  undefined4 uStack_31;
  
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_80 = param_1[2];
  uStack_78 = (undefined1)param_1[3];
  uStack_6f = *(undefined8 *)((long)param_1 + 0x21);
  local_77 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  uStack_38 = (undefined7)unaff_x20[5];
  uStack_31 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  FUN_100683894(&local_90);
  return;
}

