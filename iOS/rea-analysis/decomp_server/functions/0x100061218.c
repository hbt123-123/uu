// rea decompile_all
// name: FUN_100061218
// address: 0x100061218
// body: available
// range: 0x100061218-0x10006133f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100061328 to 0x100060650 FUN_100060650 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061218(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4,uint param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar3 = param_4;
  uVar4 = param_2;
  thunk_FUN_1001a2c34();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar1 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100061330);
    (*pcVar2)();
  }
  lVar5 = *(long *)(lVar8 + 0x18);
  if ((lVar5 < lVar1) || ((param_5 & 1) == 0)) {
    if ((lVar5 < lVar1) || ((param_5 & 1) != 0)) {
      param_5 = param_5 & 1;
      FUN_100066ac8(lVar1);
      thunk_FUN_1001a2c34();
      lVar3 = param_4;
      if (((uint)uVar4 & 1) != (param_5 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100061340);
        (*pcVar2)();
      }
    }
    else {
      FUN_100063060();
    }
  }
  if ((uVar4 & 1) != 0) {
    puVar6 = (undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar3 * 0x18);
    *puVar6 = param_1;
    *(int *)(puVar6 + 1) = (int)param_2;
    *(int *)((long)puVar6 + 0xc) = (int)(param_2 >> 0x20);
    *(undefined4 *)(puVar6 + 2) = param_3;
    return;
  }
  FUN_100060650();
  return;
}

