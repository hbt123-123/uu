// rea decompile_all
// name: FUN_1000ca924
// address: 0x1000ca924
// body: available
// range: 0x1000ca924-0x1000ca9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ca924(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x39);
  local_40 = local_58;
  uStack_38 = uStack_50;
  __sSS6appendyySSF(0xd000000000000037,0x8000000100885aa0);
  param_2 = param_2 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
  _swift_beginAccess(param_2,&local_58,0,0);
  local_60 = *(undefined8 *)(param_2 + 8);
  uVar1 = 0;
  FUN_100005c50(0);
  __sSS10describingSSx_tclufC(&local_60,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

