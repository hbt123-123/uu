// rea decompile_all
// name: FUN_1004a6b5c
// address: 0x1004a6b5c
// body: available
// range: 0x1004a6b5c-0x1004a6c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a6b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 local_140;
  undefined1 auStack_138 [104];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  byte local_b0;
  undefined3 local_af;
  undefined1 uStack_ac;
  undefined3 uStack_ab;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  if (*(char *)(unaff_x20 + 0xc) == '\x06') {
    uVar10 = unaff_x20[10];
    local_140 = unaff_x20[0xb];
    uVar6 = unaff_x20[8];
    uVar5 = unaff_x20[9];
    uVar3 = unaff_x20[6];
    uVar1 = unaff_x20[7];
    uVar2 = unaff_x20[5];
    puVar11 = (undefined *)unaff_x20[2];
    uVar9 = unaff_x20[3];
    uVar4 = *unaff_x20;
    uVar8 = unaff_x20[1];
    bVar7 = *(byte *)(unaff_x20 + 4);
    local_af = (undefined3)*(undefined4 *)((long)unaff_x20 + 0x21);
    uStack_ac = (undefined1)*(undefined4 *)((long)unaff_x20 + 0x24);
    uStack_ab = (undefined3)((uint)*(undefined4 *)((long)unaff_x20 + 0x24) >> 8);
    local_70 = 6;
    local_d0 = uVar4;
    uStack_c8 = uVar8;
    local_c0 = puVar11;
    uStack_b8 = uVar9;
    local_b0 = bVar7;
    local_a8 = uVar2;
    uStack_a0 = uVar3;
    local_98 = uVar1;
    uStack_90 = uVar6;
    local_88 = uVar5;
    uStack_80 = uVar10;
    local_78 = local_140;
    FUN_1004b8d5c(&local_d0,auStack_138);
  }
  else {
    uVar4 = 0;
    uVar9 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar5 = 0;
    uVar10 = 0;
    local_140 = 0xf000000000000000;
    uVar3 = 0xc000000000000000;
    bVar7 = 1;
    uVar8 = 0xe000000000000000;
    uVar6 = 0xc000000000000000;
    puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *param_1 = uVar4;
  param_1[1] = uVar8;
  param_1[2] = puVar11;
  param_1[3] = uVar9;
  *(byte *)(param_1 + 4) = bVar7 & 1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  param_1[8] = uVar6;
  param_1[9] = uVar5;
  param_1[10] = uVar10;
  param_1[0xb] = local_140;
  return;
}

