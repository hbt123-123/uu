// rea decompile_all
// name: FUN_10041aac8
// address: 0x10041aac8
// body: available
// range: 0x10041aac8-0x10041ab5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041aac8(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong local_50;
  
  uVar3 = *param_1;
  uVar5 = *(ulong *)(param_1 + 2);
  uVar4 = param_1[4];
  uVar1 = *(ulong *)(param_1 + 6);
  uVar2 = *(ulong *)(param_1 + 8);
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  local_50 = unaff_x20[8];
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  FUN_100040bb4(&local_90,&DAT_100a9eea8,&DAT_100825d80);
  *unaff_x20 = (ulong)uVar3;
  unaff_x20[1] = uVar5;
  *(byte *)(unaff_x20 + 2) = (byte)uVar4 & 1;
  unaff_x20[3] = uVar1;
  unaff_x20[4] = uVar2 & 0xcfffffffffffffff;
  unaff_x20[6] = 0x2000000000000000;
  unaff_x20[8] = 0x2000000000000000;
  return;
}

