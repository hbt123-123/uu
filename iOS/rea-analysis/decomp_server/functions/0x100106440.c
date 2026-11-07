// rea decompile_all
// name: FUN_100106440
// address: 0x100106440
// body: available
// range: 0x100106440-0x1001064af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001064ac to 0x1007df4fc _swift_task_switch (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100106440(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1001064b0;
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x188));
    pcVar1 = FUN_100106a30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}

