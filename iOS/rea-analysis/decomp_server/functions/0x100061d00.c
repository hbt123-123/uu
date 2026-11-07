// rea decompile_all
// name: FUN_100061d00
// address: 0x100061d00
// body: available
// range: 0x100061d00-0x100061e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100061dac to 0x100082350 FUN_100082350 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100061e04 to 0x1000603e4 FUN_1000603e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061d00(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  thunk_FUN_1001a2c34(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100061e0c);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar4) || ((param_3 & 1) == 0)) {
    if ((lVar5 < lVar4) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_100069d20();
      uVar2 = param_2;
      thunk_FUN_1001a2c34(param_2);
      if (((uint)uVar3 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100061e1c);
        (*pcVar1)();
      }
      lVar4 = *unaff_x20;
      goto joined_r0x000100061de0;
    }
    FUN_100064b10();
  }
  lVar4 = *unaff_x20;
joined_r0x000100061de0:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    FUN_1000e49dc();
    FUN_100082350(param_1,lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2);
    return;
  }
  FUN_1000603e4(uVar2,param_2,param_1);
  return;
}

