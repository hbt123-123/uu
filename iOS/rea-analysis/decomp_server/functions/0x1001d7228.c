// rea decompile_all
// name: FUN_1001d7228
// address: 0x1001d7228
// body: available
// range: 0x1001d7228-0x1001d73f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d7228(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  __ss11_StringGutsV4growyySiF(0x58);
  __sSS6appendyySSF(0x1000000000000031,0x800000010089fad0);
  bVar3 = (param_2 & 1) == 0;
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
  __sSS6appendyySSF(0x3d746f6f52736920,0xe800000000000000);
  bVar3 = (param_3 & 1) == 0;
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
  __sSS6appendyySSF(0x656b636f4c736920,0xea00000000003d64);
  bVar3 = (param_4 & 1) == 0;
  if (bVar3) {
    uVar5 = uVar6;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x646f63209286e220,0xaa00000000003d65);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  __sSS6appendyySSF(param_6,param_7);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

