// rea decompile_all
// name: FUN_100265af4
// address: 0x100265af4
// body: available
// range: 0x100265af4-0x100265bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100265bc0 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100265be4 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100265af4(undefined8 param_1,ulong param_2,uint param_3)

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
  FUN_10026ae5c();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar1 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100265bec);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar8 + 0x18);
  if ((lVar5 < lVar1) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_1002710f0(lVar1);
      uVar3 = param_2;
      FUN_10026ae5c();
      if (((uint)uVar4 & 1) != (param_3 & 1)) {
        FUN_100261540(0);
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100265bfc);
        (*pcVar2)();
      }
    }
    else {
      FUN_100270a20();
    }
  }
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + uVar3 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar6);
    return;
  }
  FUN_100264b78();
  _swift_retain(param_2);
  return;
}

