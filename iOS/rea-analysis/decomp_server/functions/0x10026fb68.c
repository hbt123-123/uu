// rea decompile_all
// name: FUN_10026fb68
// address: 0x10026fb68
// body: available
// range: 0x10026fb68-0x10026ff33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10026fb68(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  ID IVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  uVar13 = 0x65736e6f70736552;
  IVar12 = *(ID *)(param_1 + _TtC4Moya8Response::response);
  if (IVar12 == 0) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    pcVar2 = *(code **)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    _swift_retain(uVar4);
    __ss11_StringGutsV4growyySiF(0x27);
    __sSS6appendyySSF(0xd000000000000024,0x80000001008a8730);
    puVar6 = &DAT_100a81450;
    FUN_100004bb4(&DAT_100a81450,&DAT_1008157f0);
    __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
              (param_2,&local_90,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    __sSS6appendyySSF(0x2e,0xe100000000000000);
    uVar9 = uStack_88;
    uVar10 = 0xe800000000000000;
    (*pcVar2)(0x65736e6f70736552,0xe800000000000000,local_90,uStack_88,param_2);
    _swift_bridgeObjectRelease(uVar9);
    _swift_release(uVar4);
    uVar5 = 0;
    FUN_10026b294(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_10026b294(uVar7,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
    lVar1 = uVar7 + uVar3 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = uVar13;
    *(undefined8 *)(lVar1 + 0x28) = uVar10;
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    pcVar2 = *(code **)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_retain(uVar4);
    pcVar8 = "description";
    IVar12 = _objc_msgSend(IVar12,"description");
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar12);
    uVar9 = 0xe800000000000000;
    (*pcVar2)(0x65736e6f70736552,0xe800000000000000,IVar12,pcVar8,param_2);
    _swift_bridgeObjectRelease(pcVar8);
    _swift_release(uVar4);
    uVar5 = 0;
    FUN_10026b294(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_10026b294(uVar7,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
    lVar1 = uVar7 + uVar3 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = uVar13;
    *(undefined8 *)(lVar1 + 0x28) = uVar9;
  }
  if ((((param_3 & 1) == 0) ||
      (_swift_beginAccess(unaff_x20 + 0x10,auStack_c0,0,0),
      (*(byte *)(unaff_x20 + 0x50) >> 5 & 1) == 0)) &&
     (_swift_beginAccess(unaff_x20 + 0x10,&local_90,0,0),
     (*(byte *)(unaff_x20 + 0x50) >> 4 & 1) == 0)) {
    return uVar7;
  }
  uVar10 = 0x65736e6f70736552;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0,0);
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _swift_retain(uVar4);
  (*pcVar2)(uVar13,uVar9);
  _swift_release(uVar4);
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar4);
  uVar11 = 0xed000079646f4220;
  (*pcVar2)(0x65736e6f70736552,0xed000079646f4220,uVar13,uVar9,param_2);
  _swift_bridgeObjectRelease(uVar9);
  _swift_release(uVar4);
  uVar3 = *(ulong *)(uVar7 + 0x10);
  uVar5 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar3) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_10026b294(uVar5,uVar3 + 1,1,uVar7);
  }
  *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
  lVar1 = uVar5 + uVar3 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = uVar10;
  *(undefined8 *)(lVar1 + 0x28) = uVar11;
  return uVar5;
}

