// rea decompile_all
// name: FUN_100137e54
// address: 0x100137e54
// body: available
// range: 0x100137e54-0x100137f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100137e54(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_58 = 0;
  uStack_50 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x44);
  local_40 = local_58;
  uStack_38 = uStack_50;
  __sSS6appendyySSF(0x1000000000000038,0x8000000100890470);
  lVar1 = _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList,
                     &local_58,0,0);
  local_60 = *(undefined8 *)(*(long *)(param_2 + lVar1) + 0x10);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3a82b1e681a6e82d,0xa800000000000000);
  local_60 = CONCAT35(local_60._5_3_,
                      *(undefined5 *)
                       (param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount));
  puVar2 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_40,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

