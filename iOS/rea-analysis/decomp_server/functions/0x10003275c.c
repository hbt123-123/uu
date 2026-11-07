// rea decompile_all
// name: FUN_10003275c
// address: 0x10003275c
// body: available
// range: 0x10003275c-0x100032907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003275c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_58;
  byte local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x58);
  __sSS6appendyySSF(0xd000000000000037,0x80000001008792f0);
  puVar1 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_58 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x7272656665727020,0xeb000000003a6465);
  local_58 = (undefined4)param_3;
  local_54 = (byte)((ulong)param_3 >> 0x20) & 1;
  puVar1 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  puVar2 = puVar1;
  __sSS10describingSSx_tclufC(&local_58,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3a6b6361727420,0xe700000000000000);
  local_58 = (undefined4)param_4;
  local_54 = (byte)((ulong)param_4 >> 0x20) & 1;
  __sSS10describingSSx_tclufC(&local_58,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  uVar3 = 0xe700000000000000;
  __sSS6appendyySSF(0x3a657461747320,0xe700000000000000);
  FUN_100015370();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

