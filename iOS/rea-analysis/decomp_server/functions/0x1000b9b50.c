// rea decompile_all
// name: FUN_1000b9b50
// address: 0x1000b9b50
// body: available
// range: 0x1000b9b50-0x1000ba3ab inclusive
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

void FUN_1000b9b50(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined1 auStack_140 [16];
  ID local_130;
  ID IStack_128;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  ulong local_d8;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  undefined1 auStack_b0 [32];
  
  uVar4 = NSScreen::screens((ID)&_OBJC_CLASS___NSScreen,"screens");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  uVar5 = 0;
  FUN_100401b14();
  puVar11 = auStack_d0;
  local_f8 = "ge md5 invalid for ";
  pcStack_f0 = "$_windowLevelProtector";
  local_e8 = uVar5;
  local_c0 = uVar4;
  FUN_1003fb48c(FUN_1000c1178,puVar11,0xd00000000000009f,0x8000000100882d60,0xd000000000000015,
                0x80000001008831d0,0x23c,0);
  if (uVar4 >> 0x3e == 0) {
    uVar16 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    uVar6 = local_118;
  }
  else {
    uVar16 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar16 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    uVar6 = local_118;
  }
  local_118 = uVar16;
  if (local_118 != 0) {
    uVar16 = 0;
    local_100 = uVar4 & 0xc000000000000001;
    local_108 = uVar4 & 0xffffffffffffff8;
    local_110 = uVar4;
    do {
      if (local_100 == 0) {
        if (*(ulong *)(local_108 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ba350);
          (*pcVar3)();
        }
        uVar6 = *(ID *)(uVar4 + uVar16 * 8 + 0x20);
      }
      else {
        uVar6 = uVar16;
        FUN_100169c00(uVar16,uVar4);
      }
      uVar4 = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ba34c);
        (*pcVar3)();
      }
      IVar8 = uVar6;
      FUN_1000c1180();
      local_dc = (undefined4)IVar8;
      _objc_msgSend(uVar6,"frame");
      puVar7 = &_OBJC_CLASS___NSWindow;
      _objc_allocWithZone();
      dVar17 = 0.0;
      IVar8 = _objc_msgSend((ID)puVar7,"initWithContentRect:styleMask:backing:defer:screen:",0,0,
                            param_3,param_4,0,2,0,uVar6);
      IVar9 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor,"blackColor");
      _objc_msgSend(IVar8,"setBackgroundColor:",IVar9);
      _objc_msgSend(IVar8,"setOpaque:",1);
      IVar9 = _objc_msgSend(IVar8,"setHasShadow:",0);
      FUN_1000b6da8();
      local_d8 = uVar4;
      if (*(char *)(IVar9 + 0x50) == '\x01') {
        puVar14 = &DAT_100a77208;
        if (DAT_100a73b50 != -1) {
          _swift_once(&DAT_100a73b50,FUN_1000c5570);
          puVar14 = &DAT_100a77208;
        }
      }
      else {
        puVar14 = &DAT_100a77200;
        if (DAT_100a73b48 != -1) {
          _swift_once(&DAT_100a73b48,FUN_1000c554c);
          puVar14 = &DAT_100a77200;
        }
      }
      uVar5 = *puVar14;
      _swift_release();
      _objc_msgSend(IVar8,"setLevel:",uVar5);
      _objc_msgSend(IVar8,"setSharingType:",0);
      _objc_msgSend(IVar8,"setIgnoresMouseEvents:",1);
      _objc_msgSend(IVar8,"setCollectionBehavior:",0x151);
      _objc_msgSend(IVar8,"setReleasedWhenClosed:",0);
      FUN_1000bc6e8(IVar8,uVar6);
      IVar9 = _objc_msgSend(IVar8,"contentView");
      _objc_msgSend(IVar9,"setWantsLayer:",1);
      IVar9 = _objc_msgSend(IVar8,"contentView");
      if ((IVar9 != 0) && (IVar9 = _objc_msgSend(IVar9,"layer"), IVar9 != 0)) {
        IVar10 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor,"blackColor");
        IVar10 = NSColor::CGColor(IVar10,"CGColor");
        _objc_msgSend(IVar9,"setBackgroundColor:",IVar10);
      }
      puVar7 = &_OBJC_CLASS___NSImageView;
      _objc_allocWithZone();
      IVar9 = _objc_msgSend((ID)puVar7,"init");
      param_1 = ABS(param_1 - param_2);
      uVar5 = 3;
      if (param_1 <= 0.1) {
        uVar5 = 1;
      }
      uVar2 = 3;
      if (*(char *)(unaff_x20 + 0x68) == '\0') {
        uVar2 = uVar5;
      }
      _objc_msgSend(IVar9,"setImageScaling:",uVar2);
      _objc_msgSend(IVar9,"setImageAlignment:",0);
      IVar10 = _objc_msgSend(IVar8,"contentView");
      if (IVar10 == 0) {
        _objc_msgSend(uVar6,"frame");
        param_1 = 0.0;
        param_2 = 0.0;
      }
      else {
        _objc_msgSend(IVar10,"bounds");
        param_2 = dVar17;
      }
      _objc_msgSend(IVar9,"setFrame:");
      _objc_msgSend(IVar9,"setAutoresizingMask:",0x12);
      IVar10 = _objc_msgSend(IVar8,"contentView");
      _objc_msgSend(IVar10,"addSubview:",IVar9);
      IVar10 = uVar6;
      uVar12 = uVar16;
      FUN_1000c0aa8();
      _swift_beginAccess(unaff_x20 + 0x18,auStack_b0,0x21,0);
      uVar15 = *(ulong *)(unaff_x20 + 0x18);
      uVar4 = uVar15;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar15;
      uVar13 = uVar15;
      if ((uVar4 & 1) == 0) {
        uVar13 = 0;
        FUN_10003546c(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
        *(ulong *)(unaff_x20 + 0x18) = uVar13;
      }
      uVar4 = *(ulong *)(uVar13 + 0x10);
      uVar15 = uVar13;
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar4) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_10003546c(uVar15,uVar4 + 1,1,uVar13);
      }
      *(ulong *)(uVar15 + 0x10) = uVar4 + 1;
      lVar1 = uVar15 + uVar4 * 0x20;
      *(ID *)(lVar1 + 0x20) = IVar9;
      *(ID *)(lVar1 + 0x28) = IVar10;
      *(ulong *)(lVar1 + 0x30) = uVar12;
      *(char *)(lVar1 + 0x38) = (char)local_dc;
      *(ulong *)(unaff_x20 + 0x18) = uVar15;
      _swift_endAccess(auStack_b0);
      IVar9 = _objc_msgSend(IVar8,"orderFrontRegardless");
      FUN_1000b6da8();
      uVar4 = local_110;
      if (*(char *)(IVar9 + 0x50) == '\x01') {
        puVar14 = &DAT_100a77208;
        if (DAT_100a73b50 != -1) {
          _swift_once(&DAT_100a73b50,FUN_1000c5570);
          puVar14 = &DAT_100a77208;
        }
      }
      else {
        puVar14 = &DAT_100a77200;
        if (DAT_100a73b48 != -1) {
          _swift_once(&DAT_100a73b48,FUN_1000c554c);
          puVar14 = &DAT_100a77200;
        }
      }
      uVar5 = *puVar14;
      _swift_release();
      _objc_msgSend(IVar8,"setLevel:",uVar5);
      _objc_msgSend(IVar8,"setSharingType:",0);
      _swift_beginAccess(unaff_x20 + 0x10,auStack_b0,0x21,0);
      FUN_1000bff1c();
      uVar13 = *(ulong *)(unaff_x20 + 0x10);
      uVar15 = uVar13 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar15 + 0x10);
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar12) {
        uVar13 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_100035574(uVar13,uVar12 + 1,1);
        uVar15 = uVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar15 + 0x10) = uVar12 + 1;
      *(ID *)(uVar15 + uVar12 * 8 + 0x20) = IVar8;
      *(ulong *)(unaff_x20 + 0x10) = uVar13;
      _swift_endAccess(auStack_b0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar11 = auStack_140;
      local_130 = uVar6;
      IStack_128 = IVar8;
      FUN_1003fb48c(FUN_1000c12b0,puVar11,0xd00000000000009f,(ulong)pcStack_f0 | 0x8000000000000000,
                    0xd000000000000015,(ulong)local_f8 | 0x8000000000000000,0x24d,0);
      uVar16 = uVar16 + 1;
      uVar6 = local_118;
    } while (local_d8 != local_118);
  }
  local_118 = uVar6;
  _swift_bridgeObjectRelease();
  FUN_1000c0ec8();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  *(ulong *)(unaff_x20 + 0x58) = uVar4;
  *(undefined1 **)(unaff_x20 + 0x60) = puVar11;
  _swift_bridgeObjectRelease(uVar5);
  return;
}

