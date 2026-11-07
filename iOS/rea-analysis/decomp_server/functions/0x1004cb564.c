// rea decompile_all
// name: FUN_1004cb564
// address: 0x1004cb564
// body: available
// range: 0x1004cb564-0x1004cb60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004cb564(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  uVar4 = *param_1;
  uVar6 = *(ulong *)(param_1 + 4);
  uVar5 = *(ulong *)(param_1 + 2);
  uVar2 = *(ulong *)(param_1 + 6);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = 0x100000000;
  if ((param_1[1] & 1) == 0) {
    uVar1 = 0;
  }
  uStack_68 = unaff_x20[9];
  local_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  local_50 = unaff_x20[0xc];
  local_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  local_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  local_80 = unaff_x20[6];
  FUN_100040bb4(&uStack_b0,&DAT_100aa1988,&DAT_100832138);
  *unaff_x20 = uVar1 | uVar4;
  unaff_x20[2] = uVar6;
  unaff_x20[1] = uVar5;
  unaff_x20[3] = uVar2;
  unaff_x20[4] = uVar3;
  unaff_x20[0xc] = 0x4000000000000000;
  unaff_x20[0xe] = 0x1000000000000000;
  return;
}

