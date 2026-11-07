// rea decompile_all
// name: FUN_100417e58
// address: 0x100417e58
// body: available
// range: 0x100417e58-0x100417ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100417e58(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uVar3 = *param_1;
  uVar7 = *(ulong *)(param_1 + 4);
  uVar6 = *(ulong *)(param_1 + 2);
  uVar5 = *(ulong *)(param_1 + 8);
  uVar4 = *(ulong *)(param_1 + 6);
  uVar1 = *(ulong *)(param_1 + 10);
  uVar2 = *(ulong *)(param_1 + 0xc);
  uStack_58 = unaff_x20[5];
  local_60 = unaff_x20[4];
  uStack_50 = unaff_x20[6];
  uStack_48 = (undefined1)unaff_x20[7];
  uStack_3f = *(undefined8 *)((long)unaff_x20 + 0x41);
  local_47 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  FUN_100040bb4(&local_80,&DAT_100a9eea0,&DAT_100825d78);
  *unaff_x20 = (ulong)uVar3;
  unaff_x20[2] = uVar7;
  unaff_x20[1] = uVar6;
  unaff_x20[4] = uVar5;
  unaff_x20[3] = uVar4;
  unaff_x20[5] = uVar1;
  unaff_x20[6] = uVar2;
  unaff_x20[8] = 0x1000000000000000;
  *(undefined1 *)(unaff_x20 + 9) = 0;
  return;
}

