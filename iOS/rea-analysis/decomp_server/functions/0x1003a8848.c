// rea decompile_all
// name: FUN_1003a8848
// address: 0x1003a8848
// body: available
// range: 0x1003a8848-0x1003a8d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

byte FUN_1003a8848(void)

{
  ID self;
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  ID IVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [16];
  long alStack_f0 [2];
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [8];
  char *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  code *local_a0;
  undefined1 auStack_98 [56];
  
  lVar4 = 0;
  FUN_1005cac3c();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar15 = (long)puVar12 - extraout_x12;
  if (DAT_100a891a8 != -1) {
    _swift_once(&DAT_100a891a8,FUN_1003a8818);
  }
  IVar10 = DAT_100a8b390;
  _objc_msgSend(DAT_100a8b390,"lock");
  bVar2 = DAT_100a8b398;
  _objc_msgSend(IVar10,"unlock");
  if (bVar2 == 2) {
    local_b0 = 0x80000001008b3020;
    local_a0 = *(code **)(lVar13 + 0x68);
    local_a8 = CONCAT44(local_a8._4_4_,2);
    (*local_a0)(uVar15,2,lVar4);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    local_b8 = s__ScreenCapturePermission____gran_1008b2f30 + 0x50;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar1 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar5 = uVar15;
      FUN_1005cc2b8();
      if ((uVar5 & 1) == 0) {
        _swift_release(lVar1);
      }
      else {
        IVar6 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd00000000000009e,(ulong)local_b8 | 0x8000000000000000);
        pcVar11 = "lastPathComponent";
        IVar6 = _objc_msgSend(IVar6,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
        *(undefined8 *)(uVar15 - 8) = 0x1c;
        *(undefined8 *)(uVar15 - 0x10) = local_b0;
        FUN_1005cc010(FUN_1003fda88,0,uVar15,0x65746f6d65525555,0xe800000000000000,IVar6,pcVar11,
                      0xd00000000000001f);
        _swift_release(lVar1);
        _swift_bridgeObjectRelease(pcVar11);
      }
    }
    _objc_msgSend(self,"unlock");
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(uVar15,lVar4);
    puVar7 = &DAT_100a8b3a0;
    FUN_100004bb4(&DAT_100a8b3a0,&DAT_100820640);
    puVar9 = auStack_98;
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    uVar16 = *(undefined8 *)PTR__kAXTrustedCheckOptionPrompt_1009954d8;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    *(undefined8 *)(puVar7 + 0x20) = uVar16;
    *(undefined1 **)(puVar7 + 0x28) = puVar9;
    puVar7[0x30] = 0;
    puVar8 = puVar7;
    FUN_1000cd340();
    _swift_setDeallocating(puVar7);
    FUN_1003a98f0(puVar7 + 0x20);
    puVar7 = puVar8;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar8,PTR___sSSN_1009957f8,PTR___sSbN_1009958c8,PTR___sSSSHsWP_100995808);
    iVar3 = (int)puVar7;
    _swift_bridgeObjectRelease(puVar8);
    _AXIsProcessTrustedWithOptions();
    bVar2 = iVar3 != 0;
    _objc_msgSend(IVar10,"lock");
    DAT_100a8b398 = bVar2;
    _objc_msgSend(IVar10,"unlock");
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(byte *)(uVar15 - 0x10) = bVar2;
    (*local_a0)(puVar12,local_a8 & 0xffffffff,lVar4);
    _objc_msgSend(self,"lock");
    lVar13 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar9 = puVar12;
      FUN_1005cc2b8();
      if (((ulong)puVar9 & 1) == 0) {
        _swift_release(lVar13);
      }
      else {
        IVar10 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd00000000000009e,(ulong)local_b8 | 0x8000000000000000);
        pcVar11 = "lastPathComponent";
        local_a8 = uVar15;
        IVar10 = _objc_msgSend(IVar10,"lastPathComponent");
        local_a0 = pcVar14;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar10);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(uVar15 - 0x30) = FUN_1003a9938;
        *(ulong *)(uVar15 - 0x28) = uVar15 - 0x20;
        *(undefined8 *)(uVar15 - 0x48) = 0x1f;
        *(undefined8 *)(uVar15 - 0x50) = local_b0;
        FUN_1005cc010(FUN_1003a85e4,uVar15 - 0x40,puVar12,0x65746f6d65525555,0xe800000000000000,
                      IVar10,pcVar11,0xd00000000000001f);
        _swift_release(lVar13);
        _swift_bridgeObjectRelease(pcVar11);
        pcVar14 = local_a0;
      }
    }
    _objc_msgSend(self,"unlock");
    (*pcVar14)(puVar12,lVar4);
  }
  return bVar2 & 1;
}

