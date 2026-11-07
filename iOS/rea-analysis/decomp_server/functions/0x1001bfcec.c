// rea decompile_all
// name: FUN_1001bfcec
// address: 0x1001bfcec
// body: available
// range: 0x1001bfcec-0x1001bfe03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001bfcec(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3c);
  __sSS6appendyySSF(0x1000000000000032,0x800000010089cdf0);
  local_60 = *param_2;
  local_58 = *(undefined1 *)(param_2 + 1);
  puVar1 = &DAT_100a7cfb8;
  FUN_100004bb4(&DAT_100a7cfb8,&DAT_1008119e0);
  puVar2 = puVar1;
  __sSS10describingSSx_tclufC(&local_60,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3d5973626120,0xe600000000000000);
  local_60 = param_2[2];
  local_58 = *(undefined1 *)(param_2 + 3);
  __sSS10describingSSx_tclufC(&local_60,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

