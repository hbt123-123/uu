// rea decompile_all
// name: FUN_1000b6a2c
// address: 0x1000b6a2c
// body: available
// range: 0x1000b6a2c-0x1000b6da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6a2c(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 local_2a8;
  undefined *local_138;
  undefined8 *puStack_130;
  undefined *local_120;
  
  local_138 = (undefined *)*unaff_x20;
  puVar6 = (undefined8 *)unaff_x20[1];
  puVar5 = (undefined *)unaff_x20[2];
  puVar4 = (undefined8 *)unaff_x20[3];
  puStack_130 = puVar6;
  if (*(char *)(unaff_x20 + 4) == '\0') {
    _swift_bridgeObjectRetain(puVar6);
    puVar6 = puVar4;
    _swift_bridgeObjectRetain();
    FUN_1003a1af8();
    local_2a8 = *puVar6;
    puVar6 = (undefined8 *)puVar6[1];
    puVar7 = &DAT_100a75980;
    FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    puVar10 = puVar6;
    _swift_bridgeObjectRetain();
    FUN_1003a1038();
    puVar3 = PTR___sSSN_1009957f8;
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    local_120 = PTR___sSSN_1009957f8;
    FUN_10003e8bc(&local_138,puVar7 + 0x30);
    puVar10 = (undefined8 *)(puVar7 + 0x20);
    *puVar10 = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    ppuVar8 = &local_138;
    FUN_10003f094();
    FUN_1003a0e84();
    puVar11 = *ppuVar8;
    puVar9 = ppuVar8[1];
    local_120 = puVar3;
    local_138 = param_1;
    puStack_130 = (undefined8 *)param_2;
    FUN_10003e8bc(&local_138,puVar7 + 0x60);
    *(undefined **)(puVar7 + 0x50) = puVar11;
    *(undefined **)(puVar7 + 0x58) = puVar9;
    _swift_bridgeObjectRetain(puVar9);
    _swift_bridgeObjectRetain(param_2);
    ppuVar8 = &local_138;
    FUN_10003f094();
    FUN_1003a0e08();
    puVar11 = *ppuVar8;
    puVar9 = ppuVar8[1];
    local_120 = puVar3;
  }
  else {
    if (*(char *)(unaff_x20 + 4) == '\x01') {
      _swift_bridgeObjectRetain();
      FUN_1003a1b20();
      local_2a8 = *puVar6;
      puVar6 = (undefined8 *)puVar6[1];
      puVar7 = &DAT_100a75980;
      FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 6;
      *(undefined8 *)(puVar7 + 0x10) = 3;
      puVar4 = puVar6;
      _swift_bridgeObjectRetain();
      FUN_1003a1038();
      puVar3 = PTR___sSSN_1009957f8;
      uVar1 = *puVar4;
      uVar2 = puVar4[1];
      local_120 = PTR___sSSN_1009957f8;
      FUN_10003e8bc(&local_138,puVar7 + 0x30);
      puVar10 = (undefined8 *)(puVar7 + 0x20);
      *puVar10 = uVar1;
      *(undefined8 *)(puVar7 + 0x28) = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      ppuVar8 = &local_138;
      FUN_10003f094();
      FUN_1003a0e84();
      puVar11 = *ppuVar8;
      puVar9 = ppuVar8[1];
      local_120 = puVar3;
      local_138 = param_1;
      puStack_130 = (undefined8 *)param_2;
      FUN_10003e8bc(&local_138,puVar7 + 0x60);
      *(undefined **)(puVar7 + 0x50) = puVar11;
      *(undefined **)(puVar7 + 0x58) = puVar9;
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(puVar9);
      ppuVar8 = &local_138;
      FUN_10003f094();
      FUN_1003a0e08();
      puVar11 = *ppuVar8;
      puVar9 = ppuVar8[1];
      local_138 = (undefined *)CONCAT44(local_138._4_4_,(int)puVar5);
      _swift_bridgeObjectRetain(puVar9);
      puVar5 = PTR___ss5Int32VN_100995c78;
      puVar4 = (undefined8 *)PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      local_120 = puVar3;
      local_138 = puVar5;
      puStack_130 = puVar4;
      FUN_10003e8bc(&local_138,puVar7 + 0x90);
      *(undefined **)(puVar7 + 0x80) = puVar11;
      *(undefined **)(puVar7 + 0x88) = puVar9;
      FUN_10003f094(&local_138);
      goto LAB_1000b6d58;
    }
    _swift_bridgeObjectRetain();
    puVar6 = puVar4;
    _swift_bridgeObjectRetain();
    FUN_1003a1b48();
    local_2a8 = *puVar6;
    puVar6 = (undefined8 *)puVar6[1];
    puVar7 = &DAT_100a75980;
    FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    puVar10 = puVar6;
    _swift_bridgeObjectRetain();
    FUN_1003a1038();
    puVar3 = PTR___sSSN_1009957f8;
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    local_120 = PTR___sSSN_1009957f8;
    FUN_10003e8bc(&local_138,puVar7 + 0x30);
    puVar10 = (undefined8 *)(puVar7 + 0x20);
    *puVar10 = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    ppuVar8 = &local_138;
    FUN_10003f094();
    FUN_1003a0e84();
    puVar11 = *ppuVar8;
    puVar9 = ppuVar8[1];
    local_120 = puVar3;
    local_138 = param_1;
    puStack_130 = (undefined8 *)param_2;
    FUN_10003e8bc(&local_138,puVar7 + 0x60);
    *(undefined **)(puVar7 + 0x50) = puVar11;
    *(undefined **)(puVar7 + 0x58) = puVar9;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(puVar9);
    ppuVar8 = &local_138;
    FUN_10003f094();
    FUN_1003a1068();
    puVar11 = *ppuVar8;
    puVar9 = ppuVar8[1];
    local_120 = puVar3;
  }
  local_138 = puVar5;
  puStack_130 = puVar4;
  FUN_10003e8bc(&local_138,puVar7 + 0x90);
  *(undefined **)(puVar7 + 0x80) = puVar11;
  *(undefined **)(puVar7 + 0x88) = puVar9;
  _swift_bridgeObjectRetain(puVar9);
  FUN_10003f094(&local_138);
LAB_1000b6d58:
  FUN_1000f62a0(local_2a8,puVar6,puVar7);
  _swift_bridgeObjectRelease(puVar6);
  _swift_setDeallocating(puVar7);
  _swift_arrayDestroy(puVar10,3,&DAT_1009b7a40);
  return;
}

