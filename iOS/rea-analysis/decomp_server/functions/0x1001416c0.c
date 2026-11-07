// rea decompile_all
// name: FUN_1001416c0
// address: 0x1001416c0
// body: available
// range: 0x1001416c0-0x10014184b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001416c0(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x58);
  __sSS6appendyySSF(0x100000000000002a,0x8000000100891600);
  local_58 = CONCAT44(local_58._4_4_,param_2);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x1000000000000011,0x8000000100891690);
  local_58 = *(undefined8 *)
              (param_3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesName
              );
  puVar3 = &DAT_100a7a088;
  FUN_100004bb4(&DAT_100a7a088,&DAT_10080eb50);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_58,&local_50,puVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000017,0x80000001008916b0);
  local_58 = *(undefined8 *)
              (param_3 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userSelectFilesUrl)
  ;
  puVar3 = &DAT_100a7a090;
  FUN_100004bb4(&DAT_100a7a090,&DAT_10080eb58);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_58,&local_50,puVar3,puVar1,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

