// rea decompile_all
// name: SentryCrashDoctor::isMemoryCorruption:
// address: 0x10075b66c
// body: available
// range: 0x10075b66c-0x10075b9d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075b9d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isMemoryCorruption_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  bool bVar5;
  ID IVar6;
  ID IVar7;
  long lVar8;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = objc_stub::FUN_1007e7600(param_1);
  IVar2 = objc_stub::objectForKey_(IVar1,&cf_notable_addresses);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  IVar2 = objc_stub::objectEnumerator(IVar2);
  IVar3 = objc_stub::countByEnumeratingWithState_objects_count_(IVar2,&local_1b0,auStack_f0,0x10);
  if (IVar3 != 0) {
    lVar8 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar8) {
          _objc_enumerationMutation(IVar2);
        }
        IVar7 = *(ID *)(lStack_1a8 + IVar6 * 8);
        IVar4 = objc_stub::objectForKey_(IVar7,&cf_type);
        IVar4 = objc_stub::isEqualToString_(IVar4,&cf_string);
        if ((int)IVar4 != 0) {
          IVar4 = objc_stub::objectForKey_(IVar7,&cf_value);
          IVar7 = objc_stub::rangeOfString_(IVar4,&cf_autoreleasepoolpage);
          if (((IVar7 != 0x7fffffffffffffff) &&
              (IVar7 = objc_stub::rangeOfString_(IVar4,&cf_corrupted), IVar7 != 0x7fffffffffffffff))
             || (IVar4 = objc_stub::rangeOfString_(IVar4,&cf_incorrectchecksumforfreedobject),
                IVar4 != 0x7fffffffffffffff)) goto LAB_10075b970;
        }
        IVar6 = IVar6 + 1;
      } while (IVar3 != IVar6);
      IVar3 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar2,&local_1b0,auStack_f0,0x10);
    } while (IVar3 != 0);
  }
  IVar1 = objc_stub::FUN_1007e5be0(param_1,IVar1);
  lStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&local_1f0,auStack_170,0x10);
  if (IVar2 != 0) {
    lVar8 = *local_1e0;
    do {
      IVar3 = 0;
      do {
        if (*local_1e0 != lVar8) {
          _objc_enumerationMutation(IVar1);
        }
        IVar4 = *(ID *)(lStack_1e8 + IVar3 * 8);
        IVar6 = objc_stub::objectForKey_(IVar4,&cf_object_name);
        IVar4 = objc_stub::objectForKey_(IVar4,&cf_symbol_name);
        IVar7 = objc_stub::isEqualToString_(IVar4,&cf_objc_autoreleasePoolPush);
        if ((((IVar7 & 1) != 0) ||
            (IVar7 = objc_stub::isEqualToString_(IVar4,&cf_free_list_checksum_botch),
            (IVar7 & 1) != 0)) ||
           ((IVar7 = objc_stub::isEqualToString_(IVar4,&cf_szone_malloc_should_clear),
            (IVar7 & 1) != 0 ||
            ((IVar4 = objc_stub::isEqualToString_(IVar4,&cf_lookUpMethod), (int)IVar4 != 0 &&
             (IVar6 = objc_stub::isEqualToString_(IVar6,&cf_libobjc_A_dylib), (IVar6 & 1) != 0))))))
        goto LAB_10075b970;
        IVar3 = IVar3 + 1;
      } while (IVar2 != IVar3);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (IVar1,&local_1f0,auStack_170,0x10);
    } while (IVar2 != 0);
  }
  bVar5 = 0;
LAB_10075b974:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar5;
LAB_10075b970:
  bVar5 = 1;
  goto LAB_10075b974;
}

