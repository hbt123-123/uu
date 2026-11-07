// rea decompile_all
// name: FUN_1001d0df0
// address: 0x1001d0df0
// body: available
// range: 0x1001d0df0-0x1001d0f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d0df0(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x42);
  __sSS6appendyySSF(0x1000000000000022,0x800000010089e1c0);
  local_60 = CONCAT44(local_60._4_4_,param_2);
  puVar1 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x3a657079742d,0xe600000000000000);
  local_60 = *(undefined8 *)(param_3 + 0x18);
  local_58 = *(undefined1 *)(param_3 + 0x20);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009c7818,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3a6449656c75722d,0xe800000000000000);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  puVar1 = PTR___ss6UInt64VN_100995e10;
  local_60 = *(undefined8 *)(param_3 + 8);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496d61657274732d,0xea00000000003a64);
  local_60 = *(undefined8 *)(param_3 + 0x10);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

