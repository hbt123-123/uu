// rea decompile_all
// name: FUN_100258b28
// address: 0x100258b28
// body: available
// range: 0x100258b28-0x100258ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100258b28(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  
  local_68 = 0;
  local_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(local_60);
  local_68 = 0xd000000000000012;
  local_60 = 0x80000001008a7e50;
  IVar3 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  pcVar5 = "description";
  IVar3 = NSThread::description(IVar3,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar3);
  __sSS6appendyySSF(IVar3,pcVar5);
  _swift_bridgeObjectRelease(pcVar5);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  _swift_bridgeObjectRelease(local_60);
  _swift_beginAccess(param_1 + 0x10,&local_68,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRelease(uVar4);
  _swift_beginAccess(param_1 + 0x20,auStack_80,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_beginAccess(param_1 + 0x28,auStack_98,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_beginAccess(param_1 + 0x30,auStack_b0,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar2);
  _swift_beginAccess(param_2 + 0x20,&local_c8,0x21,0);
  FUN_100258e18();
  uVar7 = *(ulong *)(param_2 + 0x20);
  uVar8 = uVar7 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10025d32c(uVar7,uVar1 + 1,1);
    uVar8 = uVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
  *(long *)(uVar8 + uVar1 * 8 + 0x20) = param_1;
  *(ulong *)(param_2 + 0x20) = uVar7;
  _swift_endAccess(&local_c8);
  _swift_retain(param_1);
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  local_c8 = 0;
  local_c0 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x32);
  _swift_bridgeObjectRelease(local_c0);
  local_c8 = 0xd000000000000020;
  local_c0 = 0x80000001008a7f40;
  if (*(ulong *)(param_2 + 0x20) >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008a7f20);
  _swift_bridgeObjectRelease(local_c0);
  return;
}

