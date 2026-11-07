// rea decompile_all
// name: SAIdentifier::bindIdentity:value:
// address: 0x10070c6c4
// body: available
// range: 0x10070c6c4-0x10070c7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SAIdentifier::bindIdentity_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  ID local_48;
  
  IVar1 = identities(param_1);
  IVar1 = objc_stub::mutableCopy(IVar1);
  objc_stub::setObject_forKeyedSubscript_(IVar1,param_4,param_3);
  IVar2 = queue(param_1);
  local_70 = PTR___NSConcreteStackBlock_100995490;
  local_68 = 0xc2000000;
  local_60 = FUN_10070c7cc;
  puStack_58 = &DAT_1009e7980;
  local_50 = param_1;
  local_48 = IVar1;
  _dispatch_async(IVar2,&local_70);
  return;
}

