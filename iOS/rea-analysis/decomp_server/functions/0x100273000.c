// rea decompile_all
// name: FUN_100273000
// address: 0x100273000
// body: available
// range: 0x100273000-0x10027307f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100273000(void)

{
  long *plVar1;
  long unaff_x20;
  long local_28;
  
  local_28 = *(long *)(unaff_x20 + 0x10);
  plVar1 = &local_28;
  __sSX8containsySb5BoundQzFTj();
  if (((ulong)plVar1 & 1) == 0) {
    FUN_100262084();
    _swift_allocError(&DAT_1009a8e98,plVar1,0,0);
    *plVar1 = unaff_x20;
    plVar1[1] = 0;
    *(undefined1 *)(plVar1 + 2) = 5;
    _swift_willThrow();
  }
  _swift_retain();
  return;
}

