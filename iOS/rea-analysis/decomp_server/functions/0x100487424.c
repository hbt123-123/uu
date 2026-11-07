// rea decompile_all
// name: FUN_100487424
// address: 0x100487424
// body: available
// range: 0x100487424-0x100487523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100487424(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  puVar3 = (undefined8 *)0xc0;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar3 = _malloc(0xc0);
  }
  else {
    _swift_coroFrameAlloc(0xc0,0xe11c);
  }
  *param_1 = puVar3;
  puVar3[0x17] = unaff_x20;
  uVar8 = unaff_x20[5];
  uVar7 = unaff_x20[4];
  uVar10 = unaff_x20[7];
  uVar9 = unaff_x20[6];
  if (((uVar7 & uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    auVar12._8_8_ = uVar7;
    auVar12._0_8_ = uVar9;
    auVar12 = NEON_ushl(auVar12,_DAT_100825d30,8);
    uVar11 = CONCAT44(auVar12._8_4_,auVar12._0_4_) & 0x100000006;
    if ((byte)((byte)uVar11 | (byte)(uVar11 >> 0x20)) == 3) {
      uVar5 = *unaff_x20;
      uVar6 = unaff_x20[1];
      uVar4 = unaff_x20[2];
      uVar2 = unaff_x20[3];
      uVar13 = unaff_x20[9];
      uVar1 = unaff_x20[8];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[3] = uVar2;
      puVar3[2] = uVar4;
      puVar3[5] = uVar8;
      puVar3[4] = uVar7;
      puVar3[7] = uVar10;
      puVar3[6] = uVar9;
      puVar3[9] = uVar13;
      puVar3[8] = uVar1;
      FUN_100493064(puVar3,puVar3 + 10);
      goto LAB_100487500;
    }
  }
  uVar4 = 0;
  FUN_100492e44();
  _swift_initStaticObject();
  uVar5 = 0;
  uVar6 = 0xc000000000000000;
LAB_100487500:
  puVar3[0x14] = uVar5;
  puVar3[0x15] = uVar6;
  puVar3[0x16] = uVar4;
  auVar14._8_8_ = puVar3 + 0x14;
  auVar14._0_8_ = FUN_100487524;
  return auVar14;
}

