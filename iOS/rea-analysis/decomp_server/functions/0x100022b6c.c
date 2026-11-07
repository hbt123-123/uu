// rea decompile_all
// name: FUN_100022b6c
// address: 0x100022b6c
// body: available
// range: 0x100022b6c-0x100022e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100022b6c(ulong param_1)

{
  ulong uVar1;
  class_t *self;
  ID IVar2;
  undefined4 uVar3;
  long unaff_x20;
  int iVar4;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  int iStack_5c;
  
  uVar3 = (undefined4)param_1;
  local_60 = uVar3;
  if ((*(char *)(*(long *)(unaff_x20 + 0x38) + 0x14) == '\x01') &&
     (uVar1 = param_1, FUN_100039b50(), (uVar1 & 1) == 0)) {
    if ((*(byte *)(unaff_x20 + 0x9a) & 1) == 0) {
      self = &objc::class_t::StartAudioCaptureConfig;
      _objc_allocWithZone();
      IVar2 = _objc_msgSend((ID)self,"init");
      _objc_msgSend(IVar2,"setAudioTrackIndex:",0);
      _objc_msgSend(IVar2,"setCaptureType:",0);
      _objc_msgSend(IVar2,"setSourceIndex:",0xffffffff);
      IVar2 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                                   _TtC14UURemoteServer15StreamerManager::controlled),
                            "ControlledStartAudioCapture:info:",param_1,IVar2);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      iVar4 = (int)IVar2;
      iStack_5c = iVar4;
      FUN_1003fb48c(FUN_10003f65c,auStack_70,0xd000000000000095,0x8000000100877f50,
                    0xd00000000000001a,0x8000000100878100,0x186,0);
      if (iVar4 == 0) {
        *(undefined1 *)(unaff_x20 + 0x9a) = 1;
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_60 = uVar3;
      iStack_5c = iVar4;
      FUN_1003fb48c(FUN_10003f698,auStack_70,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000001d,0x8000000100878120,0x3f3,0);
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003f6a0,auStack_70,0xd0000000000000a9,0x8000000100877660,
                    0xd00000000000001d,0x8000000100878120,1000,0);
    }
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f6a8,auStack_70,0xd0000000000000a9,0x8000000100877660,0xd00000000000001d,
                  0x8000000100878120,0x3e3,0);
    FUN_100021d90(param_1);
  }
  return;
}

