// rea decompile_all
// name: FUN_1001513dc
// address: 0x1001513dc
// body: available
// range: 0x1001513dc-0x100151617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001513dc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x52);
  __sSS6appendyySSF(0x1000000000000030,0x80000001008924f0);
  lVar1 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar5 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar5 == 0) {
LAB_10015149c:
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x88);
    _swift_retain(lVar7);
    _swift_release(lVar5);
    if (lVar7 == 0) goto LAB_10015149c;
    uVar6 = *(undefined8 *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file);
    uVar4 = ((undefined8 *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::file))[1];
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(lVar7);
  }
  puVar2 = &DAT_100a75b50;
  local_70 = uVar6;
  local_68 = uVar4;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xe5b6bbe48796e62d,0xae003a8fb0e5a7a4);
  param_2 = param_2 + lVar1;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar5);
    _swift_release(param_2);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release(lVar5);
      uVar3 = 0;
      goto LAB_100151560;
    }
  }
  uVar6 = 0;
  uVar3 = 1;
LAB_100151560:
  local_68 = CONCAT71(local_68._1_7_,uVar3);
  puVar2 = &DAT_100a7a2e0;
  local_70 = uVar6;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,puVar2,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe58d89e593bde52d,0xae003a8fb0e5a7a4);
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_70 = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

