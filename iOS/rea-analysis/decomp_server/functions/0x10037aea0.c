// rea decompile_all
// name: MMKV::registerHandler:
// address: 0x10037aea0
// body: available
// range: 0x10037aea0-0x10037af5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void MMKV::registerHandler_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long local_28;
  
  local_28 = DAT_100ad1390;
  if (DAT_100ad1390 != 0) {
    FUN_100392994();
  }
  DAT_100ad1398 = param_3;
  IVar1 = objc_stub::respondsToSelector_(param_3,"mmkvLogWithLevel:file:line:func:message:");
  if ((int)IVar1 != 0) {
    FUN_100384878(FUN_100378cb4);
  }
  IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVCRCCheckFail:");
  if (((IVar1 & 1) != 0) ||
     (IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVFileLengthError:"),
     (int)IVar1 != 0)) {
    FUN_1003847f4(FUN_100378cd8);
  }
  IVar1 = objc_stub::respondsToSelector_(DAT_100ad1398,"onMMKVContentChange:");
  if ((int)IVar1 != 0) {
    FUN_100380130(FUN_100378d7c);
  }
  FUN_10037b92c(&local_28);
  return;
}

