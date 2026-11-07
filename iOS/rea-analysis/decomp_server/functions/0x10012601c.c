// rea decompile_all
// name: FUN_10012601c
// address: 0x10012601c
// body: available
// range: 0x10012601c-0x100126273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012601c(int param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 auStack_60 [16];
  byte local_50;
  undefined1 local_4f;
  
  lVar3 = _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession;
  lVar4 = *(long *)(unaff_x20 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(lVar4 + _TtC14UURemoteServer22StreamerConnectSession::handle) != param_1) {
    return;
  }
  FUN_1000c7b64(lVar4);
  FUN_10010ced8(param_2);
  _swift_release(lVar4);
  lVar4 = *(long *)(unaff_x20 + lVar3);
  if (lVar4 == 0) {
    bVar10 = 0;
  }
  else {
    FUN_1000c7b64();
    lVar7 = *(long *)(lVar4 + 0x68);
    bVar10 = *(byte *)(lVar4 + 0x71);
    _swift_release(lVar4);
    bVar10 = lVar7 == 2 & (bVar10 ^ 0xff);
    lVar4 = *(long *)(unaff_x20 + lVar3);
    if (lVar4 != 0) {
      FUN_1000c7b64();
      lVar7 = *(long *)(lVar4 + 0x78);
      bVar1 = *(byte *)(lVar4 + 0x81);
      _swift_release(lVar4);
      bVar2 = (bVar1 & 1) == 0 && lVar7 == 6;
      goto LAB_100126118;
    }
  }
  bVar2 = false;
LAB_100126118:
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  if ((bVar10 != 0) || (bVar2)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = bVar10;
    local_4f = bVar2;
    FUN_1003fb48c(FUN_1001265d8,auStack_60,0xd000000000000098,0x800000010088de90,0xd000000000000029,
                  0x800000010088e1a0,0x33,0);
  }
  else {
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    puVar5 = *(ulong **)(DAT_100b360a8 + 0x70);
    FUN_1003b2720();
    uVar8 = *puVar5;
    uVar6 = uVar8;
    _swift_retain();
    FUN_10039a1b8();
    _swift_release(uVar8);
    if ((uVar6 & 1) != 0) {
      FUN_1000b4ae8();
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar9 = *(undefined8 *)(DAT_100b360a8 + 0x50);
  _swift_retain(uVar9);
  FUN_10000dd3c();
  _swift_release(uVar9);
  return;
}

