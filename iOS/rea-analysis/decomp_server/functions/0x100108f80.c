// rea decompile_all
// name: FUN_100108f80
// address: 0x100108f80
// body: available
// range: 0x100108f80-0x1001093b3 inclusive
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

undefined1  [16] FUN_100108f80(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *self;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long extraout_x8;
  undefined *puVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_90 [16];
  long alStack_80 [2];
  char *local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar7 - extraout_x12;
  IVar2 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar2 = NSWorkspace::desktopImageURLForScreen_(IVar2,"desktopImageURLForScreen:",param_1);
  if (IVar2 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001051bc,0,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                  0x800000010088b1b0,0xa2,0);
LAB_1001091f8:
    IVar2 = 0;
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar7,IVar2);
    (**(code **)(lVar12 + 0x20))(lVar11,lVar7,lVar1);
    uVar3 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar7 = lVar11 + -0x20;
    *(long *)(lVar11 + -0x10) = lVar11;
    pcVar9 = FUN_10010a3bc;
    FUN_1003fb48c(FUN_10010a3bc,lVar7,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                  0x800000010088b1b0,0xa6,0);
    __s10Foundation3URLV4pathSSvg();
    uVar4 = 0;
    uVar8 = 0xe500000000000000;
    __sSS9hasSuffixySbSSF(0x636965682e,0xe500000000000000,pcVar9,lVar7);
    uStack_68 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
      uVar8 = 0xe500000000000000;
      __sSS9hasSuffixySbSSF(0x666965682e,0xe500000000000000,pcVar9,lVar7);
      if ((uVar4 & 1) != 0) goto LAB_10010913c;
      local_70 = s_ID__10088b190 + 0x20;
      self = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      puVar10 = self;
      __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
      IVar2 = _objc_msgSend((ID)self,"initWithContentsOfURL:",puVar10);
      if (IVar2 == 0) goto LAB_100109368;
LAB_10010926c:
      FUN_100108df8(pcVar9,lVar7);
      _swift_bridgeObjectRelease(lVar7);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(code **)(lVar11 + -0x10) = pcVar9;
      FUN_1003fb48c(FUN_10010a3c4,lVar11 + -0x20,0xd000000000000097,0x8000000100889170,
                    0xd00000000000001f,(ulong)local_70 | 0x8000000000000000,0xbf,0);
      (**(code **)(lVar12 + 8))(lVar11,lVar1);
      goto LAB_100109300;
    }
LAB_10010913c:
    FUN_1003ee76c(0);
    lVar5 = lVar11;
    FUN_1003ebaac(lVar11);
    if (0xe < uVar8 >> 0x3c) {
      _swift_bridgeObjectRelease(lVar7);
      FUN_1003fb4ec(FUN_100105280,0,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                    0x800000010088b1b0,0xae,0);
      (**(code **)(lVar12 + 8))(lVar11,lVar1);
      goto LAB_1001091f8;
    }
    local_70 = s_ID__10088b190 + 0x20;
    puVar10 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    lVar6 = lVar5;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar8);
    IVar2 = _objc_msgSend((ID)puVar10,"initWithData:",lVar6);
    FUN_100006cc8(lVar5,uVar8);
    if (IVar2 != 0) goto LAB_10010926c;
LAB_100109368:
    _swift_bridgeObjectRelease(lVar7);
    FUN_1003fb4ec(FUN_1001052ac,0,0xd000000000000097,0x8000000100889170,0xd00000000000001f,
                  (ulong)local_70 | 0x8000000000000000,0xb8,0);
    (**(code **)(lVar12 + 8))(lVar11,lVar1);
  }
  pcVar9 = (code *)0x0;
LAB_100109300:
  auVar13._8_8_ = pcVar9;
  auVar13._0_8_ = IVar2;
  return auVar13;
}

