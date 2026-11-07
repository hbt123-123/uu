// rea decompile_all
// name: SASecurityPolicy::setPinnedCertificates:
// address: 0x100718e5c
// body: available
// range: 0x100718e5c-0x10071903f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10071903c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SASecurityPolicy::setPinnedCertificates_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID self;
  ID IVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  *(ID *)(param_1 + 0x18) = param_3;
  IVar1 = pinnedCertificates(param_1);
  if (IVar1 == 0) {
    setPinnedPublicKeys_(param_1,0);
  }
  else {
    IVar1 = pinnedCertificates(param_1);
    IVar1 = objc_stub::count(IVar1);
    IVar1 = NSMutableSet::setWithCapacity_((ID)&_OBJC_CLASS___NSMutableSet,IVar1);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    self = pinnedCertificates(param_1);
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_d8,0x10);
    if (IVar2 != 0) {
      lVar4 = *local_120;
      do {
        IVar5 = 0;
        do {
          if (*local_120 != lVar4) {
            _objc_enumerationMutation(self);
          }
          local_e0 = 0;
          lVar3 = 0;
          _SecCertificateCreateWithData(0,*(undefined8 *)(lStack_128 + IVar5 * 8));
          if (lVar3 != 0) {
            FUN_100735084();
          }
          IVar5 = IVar5 + 1;
        } while (IVar2 != IVar5);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self,&local_130,auStack_d8,0x10);
      } while (IVar2 != 0);
    }
    IVar1 = NSSet::setWithSet_((ID)&_OBJC_CLASS___NSSet,IVar1);
    setPinnedPublicKeys_(param_1,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

