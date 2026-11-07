// rea decompile_all
// name: FUN_100486bb8
// address: 0x100486bb8
// body: available
// range: 0x100486bb8-0x100486cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100486bb8(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  puVar6 = (undefined8 *)0xd0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar6 = _malloc(0xd0);
  }
  else {
    _swift_coroFrameAlloc(0xd0,0x1223);
  }
  *param_1 = puVar6;
  puVar6[0x19] = unaff_x20;
  uVar12 = unaff_x20[5];
  uVar11 = unaff_x20[4];
  uVar14 = unaff_x20[7];
  uVar13 = unaff_x20[6];
  if (((uVar11 & uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    auVar16._8_8_ = uVar11;
    auVar16._0_8_ = uVar13;
    auVar16 = NEON_ushl(auVar16,_DAT_100825d30,8);
    uVar15 = CONCAT44(auVar16._8_4_,auVar16._0_4_) & 0x100000006;
    if ((byte)((byte)uVar15 | (byte)(uVar15 >> 0x20)) == 1) {
      puVar10 = (undefined *)*unaff_x20;
      uVar7 = unaff_x20[1];
      bVar8 = *(byte *)(unaff_x20 + 2);
      uVar2 = *(undefined1 *)((long)unaff_x20 + 0x17);
      uVar3 = *(undefined3 *)((long)unaff_x20 + 0x15);
      uVar1 = *(undefined4 *)((long)unaff_x20 + 0x11);
      uVar9 = unaff_x20[3];
      uVar4 = unaff_x20[8];
      uVar5 = unaff_x20[9];
      uVar15 = uVar11 & 0xdfffffffffffffff;
      *puVar6 = puVar10;
      puVar6[1] = uVar7;
      *(byte *)(puVar6 + 2) = bVar8;
      *(undefined4 *)((long)puVar6 + 0x11) = uVar1;
      *(undefined1 *)((long)puVar6 + 0x17) = uVar2;
      *(short *)((long)puVar6 + 0x15) = (short)uVar3;
      puVar6[3] = uVar9;
      puVar6[5] = uVar12;
      puVar6[4] = uVar11;
      puVar6[7] = uVar14;
      puVar6[6] = uVar13;
      puVar6[9] = uVar5;
      puVar6[8] = uVar4;
      FUN_100493064();
      goto LAB_100486cc4;
    }
  }
  uVar7 = 0;
  uVar9 = 0;
  uVar15 = 0xc000000000000000;
  bVar8 = 1;
  puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_100486cc4:
  puVar6[0x14] = puVar10;
  puVar6[0x15] = uVar7;
  *(byte *)(puVar6 + 0x16) = bVar8 & 1;
  puVar6[0x17] = uVar9;
  puVar6[0x18] = uVar15;
  auVar17._8_8_ = puVar6 + 0x14;
  auVar17._0_8_ = FUN_100486cf8;
  return auVar17;
}

