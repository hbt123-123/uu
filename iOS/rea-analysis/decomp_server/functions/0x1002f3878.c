// rea decompile_all
// name: _TtC9Alamofire15SessionDelegate::URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:
// address: 0x1002f3878
// body: available
// range: 0x1002f3878-0x1002f399f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC9Alamofire15SessionDelegate::
     URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  long lVar1;
  void *aBlock;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffa0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  aBlock = __Block_copy((void *)param_7);
  __s10Foundation10URLRequestV36_unconditionallyBridgeFromObjectiveCyACSo12NSURLRequestCSgFZ
            (puVar2,param_6);
  __Block_copy(aBlock);
  FUN_1002f6b94(param_3,param_4,param_5,puVar2,param_1,aBlock);
  __Block_release(aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}

