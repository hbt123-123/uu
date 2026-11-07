// rea decompile_all
// name: SAURLUtils::buildServerURLWithURLString:debugMode:
// address: 0x100713c64
// body: available
// range: 0x100713c64-0x100713df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100713df4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SAURLUtils::buildServerURLWithURLString_debugMode_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  bool bVar1;
  ID self;
  ID IVar2;
  
  bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,param_3);
  if (bVar1 == 0) {
    self = 0;
  }
  else {
    self = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,param_3);
    if (param_4 != 0) {
      IVar2 = NSURL::lastPathComponent(self);
      IVar2 = NSURL::length(IVar2);
      if (IVar2 != 0) {
        self = NSURL::URLByDeletingLastPathComponent(self);
      }
      self = NSURL::URLByAppendingPathComponent_(self,&cf_debug);
      IVar2 = NSURL::host(self);
      if (IVar2 != 0) {
        IVar2 = NSURL::host(self);
        IVar2 = NSURL::rangeOfString_(IVar2,&cf__);
        if (IVar2 != 0x7fffffffffffffff) {
          objc_stub::log_level_file_function_line_context_format_
                    ((ID)&objc::class_t::SALog,1,2,
                     "/Users/game-netease/Desktop/Runner/Builds/nrd-Mac/KGGzibPf8/1/nrd/nrd-mac/nrd-mac-clinet/nrd-mac-server/SensorsAnalyticsSDK/Core/Utils/SAURLUtils.m"
                     ,"+[SAURLUtils buildServerURLWithURLString:debugMode:]",0x80,0,
                     &cf_Serverurl___contains___isnotrecommend_seedetails___,self,
                     &cf_https___en_wikipedia_org_wiki_Hostname);
        }
      }
    }
  }
  return self;
}

