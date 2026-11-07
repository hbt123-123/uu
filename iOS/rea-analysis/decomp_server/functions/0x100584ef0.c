// rea decompile_all
// name: FUN_100584ef0
// address: 0x100584ef0
// body: available
// range: 0x100584ef0-0x100584f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100584f94 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100584ef0(undefined8 *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  pvVar4 = (void *)*param_1;
  uVar1 = *(undefined1 *)((long)pvVar4 + 0x50);
  lVar5 = *(long *)((long)pvVar4 + 0x48);
  uVar2 = *(ulong *)(lVar5 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)((long)pvVar4 + 0x48);
    uVar3 = 0;
    FUN_1005a8534(0);
    _swift_allocObject();
    FUN_1005a0a24(lVar5,uVar3);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar6 = 0x30;
  }
  _swift_beginAccess(lVar5 + 0x10,(long)pvVar4 + lVar6,1,0);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
  _free(pvVar4);
  return;
}

