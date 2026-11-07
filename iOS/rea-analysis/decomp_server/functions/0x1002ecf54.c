// rea decompile_all
// name: FUN_1002ecf54
// address: 0x1002ecf54
// body: available
// range: 0x1002ecf54-0x1002ed09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ed020 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002ed074 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1002ecf54(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar5 = param_2;
  FUN_100280258();
  lVar3 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar5 & 1;
  lVar4 = lVar3 + uVar6;
  if (SCARRY8(lVar3,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ed07c);
    (*pcVar1)();
  }
  lVar3 = *(long *)(lVar7 + 0x18);
  if ((lVar3 < lVar4) || ((param_3 & 1) == 0)) {
    if ((lVar3 < lVar4) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1002ec1b4(lVar4);
      uVar2 = param_2;
      FUN_100280258();
      if (((uint)uVar5 & 1) != (param_3 & 1)) {
        FUN_10004003c(0,&DAT_100a82760,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ed0a0);
        (*pcVar1)();
      }
    }
    else {
      FUN_1002eb844();
    }
  }
  lVar4 = *unaff_x20;
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(*(long *)(lVar4 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
    _swift_release(uVar5);
    return uVar5;
  }
  lVar3 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002ed080);
  (*pcVar1)();
}

