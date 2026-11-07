// rea decompile_all
// name: FUN_10038eedc
// address: 0x10038eedc
// body: available
// range: 0x10038eedc-0x10038f1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038ef78 to 0x1003822c8 FUN_1003822c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10038f1d8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10038eedc(long param_1,ID param_2)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
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
  undefined8 local_170;
  undefined8 *local_168;
  long local_160;
  undefined1 auStack_158 [128];
  undefined1 auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if ((*(byte *)(param_1 + 0x30) >> 5 & 1) == 0) {
    IVar1 = objc_stub::count(param_2);
    if (IVar1 == 0) {
      param_1 = 1;
    }
    else {
      IVar1 = objc_stub::count(param_2);
      if (IVar1 == 1) {
        IVar1 = objc_stub::objectAtIndexedSubscript_(param_2,0);
        if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
          FUN_1003822c8(param_1,IVar1);
          return param_1;
        }
        goto LAB_10038f1d8;
      }
      local_160 = *(long *)(param_1 + 0xb8);
      if (local_160 != 0) {
        FUN_100392994();
      }
      local_168 = *(undefined8 **)(param_1 + 0xd0);
      if ((local_168 != (undefined8 *)0x0) && (*(char *)((long)local_168 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_168,*(undefined4 *)(local_168 + 1));
      }
      FUN_10038774c(param_1);
      if (*(long *)(param_1 + 0xb0) == 0) {
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_2,&local_1f0,auStack_158,0x10);
        lVar3 = 0;
        if (IVar1 != 0) {
          lVar4 = *local_1e0;
          do {
            IVar5 = 0;
            do {
              if (*local_1e0 != lVar4) {
                _objc_enumerationMutation(param_2);
              }
              local_170 = *(undefined8 *)(lStack_1e8 + IVar5 * 8);
              lVar2 = *(long *)(param_1 + 0x68);
              FUN_100385ff8(lVar2,&local_170);
              if (lVar2 != 0) {
                FUN_10038e370(*(undefined8 *)(param_1 + 0x68));
                lVar3 = lVar3 + 1;
              }
              IVar5 = IVar5 + 1;
            } while (IVar1 != IVar5);
            IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                              (param_2,&local_1f0,auStack_158,0x10);
          } while (IVar1 != 0);
        }
      }
      else {
        lStack_1a8 = 0;
        local_1b0 = 0;
        uStack_198 = 0;
        local_1a0 = (long *)0x0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_2,&local_1b0,auStack_d8,0x10);
        lVar3 = 0;
        if (IVar1 != 0) {
          lVar4 = *local_1a0;
          do {
            IVar5 = 0;
            do {
              if (*local_1a0 != lVar4) {
                _objc_enumerationMutation(param_2);
              }
              local_170 = *(undefined8 *)(lStack_1a8 + IVar5 * 8);
              lVar2 = *(long *)(param_1 + 0x70);
              FUN_100385ff8(lVar2,&local_170);
              if (lVar2 != 0) {
                FUN_10038e318(*(undefined8 *)(param_1 + 0x70));
                lVar3 = lVar3 + 1;
              }
              IVar5 = IVar5 + 1;
            } while (IVar1 != IVar5);
            IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                              (param_2,&local_1b0,auStack_d8,0x10);
          } while (IVar1 != 0);
        }
      }
      if (lVar3 == 0) {
        param_1 = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x99) = 0;
        FUN_100386f70(param_1,0,0);
      }
      FUN_100385fb0(&local_168);
      FUN_100385098(&local_160);
    }
  }
  else {
    FUN_100386734(2,"MMKV_OSX.cpp","removeValuesForKeys",0x137,"[%s] file readonly");
    param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return param_1;
  }
LAB_10038f1d8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

