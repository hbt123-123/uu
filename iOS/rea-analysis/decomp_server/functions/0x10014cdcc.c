// rea decompile_all
// name: FUN_10014cdcc
// address: 0x10014cdcc
// body: available
// range: 0x10014cdcc-0x10014d0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014cdcc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x52);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x1000000000000030,0x8000000100892c50);
  _swift_beginAccess(param_2 + 0x10,&local_68,0,0);
  lVar3 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
LAB_10014ceb0:
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    _swift_weakLoadStrong();
    if (lVar3 == 0) {
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      lVar4 = *(long *)(lVar3 + 0x88);
      _swift_retain(lVar4);
      _swift_release(lVar3);
      if (lVar4 == 0) goto LAB_10014ceb0;
      uVar5 = *(undefined8 *)(lVar4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
      uVar2 = ((undefined8 *)(lVar4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(lVar4);
    }
  }
  puVar1 = &DAT_100a75b50;
  local_80 = uVar5;
  uStack_78 = uVar2;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_50,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0xe582b1e681a6e82d,0xae003a8fb0e5a7a4);
  _swift_beginAccess(param_2 + 0x10,&local_80,0,0);
  lVar3 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    lVar3 = lVar3 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    _swift_weakLoadStrong();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x88);
      _swift_retain(lVar4);
      _swift_release(lVar3);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)
                 (lVar4 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
        _swift_release(lVar4);
        local_90 = 0;
        goto LAB_10014cfa8;
      }
    }
  }
  uVar5 = 0;
  local_90 = 1;
LAB_10014cfa8:
  puVar1 = &DAT_100a7a2e0;
  local_98 = uVar5;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_98,&local_50,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe58d89e593bde52d,0xae003abba7e78f81);
  _swift_beginAccess(param_2 + 0x10,&local_98,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_2;
    FUN_100149dec();
  }
  local_a0 = param_2 == 0;
  local_a8 = lVar3;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_a8,&local_50,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

