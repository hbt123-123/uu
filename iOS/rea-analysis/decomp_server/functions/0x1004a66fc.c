// rea decompile_all
// name: FUN_1004a66fc
// address: 0x1004a66fc
// body: available
// range: 0x1004a66fc-0x1004a67ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a66fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  if (*(char *)(unaff_x20 + 0xc) == '\x05') {
    uVar6 = unaff_x20[7];
    uVar5 = unaff_x20[8];
    uVar8 = unaff_x20[5];
    uVar7 = unaff_x20[6];
    uVar4 = unaff_x20[3];
    uVar1 = unaff_x20[4];
    uVar3 = unaff_x20[2];
    uVar9 = *unaff_x20;
    bVar2 = *(byte *)(unaff_x20 + 1);
    local_c7 = (undefined3)*(undefined4 *)((long)unaff_x20 + 9);
    uStack_c4 = (undefined1)*(undefined4 *)((long)unaff_x20 + 0xc);
    uStack_c3 = (undefined3)((uint)*(undefined4 *)((long)unaff_x20 + 0xc) >> 8);
    uStack_80 = unaff_x20[10];
    local_88 = unaff_x20[9];
    local_78 = unaff_x20[0xb];
    local_70 = 5;
    local_d0 = uVar9;
    local_c8 = bVar2;
    local_c0 = uVar3;
    uStack_b8 = uVar4;
    local_b0 = uVar1;
    uStack_a8 = uVar8;
    local_a0 = uVar7;
    uStack_98 = uVar6;
    local_90 = uVar5;
    FUN_1004b8d5c(&local_d0,auStack_138);
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    uVar1 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0xf000000000000000;
    uVar8 = 0xc000000000000000;
    uVar4 = 0xe000000000000000;
    bVar2 = 1;
  }
  *param_1 = uVar9;
  *(byte *)(param_1 + 1) = bVar2 & 1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  param_1[5] = uVar8;
  param_1[6] = uVar7;
  param_1[7] = uVar6;
  param_1[8] = uVar5;
  return;
}

