// rea decompile_all
// name: SABaseStoreManager::objectForKey:
// address: 0x100715f50
// body: available
// range: 0x100715f50-0x10071608b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100716088 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SABaseStoreManager::objectForKey_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  char *pcVar2;
  ID IVar3;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  ID local_78;
  ID local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  pcVar2 = _dispatch_queue_get_label((dispatch_queue_t)0x0);
  if ((pcVar2 == (char *)0x0) ||
     (iVar1 = _strcmp(pcVar2,"com.sensorsdata.serialQueue.StoreManager"), iVar1 != 0)) {
    local_60 = 0;
    local_50 = 0x3032000000;
    local_48 = FUN_1007160a4;
    pcStack_40 = FUN_1007160b4;
    local_38 = 0;
    local_58 = &local_60;
    IVar3 = serialQueue(param_1);
    local_98 = PTR___NSConcreteStackBlock_100995490;
    local_90 = 0xc2000000;
    local_88 = FUN_1007160bc;
    puStack_80 = &DAT_1009e7ca8;
    local_78 = param_1;
    local_70 = param_3;
    local_68 = &local_60;
    _dispatch_sync(IVar3,&local_98);
    IVar3 = local_58[5];
    __Block_object_dispose(&local_60,8);
  }
  else {
    IVar3 = objForKey_(param_1,param_3);
  }
  return IVar3;
}

