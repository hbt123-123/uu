// rea decompile_all
// name: FUN_1004c9898
// address: 0x1004c9898
// body: available
// range: 0x1004c9898-0x1004c9957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c9898(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  uVar3 = *param_1;
  uVar6 = *(ulong *)(param_1 + 2);
  uVar4 = param_1[4];
  uVar7 = *(ulong *)(param_1 + 6);
  uVar5 = param_1[8];
  uVar1 = *(ulong *)(param_1 + 10);
  uVar2 = *(ulong *)(param_1 + 0xc);
  uStack_88 = unaff_x20[9];
  local_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_68 = unaff_x20[0xd];
  local_70 = unaff_x20[0xc];
  local_60 = unaff_x20[0xe];
  uStack_c8 = unaff_x20[1];
  local_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  uStack_a8 = unaff_x20[5];
  local_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  FUN_100040bb4(&local_d0,&DAT_100aa1988,&DAT_100832138);
  *unaff_x20 = (ulong)uVar3;
  unaff_x20[1] = uVar6;
  *(byte *)(unaff_x20 + 2) = (byte)uVar4 & 1;
  unaff_x20[3] = uVar7;
  *(byte *)(unaff_x20 + 4) = (byte)uVar5 & 1;
  unaff_x20[5] = uVar1;
  unaff_x20[6] = uVar2;
  unaff_x20[0xc] = 0x2000000000000000;
  unaff_x20[0xe] = 0;
  return;
}

