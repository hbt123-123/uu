// rea decompile_all
// name: _TtC14UURemoteServer16ClipboardHandler::.cxx_destruct
// address: 0x1001bc744
// body: available
// range: 0x1001bc744-0x1001bc7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001bc7a0 to 0x1007df514 _swift_unknownObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer16ClipboardHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectWeakDestroy(param_1 + ref);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + dragDropSessionID + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + remoteDownloadPath + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___clipboardManager));
  return;
}

