// rea decompile_all
// name: FUN_10014fc94
// address: 0x10014fc94
// body: available
// range: 0x10014fc94-0x10014ff27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014fc94(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_80 [6];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  local_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x57);
  local_50 = local_68;
  uStack_48 = local_60;
  __sSS6appendyySSF(0x1000000000000025,0x8000000100892de0);
  lVar1 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar4 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar4 + 0x90);
    _swift_release(lVar4);
  }
  local_68._0_5_ = CONCAT14(lVar4 == 0,uVar6);
  puVar2 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_50,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe582b1e681a6e82d,0xae003a8fb0e5a7a4);
  param_2 = param_2 + lVar1;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar4);
    _swift_release(param_2);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release(lVar4);
      uVar3 = 0;
      goto LAB_10014fde0;
    }
  }
  uVar5 = 0;
  uVar3 = 1;
LAB_10014fde0:
  local_60 = CONCAT71(local_60._1_7_,uVar3);
  puVar2 = &DAT_100a7a2e0;
  local_68 = uVar5;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_50,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe982b1e6b7afe82d,0xae003aa6bae5bf95);
  _swift_beginAccess(param_3,&local_68,0,0);
  local_80[0] = *(undefined4 *)(param_3 + 0x18);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0xe582b1e6b7afe82d,0xae003abba7e78f81);
  _swift_beginAccess(param_3,local_80,0,0);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

