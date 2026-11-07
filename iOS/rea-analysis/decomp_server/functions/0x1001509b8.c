// rea decompile_all
// name: FUN_1001509b8
// address: 0x1001509b8
// body: available
// range: 0x1001509b8-0x100150b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001509b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(100);
  __sSS6appendyySSF(0x1000000000000042,0x8000000100892640);
  param_2 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x88);
    _swift_retain(lVar2);
    _swift_release(param_2);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release(lVar2);
      local_48 = 0;
      goto LAB_100150a6c;
    }
  }
  uVar3 = 0;
  local_48 = 1;
LAB_100150a6c:
  puVar1 = &DAT_100a7a2e0;
  local_50 = uVar3;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_50,&local_40,puVar1,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  uVar3 = 0xe58d89e593bde52d;
  __sSS6appendyySSF(0xe58d89e593bde52d,0xae003abba7e78f81);
  FUN_100149dec();
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_50 = uVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0xe58e90e5809ce62d,0xae003abba7e78f81);
  local_50 = 0x57800;
  puVar1 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

