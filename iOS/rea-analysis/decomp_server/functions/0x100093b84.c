// rea decompile_all
// name: FUN_100093b84
// address: 0x100093b84
// body: available
// range: 0x100093b84-0x100093c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100093b84(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x1d);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar3 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  puVar1 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar2 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar3 + 0x38) = puVar1;
  *(undefined **)(puVar3 + 0x40) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uVar4 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66322e25,0xe400000000000000,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x424d,0xe200000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0xd000000000000024;
  param_1[1] = 0x800000010087fe10;
  return;
}

