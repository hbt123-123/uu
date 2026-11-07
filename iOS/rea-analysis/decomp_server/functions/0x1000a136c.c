// rea decompile_all
// name: FUN_1000a136c
// address: 0x1000a136c
// body: available
// range: 0x1000a136c-0x1000a13df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000a136c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  _swift_bridgeObjectRetain(param_3);
  puVar1 = &DAT_100a76920;
  FUN_100004bb4(&DAT_100a76920,&DAT_10080b400);
  __sScC6resume9returningyxn_tF(&local_48,puVar1);
  return;
}

