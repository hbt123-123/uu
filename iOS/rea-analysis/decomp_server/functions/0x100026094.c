// rea decompile_all
// name: FUN_100026094
// address: 0x100026094
// body: available
// range: 0x100026094-0x100026287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100026094(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_60;
  byte local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x49);
  __sSS6appendyySSF(&DAT_d000000000000018,0x8000000100877cb0);
  local_60 = CONCAT44(local_60._4_4_,param_2);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3a656d616e20,0xe600000000000000);
  uVar3 = param_3[1];
  FUN_10044fa64(*param_3,uVar3,param_3[2]);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x546e656572637320,0xec0000003a657079);
  uVar3 = *param_3;
  uVar5 = param_3[1];
  FUN_10044eb58(uVar3,uVar5,param_3[2]);
  puVar1 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  local_58 = (byte)uVar5 & 1;
  local_60 = uVar3;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_1009c0470,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(&DAT_d000000000000010,0x8000000100877cd0);
  bVar2 = (param_4 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar5 = 0xe400000000000000;
  if (bVar2) {
    uVar5 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0x3a72706420,0xe500000000000000);
  FUN_10044f430(*param_3,param_3[1],param_3[2]);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF(&local_50,puVar4,puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

