// rea decompile_all
// name: _TtC14UURemoteServer22ClipboardBaseOperation::setExecuting:
// address: 0x1001459cc
// body: available
// range: 0x1001459cc-0x1001459f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001459f0 to 0x100145a28 FUN_100145a28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

void _TtC14UURemoteServer22ClipboardBaseOperation::setExecuting_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100145a28(param_1,param_2,param_3,0x7475636578457369,0xeb00000000676e69,&_isExecuting);
  return;
}

