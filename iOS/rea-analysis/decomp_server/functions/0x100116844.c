// rea decompile_all
// name: FUN_100116844
// address: 0x100116844
// body: available
// range: 0x100116844-0x100116ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100116844(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *unaff_x20;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __sSS6appendyySSF(0x28,0xe100000000000000);
  local_60 = CONCAT71(local_60._1_7_,*unaff_x20);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_10099dbd0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  cVar1 = unaff_x20[0x31];
  if (cVar1 != '\x05') {
    local_60 = 0;
    uStack_58 = 0xe000000000000000;
    __sSS6appendyySSF(0x3d6e6f747475622c,0xe800000000000000);
    local_68 = CONCAT71(local_68._1_7_,cVar1);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (&local_68,&local_60,&DAT_10099e098,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar4 = uStack_58;
    __sSS6appendyySSF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uVar4);
  }
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __sSS6appendyySSF(0x3d782c,0xe300000000000000);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar5 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(unaff_x20 + 8),&local_60,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3d792c,0xe300000000000000);
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(unaff_x20 + 0x10),&local_60,puVar5,puVar3);
  uVar4 = uStack_58;
  __sSS6appendyySSF(local_60,uStack_58);
  _swift_bridgeObjectRelease(uVar4);
  if ((unaff_x20[0x20] & 1) == 0) {
    local_68 = *(undefined8 *)(unaff_x20 + 0x18);
    local_60 = 0x3d5861746c65642c;
    uStack_58 = 0xe800000000000000;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = uStack_58;
    __sSS6appendyySSF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uVar4);
  }
  if ((unaff_x20[0x30] & 1) == 0) {
    local_68 = *(undefined8 *)(unaff_x20 + 0x28);
    local_60 = 0x3d5961746c65642c;
    uStack_58 = 0xe800000000000000;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    uVar4 = uStack_58;
    __sSS6appendyySSF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uVar4);
  }
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(unaff_x20 + 0x38),&local_60,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  uVar4 = uStack_58;
  __sSS6appendyySSF(local_60,uStack_58);
  _swift_bridgeObjectRelease(uVar4);
  auVar2._8_8_ = uStack_48;
  auVar2._0_8_ = local_50;
  return auVar2;
}

