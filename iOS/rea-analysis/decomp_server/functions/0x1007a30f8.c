// rea decompile_all
// name: SentryCoreDataSwizzling::swizzleCoreData
// address: 0x1007a30f8
// body: available
// range: 0x1007a30f8-0x1007a31f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryCoreDataSwizzling::swizzleCoreData(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  cfstringStruct *local_58;
  
  pcVar2 = &cf_executeFetchRequest_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSManagedObjectContext);
  IVar3 = objc_stub::class(IVar3);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0xc0000000;
  local_68 = FUN_1007a31f8;
  puStack_60 = &DAT_1009e87a0;
  local_58 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_78,2,pcVar2);
  pcVar2 = &cf_save_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSManagedObjectContext);
  IVar3 = objc_stub::class(IVar3);
  local_a0 = puVar1;
  local_98 = 0xc0000000;
  local_90 = FUN_1007a3418;
  puStack_88 = &DAT_1009e87a0;
  local_80 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_a0,2,pcVar2);
  return;
}

