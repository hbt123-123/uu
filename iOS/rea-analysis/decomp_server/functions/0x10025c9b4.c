// rea decompile_all
// name: FUN_10025c9b4
// address: 0x10025c9b4
// body: available
// range: 0x10025c9b4-0x10025cb9b inclusive
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

void FUN_10025c9b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ID IVar2;
  char *pcVar3;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x14);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0xd000000000000012;
    local_98 = 0x80000001008a7e50;
    IVar2 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
    pcVar3 = "description";
    IVar2 = NSThread::description(IVar2,"description");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar2);
    __sSS6appendyySSF(IVar2,pcVar3);
    _swift_bridgeObjectRelease(pcVar3);
    _swift_bridgeObjectRelease(local_98);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF(*(undefined8 *)(param_1 + 0x30));
    _swift_beginAccess(param_1 + 0x28,&local_a0,0x21,0);
    FUN_10025f270(&local_88,param_2,param_3);
    _swift_endAccess(&local_a0);
    __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF(*(undefined8 *)(param_1 + 0x30));
    if (uStack_80 >> 0x3c < 0xf) {
      if (SBORROW8(param_4,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10025cb9c);
        (*pcVar1)();
      }
      FUN_10025bd7c(local_88,uStack_80,param_4 + -1,param_5,param_6);
      FUN_100006cc8(local_88,uStack_80);
      _swift_release(param_1);
    }
    else {
      _swift_release(param_1);
    }
  }
  return;
}

