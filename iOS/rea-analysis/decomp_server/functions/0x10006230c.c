// rea decompile_all
// name: FUN_10006230c
// address: 0x10006230c
// body: available
// range: 0x10006230c-0x100062447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100062430 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006230c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100062438);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar7 + 0x18);
  if ((lVar5 < lVar4) || ((param_4 & 1) == 0)) {
    if ((lVar5 < lVar4) || ((param_4 & 1) != 0)) {
      FUN_10006ac80(lVar4,param_4 & 1);
      lVar2 = param_2;
      uVar6 = param_3;
      FUN_1001a2c70(param_2);
      if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100062448);
        (*pcVar1)();
      }
      lVar4 = *unaff_x20;
      goto joined_r0x000100062400;
    }
    FUN_1000653d8();
  }
  lVar4 = *unaff_x20;
joined_r0x000100062400:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x0001000623c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2,param_1,lVar4);
    return;
  }
  FUN_100060884(lVar2,param_2,param_3,param_1);
  _swift_bridgeObjectRetain(param_3);
  return;
}

