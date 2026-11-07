// rea decompile_all
// name: FUN_1004979e0
// address: 0x1004979e0
// body: available
// range: 0x1004979e0-0x100497aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004979e0(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e0 [80];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  uStack_68 = unaff_x20[5];
  uVar1 = unaff_x20[4];
  uStack_50 = unaff_x20[8];
  local_58 = unaff_x20[7];
  local_48 = unaff_x20[9];
  if (((uVar1 < 0xffffffff00000000 || local_58 >> 0x20 != 0) || (local_48 & 0x3000000000000000) != 0
      ) && (((uint)(local_48 >> 0x3b) & 6) == 0 && -1 < (long)local_58)) {
    uVar3 = *unaff_x20;
    uVar4 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    local_60 = unaff_x20[6];
    local_90 = uVar3;
    uStack_88 = uVar4;
    local_80 = uVar2;
    uStack_78 = uVar5;
    local_70 = uVar1;
    FUN_10049d5cc(&local_90,auStack_e0);
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar1 = 2;
    uVar5 = 0xc000000000000000;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  *(char *)(param_1 + 4) = (char)uVar1;
  return;
}

