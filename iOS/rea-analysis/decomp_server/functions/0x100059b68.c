// rea decompile_all
// name: FUN_100059b68
// address: 0x100059b68
// body: available
// range: 0x100059b68-0x100059d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100059b68(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __ss11_StringGutsV4growyySiF(0x66);
  __sSS6appendyySSF(0xd000000000000034,0x800000010087e1d0);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x79616c7073696420,0xeb000000003a4449);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3a656e696c6e6f20,0xe800000000000000);
  bVar3 = (param_3 & 1) == 0;
  uVar5 = 0x65757274;
  uVar6 = 0x65736c6166;
  uVar2 = uVar5;
  if (bVar3) {
    uVar2 = uVar6;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x3a65766974636120,0xe800000000000000);
  bVar3 = (param_4 & 1) == 0;
  uVar2 = uVar5;
  if (bVar3) {
    uVar2 = uVar6;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x666c65536e616320,0xed00003a6c616548);
  bVar3 = (param_5 & 1) == 0;
  if (bVar3) {
    uVar5 = uVar6;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

