// rea decompile_all
// name: FUN_10037d394
// address: 0x10037d394
// body: available
// range: 0x10037d394-0x10037d46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d40c to 0x1007de914 _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037d468 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

ID FUN_10037d394(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  *(int *)(param_2 + 8) = (int)param_1[2];
  plVar2 = param_1;
  FUN_10037c5d4();
  if ((int)plVar2 < 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037b83c();
    puVar3 = PTR_typeinfo_1009965b0;
    puVar6 = PTR__length_error_1009950e8;
  }
  else {
    lVar1 = param_1[2];
    if (((ulong)plVar2 & 0xffffffff) <= (ulong)(param_1[1] - lVar1)) {
      *(short *)(param_2 + 2) = (short)plVar2;
      lVar7 = *param_1;
      puVar3 = &_OBJC_CLASS___NSString;
      _objc_alloc();
      IVar4 = objc_stub::initWithBytes_length_encoding_
                        ((ID)puVar3,lVar7 + lVar1,(ulong)plVar2 & 0xffffffff,4);
      param_1[2] = param_1[2] + ((ulong)plVar2 & 0xffffffff);
      return IVar4;
    }
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10037c1b8();
    puVar3 = PTR_typeinfo_1009965b8;
    puVar6 = PTR__out_of_range_1009950f0;
  }
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar5,puVar3,puVar6);
}

