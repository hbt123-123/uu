// rea decompile_all
// name: FUN_1005770a4
// address: 0x1005770a4
// body: available
// range: 0x1005770a4-0x1005771c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005771c0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005770a4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  pvVar3 = (void *)*param_1;
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x48);
  lVar4 = *(long *)((long)pvVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar3 + 0x50);
      FUN_1005a7a70(0);
      _swift_allocObject();
      FUN_1005a7a90();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,(long)pvVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar7 = *(long *)((long)pvVar3 + 0x50);
      FUN_1005a7a70(0);
      _swift_allocObject();
      FUN_1005a7a90();
      _swift_release(lVar6);
      *(long *)(lVar7 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0xa0,(long)pvVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(lVar4 + 0xa0) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)((long)pvVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
  _free(pvVar3);
  return;
}

