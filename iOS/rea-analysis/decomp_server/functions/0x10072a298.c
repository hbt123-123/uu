// rea decompile_all
// name: SAHTTPSession::URLSession:didReceiveChallenge:completionHandler:
// address: 0x10072a298
// body: available
// range: 0x10072a298-0x10072a4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

void SAHTTPSession::URLSession_didReceiveChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = sessionDidReceiveAuthenticationChallenge(param_1);
  if (IVar1 == 0) {
    IVar1 = objc_stub::protectionSpace(param_4);
    IVar1 = objc_stub::authenticationMethod(IVar1);
    IVar1 = objc_stub::isEqualToString_
                      (IVar1,*(undefined8 *)PTR__NSURLAuthenticationMethodServerTrust_100995208);
    if ((int)IVar1 != 0) {
      IVar1 = securityPolicy(param_1);
      IVar2 = objc_stub::protectionSpace(param_4);
      IVar2 = objc_stub::serverTrust(IVar2);
      IVar3 = objc_stub::protectionSpace(param_4);
      IVar3 = objc_stub::host(IVar3);
      IVar1 = objc_stub::evaluateServerTrust_forDomain_(IVar1,IVar2,IVar3);
      if ((int)IVar1 == 0) {
        IVar1 = 0;
        IVar2 = 2;
      }
      else {
        IVar1 = objc_stub::protectionSpace(param_4);
        IVar1 = objc_stub::serverTrust(IVar1);
        IVar1 = NSURLCredential::credentialForTrust_((ID)&_OBJC_CLASS___NSURLCredential,IVar1);
        IVar2 = (ID)(IVar1 == 0);
      }
      goto joined_r0x00010072a4d8;
    }
    IVar2 = 1;
  }
  else {
    IVar1 = sessionDidReceiveAuthenticationChallenge(param_1);
    IVar2 = sessionDidReceiveAuthenticationChallenge(IVar1,(SEL)param_3);
  }
  IVar1 = 0;
joined_r0x00010072a4d8:
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,IVar2,IVar1);
  }
  return;
}

