// rea decompile_all
// name: FUN_10020d654
// address: 0x10020d654
// body: available
// range: 0x10020d654-0x10020d98b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10020d654(void)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  long local_a8;
  byte local_a0;
  undefined1 local_9f;
  ulong local_98;
  undefined8 uStack_90;
  undefined4 local_74;
  ulong local_70;
  undefined8 local_68;
  
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
LAB_10020d6b0:
    _swift_bridgeObjectRelease(0);
    uVar8 = 0;
    uVar7 = 0xe000000000000000;
  }
  else {
    FUN_1000c7b64();
    uVar8 = *(ulong *)(lVar5 + 0x30);
    uVar7 = *(ulong *)(lVar5 + 0x38);
    _swift_bridgeObjectRetain(uVar7);
    _swift_release(lVar5);
    if (uVar7 == 0) goto LAB_10020d6b0;
  }
  uVar1 = uVar8 & 0xffffffffffff;
  if ((uVar7 & 0x2000000000000000) != 0) {
    uVar1 = uVar7 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    return uVar8;
  }
  _swift_bridgeObjectRelease(uVar7);
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    lVar9 = 0;
    bVar11 = 0;
    uVar10 = 1;
  }
  else {
    FUN_1000c7b64();
    lVar9 = *(long *)(lVar5 + 0x40);
    bVar11 = *(byte *)(lVar5 + 0x48);
    bVar3 = *(byte *)(lVar5 + 0x49);
    _swift_release(lVar5);
    if ((bVar3 & 1) == 0) {
      if ((bVar11 & 1) != 0) {
        if (1 < lVar9) {
          if (lVar9 == 2) {
            uVar10 = 0;
          }
          else if (lVar9 == 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
          }
          goto LAB_10020d788;
        }
        if (lVar9 != 0) {
          uVar10 = 0;
          goto LAB_10020d788;
        }
      }
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
  }
LAB_10020d788:
  lVar5 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar5 == 0) {
    FUN_100401b14();
    FUN_1003fb4ec(FUN_10020da54,0,0xd0000000000000af,0x80000001008a3fb0,0x6f666e4972656570,
                  0xea00000000002928,0x27,0);
    uVar8 = 0xd00000000000001a;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    local_70 = 0;
    local_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x10);
    _swift_bridgeObjectRelease(local_68);
    local_70 = 0x6172742d656c6966;
    local_68 = 0xee002d726566736e;
    puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
    local_74 = uVar2;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar6);
    uVar4 = local_68;
    uVar8 = local_70;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_98 = uVar8;
    uStack_90 = uVar4;
    local_b0 = uVar2;
    local_a8 = lVar9;
    local_a0 = bVar11;
    local_9f = uVar10;
    FUN_1003fb4bc(FUN_10020dbec,auStack_c0,0xd0000000000000af,0x80000001008a3fb0,0x6f666e4972656570,
                  0xea00000000002928,0x2d,0);
  }
  return uVar8;
}

