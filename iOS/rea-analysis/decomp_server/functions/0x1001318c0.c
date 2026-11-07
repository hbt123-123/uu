// rea decompile_all
// name: FUN_1001318c0
// address: 0x1001318c0
// body: available
// range: 0x1001318c0-0x100131a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001318c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  __ss11_StringGutsV4growyySiF(0x13);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((*(ulong *)(param_2 + 0x18) >> 0x3d & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 0x10) & 0xffffffffffff;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x18) >> 0x38 & 0xf;
  }
  uVar1 = 0x65736c6166;
  if (uVar4 != 0) {
    uVar1 = 0x65757274;
  }
  uVar2 = 0xe500000000000000;
  if (uVar4 != 0) {
    uVar2 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x3d74726f70202c,0xe700000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3d74736f48736168,0xe800000000000000);
  _swift_bridgeObjectRelease(0xe800000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0x1000000000000046;
  param_1[1] = 0x800000010088f980;
  return;
}

