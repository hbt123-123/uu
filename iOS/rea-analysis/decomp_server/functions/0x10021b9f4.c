// rea decompile_all
// name: FUN_10021b9f4
// address: 0x10021b9f4
// body: available
// range: 0x10021b9f4-0x10021bbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_10021b9f4(undefined8 param_1)

{
  class_t *pcVar1;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  pcVar1 = &objc::class_t::SentryEvent;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)pcVar1,"initWithLevel:",3);
  pcVar1 = &objc::class_t::SentryMessage;
  _objc_allocWithZone();
  uVar4 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000001008a5700);
  IVar2 = _objc_msgSend((ID)pcVar1,"initWithFormatted:",uVar4);
  _objc_msgSend(self,"setMessage:",IVar2);
  uVar3 = 0;
  FUN_100410514(0);
  uVar4 = uVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar3);
  _objc_msgSend(self,"setTags:",uVar4);
  uVar3 = 0;
  FUN_100410070(0);
  uVar4 = uVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar3);
  _objc_msgSend(self,"setExtra:",uVar4);
  SentrySDK::captureEvent_((ID)&objc::class_t::SentrySDK,"captureEvent:",self);
  uVar4 = 0;
  FUN_100401b14(0);
  local_60 = param_1;
  FUN_1003fb48c(uVar4,FUN_10021be34,auStack_70,0xd00000000000009f,0x80000001008a54e0,
                0xd000000000000016,0x80000001008a5720,0x9b,0);
  return 0;
}

