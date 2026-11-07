// rea decompile_all
// name: SentryNSDataSwizzling::swizzle
// address: 0x10077d400
// body: available
// range: 0x10077d400-0x10077d603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryNSDataSwizzling::swizzle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_128;
  undefined8 local_120;
  code *local_118;
  undefined *puStack_110;
  cfstringStruct *local_108;
  undefined *local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *puStack_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  cfstringStruct *local_68;
  
  pcVar2 = &cf_writeToFile_atomically_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0xc0000000;
  local_78 = FUN_10077d604;
  puStack_70 = &DAT_1009e87a0;
  local_68 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_88,2,pcVar2);
  pcVar2 = &cf_writeToFile_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_b0 = puVar1;
  local_a8 = 0xc0000000;
  local_a0 = FUN_10077d7fc;
  puStack_98 = &DAT_1009e87a0;
  local_90 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_b0,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfFile_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_d8 = puVar1;
  local_d0 = 0xc0000000;
  local_c8 = FUN_10077da0c;
  puStack_c0 = &DAT_1009e87a0;
  local_b8 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_d8,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfFile_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_100 = puVar1;
  local_f8 = 0xc0000000;
  local_f0 = FUN_10077dc28;
  puStack_e8 = &DAT_1009e87a0;
  local_e0 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_100,2,pcVar2);
  pcVar2 = &cf_initWithContentsOfURL_options_error_;
  _NSSelectorFromString();
  IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSData);
  IVar3 = objc_stub::class(IVar3);
  local_128 = puVar1;
  local_120 = 0xc0000000;
  local_118 = FUN_10077de14;
  puStack_110 = &DAT_1009e87a0;
  local_108 = pcVar2;
  objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
            ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_128,2,pcVar2);
  return;
}

