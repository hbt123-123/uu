// rea decompile_all
// name: FUN_10008323c
// address: 0x10008323c
// body: available
// range: 0x10008323c-0x1000834ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008323c(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [16];
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4UUIDVACycfC(auStack_80 + lVar4);
  lVar8 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     &local_78,0x21,0);
  (**(code **)(lVar9 + 0x28))(unaff_x20 + lVar8,auStack_80 + lVar4,lVar5);
  _swift_endAccess(&local_78);
  lVar8 = *(long *)(unaff_x20 + 0x50);
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    _swift_retain(lVar8);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar8);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  _swift_release(uVar6);
  lVar8 = _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem;
  lVar5 = *(long *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    _swift_retain(lVar5);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar5);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  }
  *(undefined8 *)(unaff_x20 + lVar8) = 0;
  _swift_release(uVar6);
  puVar1 = (undefined4 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion)
  ;
  pcVar3 = (code *)*puVar2;
  uVar6 = puVar2[1];
  *puVar2 = 0;
  puVar2[1] = 0;
  if (pcVar3 != (code *)0x0) {
    _swift_retain(uVar6);
    (*pcVar3)(0xffffffff);
    FUN_10007ed2c(pcVar3,uVar6);
    FUN_10007ed2c(pcVar3,uVar6);
  }
  puVar1 = (undefined4 *)
           (unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::coalescedSyncRequest);
  *(undefined1 *)(puVar1 + 1) = 2;
  *puVar1 = 0;
  *(undefined1 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::restoringPersistedSettings)
       = 0;
  lVar8 = *(long *)(unaff_x20 + 0x70);
  if (lVar8 != 0) {
    local_58 = *(undefined4 *)(unaff_x20 + 0x90);
    local_68 = *(undefined8 *)(unaff_x20 + 0x80);
    local_70 = (undefined4)*(undefined8 *)(unaff_x20 + 0x78);
    local_60 = (undefined4)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_5c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x88) >> 0x20);
    local_78 = lVar8;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long **)((long)auStack_90 + lVar4) = &local_78;
    FUN_1003fb48c(FUN_10007ec98,auStack_a0 + lVar4,0xd0000000000000a5,0x800000010087d1a0,
                  0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
    FUN_100004030(lVar8);
    *(undefined4 *)(unaff_x20 + 0x90) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    *(long *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x88) = 0;
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
  }
  *(undefined4 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x14) = 1;
  puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cbb5c();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined **)(unaff_x20 + 0x58) = puVar7;
  _swift_bridgeObjectRelease(uVar6);
  puVar2 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::reportedAutoFrameQuality);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0x100;
  return;
}

