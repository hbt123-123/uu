// rea decompile_all
// name: FUN_10004258c
// address: 0x10004258c
// body: available
// range: 0x10004258c-0x1000427a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004258c(undefined8 *param_1,undefined4 param_2,long param_3,undefined4 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x60);
  __sSS6appendyySSF(0xd000000000000037,0x800000010087cad0);
  local_68 = CONCAT44(local_68._4_4_,param_2);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x7473657571657220,0xeb000000003a4449);
  uVar5 = *(ulong *)(param_3 + 0xb8) >> 0x3c;
  uVar1 = 0;
  if (uVar5 < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
  }
  uVar2 = 0;
  if (uVar5 < 0xf) {
    uVar2 = *(undefined8 *)(param_3 + 0xb0);
  }
  uVar3 = 0xc000000000000000;
  if (uVar5 < 0xf) {
    uVar3 = *(ulong *)(param_3 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar2,uVar3);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_68 = uVar1;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x79616c7073696420,0xeb000000003a4449);
  if (*(long *)(param_5 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_5 + 0x20);
  }
  local_68._0_5_ = CONCAT14(*(long *)(param_5 + 0x10) == 0,uVar6);
  puVar4 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __sSS10describingSSx_tclufC(&local_68,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6f43726f72726520,0xeb000000003a6564);
  local_68 = CONCAT44(local_68._4_4_,param_4);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

