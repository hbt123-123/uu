// rea decompile_all
// name: FUN_100013420
// address: 0x100013420
// body: available
// range: 0x100013420-0x10001382b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100013420(void)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [16];
  uint local_f0;
  uint uStack_ec;
  ulong *local_e8;
  ulong local_e0;
  ulong *local_d8;
  undefined1 auStack_a8 [24];
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  FUN_100401b14();
  FUN_1003fb48c(FUN_100029c58,0,0xd0000000000000a9,0x8000000100877660,0xd00000000000001c,
                0x800000010087b120,0x634,0);
  _swift_beginAccess(unaff_x20 + 0xa8,auStack_a8,0,0);
  lVar5 = *(long *)(unaff_x20 + 0xa8);
  local_d8 = (ulong *)(lVar5 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *local_d8;
  local_e0 = uVar8 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  do {
    while (uVar10 == 0) {
      bVar3 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001382c);
        (*pcVar2)();
      }
      if ((long)local_e0 <= lVar12) {
        _swift_release(lVar5);
        return;
      }
      uVar10 = local_d8[lVar12];
    }
    uVar8 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar12 << 6;
    puVar9 = (ulong *)(*(long *)(lVar5 + 0x38) + uVar8 * 0x30);
    uVar1 = *(uint *)(*(long *)(lVar5 + 0x30) + uVar8 * 4);
    uStack_6f = *(undefined8 *)((long)puVar9 + 0x21);
    uStack_88 = puVar9[1];
    local_90 = *puVar9;
    uStack_80 = puVar9[2];
    uStack_78 = (undefined1)puVar9[3];
    local_77 = (undefined7)*(undefined8 *)((long)puVar9 + 0x19);
    uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0x19) >> 0x38);
    uVar8 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
    uVar6 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar8,uVar6);
    uVar11 = uVar8 & 0xffffffffffffff8;
    if (uVar8 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar14 = uVar11;
      if ((long)uVar8 < 0) {
        uVar14 = uVar8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    uVar13 = 0;
    uVar10 = uVar10 - 1 & uVar10;
    do {
      if (uVar14 == uVar13) {
        _swift_bridgeObjectRelease(uVar8);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar2 = FUN_10003ffd8;
        uVar6 = 0x639;
        goto LAB_1000136f8;
      }
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100013828);
          (*pcVar2)();
        }
        uVar4 = (uint)*(undefined8 *)(uVar8 + uVar13 * 8 + 0x20);
      }
      else {
        uVar7 = uVar13;
        FUN_100169c00(uVar13,uVar8);
        uVar4 = (uint)uVar7;
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100013824);
        (*pcVar2)();
      }
      FUN_1003d541c();
      uVar13 = uVar13 + 1;
    } while (uVar4 != uVar1);
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = (ulong)uVar1;
    FUN_10004ffa0();
    if ((uVar8 & 1) == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_e8 = &local_90;
      local_f0 = uVar1;
      FUN_1003fb48c(FUN_10003ffbc,auStack_100,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000001c,0x800000010087b120,0x641,0);
      uVar4 = uVar1;
      FUN_100003278((ulong)uVar1,local_90 & 0xffffffff);
      if (uVar4 != 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_f0 = uVar1;
        uStack_ec = uVar4;
        FUN_1003fb4ec(FUN_10003ffc8,auStack_100,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000001c,0x800000010087b120,0x644,0);
      }
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar2 = FUN_10003ffd0;
      uVar6 = 0x63e;
LAB_1000136f8:
      local_f0 = uVar1;
      FUN_1003fb48c(pcVar2,auStack_100,0xd0000000000000a9,0x8000000100877660,0xd00000000000001c,
                    0x800000010087b120,uVar6,0);
    }
  } while( true );
}

