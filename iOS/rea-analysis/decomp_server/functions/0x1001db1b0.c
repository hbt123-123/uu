// rea decompile_all
// name: FUN_1001db1b0
// address: 0x1001db1b0
// body: available
// range: 0x1001db1b0-0x1001db2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001db1b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x54);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x1000000000000047,0x800000010089e5b0);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar1 = PTR___sSiN_100995968;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_68 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x746e756f638cbcef,0xa90000000000003d);
  _swift_beginAccess(param_3 + _TtC14UURemoteServer15TerminalManager::sessions,&local_68,0,0);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

