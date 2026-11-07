// rea decompile_all
// name: FUN_10041a6b0
// address: 0x10041a6b0
// body: available
// range: 0x10041a6b0-0x10041a74b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041a6b0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_1[7];
  uVar5 = param_1[8];
  uStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  local_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  FUN_100040bb4(&local_a0,&DAT_100a9eea8,&DAT_100825d80);
  uVar6 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar6;
  unaff_x20[3] = uVar8;
  unaff_x20[2] = uVar7;
  unaff_x20[4] = uVar1 & 0xcfffffffffffffff;
  unaff_x20[5] = uVar3;
  unaff_x20[6] = uVar2 & 0xcfffffffffffffff;
  unaff_x20[7] = uVar4;
  unaff_x20[8] = uVar5 & 0xcfffffffffffffff | 0x2000000000000000;
  return;
}

