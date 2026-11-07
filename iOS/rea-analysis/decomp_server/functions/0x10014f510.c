// rea decompile_all
// name: FUN_10014f510
// address: 0x10014f510
// body: available
// range: 0x10014f510-0x10014f87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014f510(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong local_90 [3];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x67);
  local_60 = local_78;
  uStack_58 = local_70;
  __sSS6appendyySSF(0x1000000000000025,0x8000000100892d30);
  lVar2 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar10 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar10 == 0) {
LAB_10014f5d4:
    uVar12 = 0;
    uVar9 = 0;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x88);
    _swift_retain(lVar11);
    _swift_release(lVar10);
    if (lVar11 == 0) goto LAB_10014f5d4;
    uVar12 = *(undefined8 *)(lVar11 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
    uVar9 = ((undefined8 *)(lVar11 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
    _swift_bridgeObjectRetain(uVar9);
    _swift_release(lVar11);
  }
  puVar4 = &DAT_100a75b50;
  local_78 = uVar12;
  local_70 = uVar9;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_60,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar9);
  __sSS6appendyySSF(0xe582b1e681a6e82d,0xae003a8fb0e5a7a4);
  param_2 = param_2 + lVar2;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar10 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar10);
    _swift_release(param_2);
    if (lVar10 != 0) {
      uVar12 = *(undefined8 *)
                (lVar10 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release(lVar10);
      uVar5 = 0;
      goto LAB_10014f698;
    }
  }
  uVar12 = 0;
  uVar5 = 1;
LAB_10014f698:
  local_70 = CONCAT71(local_70._1_7_,uVar5);
  puVar4 = &DAT_100a7a2e0;
  local_78 = uVar12;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_60,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe982b1e6b7afe82d,0xae003aa6bae5bf95);
  _swift_beginAccess(param_3,&local_78,0,0);
  local_90[0] = CONCAT44(local_90[0]._4_4_,*(undefined4 *)(param_3 + 0x18));
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0xe59e9be594bfe82d,0xae003a8fb0e5a7a4);
  lVar10 = *(long *)(param_4 + 8);
  uVar1 = (uint)(*(ulong *)(param_4 + 0x10) >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar7 = *(ulong *)(param_4 + 0x10) >> 0x30 & 0xff;
    }
    else {
      iVar6 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar6,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10014f87c);
        (*pcVar3)();
      }
      uVar7 = (ulong)(iVar6 - (int)lVar10);
    }
  }
  else {
    uVar7 = 0;
    if (uVar8 == 2) {
      uVar7 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10014f798);
        (*pcVar3)();
      }
    }
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_90[0] = uVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0xe582b1e6b7afe82d,0xae003abba7e78f81);
  _swift_beginAccess(param_3,local_90,0,0);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

