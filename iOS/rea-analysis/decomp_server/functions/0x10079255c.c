// rea decompile_all
// name: SentryScope::initWithScope:
// address: 0x10079255c
// body: available
// range: 0x10079255c-0x10079281b inclusive
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

ID SentryScope::initWithScope_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID IVar1;
  undefined *self_00;
  undefined8 uVar2;
  ID IVar3;
  
  self = objc_stub::init(param_1);
  if (self != 0) {
    IVar3 = *(ID *)(self + 0x28);
    IVar1 = objc_stub::FUN_1007e9860(param_3);
    objc_stub::addEntriesFromDictionary_(IVar3,IVar1);
    IVar3 = *(ID *)(self + 0x20);
    IVar1 = objc_stub::FUN_1007f6d40(param_3);
    objc_stub::addEntriesFromDictionary_(IVar3,IVar1);
    IVar3 = *(ID *)(self + 0x90);
    IVar1 = objc_stub::context(param_3);
    objc_stub::addEntriesFromDictionary_(IVar3,IVar1);
    IVar1 = objc_stub::FUN_1007e5f00(param_3);
    self_00 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::maxBreadcrumbs(param_3);
    IVar3 = objc_stub::initWithCapacity_((ID)self_00,IVar3);
    uVar2 = *(undefined8 *)(self + 0x68);
    *(ID *)(self + 0x68) = IVar3;
    IVar3 = objc_stub::count(IVar1,uVar2);
    *(ID *)(self + 0x50) = IVar3;
    objc_stub::addObjectsFromArray_(*(ID *)(self + 0x68),IVar1);
    IVar3 = *(ID *)(self + 0x38);
    IVar1 = objc_stub::FUN_1007e9c40(param_3);
    objc_stub::addObjectsFromArray_(IVar3,IVar1);
    IVar3 = *(ID *)(self + 0x58);
    IVar1 = objc_stub::attachments(param_3);
    objc_stub::addObjectsFromArray_(IVar3,IVar1);
    IVar1 = objc_stub::propagationContext(param_3);
    objc_stub::FUN_1007f4320(self,IVar1);
    IVar1 = objc_stub::maxBreadcrumbs(param_3);
    objc_stub::FUN_1007f3aa0(self,IVar1);
    IVar1 = objc_stub::userObject(param_3);
    IVar1 = objc_stub::copy(IVar1);
    objc_stub::FUN_1007f5580(self,IVar1);
    IVar1 = objc_stub::FUN_1007e8940(param_3);
    objc_stub::FUN_1007f2700(self,IVar1);
    IVar1 = objc_stub::FUN_1007e9320(param_3);
    objc_stub::FUN_1007f2be0(self,IVar1);
    IVar1 = objc_stub::FUN_1007eda60(param_3);
    objc_stub::FUN_1007f3960(self,IVar1);
    IVar1 = objc_stub::span(param_3);
    objc_stub::FUN_1007f4c00(self,IVar1);
    IVar1 = objc_stub::replayId(param_3);
    objc_stub::setReplayId_(self,IVar1);
  }
  return self;
}

