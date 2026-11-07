// rea decompile_all
// name: FUN_100521584
// address: 0x100521584
// body: available
// range: 0x100521584-0x1005216ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100521694 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100521584(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar4 = param_3;
  uVar5 = param_4;
  FUN_1001a2c70();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10052169c);
    (*pcVar3)();
  }
  lVar6 = *(long *)(lVar8 + 0x18);
  if ((lVar6 < lVar1) || ((param_5 & 1) == 0)) {
    if ((lVar6 < lVar1) || ((param_5 & 1) != 0)) {
      FUN_10054c0fc(lVar1,param_5 & 1);
      uVar7 = param_4;
      FUN_1001a2c70();
      lVar4 = param_3;
      if (((uint)uVar5 & 1) != ((uint)uVar7 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005216ac);
        (*pcVar3)();
      }
    }
    else {
      FUN_10054afb4();
    }
  }
  if ((uVar5 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 0x10);
    *puVar2 = param_1;
    puVar2[1] = param_2;
    return;
  }
  FUN_1000602e0();
  _swift_bridgeObjectRetain(param_4);
  return;
}

