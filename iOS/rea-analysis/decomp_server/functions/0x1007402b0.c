// rea decompile_all
// name: SentryClient::applyExtraDeviceContextToEvent:
// address: 0x1007402b0
// body: available
// range: 0x1007402b0-0x1007403f3 inclusive
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

void SentryClient::applyExtraDeviceContextToEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined4 in_w5;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  ID local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar2 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar2 = SentryDependencyContainer::extraContextProvider(IVar2);
  IVar2 = objc_stub::getExtraContext(IVar2);
  puVar1 = PTR___NSConcreteStackBlock_100995490;
  local_78 = PTR___NSConcreteStackBlock_100995490;
  local_70 = 0xc2000000;
  local_68 = FUN_1007403f4;
  puStack_60 = &DAT_1009e8828;
  local_58 = IVar2;
  modifyContext_key_block_(param_1,param_3,0x100a09630,(ID)&local_78,in_w5);
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_90 = FUN_100740450;
  puStack_88 = &DAT_1009e8828;
  local_80 = IVar2;
  modifyContext_key_block_(param_1,param_3,0x100a09650,(ID)&local_a0,in_w5);
  return;
}

