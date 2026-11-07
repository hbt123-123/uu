// rea decompile_all
// name: FUN_100486e20
// address: 0x100486e20
// body: available
// range: 0x100486e20-0x100486f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100486e20(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 auStack_108 [80];
  undefined *local_b8;
  undefined8 uStack_b0;
  byte local_a8;
  byte local_a7;
  undefined4 local_a6;
  undefined2 local_a2;
  undefined *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  uVar5 = unaff_x20[4];
  uStack_88 = unaff_x20[6];
  if ((((uVar5 & uStack_88 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uStack_88 >> 0x3b) & 6 | (uint)(uVar5 >> 0x3d) & 1) != 2)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10042e6bc();
    uVar2 = 0;
    bVar7 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar3 = 0;
    uVar6 = 0xc000000000000000;
    bVar11 = 1;
  }
  else {
    puVar4 = (undefined *)*unaff_x20;
    uVar2 = unaff_x20[1];
    bVar11 = *(byte *)(unaff_x20 + 2);
    bVar7 = *(byte *)((long)unaff_x20 + 0x11);
    puVar1 = (undefined *)unaff_x20[3];
    uVar8 = unaff_x20[5];
    uVar9 = unaff_x20[7];
    uVar10 = unaff_x20[8];
    uVar3 = unaff_x20[9];
    uVar6 = uStack_88 & 0xcfffffffffffffff;
    local_a6 = (undefined4)*(undefined6 *)((long)unaff_x20 + 0x12);
    local_a2 = (undefined2)((uint6)*(undefined6 *)((long)unaff_x20 + 0x12) >> 0x20);
    local_b8 = puVar4;
    uStack_b0 = uVar2;
    local_a8 = bVar11;
    local_a7 = bVar7;
    local_a0 = puVar1;
    uStack_98 = uVar5;
    local_90 = uVar8;
    local_80 = uVar9;
    uStack_78 = uVar10;
    local_70 = uVar3;
    FUN_100493064(&local_b8,auStack_108);
  }
  *param_1 = puVar4;
  param_1[1] = uVar2;
  *(byte *)(param_1 + 2) = bVar11 & 1;
  *(byte *)((long)param_1 + 0x11) = bVar7 & 1;
  param_1[3] = puVar1;
  *(byte *)(param_1 + 4) = (byte)uVar5 & 1;
  param_1[5] = uVar8;
  param_1[6] = uVar6;
  param_1[7] = uVar9;
  param_1[8] = uVar10;
  param_1[9] = uVar3;
  return;
}

