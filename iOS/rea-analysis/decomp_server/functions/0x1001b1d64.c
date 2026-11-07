// rea decompile_all
// name: FUN_1001b1d64
// address: 0x1001b1d64
// body: available
// range: 0x1001b1d64-0x1001b1e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001b1d64(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  
  IVar1 = *(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  IVar1 = _objc_msgSend(IVar1,"ControlledUpdateStreamerConfig:",param_1);
  FUN_100401b14(0);
  local_30 = (undefined4)IVar1;
  FUN_1003fb48c(thunk_FUN_1001b4aac,auStack_40,0xd000000000000095,0x8000000100877f50,
                &DAT_d000000000000018,0x800000010089ab90,0x1b7,0);
  return IVar1;
}

