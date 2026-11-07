// rea decompile_all
// name: FUN_10057b510
// address: 0x10057b510
// body: available
// range: 0x10057b510-0x10057b58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10057b510(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x50);
  local_50 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x58);
  local_30 = *(undefined1 *)(unaff_x20 + 0x68);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
  local_70 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100040bb4(&local_70,&DAT_100aab4a8,&DAT_10083e020);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  uVar1 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x40) = param_1[3];
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  uVar1 = param_1[4];
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x50) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x58) = uVar4;
  *(undefined1 *)(unaff_x20 + 0x68) = *(undefined1 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}

