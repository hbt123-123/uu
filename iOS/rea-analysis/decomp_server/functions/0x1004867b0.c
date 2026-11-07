// rea decompile_all
// name: FUN_1004867b0
// address: 0x1004867b0
// body: available
// range: 0x1004867b0-0x100486833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004867b0(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong local_40;
  ulong uStack_38;
  
  bVar3 = *param_1;
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uStack_58 = unaff_x20[5];
  local_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  local_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  local_70 = unaff_x20[2];
  FUN_100040bb4(&uStack_80,&DAT_100aa0b98,&DAT_10082dd80);
  *unaff_x20 = (ulong)bVar3 & 1;
  unaff_x20[2] = uVar5;
  unaff_x20[1] = uVar4;
  unaff_x20[3] = uVar1;
  unaff_x20[4] = uVar2 & 0xcfffffffffffffff;
  unaff_x20[6] = 0;
  return;
}

