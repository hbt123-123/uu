// rea decompile_all
// name: FUN_1001d86f0
// address: 0x1001d86f0
// body: available
// range: 0x1001d86f0-0x1001d879f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d86f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x46);
  __sSS6appendyySSF(0x1000000000000044,0x800000010089fba0);
  _swift_getErrorValue(param_2,auStack_48,local_60);
  uVar1 = local_50;
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_58,local_50);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

