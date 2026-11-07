// rea decompile_all
// name: FUN_1004a6090
// address: 0x1004a6090
// body: available
// range: 0x1004a6090-0x1004a619f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a6090(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [104];
  undefined8 local_d0;
  undefined8 local_c8;
  byte local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  if (*(char *)(unaff_x20 + 0xc) == '\x03') {
    uVar3 = unaff_x20[6];
    uVar2 = unaff_x20[7];
    uVar7 = unaff_x20[4];
    uVar4 = unaff_x20[5];
    uVar5 = unaff_x20[3];
    uVar6 = *(undefined4 *)((long)unaff_x20 + 0x14);
    uVar8 = unaff_x20[1];
    bVar9 = *(byte *)(unaff_x20 + 2);
    uVar10 = *unaff_x20;
    local_bf = *(undefined2 *)((long)unaff_x20 + 0x11);
    local_bd = *(undefined1 *)((long)unaff_x20 + 0x13);
    uStack_88 = unaff_x20[9];
    local_90 = unaff_x20[8];
    uStack_78 = unaff_x20[0xb];
    uStack_80 = unaff_x20[10];
    local_70 = 3;
    local_d0 = uVar10;
    local_c8 = uVar8;
    local_c0 = bVar9;
    local_bc = uVar6;
    local_b8 = uVar5;
    uStack_b0 = uVar7;
    local_a8 = uVar4;
    uStack_a0 = uVar3;
    local_98 = uVar2;
    FUN_1004b8d5c(&local_d0,auStack_138);
    uVar1 = (undefined4)uVar10;
  }
  else {
    uVar1 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0xf000000000000000;
    uVar7 = 0xc000000000000000;
    bVar9 = 1;
  }
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 2) = uVar8;
  *(byte *)(param_1 + 4) = bVar9 & 1;
  param_1[5] = uVar6;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  return;
}

