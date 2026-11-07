// rea decompile_all
// name: FUN_100116d5c
// address: 0x100116d5c
// body: available
// range: 0x100116d5c-0x100116f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100116d5c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __sSS6appendyySSF(0x28,0xe100000000000000);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(unaff_x20 + 0x30),&local_60,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  local_70 = CONCAT71(local_70._1_7_,*unaff_x20);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_60,&DAT_10099dab0,puVar2,puVar3);
  local_70 = 0x64496863756f742c;
  uStack_68 = 0xe90000000000003d;
  local_80 = *(undefined8 *)(unaff_x20 + 8);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar4 = uStack_68;
  __sSS6appendyySSF(local_70,uStack_68);
  _swift_bridgeObjectRelease(uVar4);
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __sSS6appendyySSF(0x3d746e696f702c,0xe700000000000000);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  local_80 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = 0;
  FUN_100005c00(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_80,&local_70,uVar4,puVar2,puVar3);
  uVar4 = uStack_68;
  __sSS6appendyySSF(local_70,uStack_68);
  _swift_bridgeObjectRelease(uVar4);
  if ((unaff_x20[0x28] & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    __sSS6appendyySSF(0x727573736572702c,0xea00000000003d65);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (uVar4,&local_70,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    uVar4 = uStack_68;
    __sSS6appendyySSF(local_70,uStack_68);
    _swift_bridgeObjectRelease(uVar4);
  }
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = local_60;
  return auVar1;
}

