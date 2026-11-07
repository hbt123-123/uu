// rea decompile_all
// name: _TtC14UURemoteServer22StreamerConnectSession::.cxx_destruct
// address: 0x1000c9338
// body: available
// range: 0x1000c9338-0x1000c946f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c946c to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14UURemoteServer22StreamerConnectSession::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + _peerState));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___pbDistributor));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___jsonDistributor));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___appDataHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___simpleActionHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___channelEchoHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___launchAppHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___systemMetricsHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___inputEventHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___rpcRequestHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___qosStatsHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___terminalHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___fileTransferHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___portMappingHandler));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___pbRpcManager));
  _swift_release(*(undefined8 *)(param_1 + wakeUpActivity));
  _swift_release(*(undefined8 *)(param_1 + controllerAbility));
  return;
}

