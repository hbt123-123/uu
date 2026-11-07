// rea decompile_all
// name: FUN_100392bb0
// address: 0x100392bb0
// body: available
// range: 0x100392bb0-0x100392bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100392bcc to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100392bb0(long param_1,void *param_2,size_t param_3)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    if (0xf < param_3) {
      param_3 = 0x10;
    }
    _memcpy((void *)(param_1 + 0x28),param_2,param_3);
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return;
}

