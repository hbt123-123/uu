// rea decompile_all
// name: FUN_100011910
// address: 0x100011910
// body: available
// range: 0x100011910-0x100011be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100011910(void)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_90 [16];
  int local_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100011be4,0,0xd0000000000000a9,0x8000000100877660,0x74696e696564,
                0xe600000000000000,0x137,0);
  FUN_100011c10(0x74696e696564,0xe600000000000000);
  _swift_beginAccess(unaff_x20 + 200,auStack_58,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined **)(unaff_x20 + 200) = PTR___swiftEmptyDictionarySingleton_100995ea8;
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_70,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined **)(unaff_x20 + 0xd0) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100011e08(0x74696e696564,0xe600000000000000);
  lVar4 = *(long *)(unaff_x20 + 0xb0);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    _swift_retain(lVar4);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar4);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  }
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  _swift_release(uVar2);
  lVar4 = *(long *)(unaff_x20 + 0x128);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar4);
  }
  if (*(char *)(unaff_x20 + 0x130) == '\x01') {
    iVar1 = 0xfa9c;
    _CGDisplayRemoveReconfigurationCallback();
    if (iVar1 == 0) {
      *(undefined1 *)(unaff_x20 + 0x130) = 0;
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_80 = iVar1;
      FUN_1003fb4ec(FUN_10003f7a8,auStack_90,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000026,0x8000000100878870,0x692,0);
    }
  }
  IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace,"sharedWorkspace");
  IVar3 = NSWorkspace::notificationCenter(IVar3,"notificationCenter");
  NSWorkspace::removeObserver_(IVar3,"removeObserver:");
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x110));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x140));
  return;
}

