// rea decompile_all
// name: FUN_100418258
// address: 0x100418258
// body: available
// range: 0x100418258-0x1004182eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100418258(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar1 = *(uint *)(param_1 + 2);
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  uStack_58 = (undefined1)unaff_x20[7];
  uStack_4f = *(undefined8 *)((long)unaff_x20 + 0x41);
  local_57 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x39);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x39) >> 0x38);
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  FUN_100040bb4(&local_90,&DAT_100a9eea0,&DAT_100825d78);
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar3;
  unaff_x20[2] = (ulong)uVar1;
  uVar3 = param_1[4];
  uVar2 = param_1[3];
  uVar4 = param_1[5];
  unaff_x20[6] = param_1[6];
  unaff_x20[5] = uVar4;
  unaff_x20[4] = uVar3;
  unaff_x20[3] = uVar2;
  unaff_x20[8] = 0x2000000000000000;
  *(undefined1 *)(unaff_x20 + 9) = 0;
  return;
}

