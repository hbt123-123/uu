// rea decompile_all
// name: FUN_100138980
// address: 0x100138980
// body: available
// range: 0x100138980-0x100138c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100138980(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ID unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auStack_b0 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar10 = _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList,
                     &local_80,0x21,0);
  FUN_100135d6c(unaff_x20 + lVar10);
  _swift_endAccess(&local_80);
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  lVar7 = *(long *)(unaff_x20 + lVar10);
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain(lVar7);
    puVar9 = (undefined8 *)(lVar7 + 0x50);
    do {
      uVar8 = puVar9[-5];
      uVar1 = puVar9[-3];
      uVar3 = puVar9[-2];
      uVar2 = puVar9[-1];
      uVar4 = *puVar9;
      _swift_bridgeObjectRetain(uVar8);
      FUN_100008184(uVar1,uVar3);
      FUN_100008184(uVar2,uVar4);
      __s10Foundation4DataV6appendyyACF(uVar1,uVar3);
      _swift_bridgeObjectRelease(uVar8);
      FUN_100006cdc(uVar1,uVar3);
      FUN_100006cdc(uVar2,uVar4);
      puVar9 = puVar9 + 7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(lVar7);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb45c(FUN_1001391bc,auStack_b0,0xd0000000000000b1,0x80000001008900b0,0xd000000000000015,
                0x80000001008901c0,0x9c,7);
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::isSendResult) = 1
  ;
  lVar5 = 0;
  FUN_10016db04();
  _swift_allocObject();
  lVar6 = 0;
  FUN_10016dae4();
  lVar7 = lVar6;
  _swift_allocObject();
  FUN_10016d3cc();
  *(long *)(lVar5 + 0x10) = lVar7;
  *(undefined1 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x28) = 0xf000000000000000;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined1 *)(lVar5 + 0x38) = 1;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  lVar10 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar10 == 0) {
    _swift_allocObject(lVar6,0x165,7);
    FUN_10016d3cc();
    lVar10 = lVar6;
  }
  *(long *)(lVar5 + 0x10) = lVar10;
  _swift_release(lVar7);
  *(undefined1 *)(lVar5 + 0x18) = 1;
  *(undefined8 *)(lVar5 + 0x20) = local_80;
  *(undefined8 *)(lVar5 + 0x28) = uStack_78;
  FUN_100008184();
  FUN_100006cc8(0,0xf000000000000000);
  lVar10 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::operationDelegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar10 != 0) {
    FUN_1001639b0(lVar5,0,0);
    _swift_unknownObjectRelease(lVar10);
  }
  _objc_msgSend(unaff_x20,"setExecuting:",0);
  _objc_msgSend(unaff_x20,"setFinished:",1);
  _swift_release(lVar5);
  FUN_100006cdc(local_80,uStack_78);
  return;
}

