// rea decompile_all
// name: FUN_100417908
// address: 0x100417908
// body: available
// range: 0x100417908-0x100417a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100417908(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_108 [80];
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  byte local_70;
  
  puVar8 = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar5 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar9 = unaff_x20[6];
  uVar7 = unaff_x20[7];
  local_78 = unaff_x20[8];
  local_70 = *(byte *)(unaff_x20 + 9);
  if ((((local_78 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (local_70 == 0xff)) {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar2 = 0xc000000000000000;
    uVar9 = 0x3000000000000000;
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else if ((local_70 & 1) == 0 && ((uint)(local_78 >> 0x3c) & 3) == 0) {
    uVar2 = local_78 & 0xcfffffffffffffff;
    local_b8 = puVar8;
    uStack_b0 = uVar1;
    local_a8 = uVar3;
    uStack_a0 = uVar4;
    local_98 = uVar5;
    uStack_90 = uVar6;
    local_88 = uVar9;
    uStack_80 = uVar7;
    FUN_10042c868(&local_b8,auStack_108);
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar2 = 0xc000000000000000;
    uVar9 = 0x3000000000000000;
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  *param_1 = puVar8;
  *(int *)(param_1 + 1) = (int)uVar1;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar9;
  param_1[7] = uVar7;
  param_1[8] = uVar2;
  return;
}

