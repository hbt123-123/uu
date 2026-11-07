// rea decompile_all
// name: FUN_1001f1858
// address: 0x1001f1858
// body: available
// range: 0x1001f1858-0x1001f19a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1858(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x48);
  __sSS6appendyySSF(0x1000000000000031,0x80000001008a1a50);
  local_54 = *(undefined4 *)(param_2 + 0x10);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3d6769738cbcef,0xa700000000000000);
  __sSS6appendyySSF(param_3,param_4);
  uVar1 = 0x3d657479628cbcef;
  __sSS6appendyySSF(0x3d657479628cbcef,0xaa00000000007830);
  local_54 = CONCAT31(local_54._1_3_,param_5);
  FUN_1001fa7c0();
  uVar3 = 0x10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&local_54,0x10,0,PTR___ss5UInt8VN_100995d40,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

