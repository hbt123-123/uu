// rea decompile_all
// name: FUN_100488d90
// address: 0x100488d90
// body: available
// range: 0x100488d90-0x100488e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100488e08 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100488d90(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *unaff_x20;
  
  if (*param_1 == *unaff_x20) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar5 = *(ulong *)(unaff_x20 + 8);
    uVar6 = *(ulong *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    FUN_10042af60(uVar5,*(undefined8 *)(param_1 + 8));
    if (((uVar5 & 1) != 0) && (FUN_1000e3c6c(uVar6,uVar4), (uVar6 & 1) != 0)) {
      FUN_1000094a4(uVar7,uVar3,uVar1,uVar2);
      return uVar7;
    }
  }
  return 0;
}

