// rea decompile_all
// name: FUN_1003123d4
// address: 0x1003123d4
// body: available
// range: 0x1003123d4-0x1003124b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003123d4(undefined8 param_1,undefined8 *param_2)

{
  ID self;
  undefined8 uVar1;
  undefined8 uVar2;
  
  self = NSURLSessionConfiguration::param_2
                   ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,(SEL)*param_2);
  if (DAT_100a81b38 != -1) {
    _swift_once(&DAT_100a81b38,FUN_1002bdc84);
  }
  uVar1 = DAT_100b36478;
  FUN_1002bc258(DAT_100b36478);
  uVar2 = uVar1;
  FUN_1002bf548();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = uVar2;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar2,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  _swift_bridgeObjectRelease(uVar2);
  NSURLSessionConfiguration::setHTTPAdditionalHeaders_(self,"setHTTPAdditionalHeaders:",uVar1);
  return self;
}

