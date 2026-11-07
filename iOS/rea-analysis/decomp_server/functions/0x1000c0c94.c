// rea decompile_all
// name: FUN_1000c0c94
// address: 0x1000c0c94
// body: available
// range: 0x1000c0c94-0x1000c0ec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000c0c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ID IVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar2 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  uVar9 = 4;
  *(undefined8 *)(puVar2 + 0x18) = 8;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  IVar7 = param_6;
  FUN_1000c0aa8();
  *(ID *)(puVar2 + 0x20) = IVar7;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _objc_msgSend(param_6,"frame");
  puVar3 = &DAT_100a766e8;
  uVar10 = param_2;
  uVar12 = param_3;
  uVar14 = param_4;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  puVar4 = puVar3;
  _swift_allocObject();
  uVar13 = 4;
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar1 = PTR___s12CoreGraphics7CGFloatVN_100996360;
  *(undefined **)(puVar4 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_100996360;
  puVar5 = puVar4;
  FUN_1000c12e0();
  *(undefined **)(puVar4 + 0x40) = puVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar9;
  *(undefined **)(puVar4 + 0x60) = puVar1;
  *(undefined **)(puVar4 + 0x68) = puVar5;
  *(undefined8 *)(puVar4 + 0x48) = param_2;
  *(undefined **)(puVar4 + 0x88) = puVar1;
  *(undefined **)(puVar4 + 0x90) = puVar5;
  *(undefined8 *)(puVar4 + 0x70) = param_3;
  *(undefined **)(puVar4 + 0xb0) = puVar1;
  *(undefined **)(puVar4 + 0xb8) = puVar5;
  *(undefined8 *)(puVar4 + 0x98) = param_4;
  uVar9 = 0x8000000100883370;
  puVar6 = &DAT_d000000000000013;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(&DAT_d000000000000013,0x8000000100883370,puVar4);
  *(undefined1 **)(puVar2 + 0x30) = puVar6;
  *(undefined8 *)(puVar2 + 0x38) = uVar9;
  _objc_msgSend(param_6,"visibleFrame");
  _swift_allocObject(puVar3,0xc0,7);
  *(undefined8 *)(puVar3 + 0x18) = 8;
  *(undefined8 *)(puVar3 + 0x10) = 4;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined **)(puVar3 + 0x40) = puVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar13;
  *(undefined **)(puVar3 + 0x60) = puVar1;
  *(undefined **)(puVar3 + 0x68) = puVar5;
  *(undefined8 *)(puVar3 + 0x48) = uVar10;
  *(undefined **)(puVar3 + 0x88) = puVar1;
  *(undefined **)(puVar3 + 0x90) = puVar5;
  *(undefined8 *)(puVar3 + 0x70) = uVar12;
  *(undefined **)(puVar3 + 0xb0) = puVar1;
  *(undefined **)(puVar3 + 0xb8) = puVar5;
  *(undefined8 *)(puVar3 + 0x98) = uVar14;
  uVar10 = 0x8000000100883370;
  puVar6 = &DAT_d000000000000013;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(&DAT_d000000000000013,0x8000000100883370,puVar3);
  *(undefined1 **)(puVar2 + 0x40) = puVar6;
  *(undefined8 *)(puVar2 + 0x48) = uVar10;
  pcVar11 = "backingScaleFactor";
  IVar7 = _objc_msgSend(param_6,"backingScaleFactor");
  __sSd11descriptionSSvg();
  *(ID *)(puVar2 + 0x50) = IVar7;
  *(char **)(puVar2 + 0x58) = pcVar11;
  puVar3 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar8 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar10 = 0x3a;
  uVar12 = 0xe100000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x3a,0xe100000000000000,puVar3,puVar8);
  _swift_bridgeObjectRelease(puVar2);
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = uVar10;
  return auVar15;
}

