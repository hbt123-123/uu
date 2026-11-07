// rea decompile_all
// name: FUN_100424a3c
// address: 0x100424a3c
// body: available
// range: 0x100424a3c-0x100424c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100424b88) */

void FUN_100424a3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_108 [72];
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_70;
  ulong uStack_68;
  
  uStack_68 = 0xf000000000000000;
  local_70 = 0;
  uVar6 = param_1[6];
  uVar2 = param_1[8];
  uVar3 = param_1[4] & uVar6 & uVar2 & 0x3000000000000000;
  puVar1 = param_1;
  if (uVar3 != 0x3000000000000000 &&
      (((uint)(uVar2 >> 0x3b) & 6) == 0 && ((uint)(uVar6 >> 0x3d) & 1) == 0)) {
    uVar5 = *param_1;
    uStack_b0 = param_1[2];
    uVar7 = param_1[1];
    local_a8 = param_1[3];
    local_c0 = uVar5;
    uStack_b8 = uVar7;
    local_a0 = param_1[4];
    uStack_98 = param_1[5];
    uStack_90 = uVar6;
    uStack_88 = param_1[7];
    local_80 = uVar2;
    FUN_10042d20c(&local_c0,auStack_108);
    puVar1 = (undefined8 *)0x0;
    FUN_100006cc8(0,0xf000000000000000);
    local_70 = uVar5;
    uStack_68 = uVar7;
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  FUN_10042edec();
  (*pcVar4)(&local_70,&DAT_1009be7c0,puVar1,param_3,param_4);
  uVar2 = uStack_68;
  uVar5 = local_70;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    if (uVar3 == 0x3000000000000000) {
      FUN_100008184();
    }
    else {
      pcVar4 = *(code **)(param_4 + 8);
      FUN_100008184();
      (*pcVar4)(param_3,param_4);
    }
    FUN_100006cc8(local_70,uStack_68);
    uStack_98 = param_1[5];
    local_a0 = param_1[4];
    uStack_88 = param_1[7];
    uStack_90 = param_1[6];
    local_80 = param_1[8];
    uStack_b8 = param_1[1];
    local_c0 = *param_1;
    local_a8 = param_1[3];
    uStack_b0 = param_1[2];
    *param_1 = uVar5;
    param_1[1] = uVar2;
    param_1[4] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    FUN_100040bb4(&local_c0,&DAT_100a9eea8,&DAT_100825d80);
  }
  else {
    FUN_100006cc8(local_70,uStack_68);
  }
  return;
}

