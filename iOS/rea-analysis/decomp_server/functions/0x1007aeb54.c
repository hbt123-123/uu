// rea decompile_all
// name: FUN_1007aeb54
// address: 0x1007aeb54
// body: available
// range: 0x1007aeb54-0x1007aebeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007aebb4 to 0x1007ae6e0 FUN_1007ae6e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1007aeb54(ulong *param_1,int param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (((ulong)param_1 & 1) != 0) {
    if (((ulong)param_1 & 0xe) == 6) {
      uVar2 = (long)param_1 >> 8;
    }
    else {
      if (((ulong)param_1 & 0xe) != 0xc) {
        return 0;
      }
      uVar2 = (ulong)param_1 & 0xfffffffffffffff0;
    }
    *param_3 = uVar2;
    return 1;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar2 & 0xffffffff8;
  }
  uVar2 = *(ulong *)((*(ulong *)(uVar2 + 0x20) & 0x7ffffffffff8) + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  puVar3 = *(uint **)(uVar2 + 0x30);
  if ((int)puVar3[1] <= param_2) {
    return 0;
  }
  lVar1 = (long)**(int **)((long)puVar3 + (ulong)*puVar3 * (long)param_2 + 8) + (long)param_1;
  FUN_1007ae6e0(lVar1,param_3,*(undefined4 *)((long)puVar3 + (ulong)*puVar3 * (long)param_2 + 0x24))
  ;
  return lVar1;
}

