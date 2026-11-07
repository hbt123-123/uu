// rea decompile_all
// name: FUN_1006817e4
// address: 0x1006817e4
// body: available
// range: 0x1006817e4-0x100681897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006817e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined4 uStack_81;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 uStack_48;
  undefined4 uStack_41;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_50 = unaff_x20[4];
  uStack_48 = (undefined7)unaff_x20[5];
  uStack_41 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  FUN_10068e538();
  FUN_10067f5fc(param_2,1);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[5] = CONCAT17((undefined1)uStack_41,uStack_48);
    param_1[4] = local_50;
    *(undefined4 *)((long)param_1 + 0x2f) = uStack_41;
  }
  else {
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    local_90 = local_50;
    uStack_81 = uStack_41;
    FUN_10068e548(&local_b0);
  }
  return;
}

