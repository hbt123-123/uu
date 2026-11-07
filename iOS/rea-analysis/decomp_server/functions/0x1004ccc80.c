// rea decompile_all
// name: FUN_1004ccc80
// address: 0x1004ccc80
// body: available
// range: 0x1004ccc80-0x1004ccd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ccc80(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined8 local_40;
  
  uVar1 = param_1[8];
  uStack_68 = unaff_x20[9];
  local_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  local_50 = unaff_x20[0xc];
  local_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  local_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  local_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  FUN_100040bb4(&local_b0,&DAT_100aa1988,&DAT_100832138);
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar2;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  uVar2 = param_1[4];
  uVar4 = param_1[7];
  uVar3 = param_1[6];
  unaff_x20[5] = param_1[5];
  unaff_x20[4] = uVar2;
  unaff_x20[7] = uVar4;
  unaff_x20[6] = uVar3;
  unaff_x20[8] = uVar1;
  unaff_x20[0xc] = 0x4000000000000000;
  unaff_x20[0xe] = 0x2000000000000000;
  return;
}

