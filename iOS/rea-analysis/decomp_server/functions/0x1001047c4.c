// rea decompile_all
// name: FUN_1001047c4
// address: 0x1001047c4
// body: available
// range: 0x1001047c4-0x100104a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001047c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __ss11_StringGutsV4growyySiF(0x58);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088ab80);
  __sSS6appendyySSF(0x100000000000001a,0x800000010088b380);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xb0a7e78d90e5202c,0xaa0000000000203a);
  __sSS6appendyySSF(param_5,param_6);
  __sSS6appendyySSF(0xa7bae782b1e5202c,0xaa0000000000203a);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  uVar4 = 0xab0000000028203a;
  __sSS6appendyySSF(0xb982e79f8ee5202c,0xab0000000028203a);
  __sSd11descriptionSSvg(param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = 0xe200000000000000;
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __sSd11descriptionSSvg(param_3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x736e4f7369202c29,0xef203a6e65657263);
  bVar2 = (param_8 & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

