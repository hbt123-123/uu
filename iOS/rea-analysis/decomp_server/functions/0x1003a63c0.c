// rea decompile_all
// name: FUN_1003a63c0
// address: 0x1003a63c0
// body: available
// range: 0x1003a63c0-0x1003a6463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003a63c0(void)

{
  ID self;
  undefined8 uVar1;
  
  if (DAT_100a89190 != -1) {
    _swift_once(&DAT_100a89190,FUN_1003a62ac);
  }
  self = DAT_100a8b188;
  _objc_msgSend(DAT_100a8b188,"lock");
  if (DAT_100a89198 != -1) {
    _swift_once(&DAT_100a89198,FUN_1003a62dc);
  }
  uVar1 = DAT_100a8b190;
  _swift_retain(DAT_100a8b190);
  _objc_msgSend(self,"unlock");
  return uVar1;
}

