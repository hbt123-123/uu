// rea decompile_all
// name: FUN_10004d538
// address: 0x10004d538
// body: available
// range: 0x10004d538-0x10004d79f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004d538(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  undefined8 *local_d0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar2 = *(long *)(unaff_x20 + 0xd0);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + 0xd8);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
  }
  _swift_beginAccess(unaff_x20 + 0x70,auStack_a0,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 0x70) + 0x10) != 0) {
    _CGRestorePermanentDisplayConfiguration();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = *(long *)(unaff_x20 + 0x70);
    _swift_retain(uVar4);
    lVar1 = lVar2;
    _swift_bridgeObjectRetain();
    FUN_10004b2cc();
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = *(long *)(lVar1 + 0x10);
    local_b8 = uVar4;
    local_b0 = lVar1;
    _swift_retain(uVar4);
    if (lVar2 != 0) {
      FUN_100401b14(0);
      puVar3 = (undefined4 *)(local_b0 + 0x40);
      do {
        local_68 = *puVar3;
        local_78 = *(undefined8 *)(puVar3 + -4);
        local_80 = puVar3[-6];
        uVar4 = *(undefined8 *)(puVar3 + -8);
        local_70 = *(undefined8 *)(puVar3 + -2);
        local_88 = uVar4;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_d0 = &local_88;
        FUN_1003fb48c(thunk_FUN_10007ec98,auStack_e0,0xd0000000000000a5,0x800000010087d1a0,
                      0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
        FUN_100004030(uVar4);
        puVar3 = puVar3 + 10;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    _swift_bridgeObjectRelease(local_b0);
    _swift_unknownObjectRelease_n(local_b8,2);
  }
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0));
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0));
  FUN_100075168(*(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd8));
  lVar2 = _TtC14UURemoteServer25VirtualDisplayCoordinator::topologySuppressionDeadline;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + lVar2,lVar1);
  return;
}

