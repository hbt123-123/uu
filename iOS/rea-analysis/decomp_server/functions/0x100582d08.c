// rea decompile_all
// name: FUN_100582d08
// address: 0x100582d08
// body: available
// range: 0x100582d08-0x100582e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100582e14 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100582d08(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  pvVar3 = (void *)*param_1;
  uVar5 = *(undefined8 *)((long)pvVar3 + 0x48);
  lVar4 = *(long *)((long)pvVar3 + 0x50);
  if ((param_2 & 1) == 0) {
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)((long)pvVar3 + 0x50);
      uVar2 = 0;
      FUN_1005a84e4(0);
      _swift_allocObject();
      FUN_100595f48(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x80,(long)pvVar3 + 0x30,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    uVar1 = *(ulong *)(lVar4 + 0x18);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *(long *)(lVar4 + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar6 = *(long *)((long)pvVar3 + 0x50);
      uVar2 = 0;
      FUN_1005a84e4(0);
      _swift_allocObject();
      FUN_100595f48(lVar4,uVar2);
      *(long *)(lVar6 + 0x18) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x80,(long)pvVar3 + 0x18,1,0);
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    *(undefined8 *)(lVar4 + 0x80) = uVar5;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)((long)pvVar3 + 0x48);
  }
  _swift_bridgeObjectRelease(uVar2);
  _free(pvVar3);
  return;
}

