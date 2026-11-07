// rea decompile_all
// name: FUN_1005216ac
// address: 0x1005216ac
// body: available
// range: 0x1005216ac-0x1005217ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100521778 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100521794 to 0x100264b78 FUN_100264b78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005216ac(undefined8 param_1,ulong param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_2;
  FUN_1003618e4();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar1 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10052179c);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar8 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_10054c3a4(lVar1);
      FUN_1003618e4();
      uVar3 = param_2;
      if (((uint)uVar4 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSiN_100995968);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005217ac);
        (*pcVar2)();
      }
    }
    else {
      FUN_10054b118();
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar3 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar6);
    return;
  }
  FUN_100264b78();
  return;
}

