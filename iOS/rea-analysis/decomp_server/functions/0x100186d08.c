// rea decompile_all
// name: FUN_100186d08
// address: 0x100186d08
// body: available
// range: 0x100186d08-0x100187003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100186d08(undefined8 *param_1,undefined4 param_2,long param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_90 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_78 = 0;
  uStack_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xa1);
  local_60 = local_78;
  uStack_58 = uStack_70;
  __sSS6appendyySSF(0x1000000000000040,0x8000000100897fd0);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_78._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x746365726964202c,0xec0000003d6e6f69);
  bVar4 = *(char *)(param_3 + 0x10) == '\0';
  uVar1 = 0x646e6573;
  if (bVar4) {
    uVar1 = 0x65766965636572;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe700000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  local_78 = CONCAT44(local_78._4_4_,param_4);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3d726f727265202c,0xe800000000000000);
  local_78 = CONCAT71(local_78._1_7_,param_5);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_60,&DAT_10099bed0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000014,0x8000000100897e10);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  local_78 = *(undefined8 *)(param_3 + 0x58);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0xd000000000000011,0x8000000100898020);
  _swift_beginAccess(param_3 + 0x60,&local_78,0,0);
  local_90[0] = *(undefined8 *)(*(long *)(param_3 + 0x60) + 0x10);
  puVar5 = puVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x64656c696166202c,0xee003d746e756f43);
  _swift_beginAccess(param_3 + 0x68,local_90,0,0);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

