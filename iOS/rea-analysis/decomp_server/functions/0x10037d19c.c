// rea decompile_all
// name: FUN_10037d19c
// address: 0x10037d19c
// body: available
// range: 0x10037d19c-0x10037d29b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d23c to 0x1007de914 _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037d298 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

ID FUN_10037d19c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  *(int *)(param_2 + 8) = (int)*(undefined8 *)(param_1 + 0x10);
  uVar1 = param_1;
  FUN_10037ceb0(param_1,1);
  if ((int)uVar1 < 0) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037b83c();
    puVar2 = PTR_typeinfo_1009965b0;
    puVar5 = PTR__length_error_1009950e8;
  }
  else {
    if ((uVar1 & 0xffffffff) <= (ulong)(*(long *)(param_1 + 8) - *(long *)(param_1 + 0x10))) {
      uVar8 = uVar1 & 0xffffffff;
      FUN_10037ca4c(param_1,uVar8,0);
      *(short *)(param_2 + 2) = (short)uVar1;
      lVar6 = *(long *)(param_1 + 0x28);
      lVar7 = *(long *)(param_1 + 0x38);
      puVar2 = &_OBJC_CLASS___NSString;
      _objc_alloc();
      IVar3 = objc_stub::initWithBytes_length_encoding_((ID)puVar2,lVar6 + lVar7,uVar8,4);
      *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + uVar8;
      *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + uVar8;
      return IVar3;
    }
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037c1b8();
    puVar2 = PTR_typeinfo_1009965b8;
    puVar5 = PTR__out_of_range_1009950f0;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar4,puVar2,puVar5);
}

