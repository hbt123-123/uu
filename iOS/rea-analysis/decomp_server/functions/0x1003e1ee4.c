// rea decompile_all
// name: FUN_1003e1ee4
// address: 0x1003e1ee4
// body: available
// range: 0x1003e1ee4-0x1003e1fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e1ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  __ss11_StringGutsV4growyySiF(0x1f);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar1 = 0;
  __s10Foundation8URLErrorVMa();
  puVar2 = &DAT_100a8ce58;
  FUN_100005c90(&DAT_100a8ce58,PTR___s10Foundation8URLErrorVMa_1009962f0,
                PTR___s10Foundation8URLErrorVAA21_BridgedStoredNSErrorAAMc_1009962e8);
  __s10Foundation21_BridgedStoredNSErrorPAAE9errorCodeSivg(uVar1,puVar2);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x100000000000001c;
  param_1[1] = 0x80000001008b4c80;
  return;
}

