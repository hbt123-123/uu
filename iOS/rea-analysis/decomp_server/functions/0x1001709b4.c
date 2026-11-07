// rea decompile_all
// name: FUN_1001709b4
// address: 0x1001709b4
// body: available
// range: 0x1001709b4-0x100170c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001709b4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  local_78 = 0;
  uStack_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x3b);
  local_60 = local_78;
  uStack_58 = uStack_70;
  __sSS6appendyySSF(0x1000000000000025,0x8000000100896870);
  lVar5 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar3 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar3 + 0x14);
    _swift_release(lVar3);
  }
  local_78._0_5_ = CONCAT14(lVar3 == 0,uVar7);
  puVar2 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_60,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3a8b9ee5bbb1e72d,0xa800000000000000);
  lVar3 = param_2 + lVar5;
  _swift_weakLoadStrong();
  if (lVar3 == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = *(undefined1 *)(lVar3 + 0x164);
    _swift_release();
  }
  local_78 = CONCAT71(local_78._1_7_,uVar4);
  puVar2 = &DAT_100a7b318;
  FUN_100004bb4(&DAT_100a7b318,&DAT_10080f8b8);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_60,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3ab6bbe48796e62d,0xa800000000000000);
  param_2 = param_2 + lVar5;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar5);
    _swift_release(param_2);
    lVar3 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
    if (lVar5 != 0) {
      _swift_beginAccess(lVar5 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,&local_78,0
                         ,0);
      FUN_10007f314(lVar5 + lVar3,puVar6,&DAT_100a766c8,&DAT_10080b1d0);
      _swift_release(lVar5);
      goto LAB_100170be8;
    }
  }
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar6,1,1,lVar3);
LAB_100170be8:
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (puVar6,&local_60,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  FUN_100040bb4(puVar6,&DAT_100a766c8,&DAT_10080b1d0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

