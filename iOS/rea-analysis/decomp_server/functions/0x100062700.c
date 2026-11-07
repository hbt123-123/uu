// rea decompile_all
// name: FUN_100062700
// address: 0x100062700
// body: available
// range: 0x100062700-0x10006281b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000627e0 to 0x10008229c FUN_10008229c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100062804 to 0x1000604c8 FUN_1000604c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100062700(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar4 = (uint)param_3;
  lVar7 = *unaff_x20;
  uVar3 = param_2 & 0xffffffff000000ff;
  FUN_1001a2d90(uVar3);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)param_3 & 1;
  lVar1 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10006280c);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar1) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_4 & 1) != 0)) {
      FUN_10006b794(lVar1,param_4 & 1);
      uVar3 = param_2 & 0xffffffff000000ff;
      FUN_1001a2d90(uVar3);
      if (((uint)param_3 & 1) != (uVar4 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1009a51c0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10006281c);
        (*pcVar2)();
      }
    }
    else {
      FUN_100065a28();
    }
  }
  if ((param_3 & 1) != 0) {
    FUN_10008229c(param_1,*(long *)(*unaff_x20 + 0x38) + uVar3 * 0xa0);
    return;
  }
  FUN_1000604c8();
  return;
}

