// rea decompile_all
// name: FUN_100004030
// address: 0x100004030
// body: available
// range: 0x100004030-0x100004137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004134 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100004030(ID param_1)

{
  class_t *pcVar1;
  ID IVar2;
  
  pcVar1 = &objc::class_t::NRDVirtualDisplayBox;
  _objc_opt_class(&objc::class_t::NRDVirtualDisplayBox);
  IVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,pcVar1);
  if ((IVar2 & 1) == 0) {
    if (param_1 == 0) {
      FUN_100003a34(&cf_VirtualDisplayTrace_shimdisconnectskippedreason_nilDisplay);
    }
    else {
      FUN_1000039e0(&cf_VirtualDisplayTrace_shimdisconnectrawDisplay);
    }
  }
  else {
    IVar2 = objc_stub::display(param_1);
    objc_stub::displayID(IVar2);
    objc_stub::vendorID(param_1);
    objc_stub::productID(param_1);
    objc_stub::serialNum(param_1);
    FUN_1000039e0(&
                  cf_VirtualDisplayTrace_shimdisconnectdisplayID__uvendorID__uproductID__userialNum__u
                 );
    objc_stub::setDisplay_(param_1,0);
    objc_stub::setSettings_(param_1,0);
    objc_stub::setModes_(param_1,0);
  }
  return 0;
}

