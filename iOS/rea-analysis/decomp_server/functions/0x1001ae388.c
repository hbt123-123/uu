// rea decompile_all
// name: FUN_1001ae388
// address: 0x1001ae388
// body: available
// range: 0x1001ae388-0x1001ae4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001ae3f8) */

undefined1  [16] FUN_1001ae388(void)

{
  ID IVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auStack_60 [16];
  ID local_50;
  char *pcStack_48;
  
  pcVar2 = "ControlledGetEncodeCapability";
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                        "ControlledGetEncodeCapability");
  if (IVar1 == 0) {
    IVar1 = 0;
    pcVar2 = (char *)0xe000000000000000;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  pcVar3 = pcVar2;
  FUN_100378220();
  _swift_bridgeObjectRelease(pcVar2);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_50 = IVar1;
  pcStack_48 = pcVar3;
  FUN_1003fb48c(FUN_1001b1d5c,auStack_60,0xd000000000000095,0x8000000100877f50,0xd000000000000015,
                0x800000010089ab50,0x1b0,0);
  auVar4._8_8_ = pcVar3;
  auVar4._0_8_ = IVar1;
  return auVar4;
}

