// rea decompile_all
// name: SentryCrash::reportIDs
// address: 0x10078e774
// body: available
// range: 0x10078e774-0x10078e867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078e860 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10078e864 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryCrash::reportIDs(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ID self;
  ID IVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_1009954a0;
  iVar1 = thunk_FUN_10074bfdc(param_1,param_2);
  puVar4 = (undefined8 *)((long)alStack_50 - ((ulong)iVar1 * 8 + 0xf & 0xffffffff0));
  puVar2 = puVar4;
  thunk_FUN_10074c0bc();
  self = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,(long)(int)puVar2);
  IVar3 = self;
  if (0 < (int)puVar2) {
    uVar5 = (ulong)puVar2 & 0xffffffff;
    do {
      IVar3 = objc_stub::numberWithLongLong_((ID)&_OBJC_CLASS___NSNumber,*puVar4);
      objc_stub::addObject_(self,IVar3);
      IVar3 = 0;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == alStack_50[1]) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar3);
}

