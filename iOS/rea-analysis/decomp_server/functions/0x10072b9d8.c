// rea decompile_all
// name: SAConsoleLogger::logMessage:
// address: 0x10072b9d8
// body: available
// range: 0x10072b9d8-0x10072bb8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072bb8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SAConsoleLogger::logMessage_(ID param_1,SEL param_2,ID param_3)

{
  class_t *self;
  ID IVar1;
  ID self_00;
  ID IVar2;
  undefined1 *puVar3;
  ulong extraout_x8;
  long extraout_x12;
  undefined1 auStack_70 [8];
  objc_super local_68;
  iovec local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_68.super_class = &objc::class_t::SAConsoleLogger;
  local_68.receiver = param_1;
  _objc_msgSendSuper2(&local_68,"logMessage:",param_3);
  self = &objc::class_t::SALoggerConsoleFormatter;
  _objc_alloc_init();
  IVar1 = objc_stub::formattedLogMessage_((ID)self,param_3);
  self_00 = objc_stub::sensorsdata_unicodeString(IVar1);
  IVar2 = objc_stub::lengthOfBytesUsingEncoding_(self_00,4);
  IVar1 = IVar2;
  (*(code *)PTR____chkstk_darwin_100995498)();
  if (IVar1 < extraout_x8) {
    IVar1 = objc_stub::getCString_maxLength_encoding_
                      (self_00,auStack_70 + -extraout_x12,IVar2 + 1,4);
    if ((IVar1 & 1) != 0) {
      local_58.iov_base = auStack_70 + -extraout_x12;
      local_58.iov_len = IVar2;
      _writev(2,&local_58,1);
    }
  }
  else {
    puVar3 = _calloc(IVar2 + 1,1);
    if (puVar3 != (undefined1 *)0x0) {
      IVar1 = objc_stub::getCString_maxLength_encoding_(self_00,puVar3,IVar2 + 1,4);
      if ((IVar1 & 1) != 0) {
        local_58.iov_base = puVar3;
        local_58.iov_len = IVar2;
        _writev(2,&local_58,1);
      }
      _free(puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

