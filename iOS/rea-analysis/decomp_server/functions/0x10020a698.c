// rea decompile_all
// name: FUN_10020a698
// address: 0x10020a698
// body: available
// range: 0x10020a698-0x10020a94b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020a698(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xac);
  uVar4 = 0x80000001008a3c50;
  __sSS6appendyySSF(0x1000000000000040,0x80000001008a3c50);
  FUN_100208dd4();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008a3ca0);
  uVar6 = (ulong)param_3[6] >> 0x3c;
  uVar3 = 0;
  if (uVar6 < 0xf) {
    uVar3 = (undefined4)param_3[4];
  }
  uVar4 = 0;
  if (uVar6 < 0xf) {
    uVar4 = param_3[5];
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = param_3[6];
  }
  FUN_100040b80();
  FUN_100006cdc(uVar4,uVar2);
  local_78 = CONCAT44(local_78._4_4_,uVar3);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  uVar6 = *(ulong *)(param_4 + 0xb8) >> 0x3c;
  uVar4 = 0;
  if (uVar6 < 0xf) {
    uVar4 = *(undefined8 *)(param_4 + 0xa8);
  }
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_4 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_4 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_78 = uVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e696769726f202c,0xef3d687461506c61);
  __sSS6appendyySSF(*param_3,param_3[1]);
  __sSS6appendyySSF(0x766c6f736572202c,0xef3d687461506465);
  __sSS6appendyySSF(param_5,param_6);
  __sSS6appendyySSF(0x506c61636f6c202c,0xec0000003d687461);
  __sSS6appendyySSF(param_7,param_8);
  __sSS6appendyySSF(0x656e6e616863202c,0xea00000000003d6c);
  local_78 = CONCAT71(local_78._1_7_,param_9);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

