// rea decompile_all
// name: FUN_10078c994
// address: 0x10078c994
// body: available
// range: 0x10078c994-0x10078ca6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10078c994(long param_1,string *param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_78;
  void *local_70 [2];
  char local_59;
  undefined4 local_58;
  ID local_50;
  void *local_48;
  void *local_40;
  
  local_78 = *(undefined8 *)param_2;
  std::string::string(param_2,(string *)local_70);
  local_58 = *(undefined4 *)(param_2 + 0x20);
  local_50 = *(ID *)(param_2 + 0x28);
  FUN_10078cb0c(&local_48,param_2 + 0x30);
  IVar1 = SentryDependencyContainer::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
  IVar1 = SentryDependencyContainer::dateProvider(IVar1);
  local_50 = objc_stub::systemTime(IVar1);
  uVar2 = 0;
  _objc_autoreleasePoolPush(0);
  objc_stub::appendBacktrace_(*(ID *)(param_1 + 8),&local_78);
  _objc_autoreleasePoolPop(uVar2);
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  return;
}

