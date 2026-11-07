// rea decompile_all
// name: FUN_100143bbc
// address: 0x100143bbc
// body: available
// range: 0x100143bbc-0x100143bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143bf0 to 0x1007dce80 _$ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100143bbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
  if (lVar1 != *(long *)(param_2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file) ||
      ((long *)(*param_1 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1] !=
      ((long *)(param_2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1]) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    return lVar1;
  }
  return 1;
}

