// rea decompile_all
// name: FUN_1000b1530
// address: 0x1000b1530
// body: available
// range: 0x1000b1530-0x1000b1643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b1530(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_60 = 0;
  local_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x2c);
  _swift_bridgeObjectRelease(local_58);
  local_40 = 0x1000000000000020;
  uStack_38 = 0x8000000100881fa0;
  local_60 = CONCAT71(local_60._1_7_,param_2);
  puVar1 = &DAT_100a76f18;
  FUN_100004bb4(&DAT_100a76f18,&DAT_10080bbb0);
  __sSS10describingSSx_tclufC(&local_60,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x3d64497265737520,0xe800000000000000);
  FUN_1000b489c(param_3,&local_60);
  puVar1 = &DAT_100a766e0;
  FUN_100004bb4(&DAT_100a766e0,&DAT_10080bdb0);
  __sSS10describingSSx_tclufC(&local_60,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

