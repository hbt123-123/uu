// rea decompile_all
// name: FUN_10044f57c
// address: 0x10044f57c
// body: available
// range: 0x10044f57c-0x10044f633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10044f630 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044f57c(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  pvVar2 = (void *)*param_1;
  uVar6 = *(undefined8 *)((long)pvVar2 + 0x48);
  lVar3 = *(long *)((long)pvVar2 + 0x50);
  uVar1 = *(ulong *)(lVar3 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)((long)pvVar2 + 0x50);
    FUN_10045e65c(0);
    _swift_allocObject();
    FUN_10045e67c();
    _swift_release(lVar4);
    *(long *)(lVar5 + 0x10) = lVar3;
  }
  lVar4 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar4 = 0x30;
  }
  _swift_beginAccess(lVar3 + 0x88,(long)pvVar2 + lVar4,1,0);
  *(undefined8 *)(lVar3 + 0x88) = uVar6;
  _free(pvVar2);
  return;
}

