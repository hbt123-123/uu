// rea decompile_all
// name: FUN_100487798
// address: 0x100487798
// body: available
// range: 0x100487798-0x1004878eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100487798(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar6 = (undefined8 *)0xd0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar6 = _malloc(0xd0);
  }
  else {
    _swift_coroFrameAlloc(0xd0,0x5902);
  }
  *param_1 = puVar6;
  puVar6[0x19] = unaff_x20;
  uVar13 = unaff_x20[5];
  uVar12 = unaff_x20[4];
  uVar15 = unaff_x20[7];
  uVar14 = unaff_x20[6];
  if (((uVar12 & uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    auVar17._8_8_ = uVar12;
    auVar17._0_8_ = uVar14;
    auVar17 = NEON_ushl(auVar17,_DAT_100825d30,8);
    uVar16 = CONCAT44(auVar17._8_4_,auVar17._0_4_) & 0x100000006;
    if ((byte)((byte)uVar16 | (byte)(uVar16 >> 0x20)) == 4) {
      uVar7 = *unaff_x20;
      uVar8 = unaff_x20[1];
      bVar9 = *(byte *)(unaff_x20 + 2);
      uVar2 = *(undefined1 *)((long)unaff_x20 + 0x17);
      uVar3 = *(undefined3 *)((long)unaff_x20 + 0x15);
      uVar1 = *(undefined4 *)((long)unaff_x20 + 0x11);
      uVar10 = unaff_x20[3];
      uVar4 = unaff_x20[8];
      uVar5 = unaff_x20[9];
      uVar16 = uVar12 & 0xdfffffffffffffff;
      uVar11 = (undefined4)((uint7)*(undefined7 *)((long)unaff_x20 + 0x11) >> 0x18);
      *puVar6 = uVar7;
      puVar6[1] = uVar8;
      *(byte *)(puVar6 + 2) = bVar9;
      *(undefined4 *)((long)puVar6 + 0x11) = uVar1;
      *(undefined1 *)((long)puVar6 + 0x17) = uVar2;
      *(short *)((long)puVar6 + 0x15) = (short)uVar3;
      puVar6[3] = uVar10;
      puVar6[5] = uVar13;
      puVar6[4] = uVar12;
      puVar6[7] = uVar15;
      puVar6[6] = uVar14;
      puVar6[9] = uVar5;
      puVar6[8] = uVar4;
      FUN_100493064();
      goto LAB_1004878ac;
    }
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar16 = 0xc000000000000000;
  bVar9 = 1;
LAB_1004878ac:
  *(int *)(puVar6 + 0x14) = (int)uVar7;
  puVar6[0x15] = uVar8;
  *(byte *)(puVar6 + 0x16) = bVar9 & 1;
  *(undefined4 *)((long)puVar6 + 0xb4) = uVar11;
  puVar6[0x17] = uVar10;
  puVar6[0x18] = uVar16;
  auVar18._8_8_ = puVar6 + 0x14;
  auVar18._0_8_ = FUN_1004878ec;
  return auVar18;
}

