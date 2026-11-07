// rea decompile_all
// name: FUN_100521478
// address: 0x100521478
// body: available
// range: 0x100521478-0x100521583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100521550 to 0x1000d6224 thunk_FUN_1000a0074 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10052156c to 0x10054a72c FUN_10054a72c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100521478(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1003618e4(param_2);
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100521574);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar6 + 0x18);
  if ((lVar4 < lVar7) || ((param_3 & 1) == 0)) {
    if ((lVar4 < lVar7) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_10054be80(lVar7);
      FUN_1003618e4(param_2);
      uVar2 = param_2;
      if (((uint)uVar3 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100521584);
        (*pcVar1)();
      }
    }
    else {
      FUN_10054ae38();
    }
  }
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(*unaff_x20 + 0x38) + uVar2 * 0x28;
    FUN_10003f094(lVar7);
    thunk_FUN_1000a0074(param_1,lVar7);
    return;
  }
  FUN_10054a72c();
  return;
}

