// rea decompile_all
// name: FUN_1003a68b8
// address: 0x1003a68b8
// body: available
// range: 0x1003a68b8-0x1003a69eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003a696c to 0x1003a7158 FUN_1003a7158 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1003a69d4 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a68b8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_1001a2c70(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a69dc);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar4) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar4) || ((param_4 & 1) != 0)) {
      FUN_1003adec0(lVar4,param_4 & 1);
      lVar2 = param_2;
      uVar6 = param_3;
      FUN_1001a2c70(param_2);
      if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003a69ec);
        (*pcVar1)();
      }
      lVar4 = *unaff_x20;
      goto joined_r0x0001003a69a4;
    }
    FUN_1003ad53c();
  }
  lVar4 = *unaff_x20;
joined_r0x0001003a69a4:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    FUN_1003c5f68();
    FUN_1003a7158(param_1,lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2);
    return;
  }
  FUN_1003ad2e4(lVar2,param_2,param_3,param_1);
  _swift_bridgeObjectRetain(param_3);
  return;
}

