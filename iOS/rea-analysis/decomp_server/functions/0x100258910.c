// rea decompile_all
// name: FUN_100258910
// address: 0x100258910
// body: available
// range: 0x100258910-0x100258b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100258910(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd000000000000012;
  local_70 = 0x80000001008a7e50;
  IVar1 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  pcVar3 = "description";
  IVar1 = NSThread::description(IVar1,"description");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar3);
  _swift_bridgeObjectRelease(pcVar3);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  _swift_bridgeObjectRelease(local_70);
  _swift_beginAccess(param_2 + 0x20,&local_78,0x21,0);
  uVar2 = 0;
  FUN_100258460(0);
  _swift_endAccess(&local_78);
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2f);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd00000000000001d;
  local_70 = 0x80000001008a7f00;
  if (*(ulong *)(param_2 + 0x20) >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008a7f20);
  _swift_bridgeObjectRelease(local_70);
  FUN_10025ad28();
  _swift_retain();
  _swift_release(uVar2);
  *param_1 = param_3;
  return;
}

