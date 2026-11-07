// rea decompile_all
// name: FUN_1001f0704
// address: 0x1001f0704
// body: available
// range: 0x1001f0704-0x1001f090f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001f0704(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  
  lVar2 = *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController);
  if (lVar2 != 0) {
    lVar3 = ((undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
      _swift_retain(lVar2);
      _swift_bridgeObjectRetain(lVar3);
      lVar1 = lVar3;
      FUN_1000a4a08(uVar4,lVar3,param_1,param_2,param_3 & 1);
      _swift_bridgeObjectRelease(lVar3);
      if (lVar1 != 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb4bc(FUN_1001fa47c,&stack0xffffffffffffff80,0xd000000000000095,0x80000001008a00c0,
                      0xd00000000000002f,0x80000001008a0d10,0x335,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb4bc(FUN_1001fa488,auStack_90,0xd000000000000095,0x80000001008a00c0,
                      0xd00000000000002f,0x80000001008a0d10,0x336,0);
        _swift_bridgeObjectRelease(lVar1);
        _swift_release(lVar2);
        return 0;
      }
      _swift_release(lVar2);
      return 1;
    }
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(FUN_1001fa474);
  return 0;
}

