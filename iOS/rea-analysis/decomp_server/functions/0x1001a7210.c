// rea decompile_all
// name: FUN_1001a7210
// address: 0x1001a7210
// body: available
// range: 0x1001a7210-0x1001a72f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a7210(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  __ss11_StringGutsV4growyySiF(0x4b);
  __sSS6appendyySSF(0x1000000000000040,0x800000010089a730);
  __sSS6appendyySSF(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
  __sSS6appendyySSF(0x3d65707974202c,0xe700000000000000);
  FUN_10003f030(param_3,*(undefined8 *)(param_3 + 0x18));
  _swift_getDynamicType();
  uVar1 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

