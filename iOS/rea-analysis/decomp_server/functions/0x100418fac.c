// rea decompile_all
// name: FUN_100418fac
// address: 0x100418fac
// body: available
// range: 0x100418fac-0x1004190bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100418fac(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar4 = (undefined8 *)0xc8;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(200);
  }
  else {
    _swift_coroFrameAlloc(200,0x5812);
  }
  *param_1 = puVar4;
  puVar4[0x18] = unaff_x20;
  uVar8 = *unaff_x20;
  puVar10 = (undefined *)unaff_x20[1];
  uVar9 = unaff_x20[2];
  uVar13 = unaff_x20[4];
  uVar5 = unaff_x20[3];
  uVar12 = unaff_x20[6];
  uVar11 = unaff_x20[5];
  uVar1 = unaff_x20[7];
  uVar2 = unaff_x20[8];
  bVar3 = *(byte *)(unaff_x20 + 9);
  if ((((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar3 != 0xff)) {
    uVar6 = 4;
    if ((bVar3 & 1) == 0) {
      uVar6 = 0;
    }
    if ((uVar6 | (uint)(uVar2 >> 0x3c) & 3) == 6) {
      uVar7 = (undefined4)((ulong)uVar8 >> 0x20);
      *puVar4 = uVar8;
      puVar4[1] = puVar10;
      puVar4[2] = uVar9;
      puVar4[4] = uVar13;
      puVar4[3] = uVar5;
      puVar4[6] = uVar12;
      puVar4[5] = uVar11;
      puVar4[7] = uVar1;
      puVar4[8] = uVar2;
      *(byte *)(puVar4 + 9) = bVar3;
      FUN_10042c868();
      goto LAB_10041908c;
    }
  }
  uVar8 = 0;
  uVar7 = 0;
  uVar9 = 0;
  uVar5 = 0xc000000000000000;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10041908c:
  *(int *)(puVar4 + 0x14) = (int)uVar8;
  *(undefined4 *)((long)puVar4 + 0xa4) = uVar7;
  puVar4[0x15] = puVar10;
  puVar4[0x16] = uVar9;
  puVar4[0x17] = uVar5;
  auVar14._8_8_ = puVar4 + 0x14;
  auVar14._0_8_ = FUN_1004190c0;
  return auVar14;
}

