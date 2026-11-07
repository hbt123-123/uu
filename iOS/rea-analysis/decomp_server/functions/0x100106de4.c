// rea decompile_all
// name: FUN_100106de4
// address: 0x100106de4
// body: available
// range: 0x100106de4-0x100106f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100106de4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x40);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088ab80);
  __sSS6appendyySSF(0x100000000000001f,0x800000010088acd0);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_58 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  uVar1 = 0x8d89e593bde5202c;
  __sSS6appendyySSF(0x8d89e593bde5202c,0xae00203a68736168);
  local_58 = param_3;
  FUN_10010a2d4();
  puVar2 = PTR___ss6UInt64VN_100995e10;
  uVar3 = 0x10;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&local_58,0x10,0,PTR___ss6UInt64VN_100995e10,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x736168b096e6202c,0xab00000000203a68);
  uVar3 = 0x10;
  local_58 = param_4;
  __sSS_5radix9uppercaseSSx_SiSbtcSzRzlufC(&local_58,0x10,0,puVar2,uVar1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

