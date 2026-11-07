// rea decompile_all
// name: FUN_10008e508
// address: 0x10008e508
// body: available
// range: 0x10008e508-0x10008e773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008e508(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_b0 [16];
  long *local_a0;
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  lVar3 = *(long *)(unaff_x20 + 0x50);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar3);
  }
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_10008e774,0,0xd00000000000009f,0x800000010087e740,0x74696e696564,
                0xe600000000000000,0x325,0);
  lVar3 = _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem;
  lVar4 = *(long *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::rotationWorkItem);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar4);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC14UURemoteServer19SecondScreenManager::settingsCompletion)
  ;
  pcVar6 = (code *)*puVar1;
  if (pcVar6 != (code *)0x0) {
    uVar5 = puVar1[1];
    _swift_retain(uVar5);
    (*pcVar6)(0xffffffff);
    FUN_10007ed2c(pcVar6,uVar5);
  }
  lVar4 = *(long *)(unaff_x20 + 0x70);
  if (lVar4 != 0) {
    local_68 = *(undefined4 *)(unaff_x20 + 0x90);
    local_78 = *(undefined8 *)(unaff_x20 + 0x80);
    local_80 = (undefined4)*(undefined8 *)(unaff_x20 + 0x78);
    local_70 = (undefined4)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_6c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x88) >> 0x20);
    local_88 = lVar4;
    FUN_1003fb4bc(FUN_10008e7a0,0,0xd00000000000009f,0x800000010087e740,0x74696e696564,
                  0xe600000000000000,0x32a,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = &local_88;
    FUN_1003fb48c(thunk_FUN_10007ec98,auStack_b0,0xd0000000000000a5,0x800000010087d1a0,
                  0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
    FUN_100004030(lVar4);
  }
  FUN_100091734(unaff_x20 + 0x20);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  lVar4 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + lVar3));
  FUN_10007ed2c(*puVar1,puVar1[1]);
  return;
}

