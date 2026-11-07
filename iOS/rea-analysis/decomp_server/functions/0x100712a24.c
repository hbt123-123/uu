// rea decompile_all
// name: SATaskObject::indexOfNodeWithID:
// address: 0x100712a24
// body: available
// range: 0x100712a24-0x100712b1b inclusive
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

long_long SATaskObject::indexOfNodeWithID_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  long_long lVar2;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  ID local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0xffffffffffffffff;
  bVar1 = SAValidator::isValidString_((ID)&objc::class_t::SAValidator,param_3);
  if ((bVar1 & 1) == 0) {
    lVar2 = local_38[3];
  }
  else {
    self = nodes(param_1);
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0xc2000000;
    local_60 = FUN_100712b34;
    puStack_58 = &DAT_1009e7b18;
    puStack_48 = &local_40;
    local_50 = param_3;
    objc_stub::enumerateObjectsUsingBlock_(self,&local_70);
    lVar2 = local_38[3];
  }
  __Block_object_dispose(&local_40,8);
  return lVar2;
}

