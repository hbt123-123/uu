// rea decompile_all
// name: SentryCrash::initWithBasePath:
// address: 0x10078cfb4
// body: available
// range: 0x10078cfb4-0x10078d08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrash::initWithBasePath_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrash;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    IVar1 = objc_stub::FUN_1007ea340(self);
    objc_stub::FUN_1007f1e80(self,IVar1);
    objc_stub::FUN_1007f1c60(self,param_3);
    objc_stub::FUN_1007f2540(self,2);
    objc_stub::FUN_1007f35e0(self,1);
    objc_stub::FUN_1007f3b80(self,5);
    objc_stub::FUN_1007f3ce0(self,0x8f);
    objc_stub::FUN_1007f3d00(self,0);
  }
  return self;
}

