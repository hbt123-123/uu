// rea decompile_all
// name: FUN_100042258
// address: 0x100042258
// body: available
// range: 0x100042258-0x1000424d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100042258(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  byte in_stack_00000010;
  
  __ss11_StringGutsV4growyySiF(0x87);
  __sSS6appendyySSF(0xd00000000000002d,0x800000010087cb10);
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x7473657571657220,0xeb000000003a4449);
  uVar6 = *(ulong *)(param_3 + 0xb8) >> 0x3c;
  uVar2 = 0;
  if (uVar6 < 0xf) {
    uVar2 = *(undefined8 *)(param_3 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar1 = *(ulong *)(param_3 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar2,uVar1);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0xd000000000000016,0x8000000100877a00);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0xd000000000000015,0x800000010087cb40);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x4965636976656420,0xea00000000003a64);
  __sSS6appendyySSF(in_stack_00000000,in_stack_00000008);
  __sSS6appendyySSF(0x7369737341736920,0xee003a65636e6174);
  bVar4 = (in_stack_00000010 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar4) {
    uVar2 = 0x65736c6166;
  }
  uVar3 = 0xe400000000000000;
  if (bVar4) {
    uVar3 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

