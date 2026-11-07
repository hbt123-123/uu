// rea decompile_all
// name: FUN_10015cc28
// address: 0x10015cc28
// body: available
// range: 0x10015cc28-0x10015ce9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015cc28(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x8a);
  __sSS6appendyySSF(0x100000000000003d,0x80000001008949b0);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar3 = PTR___ss6UInt32VN_100995dc0;
  local_68._0_4_ = *(undefined4 *)(param_2 + 0x14);
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x497473696c8cbcef,0xad00003d7865646e);
  local_68._0_4_ = *(undefined4 *)(param_3 + 4);
  puVar1 = puVar2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x7367616c668cbcef,0xa90000000000003d);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_3 + 8));
  puVar1 = puVar2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x664f736f708cbcef,0xad00003d74657366);
  local_68 = *(undefined8 *)(param_2 + 0x158);
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x1000000000000010,0x80000001008949f0);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_2 + 0x160));
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x616f6c70758cbcef,0xae003d6570795464);
  local_68 = CONCAT71(local_68._1_7_,*(undefined1 *)(param_2 + 0x164));
  puVar3 = &DAT_1009a0240;
  __sSS10describingSSx_tclufC(&local_68,&DAT_1009a0240);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

