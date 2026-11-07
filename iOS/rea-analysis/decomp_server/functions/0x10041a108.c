// rea decompile_all
// name: FUN_10041a108
// address: 0x10041a108
// body: available
// range: 0x10041a108-0x10041a21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10041a108(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar1 = (undefined8 *)0xd0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0xd0);
  }
  else {
    _swift_coroFrameAlloc(0xd0,0xdf18);
  }
  *param_1 = puVar1;
  puVar1[0x19] = unaff_x20;
  uVar4 = unaff_x20[4];
  uVar11 = unaff_x20[7];
  uVar10 = unaff_x20[6];
  uVar2 = unaff_x20[8];
  if ((((uVar4 & uVar10 & uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar2 >> 0x3b) & 6 | (uint)(uVar10 >> 0x3d) & 1) != 2)) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar3 = 0;
    uVar8 = 0xc000000000000000;
    uVar4 = 1;
    uVar9 = 0xe000000000000000;
  }
  else {
    uVar5 = *unaff_x20;
    uVar9 = unaff_x20[1];
    uVar6 = unaff_x20[2];
    uVar7 = unaff_x20[3];
    uVar3 = unaff_x20[5];
    uVar8 = uVar10 & 0xdfffffffffffffff;
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1[4] = uVar4;
    puVar1[5] = uVar3;
    puVar1[7] = uVar11;
    puVar1[6] = uVar10;
    puVar1[8] = uVar2;
    FUN_10042d20c();
  }
  puVar1[0x12] = uVar5;
  puVar1[0x13] = uVar9;
  *(int *)(puVar1 + 0x14) = (int)uVar6;
  puVar1[0x15] = uVar7;
  *(byte *)(puVar1 + 0x16) = (byte)uVar4 & 1;
  puVar1[0x17] = uVar3;
  puVar1[0x18] = uVar8;
  auVar12._8_8_ = puVar1 + 0x12;
  auVar12._0_8_ = FUN_10041a21c;
  return auVar12;
}

