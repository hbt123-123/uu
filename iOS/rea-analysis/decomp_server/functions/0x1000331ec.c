// rea decompile_all
// name: FUN_1000331ec
// address: 0x1000331ec
// body: available
// range: 0x1000331ec-0x1000333df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000331ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_68;
  byte local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3c);
  __sSS6appendyySSF(0xd000000000000012,0x8000000100879d50);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a656c646e616820,0xe800000000000000);
  local_68 = (undefined4)param_4;
  local_64 = (byte)((ulong)param_4 >> 0x20) & 1;
  puVar1 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  puVar2 = puVar1;
  __sSS10describingSSx_tclufC(&local_68,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496e656572637320,0xea00000000003a64);
  local_68 = (undefined4)param_5;
  local_64 = (byte)((ulong)param_5 >> 0x20) & 1;
  puVar2 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __sSS10describingSSx_tclufC(&local_68,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3a6b6361727420,0xe700000000000000);
  local_68 = (undefined4)param_6;
  local_64 = (byte)((ulong)param_6 >> 0x20) & 1;
  __sSS10describingSSx_tclufC(&local_68,puVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  uVar3 = 0xe700000000000000;
  __sSS6appendyySSF(0x3a657461747320,0xe700000000000000);
  FUN_100015370();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

