// rea decompile_all
// name: FUN_1001ea854
// address: 0x1001ea854
// body: available
// range: 0x1001ea854-0x1001ea9bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ea854(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001fa3cc);
  lVar1 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*pcVar3)(unaff_x20 + lVar1,lVar2);
  (*pcVar3)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::createdAt,lVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::shell + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::name + 8));
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput),
                ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onOutput))[1]);
  FUN_10007ed2c(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit),
                ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::onExit))[1]);
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::readSource));
  _swift_unknownObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::processSource));
  FUN_100006cdc(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::scrollbackBuffer)
                ,((undefined8 *)
                 (unaff_x20 + _TtC14UURemoteServer15TerminalSession::scrollbackBuffer))[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController))
  ;
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName + 8)
            );
  return;
}

