// rea decompile_all
// name: FUN_100451240
// address: 0x100451240
// body: available
// range: 0x100451240-0x1004512bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100451240(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x98);
  local_50 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0xb8);
  local_30 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x58);
  local_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  FUN_100040bb4(&local_90,&DAT_100a9ffb0,&DAT_10082b118);
  uVar1 = param_1[8];
  uVar3 = param_1[0xb];
  uVar2 = param_1[10];
  *(undefined8 *)(unaff_x20 + 0x98) = param_1[9];
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar2;
  uVar1 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + 0xb8) = param_1[0xd];
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar1;
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x58) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar2;
  uVar3 = param_1[4];
  uVar2 = param_1[7];
  uVar1 = param_1[6];
  *(undefined8 *)(unaff_x20 + 0x78) = param_1[5];
  *(undefined8 *)(unaff_x20 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  return;
}

