// rea decompile_all
// name: FUN_1004a5afc
// address: 0x1004a5afc
// body: available
// range: 0x1004a5afc-0x1004a5c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a5afc(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_140;
  undefined1 auStack_138 [104];
  undefined8 local_d0;
  byte local_c8;
  undefined3 local_c7;
  undefined1 uStack_c4;
  undefined3 uStack_c3;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  bVar1 = 1;
  if (*(char *)(unaff_x20 + 0xc) == '\x01') {
    uVar4 = unaff_x20[10];
    local_140 = unaff_x20[0xb];
    uVar8 = unaff_x20[8];
    uVar10 = unaff_x20[9];
    uVar3 = unaff_x20[6];
    uVar7 = unaff_x20[7];
    uVar11 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    puVar9 = (undefined *)unaff_x20[2];
    uVar5 = unaff_x20[3];
    uVar6 = *unaff_x20;
    bVar1 = *(byte *)(unaff_x20 + 1);
    local_c7 = (undefined3)*(undefined4 *)((long)unaff_x20 + 9);
    uStack_c4 = (undefined1)*(undefined4 *)((long)unaff_x20 + 0xc);
    uStack_c3 = (undefined3)((uint)*(undefined4 *)((long)unaff_x20 + 0xc) >> 8);
    local_70 = 1;
    local_d0 = uVar6;
    local_c8 = bVar1;
    local_c0 = puVar9;
    uStack_b8 = uVar5;
    local_b0 = uVar11;
    uStack_a8 = uVar2;
    local_a0 = uVar3;
    uStack_98 = uVar7;
    local_90 = uVar8;
    uStack_88 = uVar10;
    local_80 = uVar4;
    uStack_78 = local_140;
    FUN_1004b8d5c(&local_d0,auStack_138);
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar4 = 0;
    local_140 = 0xf000000000000000;
    uVar3 = 0xc000000000000000;
    uVar11 = 0xe000000000000000;
    uVar8 = 0xc000000000000000;
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *param_1 = uVar6;
  *(byte *)(param_1 + 1) = bVar1 & 1;
  param_1[2] = puVar9;
  param_1[3] = uVar5;
  param_1[4] = uVar11;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar10;
  param_1[10] = uVar4;
  param_1[0xb] = local_140;
  return;
}

