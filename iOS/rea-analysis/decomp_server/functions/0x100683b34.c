// rea decompile_all
// name: FUN_100683b34
// address: 0x100683b34
// body: available
// range: 0x100683b34-0x100683bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100683b34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [56];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  local_60 = unaff_x20[4];
  uStack_58 = (undefined7)unaff_x20[5];
  uStack_51 = *(undefined4 *)((long)unaff_x20 + 0x2f);
  FUN_100682f28();
  uVar1 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  FUN_100682fd0();
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = CONCAT17((undefined1)uStack_51,uStack_58);
  param_1[4] = local_60;
  *(undefined4 *)((long)param_1 + 0x2f) = uStack_51;
  param_1[7] = param_2;
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 9) = param_4;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  *(undefined1 *)(param_1 + 0xc) = uVar3;
  FUN_10068e538(&local_80,auStack_b8);
  return;
}

