// rea decompile_all
// name: FUN_1001c3930
// address: 0x1001c3930
// body: available
// range: 0x1001c3930-0x1001c39f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c39f0 to 0x10009d234 FUN_10009d234 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c3930(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  FUN_100401b14();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  FUN_1003fb48c(FUN_1001c3b18,0,0xd0000000000000a0,0x800000010089cf20,0xd00000000000001a,
                0x800000010089d040,0xbf,0);
  plVar2 = (long *)0x550;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1001c39f4;
  FUN_10009d234(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}

