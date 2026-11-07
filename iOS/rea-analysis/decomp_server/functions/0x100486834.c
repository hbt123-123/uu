// rea decompile_all
// name: FUN_100486834
// address: 0x100486834
// body: available
// range: 0x100486834-0x10048696f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100486834(undefined8 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined3 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *unaff_x20;
  byte bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pbVar6 = (byte *)0xd0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pbVar6 = _malloc(0xd0);
  }
  else {
    _swift_coroFrameAlloc(0xd0,0xca19);
  }
  *param_1 = pbVar6;
  *(byte **)(pbVar6 + 200) = unaff_x20;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(ulong *)(unaff_x20 + 0x20);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(ulong *)(unaff_x20 + 0x30);
  if (((uVar11 & uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar13;
    auVar16 = NEON_ushl(auVar16,_DAT_100825d30,8);
    uVar15 = CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x100000006;
    if ((char)uVar15 == '\0' && (char)(uVar15 >> 0x20) == '\0') {
      bVar7 = *unaff_x20;
      bVar2 = unaff_x20[7];
      uVar3 = *(undefined3 *)(unaff_x20 + 5);
      uVar1 = *(undefined4 *)(unaff_x20 + 1);
      puVar9 = *(undefined **)(unaff_x20 + 8);
      puVar10 = *(undefined **)(unaff_x20 + 0x10);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar15 = uVar11 & 0xdfffffffffffffff;
      *pbVar6 = bVar7;
      *(undefined4 *)(pbVar6 + 1) = uVar1;
      pbVar6[7] = bVar2;
      *(short *)(pbVar6 + 5) = (short)uVar3;
      *(undefined **)(pbVar6 + 8) = puVar9;
      *(undefined **)(pbVar6 + 0x10) = puVar10;
      *(undefined8 *)(pbVar6 + 0x18) = uVar8;
      *(undefined8 *)(pbVar6 + 0x28) = uVar12;
      *(ulong *)(pbVar6 + 0x20) = uVar11;
      *(undefined8 *)(pbVar6 + 0x38) = uVar14;
      *(ulong *)(pbVar6 + 0x30) = uVar13;
      *(undefined8 *)(pbVar6 + 0x48) = uVar5;
      *(undefined8 *)(pbVar6 + 0x40) = uVar4;
      FUN_100493064();
      goto LAB_1004868d8;
    }
  }
  bVar7 = 0;
  uVar8 = 0;
  uVar15 = 0xc000000000000000;
  puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1004868d8:
  pbVar6[0xa0] = bVar7 & 1;
  *(undefined **)(pbVar6 + 0xa8) = puVar9;
  *(undefined **)(pbVar6 + 0xb0) = puVar10;
  *(undefined8 *)(pbVar6 + 0xb8) = uVar8;
  *(ulong *)(pbVar6 + 0xc0) = uVar15;
  auVar17._8_8_ = pbVar6 + 0xa0;
  auVar17._0_8_ = FUN_100486970;
  return auVar17;
}

