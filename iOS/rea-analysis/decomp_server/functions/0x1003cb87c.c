// rea decompile_all
// name: FUN_1003cb87c
// address: 0x1003cb87c
// body: available
// range: 0x1003cb87c-0x1003cbdff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003cb9b0) */
/* WARNING: Removing unreachable block (ram,0x0001003cbdb8) */
/* WARNING: Removing unreachable block (ram,0x0001003cba18) */
/* WARNING: Removing unreachable block (ram,0x0001003cba3c) */
/* WARNING: Removing unreachable block (ram,0x0001003cbd2c) */
/* WARNING: Removing unreachable block (ram,0x0001003cba50) */
/* WARNING: Removing unreachable block (ram,0x0001003cbd34) */

void FUN_1003cb87c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined1 *puVar9;
  ID IVar10;
  long lVar11;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 auStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_1005cac3c();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar13 = auStack_90 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  FUN_1003c5a40();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar14 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  lVar5 = _TtC8UUCommon18IPSReportCollector::state;
  _swift_beginAccess(unaff_x20 + _TtC8UUCommon18IPSReportCollector::state,auStack_78,0,0);
  FUN_100082394(unaff_x20 + lVar5,lVar14,FUN_1003c5a40);
  puVar4 = &DAT_100a8c7d8;
  FUN_100005c90(&DAT_100a8c7d8,FUN_1003c5a40,&TargetProtocolConformanceDescriptor_100822430);
  lVar5 = lVar14;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(lVar14,lVar2,puVar4);
  FUN_1000d27dc(lVar14,FUN_1003c5a40);
  _swift_release(uVar3);
  if (DAT_100a89338 != -1) {
    _swift_once(&DAT_100a89338,FUN_1003e728c);
  }
  IVar8 = DAT_100b368f0;
  if (DAT_100b368f0 != 0) {
    lVar6 = lVar5;
    lVar11 = lVar2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,lVar2);
    lVar7 = lVar6;
    FUN_1003c5534();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(lVar11);
    IVar8 = _objc_msgSend(IVar8,"setData:forKey:",lVar6,lVar7);
    if ((int)IVar8 != 0) {
      FUN_100006cdc(lVar5,lVar2);
      return;
    }
  }
  (**(code **)(lVar15 + 0x68))(puVar13,4,lVar1);
  if (DAT_100a89358 != -1) {
    _swift_once(&DAT_100a89358,FUN_1003fba60);
  }
  IVar8 = DAT_100a8e090;
  _objc_msgSend(DAT_100a8e090,"lock");
  lVar6 = DAT_100a8e098;
  if (DAT_100a8e098 != 0) {
    _swift_retain(DAT_100a8e098);
    puVar9 = puVar13;
    FUN_1005cc2b8();
    if (((ulong)puVar9 & 1) == 0) {
      _swift_release(lVar6);
    }
    else {
      IVar10 = 0xd000000000000090;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000090,0x80000001008b3cb0);
      pcVar12 = "lastPathComponent";
      IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
      *(undefined8 *)(lVar14 + -0x10) = 0xeb00000000292865;
      *(undefined8 *)(lVar14 + -8) = 0x1a0;
      FUN_1005cc010(FUN_1003fde68,0,puVar13,0x65746f6d65525555,0xe800000000000000,IVar10,pcVar12,
                    0x7461745365766173);
      _swift_release(lVar6);
      _swift_bridgeObjectRelease(pcVar12);
    }
  }
  _objc_msgSend(IVar8,"unlock");
  FUN_100006cdc(lVar5,lVar2);
  (**(code **)(lVar15 + 8))(puVar13,lVar1);
  return;
}

