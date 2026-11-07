// rea decompile_all
// name: FUN_1001be308
// address: 0x1001be308
// body: available
// range: 0x1001be308-0x1001be47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001be308(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  __ss11_StringGutsV4growyySiF(0x33);
  __sSS6appendyySSF(0x1000000000000023,0x800000010089caf0);
  uVar6 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  puVar3 = PTR___ss5Int64VN_100995cc0;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x736e6f707365722d,0xec0000003a444965);
  uVar6 = *(ulong *)(param_3 + 0x98) >> 0x3c;
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x90);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_3 + 0x98);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

