// rea decompile_all
// name: SentryNSFileManagerSwizzling::swizzle
// address: 0x10075cffc
// body: available
// range: 0x10075cffc-0x10075d0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void SentryNSFileManagerSwizzling::swizzle(ID param_1,SEL param_2)

{
  int iVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *puStack_30;
  cfstringStruct *local_28;
  
  iVar1 = 1;
  FUN_1007070fc(1,0xf,0,0);
  if (iVar1 != 0) {
    pcVar2 = &cf_createFileAtPath_contents_attributes_;
    _NSSelectorFromString();
    IVar3 = objc_stub::class((ID)&_OBJC_CLASS___NSFileManager);
    IVar3 = objc_stub::class(IVar3);
    local_48 = PTR___NSConcreteStackBlock_100995490;
    local_40 = 0xc0000000;
    local_38 = FUN_10075d0a8;
    puStack_30 = &DAT_1009e87a0;
    local_28 = pcVar2;
    objc_stub::swizzleInstanceMethod_inClass_newImpFactory_mode_key_
              ((ID)&objc::class_t::SentrySwizzle,pcVar2,IVar3,&local_48,2,pcVar2);
  }
  return;
}

