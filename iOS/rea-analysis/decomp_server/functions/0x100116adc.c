// rea decompile_all
// name: FUN_100116adc
// address: 0x100116adc
// body: available
// range: 0x100116adc-0x100116d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100116adc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __sSS6appendyySSF(0x28,0xe100000000000000);
  puVar8 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar9 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (*(undefined8 *)(unaff_x20 + 0x30),&local_50,
             PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  local_60 = CONCAT71(local_60._1_7_,*unaff_x20);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,&DAT_10099db40,puVar9,puVar8);
  if ((unaff_x20[0x10] & 1) == 0) {
    local_60 = 0x65646f4379656b2c;
    uStack_58 = 0xe90000000000003d;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar9);
    uVar10 = uStack_58;
    __sSS6appendyySSF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uVar10);
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    local_60 = 0x3d747865742c;
    uStack_58 = 0xe600000000000000;
    __sSS6appendyySSF(*(undefined8 *)(unaff_x20 + 0x18));
    uVar10 = uStack_58;
    __sSS6appendyySSF(local_60,uStack_58);
    _swift_bridgeObjectRelease(uVar10);
  }
  local_60 = 0x3d656372756f732c;
  uStack_58 = 0xe800000000000000;
  bVar3 = unaff_x20[0x28];
  uVar10 = 0x80000001008761e0;
  puVar4 = &DAT_d000000000000018;
  if (bVar3 != 4) {
    uVar10 = 0xea00000000007475;
    puVar4 = (undefined1 *)0x706e695f74786574;
  }
  uVar2 = 0x80000001008761c0;
  puVar5 = (undefined1 *)0xd000000000000016;
  if (bVar3 != 3) {
    uVar2 = uVar10;
    puVar5 = puVar4;
  }
  uVar10 = 0xeb00000000657361;
  puVar4 = (undefined1 *)0x656c65725f64626b;
  if (bVar3 != 1) {
    uVar10 = 0xe90000000000006b;
    puVar4 = (undefined1 *)0x63696c635f64626b;
  }
  uVar1 = 0xe900000000000073;
  puVar6 = (undefined1 *)0x736572705f64626b;
  if (bVar3 != 0) {
    uVar1 = uVar10;
    puVar6 = puVar4;
  }
  if (bVar3 < 3) {
    uVar2 = uVar1;
    puVar5 = puVar6;
  }
  __sSS6appendyySSF(puVar5,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  uVar10 = uStack_58;
  __sSS6appendyySSF(local_60,uStack_58);
  _swift_bridgeObjectRelease(uVar10);
  auVar7._8_8_ = uStack_48;
  auVar7._0_8_ = local_50;
  return auVar7;
}

