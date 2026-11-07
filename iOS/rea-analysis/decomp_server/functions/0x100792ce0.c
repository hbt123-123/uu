// rea decompile_all
// name: SentryScope::clear
// address: 0x100792ce0
// body: available
// range: 0x100792ce0-0x100792edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100792edc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryScope::clear(SentryScope *this)

{
  ID in_x0;
  undefined8 uVar1;
  ID self;
  ID IVar2;
  long lVar3;
  ID IVar4;
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  objc_stub::FUN_1007e6a80(in_x0);
  uVar1 = *(undefined8 *)(in_x0 + 0x20);
  _objc_sync_enter();
  objc_stub::removeAllObjects(*(ID *)(in_x0 + 0x20));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x28);
  _objc_sync_enter();
  objc_stub::removeAllObjects(*(ID *)(in_x0 + 0x28));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x90);
  _objc_sync_enter();
  objc_stub::removeAllObjects(*(ID *)(in_x0 + 0x90));
  _objc_sync_exit(uVar1);
  uVar1 = *(undefined8 *)(in_x0 + 0x38);
  _objc_sync_enter();
  objc_stub::removeAllObjects(*(ID *)(in_x0 + 0x38));
  _objc_sync_exit(uVar1);
  objc_stub::FUN_1007e6a60(in_x0);
  uVar1 = *(undefined8 *)(in_x0 + 8);
  _objc_sync_enter();
  *(undefined8 *)(in_x0 + 0x10) = 0;
  _objc_sync_exit(uVar1);
  objc_stub::FUN_1007f5580(in_x0,0);
  objc_stub::FUN_1007f2700(in_x0,0);
  objc_stub::FUN_1007f2be0(in_x0,0);
  objc_stub::FUN_1007f3960(in_x0,0);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  self = objc_stub::FUN_1007eec60(in_x0);
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10);
  if (IVar2 != 0) {
    lVar3 = *local_100;
    do {
      IVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(self);
        }
        objc_stub::FUN_1007e6a20(*(ID *)(lStack_108 + IVar4 * 8));
        IVar4 = IVar4 + 1;
      } while (IVar2 != IVar4);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_110,auStack_c8,0x10)
      ;
    } while (IVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

