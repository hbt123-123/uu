// rea decompile_all
// name: FUN_1000ba344
// address: 0x1000ba344
// body: available
// range: 0x1000ba344-0x1000ba7b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ba778 to 0x1000c1d30 _$sSS4hash4intoys6HasherVz_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ba344(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  char *unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  cVar4 = *unaff_x20;
  uVar8 = 0x6e6f6974706f;
  if (cVar4 != '\x01') {
    uVar8 = 0x67616c66;
  }
  uVar9 = 0xe600000000000000;
  if (cVar4 != '\x01') {
    uVar9 = 0xe400000000000000;
  }
  uVar2 = 0xea00000000006c61;
  uVar3 = 0x6e6f697469736f70;
  if (cVar4 != '\0') {
    uVar2 = uVar9;
    uVar3 = uVar8;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[1] & 1);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x18] & 1);
  __ss6HasherV8_combineyys5UInt8VF(unaff_x20[0x19] & 1);
  bVar5 = unaff_x20[0x1a];
  uVar8 = 0xee00726f74616e69;
  uVar9 = 0x6d72655474736f70;
  if (bVar5 != 5) {
    uVar8 = 0xef64657a696e676f;
    uVar9 = 0x6365726e556c6c61;
  }
  uVar2 = 0xee006e6f6974704f;
  uVar3 = 0x7478654e6f547075;
  if (bVar5 != 3) {
    uVar2 = 0x80000001000cb080;
    uVar3 = 0xd000000000000011;
  }
  if (bVar5 < 5) {
    uVar8 = uVar2;
    uVar9 = uVar3;
  }
  uVar2 = 0x80000001000cb050;
  uVar3 = 0xd000000000000010;
  if (bVar5 != 1) {
    uVar2 = 0xed00006c616e6f69;
    uVar3 = 0x7469646e6f636e75;
  }
  uVar1 = 0x746c7561666564;
  if (bVar5 != 0) {
    uVar1 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar5 != 0) {
    uVar3 = uVar2;
  }
  if (bVar5 < 3) {
    uVar8 = uVar3;
    uVar9 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x38);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1000baca8(param_1,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0x38);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x48);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    cVar4 = unaff_x20[0x28];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x74726f6873;
    if (cVar4 != '\x01') {
      uVar8 = 0xd000000000000012;
    }
    uVar2 = 0xe500000000000000;
    if (cVar4 != '\x01') {
      uVar2 = 0x80000001000c9c90;
    }
    uVar3 = 0x676e6f6c;
    if (cVar4 != '\0') {
      uVar3 = uVar8;
    }
    uVar8 = 0xe400000000000000;
    if (cVar4 != '\0') {
      uVar8 = uVar2;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar9,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0x48);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x58);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0x58);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x60);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0x60);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x68);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar7 = *(long *)(lVar6 + 0x10);
    __ss6HasherV8_combineyySuF(lVar7);
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(lVar6 + 0x28);
      do {
        uVar8 = puVar10[-1];
        uVar9 = *puVar10;
        _swift_bridgeObjectRetain(uVar9);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,uVar9);
        _swift_bridgeObjectRelease(uVar9);
        puVar10 = puVar10 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar6 = *(long *)(unaff_x20 + 0x68);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1000bab40(param_1,lVar6);
  }
  cVar4 = unaff_x20[0x80];
  if (cVar4 == -1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0x90);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    __ss6HasherV8_combineyys5UInt8VF(1);
    FUN_1000b9354(param_1,uVar8,uVar9,cVar4);
    lVar6 = *(long *)(unaff_x20 + 0x90);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = *(long *)(unaff_x20 + 0xa0);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x88);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
    lVar6 = *(long *)(unaff_x20 + 0xa0);
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x98);
  __ss6HasherV8_combineyys5UInt8VF(1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  return;
}

