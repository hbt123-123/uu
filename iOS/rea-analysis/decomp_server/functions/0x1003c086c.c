// rea decompile_all
// name: FUN_1003c086c
// address: 0x1003c086c
// body: available
// range: 0x1003c086c-0x1003c0bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c0b98) */

ulong FUN_1003c086c(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  ID IVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_c0 [2];
  undefined1 auStack_b0 [16];
  byte local_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  FUN_1005cac3c();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    uVar3 = param_2;
    FUN_1003d2cd4();
    if (((uVar3 & 1) != 0) && (lVar10 = *(long *)(param_3 + 0x80), lVar10 != 0)) {
      _swift_retain(lVar10);
      __s10Foundation4DateVACycfC(lVar7);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(lVar12 + 8))(lVar7,lVar2);
      IVar8 = *(ID *)(lVar10 + 0x30);
      _objc_msgSend(IVar8,"lock");
      FUN_1003d23e4(local_a0,param_1,lVar10);
      _objc_msgSend(IVar8,"unlock");
      _swift_release(lVar10);
      if ((local_a0[0] & 1) != 0) {
        (**(code **)(lVar11 + 0x68))(puVar9,3,lVar1);
        if (DAT_100a89358 != -1) {
          _swift_once(&DAT_100a89358,FUN_1003fba60);
        }
        IVar8 = DAT_100a8e090;
        _objc_msgSend(DAT_100a8e090,"lock");
        lVar2 = DAT_100a8e098;
        if (DAT_100a8e098 != 0) {
          _swift_retain(DAT_100a8e098);
          puVar4 = puVar9;
          FUN_1005cc2b8();
          if (((ulong)puVar4 & 1) == 0) {
            _swift_release(lVar2);
          }
          else {
            IVar5 = 0xd00000000000008a;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000008a,0x80000001008b3b80);
            pcVar6 = "lastPathComponent";
            IVar5 = _objc_msgSend(IVar5,"lastPathComponent");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar5);
            *(undefined8 *)(lVar7 + -0x10) = 0xe700000000000000;
            *(undefined8 *)(lVar7 + -8) = 0x6d;
            FUN_1005cc010(FUN_1003fddec,0,puVar9,0x65746f6d65525555,0xe800000000000000,IVar5,pcVar6,
                          0x29287472617473);
            _swift_release(lVar2);
            _swift_bridgeObjectRelease(pcVar6);
          }
        }
        _objc_msgSend(IVar8,"unlock");
        _swift_release(param_3);
        (**(code **)(lVar11 + 8))(puVar9,lVar1);
        return 0;
      }
    }
    _swift_beginAccess(param_4 + 0x10,local_a0,0,0);
    param_4 = param_4 + 0x10;
    _swift_weakLoadStrong();
    if (param_4 != 0) {
      FUN_1003c1eb0(param_2);
      _swift_release(param_4);
    }
    FUN_1003bec54();
    _swift_release(param_3);
  }
  return param_2;
}

