// rea decompile_all
// name: FUN_10000b338
// address: 0x10000b338
// body: available
// range: 0x10000b338-0x10000b453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000b338(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [16];
  undefined1 local_50;
  
  FUN_1000c7b64();
  lVar6 = *(long *)(param_1 + 0x40);
  bVar3 = *(byte *)(param_1 + 0x48);
  bVar4 = *(byte *)(param_1 + 0x49);
  _swift_release();
  if ((bVar4 & 1) == 0) {
    if ((bVar3 & 1) == 0) {
      uVar7 = 1;
    }
    else {
      uVar7 = *(undefined8 *)(&DAT_100809600 + lVar6 * 8);
    }
  }
  else {
    uVar7 = 0;
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
  uVar5 = 0;
  FUN_10000b50c(6,uVar7,bVar4,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_50 = (undefined1)(uVar5 & 1);
  FUN_1003fb48c(FUN_10000d818,auStack_60,0xd0000000000000ae,0x8000000100876c20,0xd000000000000014,
                0x8000000100876cd0,0x30,7);
  return uVar5 & 1;
}

