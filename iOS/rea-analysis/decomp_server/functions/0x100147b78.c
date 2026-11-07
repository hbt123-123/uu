// rea decompile_all
// name: FUN_100147b78
// address: 0x100147b78
// body: available
// range: 0x100147b78-0x100147e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100147b78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5f);
  __sSS6appendyySSF(0x1000000000000030,0x80000001008920d0);
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_2 + 0x14));
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6570795463616d2d,0xaf3a8b9ee5bbb1e7);
  local_80 = *(undefined8 *)(param_2 + 0x58);
  puVar6 = &DAT_100a762d0;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x73776f646e69772d,0xeb000000003a4449);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = 0;
  if (lVar2 != 0) {
    uVar7 = (undefined4)uVar1;
  }
  FUN_100139c68(uVar1,uVar3,lVar2,uVar4,uVar9);
  FUN_100139ca0(uVar1,uVar3,lVar2,uVar4,uVar9);
  local_80._0_5_ = CONCAT14(lVar2 == 0,uVar7);
  puVar6 = &DAT_100a75aa8;
  FUN_100004bb4(&DAT_100a75aa8,&DAT_10080eab0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,puVar5);
  __sSS6appendyySSF(0x73776f646e69772d,0xed00003a656d614e);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar9 = *(undefined8 *)(param_2 + 0x50);
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    uVar8 = uVar3;
  }
  FUN_100139c68(uVar1,uVar3,lVar2,uVar4,uVar9);
  FUN_100139ca0(uVar1,uVar3,lVar2,uVar4,uVar9);
  puVar6 = &DAT_100a75b50;
  local_80 = uVar8;
  lStack_78 = lVar2;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(lVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

