// rea decompile_all
// name: FUN_10021b388
// address: 0x10021b388
// body: available
// range: 0x10021b388-0x10021b837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_10021b388(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID self;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [64];
  undefined8 local_160;
  ulong local_158 [29];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar17 = DAT_100b360a8;
  lVar14 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                    _TtC14UURemoteServer15StreamerManager::dispatcher);
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(lVar14 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession);
  }
  puVar4 = &DAT_100a75ac0;
  FUN_100004bb4(&DAT_100a75ac0,&DAT_100809b50);
  puVar5 = puVar4;
  _swift_initStackObject();
  dVar19 = 2.47032822920623e-323;
  *(undefined8 *)(puVar5 + 0x18) = 10;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  *(undefined8 *)(puVar5 + 0x20) = 0x6174735f72656570;
  *(undefined8 *)(puVar5 + 0x28) = 0xea00000000006574;
  if (lVar14 == 0) {
    uVar6 = 0;
  }
  else {
    lVar7 = lVar14 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
    _swift_beginAccess(lVar7,auStack_1b8,0,0);
    uVar6 = *(undefined8 *)(lVar7 + 8);
  }
  uVar11 = (ulong)(lVar14 == 0);
  FUN_10021bbe4();
  *(undefined8 *)(puVar5 + 0x30) = uVar6;
  *(ulong *)(puVar5 + 0x38) = uVar11;
  *(undefined8 *)(puVar5 + 0x40) = 0x5f7463656e6e6f63;
  *(undefined8 *)(puVar5 + 0x48) = 0xec00000065707974;
  if (lVar14 == 0) {
    puVar15 = (ulong *)0x0;
    uVar18 = 0;
  }
  else {
    lVar7 = lVar14;
    FUN_1000c7b64();
    puVar15 = *(ulong **)(lVar7 + 0x68);
    bVar1 = *(byte *)(lVar7 + 0x70);
    cVar2 = *(char *)(lVar7 + 0x71);
    _swift_release(lVar7);
    bVar3 = cVar2 != '\0';
    if (bVar3) {
      puVar15 = (ulong *)0x1;
    }
    uVar18 = (uint)bVar1;
    if (bVar3) {
      uVar18 = 1;
    }
  }
  uVar11 = (ulong)(uVar18 | (uint)(lVar14 == 0) << 8);
  FUN_10021bd78();
  *(ulong **)(puVar5 + 0x50) = puVar15;
  *(ulong *)(puVar5 + 0x58) = uVar11;
  *(undefined1 **)(puVar5 + 0x60) = &DAT_d000000000000013;
  *(undefined8 *)(puVar5 + 0x68) = 0x80000001008a56a0;
  FUN_1003b2720();
  uVar16 = *puVar15;
  uVar11 = uVar16;
  _swift_retain();
  FUN_10039a5f0();
  _swift_release(uVar16);
  puVar8 = PTR___sSiN_100995968;
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_158[0] = uVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar5 + 0x70) = puVar8;
  *(undefined **)(puVar5 + 0x78) = puVar10;
  *(undefined8 *)(puVar5 + 0x80) = 0x635f6e6565726373;
  *(undefined8 *)(puVar5 + 0x88) = 0xec000000746e756f;
  uVar11 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar6 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar11,uVar6);
  if (uVar11 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = uVar11 & 0xffffffffffffff8;
    if ((long)uVar11 < 0) {
      uVar16 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRelease(uVar11);
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar8 = PTR___sSiN_100995968;
  puVar9 = PTR___sSiN_100995968;
  puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_158[0] = uVar16;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar5 + 0x90) = puVar9;
  *(undefined **)(puVar5 + 0x98) = puVar12;
  *(undefined8 *)(puVar5 + 0xa0) = 0xd000000000000014;
  *(undefined8 *)(puVar5 + 0xa8) = 0x80000001008a56c0;
  lVar17 = *(long *)(lVar17 + 0x80);
  _swift_beginAccess(lVar17 + 0x88,local_158,0,0);
  local_160 = *(undefined8 *)(*(long *)(lVar17 + 0x88) + 0x10);
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar5 + 0xb0) = puVar8;
  *(undefined **)(puVar5 + 0xb8) = puVar10;
  puVar10 = puVar5;
  FUN_1000cbc40(puVar5);
  _swift_setDeallocating(puVar5);
  puVar8 = &DAT_100a75ac8;
  FUN_100004bb4(&DAT_100a75ac8,&DAT_100813090);
  _swift_arrayDestroy(puVar5 + 0x20,5,puVar8);
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  NSProcessInfo::systemUptime(self,"systemUptime");
  dVar20 = *(double *)(unaff_x20 + 0x20);
  _swift_initStackObject(puVar4,auStack_1a0);
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = 0x685f656d69747075;
  *(undefined8 *)(puVar4 + 0x28) = 0xe800000000000000;
  puVar5 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar8 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar5 + 0x38) = PTR___sSdN_1009958f0;
  *(undefined **)(puVar5 + 0x40) = puVar8;
  *(double *)(puVar5 + 0x20) = (dVar19 - dVar20) / 3600.0;
  uVar6 = 0x66312e25;
  uVar13 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66312e25,0xe400000000000000,puVar5);
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  *(undefined8 *)(puVar4 + 0x38) = uVar13;
  puVar5 = puVar4;
  FUN_1000cbc40(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_100040bb4(puVar4 + 0x20,&DAT_100a75ac8,&DAT_100813090);
  auVar21._8_8_ = puVar5;
  auVar21._0_8_ = puVar10;
  return auVar21;
}

