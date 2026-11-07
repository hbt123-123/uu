// rea decompile_all
// name: FUN_100443128
// address: 0x100443128
// body: available
// range: 0x100443128-0x10044325b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100443128(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  
  puVar4 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar4 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xc6c1);
  }
  uVar10 = 0;
  uVar7 = 0;
  *param_1 = puVar4;
  puVar4[5] = unaff_x20;
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  bVar3 = *(byte *)((long)unaff_x20 + 0x34);
  uVar5 = 0xc000000000000000;
  uVar8 = 1;
  uVar9 = 0;
  if (bVar3 >> 6 == 1) {
    bVar11 = 1;
    uVar6 = 0;
    if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || uVar2 >> 0x21 != 0x3fffffff)
        || (ulong)unaff_x20[5] >> 0x21 != 0) || bVar3 >> 1 != 0) {
      uVar8 = unaff_x20[1];
      uVar9 = unaff_x20[2];
      uVar7 = *unaff_x20;
      uVar10 = (undefined4)((ulong)uVar8 >> 0x20);
      bVar11 = (byte)(uVar2 >> 0x20) & 1;
      FUN_10017ac64(uVar7,uVar8,uVar9,uVar1,uVar2,unaff_x20[5],
                    (ulong)CONCAT14(bVar3,*(undefined4 *)(unaff_x20 + 6)));
      uVar5 = uVar1;
      uVar6 = uVar2;
    }
  }
  else {
    uVar6 = 0;
    bVar11 = 1;
  }
  *puVar4 = uVar7;
  *(byte *)(puVar4 + 1) = (byte)uVar8 & 1;
  *(undefined4 *)((long)puVar4 + 0xc) = uVar10;
  puVar4[2] = uVar9;
  puVar4[3] = uVar5;
  *(int *)(puVar4 + 4) = (int)uVar6;
  *(byte *)((long)puVar4 + 0x24) = bVar11;
  auVar12._8_8_ = puVar4;
  auVar12._0_8_ = FUN_10044325c;
  return auVar12;
}

