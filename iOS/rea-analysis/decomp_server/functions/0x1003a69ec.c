// rea decompile_all
// name: FUN_1003a69ec
// address: 0x1003a69ec
// body: available
// range: 0x1003a69ec-0x1003a6afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a6ac0 to 0x10007f3d4 FUN_10007f3d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003a6ae4 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1003a69ec(ulong param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_2;
  FUN_1003e7e5c(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003a6aec);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1003ae4d8(lVar1);
      uVar3 = param_2;
      FUN_1003e7e5c(param_2);
      if (((uint)uVar4 & 1) != (param_3 & 1)) {
        FUN_10039845c(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003a6afc);
        (*pcVar2)();
      }
    }
    else {
      FUN_1003ad944();
    }
  }
  if ((uVar4 & 1) != 0) {
    lVar1 = *(long *)(*unaff_x20 + 0x38) + uVar3 * 0x20;
    FUN_10003f094(lVar1);
    FUN_10007f3d4(param_1,lVar1);
    return param_1;
  }
  FUN_1003ad36c();
  return param_2;
}

