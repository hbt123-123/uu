// rea decompile_all
// name: FUN_1000c2b00
// address: 0x1000c2b00
// body: available
// range: 0x1000c2b00-0x1000c2f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

long FUN_1000c2b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,ID param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  ID self;
  ID IVar7;
  undefined1 *puVar8;
  long unaff_x20;
  long lVar9;
  ID IVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_e0 [16];
  undefined4 local_d0;
  ID local_c8;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  objc_super local_98;
  undefined1 auStack_88 [24];
  
  lVar1 = _TtC14UURemoteServer18DrawOverlayManager::overlays;
  puVar8 = auStack_88;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18DrawOverlayManager::overlays,puVar8,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar1);
  if ((*(long *)(lVar9 + 0x10) == 0) ||
     (lVar2 = param_5, thunk_FUN_1001a2c34(), ((ulong)puVar8 & 1) == 0)) {
    lVar9 = 0;
    FUN_1000c2834();
    _swift_allocObject();
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_1000cca00();
    *(undefined **)(lVar9 + 0x20) = puVar4;
    _objc_msgSend(param_6,"frame");
    IVar10 = 0;
    FUN_1000c5000();
    _objc_allocWithZone();
    uVar11 = 0;
    uVar12 = 0;
    IVar10 = _objc_msgSend(IVar10,"initWithFrame:",0,0,param_3,param_4);
    _objc_msgSend(param_6,"frame");
    pcVar5 = (class_t *)0x0;
    FUN_1000c47c8();
    pcVar6 = pcVar5;
    _objc_allocWithZone();
    local_98.receiver = (ID)pcVar6;
    local_98.super_class = pcVar5;
    self = _objc_msgSendSuper2(&local_98,"initWithContentRect:styleMask:backing:defer:",uVar11,
                               uVar12,param_3,param_4,0x80,2,0);
    _objc_msgSend(self,"setOpaque:",0);
    IVar7 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor,"clearColor");
    _objc_msgSend(self,"setBackgroundColor:",IVar7);
    _objc_msgSend(self,"setHasShadow:",0);
    _objc_msgSend(self,"setIgnoresMouseEvents:",1);
    _objc_msgSend(self,"setReleasedWhenClosed:",0);
    _objc_msgSend(self,"setHidesOnDeactivate:",0);
    _objc_msgSend(self,"setLevel:",1000);
    _objc_msgSend(self,"setCollectionBehavior:",0x151);
    _objc_msgSend(self,"setContentView:",IVar10);
    *(ID *)(lVar9 + 0x10) = self;
    *(ID *)(lVar9 + 0x18) = IVar10;
    _swift_beginAccess(unaff_x20 + lVar1,auStack_b0,0x21,0);
    _swift_retain(lVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar11);
    local_b8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_100061870(lVar9,param_5,uVar11);
    *(undefined8 *)(unaff_x20 + lVar1) = local_b8;
    _swift_endAccess(auStack_b0);
    _objc_msgSend(*(ID *)(lVar9 + 0x10),"orderFrontRegardless");
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_d0 = (undefined4)param_5;
    local_c8 = param_6;
    FUN_1003fb48c(FUN_1000c46f8,auStack_e0,0xd00000000000009b,0x80000001008841c0,0xd00000000000001f,
                  0x8000000100884330,0xb7,0);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + lVar2 * 8);
    IVar10 = *(ID *)(lVar9 + 0x10);
    _swift_retain(lVar9);
    _objc_msgSend(IVar10,"frame");
    uVar11 = param_1;
    uVar12 = param_2;
    uVar13 = param_3;
    uVar14 = param_4;
    uVar3 = _objc_msgSend(param_6,"frame");
    _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar11,uVar12,uVar13,uVar14);
    if ((uVar3 & 1) == 0) {
      IVar10 = *(ID *)(lVar9 + 0x10);
      _objc_msgSend(param_6,"frame");
      _objc_msgSend(IVar10,"setFrame:display:",1);
      IVar10 = *(ID *)(lVar9 + 0x18);
      _objc_msgSend(param_6,"frame");
      _objc_msgSend(IVar10,"setFrame:",0,0);
      _swift_beginAccess(lVar9 + 0x20,auStack_b0,0,0);
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1000c4904();
      _swift_bridgeObjectRelease(uVar11);
    }
  }
  return lVar9;
}

