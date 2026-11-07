// rea decompile_all
// name: FUN_10002759c
// address: 0x10002759c
// body: available
// range: 0x10002759c-0x1000277d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002759c(undefined8 *param_1,undefined4 param_2,undefined1 param_3,long param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x67);
  __sSS6appendyySSF(&DAT_d000000000000028,0x800000010087a390);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_64 = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x6c656e6e61686320,0xe90000000000003a);
  local_64 = CONCAT31(local_64._1_3_,param_3);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_64,&local_60,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000011,0x800000010087a3c0);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar1 = PTR___ss5Int32VN_100995c78;
  local_64 = *(undefined4 *)(param_4 + 8);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496e656572637320,0xed00003a736f666e);
  puVar2 = PTR___sSSN_1009957f8;
  puVar3 = PTR___sSSN_1009957f8;
  __sSa11descriptionSSvg(param_5,PTR___sSSN_1009957f8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3a74657220,0xe500000000000000);
  local_64 = param_6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  uVar5 = 0xe700000000000000;
  __sSS6appendyySSF(0x3a657461747320,0xe700000000000000);
  FUN_100015370();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  param_1[3] = puVar2;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

