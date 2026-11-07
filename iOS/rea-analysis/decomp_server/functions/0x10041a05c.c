// rea decompile_all
// name: FUN_10041a05c
// address: 0x10041a05c
// body: available
// range: 0x10041a05c-0x10041a107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041a05c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar5 = *(uint *)(param_1 + 2);
  uVar7 = param_1[3];
  bVar6 = *(byte *)(param_1 + 4);
  uVar2 = param_1[5];
  uVar4 = param_1[6];
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
  *unaff_x20 = uVar1;
  unaff_x20[1] = uVar3;
  unaff_x20[2] = (ulong)uVar5;
  unaff_x20[3] = uVar7;
  *(byte *)(unaff_x20 + 4) = bVar6 & 1;
  *(undefined1 *)((long)unaff_x20 + 0x27) = 0;
  *(undefined2 *)((long)unaff_x20 + 0x25) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x21) = 0;
  unaff_x20[5] = uVar2;
  unaff_x20[6] = uVar4 & 0xcfffffffffffffff;
  unaff_x20[8] = 0x1000000000000000;
  return;
}

