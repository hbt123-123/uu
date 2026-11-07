// rea decompile_all
// name: FUN_1000cb010
// address: 0x1000cb010
// body: available
// range: 0x1000cb010-0x1000cb227 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000cb010(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_80 [16];
  byte local_70;
  long local_68;
  undefined1 auStack_60 [24];
  undefined8 local_48;
  
  FUN_1003dbe30();
  (**(code **)(*param_1 + 0x108))(&local_48);
  _swift_release(param_1);
  lVar6 = _TtC14UURemoteServer22StreamerConnectSession::controllerAbility;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer22StreamerConnectSession::controllerAbility,
                     auStack_60,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = local_48;
  _swift_release(uVar5);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar7 = *(long *)(DAT_100b360a8 + 0x80);
  lVar6 = lVar7;
  _swift_retain();
  FUN_1000c7b64();
  lVar8 = *(long *)(lVar6 + 0x40);
  bVar4 = *(byte *)(lVar6 + 0x48);
  bVar3 = *(byte *)(lVar6 + 0x49);
  _swift_release();
  if ((bVar3 & 1) == 0) {
    if ((bVar4 & 1) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined8 *)(&DAT_10080c2a0 + lVar8 * 8);
    }
  }
  else {
    uVar5 = 0;
  }
  uVar1 = *(undefined8 *)
           (*(long *)(unaff_x20 +
                     _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler)
           + 0x50);
  uVar2 = *(undefined8 *)
           (*(long *)(unaff_x20 +
                     _TtC14UURemoteServer22StreamerConnectSession::___lazy_storage___appDataHandler)
           + 0x58);
  _swift_bridgeObjectRetain(uVar2);
  bVar4 = 1;
  FUN_10000b50c(1,uVar5,bVar3,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(byte *)(lVar7 + 0x99) = bVar4 & 1;
  FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = bVar4 & 1;
  local_68 = lVar7;
  FUN_1003fb48c(FUN_1000cdfe8,auStack_80,0xd0000000000000a9,0x8000000100877660,0xd000000000000027,
                0x8000000100885840,0x2a0,0);
  _swift_release(lVar7);
  FUN_1003fb48c(FUN_1000cb228,0,0xd00000000000009c,0x8000000100885110,0xd00000000000001c,
                0x8000000100885870,0xb0,0);
  return;
}

