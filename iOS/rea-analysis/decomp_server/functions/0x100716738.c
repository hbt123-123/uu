// rea decompile_all
// name: FUN_100716738
// address: 0x100716738
// body: available
// range: 0x100716738-0x10071694b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100716948 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100716738(long param_1)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  long lVar4;
  ID IVar5;
  undefined *local_150;
  undefined8 local_148;
  code *local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::isRegisteredCustomStorePlugin(*(ID *)(param_1 + 0x20));
  if ((IVar1 & 1) == 0) {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    IVar1 = objc_stub::plugins(*(ID *)(param_1 + 0x20));
    IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_120,auStack_d8,0x10);
    if (IVar2 != 0) {
      lVar4 = *local_110;
      do {
        IVar5 = 0;
        do {
          if (*local_110 != lVar4) {
            _objc_enumerationMutation(IVar1);
          }
          self = *(ID *)(lStack_118 + IVar5 * 8);
          IVar3 = objc_stub::isMatchedWithPlugin_key_
                            (*(ID *)(param_1 + 0x20),self,*(undefined8 *)(param_1 + 0x28));
          if ((IVar3 & 1) != 0) {
            IVar1 = objc_stub::storeKeyWithPlugin_key_
                              (*(ID *)(param_1 + 0x20),self,*(undefined8 *)(param_1 + 0x28));
            objc_stub::setObject_forKey_(self,*(undefined8 *)(param_1 + 0x30),IVar1);
            goto LAB_100716904;
          }
          IVar5 = IVar5 + 1;
        } while (IVar2 != IVar5);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (IVar1,&local_120,auStack_d8,0x10);
      } while (IVar2 != 0);
    }
  }
  IVar1 = objc_stub::plugins(*(ID *)(param_1 + 0x20));
  IVar1 = objc_stub::firstObject(IVar1);
  IVar2 = objc_stub::storeKeyWithPlugin_key_
                    (*(ID *)(param_1 + 0x20),IVar1,*(undefined8 *)(param_1 + 0x28));
  objc_stub::setObject_forKey_(IVar1,*(undefined8 *)(param_1 + 0x30),IVar2);
  IVar1 = objc_stub::plugins(*(ID *)(param_1 + 0x20));
  local_150 = PTR___NSConcreteStackBlock_100995490;
  local_148 = 0xc2000000;
  local_140 = FUN_10071694c;
  puStack_138 = &DAT_1009e7c18;
  local_130 = *(undefined8 *)(param_1 + 0x20);
  local_128 = *(undefined8 *)(param_1 + 0x28);
  objc_stub::enumerateObjectsUsingBlock_(IVar1,&local_150);
LAB_100716904:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

