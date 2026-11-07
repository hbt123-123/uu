// rea decompile_all
// name: FUN_10052be8c
// address: 0x10052be8c
// body: available
// range: 0x10052be8c-0x10052bf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10052bef4 to 0x10052badc FUN_10052badc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052be8c(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  lVar3 = (long)param_1;
  if (param_1 < 0) {
    uVar4 = *unaff_x20;
    uVar1 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar4;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_100506f84(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar4 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_100506f84(uVar4,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x2d;
    *unaff_x20 = uVar4;
    lVar3 = -lVar3;
  }
  FUN_10052badc(lVar3);
  return;
}

