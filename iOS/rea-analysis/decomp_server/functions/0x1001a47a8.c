// rea decompile_all
// name: _TtC14UURemoteServer14AppListManager::.cxx_destruct
// address: 0x1001a47a8
// body: available
// range: 0x1001a47a8-0x1001a4873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001a4870 to 0x10019ae7c FUN_10019ae7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer14AppListManager::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + nextUpdateRemoteApps));
  _swift_release(*(undefined8 *)(param_1 + remoteDeviceApps));
  puVar1 = (undefined8 *)(param_1 + specialAppMap);
  FUN_1001a73e4(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                (ulong)*(uint3 *)(puVar1 + 6));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + systemDirs));
  _swift_release(*(undefined8 *)(param_1 + appIconHandler));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + whiteList));
  puVar1 = (undefined8 *)(param_1 + whiteListUrl);
  FUN_10019ae7c(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4]);
  return;
}

