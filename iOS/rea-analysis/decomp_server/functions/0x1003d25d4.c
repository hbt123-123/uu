// rea decompile_all
// name: FUN_1003d25d4
// address: 0x1003d25d4
// body: available
// range: 0x1003d25d4-0x1003d2af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003d26c8) */
/* WARNING: Removing unreachable block (ram,0x0001003d2ab0) */
/* WARNING: Removing unreachable block (ram,0x0001003d2728) */
/* WARNING: Removing unreachable block (ram,0x0001003d274c) */
/* WARNING: Removing unreachable block (ram,0x0001003d2a24) */
/* WARNING: Removing unreachable block (ram,0x0001003d2760) */
/* WARNING: Removing unreachable block (ram,0x0001003d2a2c) */

void FUN_1003d25d4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ID IVar8;
  undefined1 *puVar9;
  ID IVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  lVar2 = 0;
  FUN_1005cac3c();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar12 = auStack_80 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar3 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uVar13 = *(undefined8 *)(unaff_x20 + 0x38);
  local_68 = uVar13;
  _swift_bridgeObjectRetain(uVar13);
  puVar4 = &DAT_100a8c998;
  FUN_100004bb4(&DAT_100a8c998,&DAT_1008229c0);
  puVar5 = &DAT_100a8c9a8;
  FUN_1003d2f08(&DAT_100a8c9a8,PTR___sSdSEsWP_100995900,PTR___sSayxGSEsSERzlMc_100995880);
  puVar6 = &local_68;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar6,puVar4,puVar5);
  _swift_release(uVar3);
  _swift_bridgeObjectRelease(uVar13);
  if (DAT_100a89338 != -1) {
    _swift_once(&DAT_100a89338,FUN_1003e728c);
  }
  IVar8 = DAT_100b368f0;
  if (DAT_100b368f0 != 0) {
    puVar7 = puVar6;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,puVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,*(undefined8 *)(unaff_x20 + 0x28));
    IVar8 = _objc_msgSend(IVar8,"setData:forKey:",puVar7,uVar3);
    if ((int)IVar8 != 0) {
      FUN_100006cdc(puVar6,puVar4);
      return;
    }
  }
  (**(code **)(lVar14 + 0x68))(puVar12,4,lVar2);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar8 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar1 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar9 = puVar12;
    FUN_1005cc2b8();
    if (((ulong)puVar9 & 1) == 0) {
      _swift_release(lVar1);
    }
    else {
      IVar10 = 0xd000000000000090;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b4510);
      pcVar11 = "lastPathComponent";
      IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
      *(undefined8 *)(puVar12 + -0x10) = 0xeb00000000292865;
      *(undefined8 *)(puVar12 + -8) = 0x50;
      FUN_1005cc010(FUN_1003fdcf4,0,puVar12,0x65746f6d65525555,0xe800000000000000,IVar10,pcVar11,
                    0x7461745365766173);
      _swift_release(lVar1);
      _swift_bridgeObjectRelease(pcVar11);
    }
  }
  _objc_msgSend(IVar8,"unlock");
  FUN_100006cdc(puVar6,puVar4);
  (**(code **)(lVar14 + 8))(puVar12,lVar2);
  return;
}

