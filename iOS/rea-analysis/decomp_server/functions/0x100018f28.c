// rea decompile_all
// name: FUN_100018f28
// address: 0x100018f28
// body: available
// range: 0x100018f28-0x10001920b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100018f28(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  uint *puVar8;
  long lVar9;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  long local_80;
  
  lVar3 = param_1;
  FUN_10001920c();
  *(undefined1 *)(unaff_x20 + 0x98) = 1;
  lVar9 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar9 != 0) {
    puVar8 = (uint *)(param_1 + 0x20);
    do {
      uVar2 = *puVar8;
      if (uVar2 < 5) {
        puVar4 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar5;
        if (((ulong)puVar4 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_1000344b4(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5,&DAT_100a75938,&DAT_10080a930);
        }
        uVar1 = *(ulong *)(puVar6 + 0x10);
        puVar5 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_1000344b4(puVar5,uVar1 + 1,1,puVar6,&DAT_100a75938,&DAT_10080a930);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(uint *)(puVar5 + uVar1 * 4 + 0x20) = uVar2;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  puVar4 = puVar5;
  FUN_100074e98();
  _swift_bridgeObjectRelease(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined **)(unaff_x20 + 0x90) = puVar4;
  _swift_bridgeObjectRelease(uVar7);
  if (((param_3 >> 8 & 1) == 0) && (param_2 == 3)) {
    FUN_100019450(0xd000000000000015,0x8000000100879c20,0);
  }
  FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
  FUN_10001a178(lVar3);
  _swift_bridgeObjectRelease(lVar3);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = param_1;
  FUN_1003fb48c(FUN_10003fc74,&local_90,0xd0000000000000a9,0x8000000100877660,0xd00000000000002a,
                0x8000000100879b90,0x295,0);
  (*(code *)PTR____chkstk_darwin_100995498)(0x8000000100879bc0);
  local_a0 = 0xd000000000000011;
  local_90 = 0;
  local_8c = 1;
  local_88 = 0;
  local_84 = 1;
  local_80 = CONCAT35((int3)((ulong)local_80 >> 0x28),0x100000000);
  FUN_1003fb48c(thunk_FUN_10003fd6c,auStack_b0,0xd0000000000000a9,0x8000000100877660,
                0xd000000000000032,0x8000000100879be0,0x9fa,0);
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar9 != 0) &&
     (lVar9 = *(long *)(lVar9 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar9 != 0)) {
    FUN_1000162bc(*(undefined4 *)(lVar9 + _TtC14UURemoteServer22StreamerConnectSession::handle),0);
  }
  return;
}

