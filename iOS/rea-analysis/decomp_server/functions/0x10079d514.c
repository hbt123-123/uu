// rea decompile_all
// name: SentryUser::copyWithZone:
// address: 0x10079d514
// body: available
// range: 0x10079d514-0x10079d6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryUser::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::allocWithZone_((ID)&objc::class_t::SentryUser);
  IVar1 = objc_stub::init(IVar1);
  if (IVar1 != 0) {
    IVar2 = objc_stub::FUN_1007f7e40(param_1);
    objc_stub::setUserId_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_1007e8ac0(param_1);
    objc_stub::FUN_1007f27c0(IVar1,IVar2);
    IVar2 = objc_stub::username(param_1);
    objc_stub::FUN_1007f55a0(IVar1,IVar2);
    IVar2 = objc_stub::ipAddress(param_1);
    objc_stub::setIpAddress_(IVar1,IVar2);
    IVar2 = objc_stub::segment(param_1);
    objc_stub::FUN_1007f4840(IVar1,IVar2);
    IVar2 = objc_stub::name(param_1);
    objc_stub::setName_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_1007ea1e0(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::FUN_1007f3140(IVar1,IVar2);
    IVar2 = objc_stub::data(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::setData_(IVar1,IVar2);
    IVar2 = objc_stub::FUN_1007f7a40(param_1);
    IVar2 = objc_stub::copy(IVar2);
    objc_stub::FUN_1007f5420(IVar1,IVar2);
  }
  return IVar1;
}

