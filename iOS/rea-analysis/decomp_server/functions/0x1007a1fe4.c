// rea decompile_all
// name: SentryProfilerMutableState::init
// address: 0x1007a1fe4
// body: available
// range: 0x1007a1fe4-0x1007a2117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryProfilerMutableState::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryProfilerMutableState;
  local_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    uVar3 = *(undefined8 *)(IVar1 + 8);
    *(ID *)(IVar1 + 8) = IVar2;
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x10);
    *(ID *)(IVar1 + 0x10) = IVar2;
    IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x18);
    *(ID *)(IVar1 + 0x18) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x20);
    *(ID *)(IVar1 + 0x20) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    uVar3 = *(undefined8 *)(IVar1 + 0x28);
    *(ID *)(IVar1 + 0x28) = IVar2;
    IVar2 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,uVar3);
    *(ID *)(IVar1 + 0x30) = IVar2;
  }
  return IVar1;
}

