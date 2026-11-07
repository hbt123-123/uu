// rea decompile_all
// name: FUN_100498840
// address: 0x100498840
// body: available
// range: 0x100498840-0x1004988fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100498840(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  
  uVar3 = *param_1;
  uVar6 = *(ulong *)(param_1 + 2);
  uVar4 = param_1[4];
  uVar7 = *(ulong *)(param_1 + 6);
  uVar5 = param_1[8];
  uVar1 = *(ulong *)(param_1 + 10);
  uVar2 = *(ulong *)(param_1 + 0xc);
  uStack_78 = unaff_x20[5];
  local_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_58 = unaff_x20[9];
  local_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  local_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  FUN_100040bb4(&local_a0,&DAT_100aa0b88,&DAT_10082dd70);
  *unaff_x20 = (ulong)uVar3;
  unaff_x20[1] = uVar6;
  *(byte *)(unaff_x20 + 2) = (byte)uVar4 & 1;
  unaff_x20[3] = uVar7;
  *(byte *)(unaff_x20 + 4) = (byte)uVar5 & 1;
  *(undefined1 *)((long)unaff_x20 + 0x27) = 0;
  *(undefined2 *)((long)unaff_x20 + 0x25) = 0;
  *(undefined4 *)((long)unaff_x20 + 0x21) = 0;
  unaff_x20[5] = uVar1;
  unaff_x20[6] = uVar2;
  unaff_x20[7] = 0;
  unaff_x20[9] = 0x2000000000000000;
  return;
}

