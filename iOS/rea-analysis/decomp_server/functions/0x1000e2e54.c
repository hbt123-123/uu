// rea decompile_all
// name: FUN_1000e2e54
// address: 0x1000e2e54
// body: available
// range: 0x1000e2e54-0x1000e2f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e2f3c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e2e54(long param_1)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 local_50;
  long local_48;
  
  lVar1 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::handle;
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(ID *)(param_1 +
             _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile::
             handle) != 0) {
    local_50 = 0;
    IVar2 = _objc_msgSend(*(ID *)(param_1 +
                                 _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                 ::handle),"closeAndReturnError:",&local_50);
    if ((int)IVar2 == 0) {
      uVar3 = local_50;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_50);
      _swift_willThrow(0);
      _swift_errorRelease(uVar3);
    }
  }
  *(undefined8 *)(param_1 + lVar1) = 0;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

