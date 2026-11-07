// rea decompile_all
// name: FUN_1003a793c
// address: 0x1003a793c
// body: available
// range: 0x1003a793c-0x1003a7d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003a793c(void)

{
  code cVar1;
  ID self;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ID IVar5;
  ulong uVar6;
  ID IVar7;
  char *pcVar8;
  long extraout_x8;
  long extraout_x12;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  code *pcVar13;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  char *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  code *local_68;
  
  lVar3 = 0;
  FUN_1005cac3c();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  uVar9 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar10 = (code *)(uVar9 - extraout_x12);
  if (DAT_100a891a0 != -1) {
    _swift_once(&DAT_100a891a0,FUN_1003a790c);
  }
  IVar7 = DAT_100a8b2e8;
  _objc_msgSend(DAT_100a8b2e8,"lock");
  cVar1 = DAT_100a8b2f0;
  uVar11 = (uint)(byte)DAT_100a8b2f0;
  _objc_msgSend(IVar7,"unlock");
  if (cVar1 == (code)0x2) {
    local_78 = 0x80000001008b2de0;
    local_68 = *(code **)(lVar12 + 0x68);
    local_6c = 2;
    (*local_68)(pcVar10,2,lVar3);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    self = DAT_100a8e090;
    local_80 = "new_cloud_logout";
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar2 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      pcVar4 = pcVar10;
      FUN_1005cc2b8();
      if (((ulong)pcVar4 & 1) == 0) {
        _swift_release(lVar2);
      }
      else {
        IVar5 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd00000000000009e,(ulong)local_80 | 0x8000000000000000);
        pcVar8 = "lastPathComponent";
        IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
        *(undefined8 *)(pcVar10 + -8) = 0x1c;
        *(undefined8 *)(pcVar10 + -0x10) = local_78;
        FUN_1005cc010(FUN_1003fda0c,0,pcVar10,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar8,
                      0xd000000000000021);
        _swift_release(lVar2);
        _swift_bridgeObjectRelease(pcVar8);
      }
    }
    _objc_msgSend(self,"unlock");
    pcVar13 = *(code **)(lVar12 + 8);
    pcVar4 = pcVar10;
    (*pcVar13)(pcVar10,lVar3);
    uVar11 = (uint)pcVar4;
    _CGPreflightScreenCaptureAccess();
    _objc_msgSend(IVar7,"lock");
    DAT_100a8b2f0 = SUB41(uVar11,0);
    _objc_msgSend(IVar7,"unlock");
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar10[-0x10] = SUB41(uVar11,0);
    (*local_68)(uVar9,local_6c,lVar3);
    _objc_msgSend(self,"lock");
    lVar12 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      uVar6 = uVar9;
      FUN_1005cc2b8();
      if ((uVar6 & 1) == 0) {
        _swift_release(lVar12);
      }
      else {
        IVar7 = 0xd00000000000009e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                  (0xd00000000000009e,(ulong)local_80 | 0x8000000000000000);
        pcVar8 = "lastPathComponent";
        local_68 = pcVar10;
        IVar7 = _objc_msgSend(IVar7,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar7);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(pcVar10 + -0x30) = FUN_1003a85dc;
        *(code **)(pcVar10 + -0x28) = pcVar10 + -0x20;
        *(undefined8 *)(pcVar10 + -0x48) = 0x1f;
        *(undefined8 *)(pcVar10 + -0x50) = local_78;
        FUN_1005cc010(FUN_1003a85e4,pcVar10 + -0x40,uVar9,0x65746f6d65525555,0xe800000000000000,
                      IVar7,pcVar8,0xd000000000000021);
        _swift_release(lVar12);
        _swift_bridgeObjectRelease(pcVar8);
      }
    }
    _objc_msgSend(self,"unlock");
    (*pcVar13)(uVar9,lVar3);
  }
  return uVar11 & 1;
}

