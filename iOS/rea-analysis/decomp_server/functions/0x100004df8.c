// rea decompile_all
// name: FUN_100004df8
// address: 0x100004df8
// body: available
// range: 0x100004df8-0x100004e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100004df8(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100401b14(0);
  if (DAT_100a73bb0 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  uVar2 = DAT_100b36258;
  uVar3 = DAT_100b36260;
  FUN_1003fbee4();
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(0x656d61657274532f,0xe900000000000072);
  _swift_bridgeObjectRelease(uVar3);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}

