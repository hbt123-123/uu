// rea decompile_all
// name: FUN_10004f940
// address: 0x10004f940
// body: available
// range: 0x10004f940-0x10004ff2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004f940(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  long extraout_x12;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  undefined4 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined1 auStack_140 [16];
  undefined8 auStack_130 [2];
  undefined8 local_120;
  undefined8 local_e0;
  long local_d8;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar16 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar11 - extraout_x12;
  lVar12 = *(long *)(unaff_x20 + 0xc0);
  lVar1 = *(long *)(unaff_x20 + 0xb8) + 1;
  *(long *)(unaff_x20 + 0xb8) = lVar1;
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  local_e0 = uVar15;
  local_d8 = lVar12;
  if (lVar12 == 0) {
    FUN_100051288();
    local_e0 = param_2;
    local_d8 = lVar16;
  }
  _swift_beginAccess(unaff_x20 + 0x70,auStack_a8,1,0);
  puVar14 = *(undefined4 **)(unaff_x20 + 0x70);
  FUN_1000750c8(lVar12,uVar15);
  puVar4 = puVar14;
  _swift_bridgeObjectRetain();
  FUN_10004b2cc();
  _swift_bridgeObjectRelease(puVar14);
  lVar16 = *(long *)(puVar4 + 4);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar16 != 0) {
    local_90 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10006fbb8(0,lVar16,0);
    uVar17 = *(ulong *)(local_90 + 0x10);
    puVar14 = puVar4;
    do {
      puVar14 = puVar14 + 10;
      uVar2 = *puVar14;
      uVar18 = uVar17 + 1;
      if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar17) {
        FUN_10006fbb8(1 < *(ulong *)(local_90 + 0x18),uVar18,1);
      }
      *(ulong *)(local_90 + 0x10) = uVar18;
      *(undefined4 *)(local_90 + uVar17 * 4 + 0x20) = uVar2;
      lVar16 = lVar16 + -1;
      puVar6 = local_90;
      uVar17 = uVar18;
    } while (lVar16 != 0);
  }
  puVar5 = puVar6;
  FUN_100074ee0(puVar6,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0,&DAT_100a761e0,
                &DAT_10080a978);
  _swift_bridgeObjectRelease(puVar6);
  lVar16 = *(long *)(unaff_x20 + 0xd0);
  if (lVar16 == 0) {
    uVar15 = 0;
  }
  else {
    _swift_retain(lVar16);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar16);
    uVar15 = *(undefined8 *)(unaff_x20 + 0xd0);
  }
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  _swift_release(uVar15);
  lVar16 = *(long *)(unaff_x20 + 0xd8);
  if (lVar16 == 0) {
    uVar15 = 0;
  }
  else {
    _swift_retain(lVar16);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar16);
    uVar15 = *(undefined8 *)(unaff_x20 + 0xd8);
  }
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  _swift_release(uVar15);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar19 = *(undefined8 *)(unaff_x20 + 200);
  *(long *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  FUN_100075168(uVar15,uVar19);
  *(undefined1 *)
   (unaff_x20 + _TtC14UURemoteServer25VirtualDisplayCoordinator::needsTopologyReconcile) = 0;
  pcVar13 = *(code **)(unaff_x20 + 0x98);
  if (pcVar13 != (code *)0x0) {
    uVar15 = *(undefined8 *)(unaff_x20 + 0xa0);
    _swift_retain(uVar15);
    (*pcVar13)();
    FUN_10007ed2c(pcVar13,uVar15);
  }
  _swift_beginAccess(unaff_x20 + 0x88,auStack_c8,1,0);
  lVar16 = *(long *)(unaff_x20 + 0x88);
  uVar17 = *(ulong *)(lVar16 + 0x10);
  _swift_bridgeObjectRetain(lVar16);
  if (uVar17 != 0) {
    uVar18 = 0;
    puVar20 = (undefined8 *)(lVar16 + 0x38);
    do {
      if (*(ulong *)(lVar16 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10004ff2c);
        (*pcVar13)();
      }
      uVar18 = uVar18 + 1;
      pcVar13 = (code *)puVar20[-1];
      uVar15 = *puVar20;
      uVar19 = puVar20[-2];
      _swift_retain(uVar19);
      _swift_retain(uVar15);
      (*pcVar13)();
      _swift_release(uVar15);
      _swift_release(uVar19);
      puVar20 = puVar20 + 4;
    } while (uVar17 != uVar18);
  }
  _swift_bridgeObjectRelease(lVar16);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined **)(unaff_x20 + 0x88) = PTR___swiftEmptyArrayStorage_100995ea0;
  _swift_bridgeObjectRelease(uVar15);
  if (*(long *)(puVar4 + 4) == 0) {
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    _CGRestorePermanentDisplayConfiguration();
    local_120 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar16 = *(long *)(puVar4 + 4);
    _swift_retain();
    if (lVar16 != 0) {
      FUN_100401b14(0);
      puVar14 = puVar4 + 0x10;
      do {
        local_70 = *puVar14;
        local_80 = *(undefined8 *)(puVar14 + -4);
        local_88 = puVar14[-6];
        puVar6 = *(undefined **)(puVar14 + -8);
        local_78 = *(undefined8 *)(puVar14 + -2);
        local_90 = puVar6;
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(undefined ***)(lVar10 + -0x10) = &local_90;
        FUN_1003fb48c(thunk_FUN_10007ec98,lVar10 + -0x20,0xd0000000000000a5,0x800000010087d1a0,
                      0x656e6e6f63736964,0xee00293a5f287463,0xb6,0);
        FUN_100004030(puVar6);
        puVar14 = puVar14 + 10;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    _swift_bridgeObjectRelease(puVar4);
    _swift_unknownObjectRelease(local_120);
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  _swift_bridgeObjectRelease(uVar15);
  pcVar13 = *(code **)(unaff_x20 + 0xa8);
  if (pcVar13 != (code *)0x0) {
    uVar15 = *(undefined8 *)(unaff_x20 + 0xb0);
    _swift_retain(uVar15);
    (*pcVar13)();
    FUN_10007ed2c(pcVar13,uVar15);
  }
  if (*(long *)(puVar5 + 0x10) == 0) {
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(puVar5);
  }
  else {
    __s10Foundation4DateVACycfC(lVar11);
    __s10Foundation4DateV18addingTimeIntervalyACSdF(lVar10,0x4014000000000000);
    pcVar13 = *(code **)(lVar9 + 8);
    (*pcVar13)(lVar11,lVar3);
    puVar6 = &DAT_1009985d0;
    puVar7 = puVar6;
    _swift_allocObject(&DAT_1009985d0,0x18,7);
    _swift_weakInit(puVar7 + 0x10,unaff_x20);
    puVar8 = &DAT_1009998e0;
    _swift_allocObject(&DAT_1009998e0,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    _swift_allocObject(&DAT_1009985d0,0x18,7);
    _swift_weakInit(puVar6 + 0x10,unaff_x20);
    puVar7 = &DAT_100999908;
    _swift_allocObject(&DAT_100999908,0x38,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = lVar1;
    *(undefined **)(puVar7 + 0x20) = puVar5;
    *(long *)(puVar7 + 0x28) = local_d8;
    *(undefined8 *)(puVar7 + 0x30) = local_e0;
    _swift_bridgeObjectRetain(puVar5);
    *(undefined **)(lVar10 + -0x10) = &DAT_100998890;
    FUN_100058d1c(lVar1,lVar10,FUN_100082ba0,puVar8,FUN_100082bf8,puVar7,&DAT_100998878,
                  FUN_10007ed80);
    _swift_release(puVar8);
    _swift_release(puVar7);
    (*pcVar13)(lVar10,lVar3);
  }
  return;
}

