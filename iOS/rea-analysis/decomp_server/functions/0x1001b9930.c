// rea decompile_all
// name: FUN_1001b9930
// address: 0x1001b9930
// body: available
// range: 0x1001b9930-0x1001b99bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b99b8 to 0x1001b9d8c FUN_1001b9d8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001001b995c) */

void FUN_1001b9930(void)

{
  long *plVar1;
  long unaff_x22;
  
  __sScTss5NeverORszABRs_rlE17checkCancellationyyKFZ();
  plVar1 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001b99bc;
  FUN_1001b9d8c(plVar1,unaff_x22 + 0x10,*(undefined1 *)(unaff_x22 + 0xc0));
  return;
}

