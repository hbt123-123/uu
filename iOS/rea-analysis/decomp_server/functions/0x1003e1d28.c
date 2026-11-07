// rea decompile_all
// name: FUN_1003e1d28
// address: 0x1003e1d28
// body: available
// range: 0x1003e1d28-0x1003e1def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e1d28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __ss11_StringGutsV4growyySiF(0x1b);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0;
  __s10Foundation8URLErrorVMa(0);
  puVar2 = &DAT_100a8ce68;
  FUN_100005c90(&DAT_100a8ce68,PTR___s10Foundation8URLErrorVMa_1009962f0,
                PTR___s10Foundation8URLErrorVs5ErrorAAMc_100996300);
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uVar1,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000019;
  param_1[1] = 0x80000001008b4ca0;
  return;
}

