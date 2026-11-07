// rea decompile_all
// name: SentryProfilerState::init
// address: 0x1007a21bc
// body: available
// range: 0x1007a21bc-0x1007a22c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerState::init(ID param_1,SEL param_2)

{
  ID IVar1;
  class_t *self;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryProfilerState;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    self = &objc::class_t::SentryProfilerMutableState;
    _objc_alloc();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(IVar1 + 8) = IVar2;
    *(undefined4 *)(IVar1 + 0x50) = 0;
    IVar2 = objc_stub::sharedInstance((ID)&objc::class_t::SentryDependencyContainer);
    IVar2 = objc_stub::dispatchQueueWrapper(IVar2);
    local_68 = PTR___NSConcreteStackBlock_100995490;
    local_60 = 0xc2000000;
    local_58 = FUN_1007a2304;
    puStack_50 = &DAT_1009ea178;
    local_48 = IVar1;
    objc_stub::FUN_1007e87c0(IVar2,&local_68);
  }
  return IVar1;
}

