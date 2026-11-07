// rea decompile_all
// name: FUN_100104ae0
// address: 0x100104ae0
// body: available
// range: 0x100104ae0-0x100104ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100104ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __ss11_StringGutsV4growyySiF(0x42);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088ab80);
  __sSS6appendyySSF(0x1000000000000014,0x800000010088afd0);
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0xb0a7e78d90e5202c,0xaa0000000000203a);
  __sSS6appendyySSF(param_5,param_6);
  __sSS6appendyySSF(0xa7bae782b1e5202c,0xaa0000000000203a);
  puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  uVar2 = 0xab0000000028203a;
  __sSS6appendyySSF(0xb982e79f8ee5202c,0xab0000000028203a);
  __sSd11descriptionSSvg(param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = 0xe200000000000000;
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __sSd11descriptionSSvg(param_3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

