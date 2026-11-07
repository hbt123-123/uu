// rea decompile_all
// name: FUN_1004651c4
// address: 0x1004651c4
// body: available
// range: 0x1004651c4-0x10046527f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1004651c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  
  puVar1 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x3d42);
  }
  *param_1 = puVar1;
  puVar1[5] = unaff_x20;
  puVar5 = (undefined *)unaff_x20[2];
  if (puVar5 == (undefined *)0x0) {
    uVar2 = 0;
    uVar4 = 0;
    uVar3 = 0xc000000000000000;
    bVar6 = 1;
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[4];
    bVar6 = (byte)*(undefined4 *)(unaff_x20 + 1);
    uVar2 = *unaff_x20;
    _swift_bridgeObjectRetain(puVar5);
    FUN_100008184(uVar4,uVar3);
  }
  *puVar1 = uVar2;
  *(byte *)(puVar1 + 1) = bVar6 & 1;
  puVar1[2] = puVar5;
  puVar1[3] = uVar4;
  puVar1[4] = uVar3;
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = FUN_100465280;
  return auVar7;
}

