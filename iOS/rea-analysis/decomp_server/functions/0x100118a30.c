// rea decompile_all
// name: FUN_100118a30
// address: 0x100118a30
// body: available
// range: 0x100118a30-0x100118bbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100118a30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ID IVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  __ss11_StringGutsV4growyySiF(0x1c);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100116844();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_3);
  __sSS6appendyySSF(0x3a64616572685420,0xe900000000000020);
  pcVar2 = "currentThread";
  IVar1 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74(IVar1);
  uVar3 = param_5;
  _swift_bridgeObjectRelease(pcVar2);
  __sSS6appendyySSF(param_4,param_5);
  _swift_bridgeObjectRelease(param_5);
  __sSS6appendyySSF(0x2d,0xe100000000000000);
  pcVar2 = "currentThread";
  IVar1 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74(IVar1);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(IVar1,pcVar2);
  _swift_bridgeObjectRelease(pcVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x6576456573756f4d;
  param_1[1] = 0xec000000203a746e;
  return;
}

