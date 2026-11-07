// rea decompile_all
// name: SentryHub::initWithClient:andScope:andCrashWrapper:andDispatchQueue:
// address: 0x1007661dc
// body: available
// range: 0x1007661dc-0x10076636b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryHub::initWithClient_andScope_andCrashWrapper_andDispatchQueue_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  objc_super local_70;
  
  local_70.super_class = &objc::class_t::SentryHub;
  local_70.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_70,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x28) = param_3;
    *(ID *)(IVar1 + 0x20) = param_4;
    *(ID *)(IVar1 + 0x38) = param_5;
    *(ID *)(IVar1 + 0x30) = param_6;
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    uVar4 = *(undefined8 *)(IVar1 + 8);
    *(ID *)(IVar1 + 8) = IVar3;
    puVar2 = &_OBJC_CLASS___NSObject;
    _objc_alloc(uVar4);
    IVar3 = objc_stub::init((ID)puVar2);
    *(ID *)(IVar1 + 0x10) = IVar3;
    puVar2 = &_OBJC_CLASS___NSMutableArray;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    *(ID *)(IVar1 + 0x60) = IVar3;
    puVar2 = &_OBJC_CLASS___NSMutableSet;
    _objc_alloc();
    IVar3 = objc_stub::init((ID)puVar2);
    uVar4 = *(undefined8 *)(IVar1 + 0x40);
    *(ID *)(IVar1 + 0x40) = IVar3;
    *(undefined8 *)(IVar1 + 0x48) = 0;
    if (*(long *)(IVar1 + 0x20) != 0) {
      objc_stub::FUN_1007e9180(*(ID *)(IVar1 + 0x38),uVar4);
    }
  }
  return IVar1;
}

