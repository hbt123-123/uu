// rea decompile_all
// name: FUN_10024595c
// address: 0x10024595c
// body: available
// range: 0x10024595c-0x100245a87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100245a40 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100245a70 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10024595c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar4 = param_3;
  uVar6 = param_4;
  FUN_1001a2c70();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar1 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100245a78);
    (*pcVar3)();
  }
  lVar7 = *(long *)(lVar9 + 0x18);
  if ((lVar7 < lVar1) || ((param_5 & 1) == 0)) {
    if ((lVar7 < lVar1) || ((param_5 & 1) != 0)) {
      FUN_100245d9c(lVar1,param_5 & 1);
      uVar8 = param_4;
      FUN_1001a2c70();
      lVar4 = param_3;
      if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100245a88);
        (*pcVar3)();
      }
    }
    else {
      FUN_100245a88();
    }
  }
  if ((uVar6 & 1) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 0x10);
    uVar5 = puVar2[1];
    *puVar2 = param_1;
    puVar2[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  FUN_1000602e0();
  _swift_bridgeObjectRetain(param_4);
  return;
}

