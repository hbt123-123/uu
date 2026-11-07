// rea decompile_all
// name: FUN_10006c84c
// address: 0x10006c84c
// body: available
// range: 0x10006c84c-0x10006c8af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006c8ac to 0x100075c10 FUN_100075c10 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006c84c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  FUN_100001428(unaff_x22 + 0x38);
  FUN_100001428(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_errorRetain(uVar2);
  FUN_100075c10(uVar2,uVar3,*(undefined8 *)(lVar1 + 8));
  return;
}

