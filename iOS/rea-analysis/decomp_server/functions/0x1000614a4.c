// rea decompile_all
// name: FUN_1000614a4
// address: 0x1000614a4
// body: available
// range: 0x1000614a4-0x1000615db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100061554 to 0x10007f3d4 FUN_10007f3d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000614a4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [40];
  
  lVar6 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1001a2e24(param_2);
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000615cc);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar6 + 0x18);
  if ((lVar4 < lVar7) || ((param_3 & 1) == 0)) {
    if ((lVar4 < lVar7) || ((param_3 & 1) != 0)) {
      param_3 = param_3 & 1;
      FUN_100068030();
      uVar2 = param_2;
      FUN_1001a2e24(param_2);
      if (((uint)uVar3 & 1) != (param_3 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss11AnyHashableVN_100995ad0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000615dc);
        (*pcVar1)();
      }
      lVar7 = *unaff_x20;
      goto joined_r0x000100061588;
    }
    FUN_100063c20();
  }
  lVar7 = *unaff_x20;
joined_r0x000100061588:
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x38) + uVar2 * 0x20;
    FUN_10003f094(lVar7);
    FUN_10007f3d4(param_1,lVar7);
    return;
  }
  FUN_100082260(param_2,auStack_78);
  FUN_10006054c(uVar2,auStack_78,param_1,lVar7);
  return;
}

