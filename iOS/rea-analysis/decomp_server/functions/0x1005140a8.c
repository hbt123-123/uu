// rea decompile_all
// name: FUN_1005140a8
// address: 0x1005140a8
// body: available
// range: 0x1005140a8-0x1005141b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005141b0 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005140a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  lVar3 = *(long *)(lVar8 + 0x40);
  lVar5 = *unaff_x20;
  lVar6 = lVar5;
  _swift_bridgeObjectRetain();
  __sSa8endIndexSivg();
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  lVar6 = 0;
  lVar7 = *(long *)(param_2 + 0x20);
  pcVar9 = *(code **)(lVar7 + 0x50);
  do {
    __sSayxSicig(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar6,lVar5,lVar4);
    lVar1 = lVar6 + 1;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1005141b8);
      (*pcVar9)();
    }
    (*pcVar9)(param_1,lVar4,lVar7);
    (**(code **)(lVar8 + 8))(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar4);
    lVar2 = lVar5;
    __sSa8endIndexSivg(lVar5,lVar4);
    lVar6 = lVar6 + 1;
  } while (lVar1 != lVar2);
  _swift_bridgeObjectRelease(lVar5);
  return;
}

