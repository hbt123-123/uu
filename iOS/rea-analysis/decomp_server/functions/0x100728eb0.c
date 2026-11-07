// rea decompile_all
// name: SAEventStore::selectRecordsInCache:
// address: 0x100728eb0
// body: available
// range: 0x100728eb0-0x10072900f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072900c to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SAEventStore::selectRecordsInCache_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  ID IVar1;
  unsigned_long_long uVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0x7fffffffffffffff;
  local_48 = &local_50;
  IVar1 = recordCaches(param_1);
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0xc2000000;
  local_68 = FUN_10072902c;
  puStack_60 = &DAT_1009e8158;
  local_58 = &local_50;
  objc_stub::enumerateObjectsUsingBlock_(IVar1,&local_78);
  if (local_48[3] == 0x7fffffffffffffff) {
    IVar1 = 0;
  }
  else {
    IVar1 = recordCaches(param_1);
    uVar2 = count(IVar1);
    if (uVar2 - local_48[3] <= param_3) {
      IVar1 = recordCaches(param_1);
      uVar2 = count(IVar1);
      param_3 = uVar2 - local_48[3];
    }
    IVar1 = recordCaches(param_1);
    IVar1 = objc_stub::subarrayWithRange_(IVar1,local_48[3],param_3);
  }
  __Block_object_dispose(&local_50,8);
  return IVar1;
}

