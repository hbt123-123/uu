// rea decompile_all
// name: FUN_100060e34
// address: 0x100060e34
// body: available
// range: 0x100060e34-0x100060f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100060f1c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060e34(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar2 = param_4;
  uVar4 = param_2;
  thunk_FUN_1001a2c34();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100060f88);
    (*pcVar1)();
  }
  lVar5 = *(long *)(lVar9 + 0x18);
  if ((lVar5 < lVar6) || ((param_5 & 1) == 0)) {
    if ((lVar5 < lVar6) || ((param_5 & 1) != 0)) {
      param_5 = param_5 & 1;
      FUN_100065d7c(lVar6);
      uVar2 = param_4;
      thunk_FUN_1001a2c34();
      if (((uint)uVar4 & 1) != (param_5 & 1)) {
        __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                  (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100060f9c);
        (*pcVar1)();
      }
    }
    else {
      FUN_100062938();
    }
  }
  lVar6 = *unaff_x20;
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x18);
    uVar3 = puVar7[2];
    *puVar7 = param_1;
    *(int *)(puVar7 + 1) = (int)param_2;
    puVar7[2] = param_3;
    _swift_release(uVar3);
    return;
  }
  lVar5 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(int *)(*(long *)(lVar6 + 0x30) + uVar2 * 4) = (int)param_4;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x18);
  *puVar7 = param_1;
  *(int *)(puVar7 + 1) = (int)param_2;
  puVar7[2] = param_3;
  if (!SCARRY8(*(long *)(lVar6 + 0x10),1)) {
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100060f8c);
  (*pcVar1)();
}

