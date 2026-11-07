// rea decompile_all
// name: FUN_1000bb348
// address: 0x1000bb348
// body: available
// range: 0x1000bb348-0x1000bb683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bb348(ulong param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [16];
  byte local_80;
  long local_78;
  ulong uStack_70;
  ulong local_68;
  
  uVar2 = param_1;
  FUN_100039b50();
  FUN_100401b14(0);
  if ((uVar2 & 1) != 0) {
    FUN_1003fb48c(FUN_1000bb684,0,0xd00000000000009f,0x8000000100882d60,0xd00000000000003d,
                  0x8000000100883e00,0x144,0);
    return;
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = (byte)param_1 & 1;
  pcVar3 = FUN_1000c2128;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = param_4;
  FUN_1003fb48c(FUN_1000c2128,auStack_90,0xd00000000000009f,0x8000000100882d60,0xd00000000000003d,
                0x8000000100883e00,0x148,0);
  FUN_1003b2720();
  lVar7 = *(long *)pcVar3;
  lVar4 = lVar7;
  _swift_retain();
  FUN_10039a5f0();
  _swift_release(lVar7);
  uVar8 = *(undefined8 *)pcVar3;
  _swift_retain(uVar8);
  if (param_2 == 3) {
    FUN_10039a638(3);
    _swift_release(uVar8);
    if (lVar4 == 3) {
LAB_1000bb4f4:
      pcVar3 = FUN_1000bb810;
      uVar8 = 0x169;
    }
    else {
      uVar2 = param_3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar2 = param_4 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
        uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
        uVar12 = 0x32;
        goto LAB_1000bb5dc;
      }
LAB_1000bb610:
      pcVar3 = FUN_1000bb83c;
      uVar8 = 0x16d;
    }
    FUN_1003fb48c(pcVar3,0,0xd00000000000009f,0x8000000100882d60,0xd00000000000005c,
                  0x8000000100883e40,uVar8,0);
  }
  else {
    if (param_2 != 2) {
      FUN_10039a638(0);
      _swift_release(uVar8);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
      *(undefined8 *)(unaff_x20 + 0x78) = 0;
      *(undefined8 *)(unaff_x20 + 0x70) = 0;
      *(undefined8 *)(unaff_x20 + 0x88) = 0;
      *(undefined8 *)(unaff_x20 + 0x80) = 0;
      uVar1 = *(undefined1 *)(unaff_x20 + 0x90);
      *(undefined1 *)(unaff_x20 + 0x90) = 0xff;
      FUN_1000c2050(uVar8,uVar9,uVar10,uVar11,uVar1);
      puVar5 = *(undefined8 **)(unaff_x20 + 0x98);
      uVar10 = *(undefined8 *)(unaff_x20 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar9 = *(undefined8 *)(unaff_x20 + 0xb0);
      *(undefined8 *)(unaff_x20 + 0xa0) = 0;
      *(undefined8 *)(unaff_x20 + 0x98) = 0;
      *(undefined8 *)(unaff_x20 + 0xb0) = 0;
      *(undefined8 *)(unaff_x20 + 0xa8) = 0;
      uVar1 = *(undefined1 *)(unaff_x20 + 0xb8);
      *(undefined1 *)(unaff_x20 + 0xb8) = 0xff;
      FUN_1000c2050(puVar5,uVar10,uVar8,uVar9,uVar1);
      FUN_1003a1b70();
      uVar8 = *puVar5;
      uVar10 = puVar5[1];
      _swift_bridgeObjectRetain(uVar10);
      FUN_1000f62a0(uVar8,uVar10,PTR___swiftEmptyArrayStorage_100995ea0);
      _swift_bridgeObjectRelease(uVar10);
      pcVar3 = FUN_1000c13e0;
      puVar6 = &DAT_10099b220;
      goto LAB_1000bb65c;
    }
    FUN_10039a638(2);
    _swift_release(uVar8);
    if (lVar4 == 2) goto LAB_1000bb4f4;
    uVar2 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar2 = param_4 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) goto LAB_1000bb610;
    uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar12 = 0x31;
LAB_1000bb5dc:
    *(undefined8 *)(unaff_x20 + 0x78) = 0xe100000000000000;
    *(undefined8 *)(unaff_x20 + 0x70) = uVar12;
    *(ulong *)(unaff_x20 + 0x80) = param_3;
    *(ulong *)(unaff_x20 + 0x88) = param_4;
    uVar1 = *(undefined1 *)(unaff_x20 + 0x90);
    *(undefined1 *)(unaff_x20 + 0x90) = 0;
    _swift_bridgeObjectRetain(param_4);
    FUN_1000c2050(uVar8,uVar9,uVar10,uVar11,uVar1);
  }
  pcVar3 = FUN_1000c2064;
  puVar6 = &DAT_10099b248;
LAB_1000bb65c:
  FUN_1000baec8(pcVar3,puVar6);
  return;
}

