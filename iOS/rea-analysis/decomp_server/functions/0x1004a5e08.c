// rea decompile_all
// name: FUN_1004a5e08
// address: 0x1004a5e08
// body: available
// range: 0x1004a5e08-0x1004a5f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a5e08(byte *param_1)

{
  undefined8 uVar1;
  byte *unaff_x20;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [104];
  byte local_d0;
  undefined3 local_cf;
  undefined1 uStack_cc;
  undefined3 uStack_cb;
  undefined8 local_c8;
  byte local_c0;
  undefined3 local_bf;
  undefined1 uStack_bc;
  undefined3 uStack_bb;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  if (unaff_x20[0x60] == 2) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 8);
    bVar4 = *unaff_x20;
    bVar2 = unaff_x20[0x10];
    local_cf = (undefined3)*(undefined4 *)(unaff_x20 + 1);
    uStack_cc = (undefined1)*(undefined4 *)(unaff_x20 + 4);
    uStack_cb = (undefined3)((uint)*(undefined4 *)(unaff_x20 + 4) >> 8);
    local_bf = (undefined3)*(undefined4 *)(unaff_x20 + 0x11);
    uStack_bc = (undefined1)*(undefined4 *)(unaff_x20 + 0x14);
    uStack_bb = (undefined3)((uint)*(undefined4 *)(unaff_x20 + 0x14) >> 8);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x50);
    local_88 = *(undefined8 *)(unaff_x20 + 0x48);
    local_78 = *(undefined8 *)(unaff_x20 + 0x58);
    local_70 = 2;
    local_d0 = bVar4;
    local_c8 = uVar3;
    local_c0 = bVar2;
    local_b8 = uVar7;
    uStack_b0 = uVar1;
    local_a8 = uVar9;
    uStack_a0 = uVar8;
    local_98 = uVar6;
    uStack_90 = uVar5;
    FUN_1004b8d5c(&local_d0,auStack_138);
  }
  else {
    bVar4 = 0;
    uVar3 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0xf000000000000000;
    uVar9 = 0xc000000000000000;
    bVar2 = 1;
  }
  *param_1 = bVar4 & 1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  param_1[0x10] = bVar2 & 1;
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  return;
}

