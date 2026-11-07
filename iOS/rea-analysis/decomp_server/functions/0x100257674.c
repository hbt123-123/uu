// rea decompile_all
// name: FUN_100257674
// address: 0x100257674
// body: available
// range: 0x100257674-0x100257913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257674(undefined8 param_1)

{
  ID IVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  FUN_100257f40();
  __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd000000000000012;
  local_70 = 0x80000001008a7e50;
  IVar1 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  pcVar2 = "description";
  IVar1 = NSThread::description(IVar1,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  _swift_bridgeObjectRelease(local_70);
  _swift_beginAccess(unaff_x20 + 0x30,&local_78,0x21,0);
  _swift_retain(param_1);
  FUN_100258e18();
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  uVar5 = uVar4 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar6) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_10025d32c(uVar4,uVar6 + 1,1);
    uVar5 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar5 + uVar6 * 8 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + 0x30) = uVar4;
  _swift_endAccess(&local_78);
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x29);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0x2e6f4e20656854;
  local_70 = 0xe700000000000000;
  if (*(ulong *)(unaff_x20 + 0x30) >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xd000000000000020,0x80000001008a7e90);
  _swift_bridgeObjectRelease(local_70);
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if ((long)uVar6 < 0) {
      uVar4 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 == *(ulong *)(unaff_x20 + 0x38)) {
    FUN_100257958(0,0);
  }
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  _swift_release(param_1);
  return;
}

