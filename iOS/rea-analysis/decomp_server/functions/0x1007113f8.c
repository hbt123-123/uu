// rea decompile_all
// name: SABaseEventObject::init
// address: 0x1007113f8
// body: available
// range: 0x1007113f8-0x10071152f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SABaseEventObject::init(ID param_1,SEL param_2)

{
  u_int32_t uVar1;
  ID IVar2;
  class_t *pcVar3;
  ID IVar4;
  undefined4 extraout_var;
  double extraout_d0;
  double extraout_d0_00;
  ID local_40;
  class_t *pcStack_38;
  
  pcStack_38 = &objc::class_t::SABaseEventObject;
  local_40 = param_1;
  IVar2 = NSObject::init((ID)&local_40,"init");
  if (IVar2 != 0) {
    *(undefined8 *)(IVar2 + 0x38) = 1;
    pcVar3 = &objc::class_t::SAEventLibObject;
    _objc_alloc_init();
    *(class_t **)(IVar2 + 0x40) = pcVar3;
    IVar4 = NSDate::date((ID)&_OBJC_CLASS___NSDate);
    NSDate::timeIntervalSince1970(IVar4);
    *(long *)(IVar2 + 0x48) = (long)(extraout_d0 * 1000.0);
    uVar1 = _arc4random();
    IVar4 = NSNumber::numberWithUnsignedInt_
                      ((ID)&_OBJC_CLASS___NSNumber,CONCAT44(extraout_var,uVar1));
    *(ID *)(IVar2 + 0x50) = IVar4;
    IVar4 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
    *(ID *)(IVar2 + 0x68) = IVar4;
    IVar4 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    NSProcessInfo::systemUptime(IVar4);
    *(long *)(IVar2 + 0x70) = (long)(extraout_d0_00 * 1000.0);
    *(undefined2 *)(IVar2 + 8) = 0;
    *(undefined1 *)(IVar2 + 10) = 0;
  }
  return IVar2;
}

