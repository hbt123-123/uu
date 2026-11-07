// rea decompile_all
// name: FUN_100684a28
// address: 0x100684a28
// body: available
// range: 0x100684a28-0x100684aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100684a28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_a8 [56];
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
  uVar3 = unaff_x20[5];
  local_50 = unaff_x20[4];
  uStack_48 = (undefined7)uVar3;
  uStack_41 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uVar3;
  param_1[4] = local_50;
  *(undefined4 *)((long)param_1 + 0x2f) = uStack_41;
  puVar1 = &local_70;
  puVar2 = auStack_a8;
  FUN_10068e538();
  FUN_100682f28();
  FUN_10068e548(&local_70);
  param_1[7] = puVar1;
  param_1[8] = puVar2;
  *(undefined1 *)(param_1 + 9) = param_4;
  return;
}

