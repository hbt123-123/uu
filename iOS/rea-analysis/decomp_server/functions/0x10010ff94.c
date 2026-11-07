// rea decompile_all
// name: FUN_10010ff94
// address: 0x10010ff94
// body: available
// range: 0x10010ff94-0x10011004f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10010ff94(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_40 = (undefined1 *)0x0;
  local_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1a);
  _swift_bridgeObjectRelease(local_38);
  local_40 = &DAT_d000000000000018;
  local_38 = 0x800000010088c570;
  puVar1 = &DAT_100a78cc8;
  local_48 = param_2;
  FUN_100004bb4(&DAT_100a78cc8,&DAT_10080da50);
  __sSS10describingSSx_tclufC(&local_48,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = local_38;
  return;
}

