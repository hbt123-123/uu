// rea decompile_all
// name: FUN_10041a74c
// address: 0x10041a74c
// body: available
// range: 0x10041a74c-0x10041a877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10041a74c(undefined8 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = (undefined4 *)0x178;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x178);
  }
  else {
    _swift_coroFrameAlloc(0x178,0xb71d);
  }
  *param_1 = puVar2;
  *(undefined8 **)(puVar2 + 0x5a) = unaff_x20;
  uVar6 = unaff_x20[4];
  uVar5 = unaff_x20[6];
  uVar3 = unaff_x20[8];
  if ((((uVar6 & uVar5 & uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) ||
     (((uint)(uVar3 >> 0x3b) & 6 | (uint)(uVar5 >> 0x3d) & 1) != 4)) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 1;
    uVar11 = 0xc000000000000000;
    uVar12 = 0xc000000000000000;
  }
  else {
    uVar7 = *unaff_x20;
    uVar8 = unaff_x20[1];
    uVar11 = unaff_x20[2];
    uVar9 = unaff_x20[3];
    uVar10 = unaff_x20[5];
    uVar4 = unaff_x20[7];
    uVar12 = uVar3 & 0xcfffffffffffffff;
    *(undefined8 *)(puVar2 + 0x12) = uVar7;
    *(undefined8 *)(puVar2 + 0x14) = uVar8;
    *(undefined8 *)(puVar2 + 0x16) = uVar11;
    *(undefined8 *)(puVar2 + 0x18) = uVar9;
    *(ulong *)(puVar2 + 0x1a) = uVar6;
    *(undefined8 *)(puVar2 + 0x1c) = uVar10;
    *(ulong *)(puVar2 + 0x1e) = uVar5;
    *(undefined8 *)(puVar2 + 0x20) = uVar4;
    *(ulong *)(puVar2 + 0x22) = uVar3;
    FUN_10042d20c(puVar2 + 0x12,puVar2 + 0x24);
  }
  bVar1 = (byte)uVar6 & 1;
  *(byte *)(puVar2 + 0x5c) = bVar1;
  *puVar2 = (int)uVar7;
  *(undefined8 *)(puVar2 + 2) = uVar8;
  *(undefined8 *)(puVar2 + 4) = uVar11;
  *(undefined8 *)(puVar2 + 6) = uVar9;
  *(byte *)(puVar2 + 8) = bVar1;
  *(undefined8 *)(puVar2 + 10) = uVar10;
  puVar2[0xc] = (int)uVar5;
  *(undefined8 *)(puVar2 + 0xe) = uVar4;
  *(ulong *)(puVar2 + 0x10) = uVar12;
  auVar13._8_8_ = puVar2;
  auVar13._0_8_ = FUN_10041a878;
  return auVar13;
}

