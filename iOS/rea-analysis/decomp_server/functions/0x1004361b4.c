// rea decompile_all
// name: FUN_1004361b4
// address: 0x1004361b4
// body: available
// range: 0x1004361b4-0x100436297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004361b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x178;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x178);
  }
  else {
    _swift_coroFrameAlloc(0x178,0x2d99);
  }
  *param_1 = puVar1;
  puVar1[0x2e] = unaff_x20;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess((undefined8 *)(lVar2 + 0x118),puVar1 + 0x28,0,0);
  uVar5 = *(undefined8 *)(lVar2 + 0x120);
  uVar4 = *(undefined8 *)(lVar2 + 0x118);
  uVar7 = *(undefined8 *)(lVar2 + 0x130);
  uVar6 = *(undefined8 *)(lVar2 + 0x128);
  uVar8 = *(undefined8 *)(lVar2 + 0x138);
  uVar10 = *(undefined8 *)(lVar2 + 0x150);
  uVar9 = *(undefined8 *)(lVar2 + 0x148);
  puVar1[5] = *(undefined8 *)(lVar2 + 0x140);
  puVar1[4] = uVar8;
  puVar1[7] = uVar10;
  puVar1[6] = uVar9;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar3 = puVar1[7];
  if (uVar3 >> 0x3c < 0xf) {
    uVar6 = puVar1[1];
    uVar5 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    uVar10 = puVar1[5];
    uVar9 = puVar1[4];
    uVar4 = puVar1[6];
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = 0xc000000000000000;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  puVar1[9] = uVar6;
  puVar1[8] = uVar5;
  puVar1[0xb] = uVar8;
  puVar1[10] = uVar7;
  puVar1[0xd] = uVar10;
  puVar1[0xc] = uVar9;
  puVar1[0xe] = uVar4;
  puVar1[0xf] = uVar3;
  FUN_10007f314(puVar1,puVar1 + 0x10,&DAT_100a9f380,&DAT_10082d5a0);
  auVar11._8_8_ = puVar1 + 8;
  auVar11._0_8_ = FUN_100436298;
  return auVar11;
}

