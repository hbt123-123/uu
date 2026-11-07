// rea decompile_all
// name: FUN_100187114
// address: 0x100187114
// body: available
// range: 0x100187114-0x100187543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100187114(undefined8 *param_1,long param_2,undefined1 param_3,char param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xc9);
  local_70 = local_88;
  uStack_68 = uStack_80;
  __sSS6appendyySSF(0x1000000000000040,0x8000000100897f40);
  puVar4 = PTR___ss5Int32VN_100995c78;
  local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 0x14));
  puVar3 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x746365726964202c,0xec0000003d6e6f69);
  bVar1 = *(char *)(param_2 + 0x10) == '\0';
  uVar2 = 0x646e6573;
  if (bVar1) {
    uVar2 = 0x65766965636572;
  }
  uVar7 = 0xe700000000000000;
  uVar6 = 0xe400000000000000;
  if (bVar1) {
    uVar6 = 0xe700000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x456c616e6966202c,0xed00003d726f7272);
  local_88 = CONCAT71(local_88._1_7_,param_3);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_88,&local_70,&DAT_10099bed0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xd000000000000014,0x8000000100897e10);
  local_88 = *(undefined8 *)(param_2 + 0x58);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(&DAT_d000000000000013,0x8000000100897f90);
  _swift_beginAccess(param_2 + 0x60,&local_88,0,0);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  FUN_100045cc4();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = uVar2;
  puVar3 = puVar4;
  __sSa11descriptionSSvg(uVar2,puVar4);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar6,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(&DAT_d000000000000010,0x8000000100897fb0);
  _swift_beginAccess(param_2 + 0x68,auStack_a0,0,0);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  FUN_100045cc4();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = uVar2;
  __sSa11descriptionSSvg(uVar2,puVar4);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(uVar6,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x746c75736572202c,0xe90000000000003d);
  if (param_4 == '\0') {
    uVar2 = 0x73736563637573;
  }
  else {
    uVar7 = 0xee006572756c6961;
    uVar2 = 0x466c616974726170;
    if (param_4 != '\x01') {
      uVar7 = 0xe700000000000000;
      uVar2 = 0x6572756c696166;
    }
  }
  __sSS6appendyySSF(uVar2,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x736563637573202c,0xef3d746e756f4373);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar4 = PTR___sSiN_100995968;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x72756c696166202c,0xef3d746e756f4365);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

