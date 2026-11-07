// rea decompile_all
// name: FUN_10034ca78
// address: 0x10034ca78
// body: available
// range: 0x10034ca78-0x10034cb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034cb58 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10034ca78(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = param_1;
  _SecPolicyCreateBasicX509();
  local_40 = 0;
  _SecTrustCreateWithCertificates(param_1,uVar1,&local_40);
  lVar3 = local_40;
  if (local_40 != 0) {
    if ((int)param_1 == 0) {
      uVar2 = 0xb;
      __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xb,0,0);
      if ((uVar2 & 1) == 0) {
        _SecTrustCopyPublicKey(lVar3);
      }
      else {
        _SecTrustCopyKey();
      }
    }
    else {
      lVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return lVar3;
}

