// rea decompile_all
// name: SAReachability::stopMonitoring
// address: 0x100709624
// body: available
// range: 0x100709624-0x100709677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100709668 to 0x1007ddb10 _SCNetworkReachabilityUnscheduleFromRunLoop (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SAReachability::stopMonitoring(ID param_1,SEL param_2)

{
  __SCNetworkReachability *p_Var1;
  __SCNetworkReachability *p_Var2;
  
  p_Var1 = networkReachability(param_1);
  if (p_Var1 != (__SCNetworkReachability *)0x0) {
    p_Var2 = networkReachability(param_1);
    p_Var1 = p_Var2;
    _CFRunLoopGetMain();
    _SCNetworkReachabilityUnscheduleFromRunLoop
              (p_Var2,p_Var1,*(undefined8 *)PTR__kCFRunLoopCommonModes_1009953e0);
    return;
  }
  return;
}

