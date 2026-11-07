// rea decompile_all
// name: FUN_10020d4e0
// address: 0x10020d4e0
// body: available
// range: 0x10020d4e0-0x10020d653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020d4e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x34);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008a3360);
  puVar1 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_64._0_1_ = param_4;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_64,&local_60,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a3f50);
  local_64 = CONCAT31(local_64._1_3_,param_5);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_64,&local_60,&DAT_10099e260,puVar2,puVar1);
  __sSS6appendyySSF(0x746c75736572202c,0xe90000000000003d);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_64 = param_6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

