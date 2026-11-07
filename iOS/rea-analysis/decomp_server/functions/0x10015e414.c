// rea decompile_all
// name: FUN_10015e414
// address: 0x10015e414
// body: available
// range: 0x10015e414-0x10015e513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015e414(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_x3;
  
  __ss11_StringGutsV4growyySiF(0x51);
  __sSS6appendyySSF(0x100000000000002a,0x8000000100895400);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x1000000000000023,0x8000000100895430);
  uVar1 = 0;
  __s10Foundation3URLVMa(0);
  __sSa11descriptionSSvg(in_x3,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

