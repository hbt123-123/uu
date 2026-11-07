// rea decompile_all
// name: FUN_10020a51c
// address: 0x10020a51c
// body: available
// range: 0x10020a51c-0x10020a66b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020a51c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  __ss11_StringGutsV4growyySiF(0x72);
  __sSS6appendyySSF(0x1000000000000050,0x80000001008a36b0);
  uVar4 = *(ulong *)(param_2 + 0x78) >> 0x3c;
  uVar1 = 0;
  if (uVar4 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0x70);
  }
  uVar2 = 0xc000000000000000;
  if (uVar4 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0x78);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x6e556b736174202c,0xef3d444965757169);
  __sSS6appendyySSF(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
  __sSS6appendyySSF(0x7265646c6f66202c,0xed00003d656d614e);
  __sSS6appendyySSF(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

