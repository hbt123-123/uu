// rea decompile_all
// name: FUN_1002659c8
// address: 0x1002659c8
// body: available
// range: 0x1002659c8-0x100265af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100265ab0 to 0x100263d28 thunk_FUN_10007f3d4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100265adc to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002659c8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar3 = param_2;
  uVar4 = param_3;
  FUN_1001a2c70(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100265ae4);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_4 & 1) != 0)) {
      FUN_100270e3c(lVar1,param_4 & 1);
      uVar6 = param_3;
      FUN_1001a2c70(param_2);
      lVar3 = param_2;
      if (((uint)uVar4 & 1) != ((uint)uVar6 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100265af4);
        (*pcVar2)();
      }
    }
    else {
      FUN_100270880();
    }
  }
  if ((uVar4 & 1) != 0) {
    lVar1 = *(long *)(*unaff_x20 + 0x38) + lVar3 * 0x20;
    FUN_10003f094(lVar1);
    thunk_FUN_10007f3d4(param_1,lVar1);
    return;
  }
  FUN_100264b10();
  _swift_bridgeObjectRetain(param_3);
  return;
}

