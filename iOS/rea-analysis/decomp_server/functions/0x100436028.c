// rea decompile_all
// name: FUN_100436028
// address: 0x100436028
// body: available
// range: 0x100436028-0x1004360e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100436028(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  
  _swift_beginAccess((undefined8 *)(param_4 + 0x118),auStack_88,0,0);
  uStack_68 = *(undefined8 *)(param_4 + 0x120);
  local_70 = *(undefined8 *)(param_4 + 0x118);
  uStack_58 = *(undefined8 *)(param_4 + 0x130);
  uStack_60 = *(undefined8 *)(param_4 + 0x128);
  uStack_48 = *(undefined8 *)(param_4 + 0x140);
  local_50 = *(undefined8 *)(param_4 + 0x138);
  local_38 = *(ulong *)(param_4 + 0x150);
  local_40 = *(undefined8 *)(param_4 + 0x148);
  uVar1 = local_38;
  uVar2 = local_40;
  local_100 = local_50;
  uStack_f8 = uStack_48;
  local_f0 = uStack_60;
  uStack_e8 = uStack_58;
  uStack_e0 = local_70;
  uStack_d8 = uStack_68;
  if (0xe < local_38 >> 0x3c) {
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uVar1 = 0xc000000000000000;
    uVar2 = 0;
  }
  FUN_10007f314(&local_70,auStack_c8,&DAT_100a9f380,&DAT_10082d5a0);
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_e8;
  param_1[2] = local_f0;
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  return;
}

