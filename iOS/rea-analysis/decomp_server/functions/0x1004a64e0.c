// rea decompile_all
// name: FUN_1004a64e0
// address: 0x1004a64e0
// body: available
// range: 0x1004a64e0-0x1004a65c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a64e0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 auStack_138 [104];
  undefined8 local_d0;
  byte local_c8;
  undefined3 local_c7;
  undefined1 uStack_c4;
  undefined3 uStack_c3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  if (*(char *)(unaff_x20 + 0xc) == '\x04') {
    uVar2 = unaff_x20[6];
    uVar1 = unaff_x20[7];
    uVar3 = unaff_x20[4];
    uVar7 = unaff_x20[5];
    uVar4 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    uVar6 = *unaff_x20;
    bVar8 = *(byte *)(unaff_x20 + 1);
    local_c7 = (undefined3)*(undefined4 *)((long)unaff_x20 + 9);
    uStack_c4 = (undefined1)*(undefined4 *)((long)unaff_x20 + 0xc);
    uStack_c3 = (undefined3)((uint)*(undefined4 *)((long)unaff_x20 + 0xc) >> 8);
    uStack_88 = unaff_x20[9];
    local_90 = unaff_x20[8];
    uStack_78 = unaff_x20[0xb];
    uStack_80 = unaff_x20[10];
    local_70 = 4;
    local_d0 = uVar6;
    local_c8 = bVar8;
    local_c0 = uVar4;
    uStack_b8 = uVar5;
    local_b0 = uVar3;
    uStack_a8 = uVar7;
    local_a0 = uVar2;
    uStack_98 = uVar1;
    FUN_1004b8d5c(&local_d0,auStack_138);
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    uVar1 = 0xc000000000000000;
    uVar5 = 0xe000000000000000;
    bVar8 = 1;
    uVar7 = 0xe000000000000000;
  }
  *param_1 = uVar6;
  *(byte *)(param_1 + 1) = bVar8 & 1;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar2;
  param_1[7] = uVar1;
  return;
}

