// rea decompile_all
// name: FUN_100136e8c
// address: 0x100136e8c
// body: available
// range: 0x100136e8c-0x100137147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100136e8c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x59);
  __sSS6appendyySSF(0x1000000000000028,0x80000001008905e0);
  lVar4 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar6 = param_2 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(lVar6 + 0x14);
    _swift_release(lVar6);
  }
  local_78._0_5_ = CONCAT14(lVar6 == 0,uVar8);
  puVar7 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x69849ae7979de52d,0xaa00000000003a64);
  lVar6 = param_2 + lVar4;
  _swift_weakLoadStrong();
  if (lVar6 == 0) {
    uVar8 = 0;
    bVar5 = true;
  }
  else {
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    uVar2 = *(undefined8 *)(lVar6 + 0x38);
    lVar1 = *(long *)(lVar6 + 0x40);
    uVar3 = *(undefined8 *)(lVar6 + 0x48);
    uVar10 = *(undefined8 *)(lVar6 + 0x50);
    FUN_100139c68(uVar9,uVar2,lVar1,uVar3,uVar10);
    _swift_release(lVar6);
    bVar5 = lVar1 == 0;
    uVar8 = 0;
    if (!bVar5) {
      uVar8 = (undefined4)uVar9;
    }
    FUN_100139ca0(uVar9,uVar2,lVar1,uVar3,uVar10);
  }
  local_78._0_5_ = CONCAT14(bVar5,uVar8);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000010,0x8000000100890610);
  uVar9 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  __sSS6appendyySSF(uVar9,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x6d849ae7979de52d,0xaf3a657079746361);
  param_2 = param_2 + lVar4;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    _swift_release(param_2);
  }
  puVar7 = &DAT_100a762d0;
  local_78 = uVar9;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,puVar7,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return 0;
}

