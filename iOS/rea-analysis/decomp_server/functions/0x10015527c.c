// rea decompile_all
// name: FUN_10015527c
// address: 0x10015527c
// body: available
// range: 0x10015527c-0x100155513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015527c(long param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  ulong uVar15;
  undefined1 auStack_220 [16];
  uint *local_210;
  undefined1 local_200;
  undefined1 auStack_1f8 [24];
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined8 local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  FUN_100401b14(0);
  local_210 = param_2;
  FUN_1003fb48c(FUN_10016c428,auStack_220,0xd0000000000000a4,0x800000010088d870,0xd00000000000002a,
                0x80000001008954e0,0x6e,0);
  lVar10 = _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  uVar5 = *param_2;
  uVar2 = uVar5;
  if (param_2[1] <= uVar5) {
    uVar2 = param_2[1];
  }
  if (uVar5 < uVar2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100155514);
    (*pcVar8)();
  }
  uVar1 = 2;
  if (uVar2 != 0) {
    uVar1 = uVar5 - uVar2 != 0;
  }
  lVar12 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
  _swift_unknownObjectWeakLoadStrong();
  lVar9 = _TtC14UURemoteServer16ClipboardHandler::ref;
  if (lVar12 != 0) {
    _swift_beginAccess(lVar12 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_1f8,0,0);
    lVar9 = lVar12 + lVar9;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar9 == 0) {
      _swift_unknownObjectRelease(lVar12);
    }
    else {
      FUN_1000c7b64();
      _swift_unknownObjectRelease(lVar12);
      uVar13 = *(undefined8 *)(lVar9 + 0x30);
      lVar12 = *(long *)(lVar9 + 0x38);
      _swift_bridgeObjectRetain(lVar12);
      _swift_release(lVar9);
      if (lVar12 != 0) goto LAB_1001553c8;
    }
  }
  _swift_bridgeObjectRelease(0);
  uVar13 = 0;
  lVar12 = -0x2000000000000000;
LAB_1001553c8:
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar15 = *(ulong *)(param_1 + 0xb8);
  FUN_100040b80(uVar6,uVar7,uVar15);
  uVar11 = uVar15 >> 0x3c;
  uVar3 = 0;
  if (uVar11 < 0xf) {
    uVar3 = uVar7;
  }
  uVar4 = 0xc000000000000000;
  if (uVar11 < 0xf) {
    uVar4 = uVar15;
  }
  uVar14 = 0;
  if (uVar11 < 0xf) {
    uVar14 = (undefined4)uVar6;
  }
  FUN_100006cdc(uVar3,uVar4);
  uStack_138 = *(undefined8 *)(param_2 + 4);
  local_140 = *(undefined8 *)(param_2 + 2);
  uStack_1d4 = (undefined4)*(undefined8 *)(param_2 + 4);
  uStack_1d0 = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_1dc = (undefined4)*(undefined8 *)(param_2 + 2);
  uStack_1d8 = (undefined4)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
  local_e0 = 1;
  local_c8 = 0;
  uStack_c0 = 0xe000000000000000;
  uStack_ac = CONCAT44(uStack_1d4,uStack_1d8);
  local_b4 = CONCAT44(local_1dc,uStack_1e0);
  local_a4 = uStack_1d0;
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_df = uVar1;
  local_d8 = uVar13;
  lStack_d0 = lVar12;
  local_b8 = uVar14;
  local_90 = (ulong)uVar2;
  uStack_88 = (ulong)(uVar5 - uVar2);
  FUN_100102fb4(&local_140,&uStack_1e0);
  FUN_10018555c(&local_e0);
  FUN_10016c430(&local_e0);
  local_200 = 1;
  local_128 = 0;
  local_120 = 1;
  uStack_110 = 0xc000000000000000;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0x2000000000000000;
  local_e8 = 0x3000000000000000;
  FUN_100193df4(&uStack_1e0,&local_128);
  FUN_100006cdc(0,0xc000000000000000);
  lVar10 = unaff_x20 + lVar10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar10 == 0) {
    FUN_10016b308(&uStack_1e0);
  }
  else {
    FUN_1001bddd8(param_1,&uStack_1e0);
    FUN_10016b308(&uStack_1e0);
    _swift_unknownObjectRelease(lVar10);
  }
  return;
}

