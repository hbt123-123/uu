// rea decompile_all
// name: FUN_100150284
// address: 0x100150284
// body: available
// range: 0x100150284-0x10015056f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100150284(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x67);
  __sSS6appendyySSF(0x1000000000000025,0x80000001008926e0);
  local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(param_2 + 0x30));
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xe582b1e681a6e82d,0xae003a8fb0e5a7a4);
  param_3 = param_3 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    lVar7 = *(long *)(param_3 + 0x88);
    _swift_retain(lVar7);
    _swift_release(param_3);
    if (lVar7 != 0) {
      uVar8 = *(ulong *)(lVar7 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
      _swift_release(lVar7);
      local_68 = 0;
      goto LAB_1001503a8;
    }
  }
  uVar8 = 0;
  local_68 = 1;
LAB_1001503a8:
  puVar3 = &DAT_100a7a2e0;
  local_70 = uVar8;
  FUN_100004bb4(&DAT_100a7a2e0,&DAT_10080ec50);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,puVar3,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  plVar4 = (long *)0xe58d89e593bde52d;
  __sSS6appendyySSF(0xe58d89e593bde52d,0xae003a8fb0e5a7a4);
  FUN_100149e1c();
  (**(code **)(*plVar4 + 0x88))(&local_70);
  _swift_release(plVar4);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xe59e9be594bfe82d,0xae003a8fb0e5a7a4);
  lVar7 = *(long *)(param_2 + 8);
  uVar1 = (uint)(*(ulong *)(param_2 + 0x10) >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar8 = *(ulong *)(param_2 + 0x10) >> 0x30 & 0xff;
    }
    else {
      iVar5 = (int)((ulong)lVar7 >> 0x20);
      if (SBORROW4(iVar5,(int)lVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100150570);
        (*pcVar2)();
      }
      uVar8 = (ulong)(iVar5 - (int)lVar7);
    }
  }
  else if (uVar6 == 2) {
    uVar8 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
    if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001504a8);
      (*pcVar2)();
    }
  }
  else {
    uVar8 = 0;
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_70 = uVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xe587a4e58687e52d,0xae003a8fb0e5a7a4);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_70 = param_4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

