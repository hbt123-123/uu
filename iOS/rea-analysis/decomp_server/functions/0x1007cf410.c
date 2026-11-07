// rea decompile_all
// name: FUN_1007cf410
// address: 0x1007cf410
// body: available
// range: 0x1007cf410-0x1007cf513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007cf50c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1007cf410(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar3 = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007cf514);
      (*pcVar1)();
    }
    uVar4 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
      }
      else {
        uVar2 = uVar4;
        FUN_1007d0738(uVar4,param_1,&PTR__OBJC_CLASS___MXDiagnosticPayload_100a66308,&DAT_100abd310)
        ;
      }
      uVar4 = uVar4 + 1;
      local_68 = uVar2;
      FUN_1007cf514(&local_68);
    } while (uVar3 != uVar4);
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}

