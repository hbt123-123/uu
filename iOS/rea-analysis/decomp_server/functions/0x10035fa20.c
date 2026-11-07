// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::urlSession:dataTask:didReceive:
// address: 0x10035fa20
// body: available
// range: 0x10035fa20-0x10035faf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void __thiscall
_TtC10Filepicker17FilePickerRequest::urlSession_dataTask_didReceive_
          (_TtC10Filepicker17FilePickerRequest *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5)

{
  undefined8 *puVar1;
  undefined8 in_d0;
  undefined1 auStack_58 [24];
  
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_5);
  puVar1 = (undefined8 *)(param_1 + initialResponseTime);
  if (*(char *)(puVar1 + 1) == '\x01') {
    _CFAbsoluteTimeGetCurrent(0);
    *puVar1 = in_d0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  _swift_beginAccess(param_1 + responseData,auStack_58,0x21,0);
  __s10Foundation4DataV6appendyyACF(param_5,param_2);
  _swift_endAccess(auStack_58);
  FUN_100006cdc(param_5,param_2);
  return;
}

