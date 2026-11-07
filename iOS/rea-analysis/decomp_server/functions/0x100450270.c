// rea decompile_all
// name: FUN_100450270
// address: 0x100450270
// body: available
// range: 0x100450270-0x10045032f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045032c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100450270(undefined8 *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  pvVar3 = (void *)*param_1;
  uVar6 = *(undefined8 *)((long)pvVar3 + 0x48);
  lVar4 = *(long *)((long)pvVar3 + 0x58);
  uVar1 = *(undefined1 *)((long)pvVar3 + 0x50);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar5 = *(long *)(lVar4 + 0x10);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar7 = *(long *)((long)pvVar3 + 0x58);
    FUN_10045e65c(0);
    _swift_allocObject();
    FUN_10045e67c();
    _swift_release(lVar5);
    *(long *)(lVar7 + 0x10) = lVar4;
  }
  lVar5 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x30;
  }
  _swift_beginAccess(lVar4 + 0xd0,(long)pvVar3 + lVar5,1,0);
  *(undefined8 *)(lVar4 + 0xd0) = uVar6;
  *(undefined1 *)(lVar4 + 0xd8) = uVar1;
  _free(pvVar3);
  return;
}

