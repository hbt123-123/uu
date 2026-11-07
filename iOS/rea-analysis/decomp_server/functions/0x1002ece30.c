// rea decompile_all
// name: FUN_1002ece30
// address: 0x1002ece30
// body: available
// range: 0x1002ece30-0x1002ecf53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002ecf2c to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1002ece30(undefined4 param_1,ulong param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar4 = param_2;
  uVar5 = param_2;
  FUN_100280258();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ecf34);
    (*pcVar3)();
  }
  lVar6 = *(long *)(lVar8 + 0x18);
  if ((lVar6 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar6 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1002ebf34(lVar1);
      uVar4 = param_2;
      FUN_100280258();
      if (((uint)uVar5 & 1) != (param_3 & 1)) {
        FUN_10004003c(0,&DAT_100a82760,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ecf54);
        (*pcVar3)();
      }
    }
    else {
      FUN_1002eb6d8();
    }
  }
  if ((uVar5 & 1) != 0) {
    pbVar2 = (byte *)(*(long *)(*unaff_x20 + 0x38) + uVar4 * 2);
    *pbVar2 = (byte)param_1 & 1;
    pbVar2[1] = (byte)((uint)param_1 >> 8) & 1;
    return uVar4;
  }
  FUN_1002eb4c8();
  return param_2;
}

