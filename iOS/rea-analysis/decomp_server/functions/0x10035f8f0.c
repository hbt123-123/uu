// rea decompile_all
// name: _TtC10Filepicker17FilePickerRequest::urlSession:task:didCompleteWithError:
// address: 0x10035f8f0
// body: available
// range: 0x10035f8f0-0x10035fa1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC10Filepicker17FilePickerRequest::urlSession_task_didCompleteWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  lVar1 = error;
  _swift_beginAccess(param_1 + error,auStack_68,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(ID *)(param_1 + lVar1) = param_5;
  _swift_errorRelease(uVar3);
  pcVar2 = *(code **)(param_1 + taskDidCompleteWithError);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(param_1 + taskDidCompleteWithError))[1];
    FUN_10004090c(pcVar2,uVar3);
    (*pcVar2)(param_3,param_4,param_5);
    FUN_10007ed2c(pcVar2,uVar3);
  }
  return;
}

