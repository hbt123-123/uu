// rea decompile_all
// name: FUN_1003923d8
// address: 0x1003923d8
// body: available
// range: 0x1003923d8-0x1003924fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003924f8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003923d8(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ID IVar4;
  ID local_60;
  undefined1 local_55 [29];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = param_1[1];
  if (*param_1 == 0) {
    FUN_10037cfb0(*(undefined8 *)(lVar1 + 0x10));
  }
  else {
    FUN_10037c9d0();
  }
  while( true ) {
    IVar4 = *(ID *)(lVar1 + 0x10);
    if (*(long *)(IVar4 + 0x10) == *(long *)(IVar4 + 8)) break;
    local_55[0] = 0;
    FUN_10037d19c(IVar4,local_55);
    local_60 = IVar4;
    IVar4 = objc_stub::length(IVar4);
    if (IVar4 != 0) {
      FUN_10037cfb8(*(undefined8 *)(lVar1 + 0x10),local_55);
      lVar3 = param_2;
      FUN_100385ff8(param_2,&local_60);
      if (lVar3 == 0) {
        iVar2 = (int)local_55;
        FUN_10037e574();
        if (iVar2 != 0) {
          FUN_10038de18(param_2,&local_60,&local_60,local_55);
        }
      }
      else {
        iVar2 = (int)local_55;
        FUN_10037e574();
        if (iVar2 == 0) {
          FUN_10038e318(param_2,lVar3);
        }
        else {
          FUN_10037e484(lVar3 + 0x18,local_55);
        }
      }
    }
    FUN_10037e53c(local_55);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

