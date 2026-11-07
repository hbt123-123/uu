// rea decompile_all
// name: FUN_100417ee8
// address: 0x100417ee8
// body: available
// range: 0x100417ee8-0x100418007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100417ee8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = (undefined8 *)0xe0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0xe0);
  }
  else {
    _swift_coroFrameAlloc(0xe0,0xaf48);
  }
  *param_1 = puVar2;
  puVar2[0x1b] = unaff_x20;
  uVar6 = *unaff_x20;
  uVar8 = unaff_x20[1];
  uVar10 = unaff_x20[2];
  uVar9 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  uVar7 = unaff_x20[5];
  uVar12 = unaff_x20[7];
  uVar4 = unaff_x20[6];
  uVar3 = unaff_x20[8];
  bVar1 = *(byte *)(unaff_x20 + 9);
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar1 != 0xff)) {
    uVar5 = 4;
    if ((bVar1 & 1) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 | (uint)(uVar3 >> 0x3c) & 3) == 1) {
      *puVar2 = uVar6;
      puVar2[1] = uVar8;
      puVar2[2] = uVar10;
      puVar2[3] = uVar9;
      puVar2[4] = uVar11;
      puVar2[5] = uVar7;
      puVar2[7] = uVar12;
      puVar2[6] = uVar4;
      puVar2[8] = uVar3;
      *(byte *)(puVar2 + 9) = bVar1;
      FUN_10042c868();
      goto LAB_100417fcc;
    }
  }
  uVar6 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar4 = 0xc000000000000000;
  uVar10 = 0xe000000000000000;
  uVar11 = 0xe000000000000000;
LAB_100417fcc:
  *(int *)(puVar2 + 0x14) = (int)uVar6;
  puVar2[0x15] = uVar8;
  puVar2[0x16] = uVar10;
  puVar2[0x17] = uVar9;
  puVar2[0x18] = uVar11;
  puVar2[0x19] = uVar7;
  puVar2[0x1a] = uVar4;
  auVar13._8_8_ = puVar2 + 0x14;
  auVar13._0_8_ = FUN_100418008;
  return auVar13;
}

