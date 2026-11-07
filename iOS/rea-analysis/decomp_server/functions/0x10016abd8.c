// rea decompile_all
// name: FUN_10016abd8
// address: 0x10016abd8
// body: available
// range: 0x10016abd8-0x10016b143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10016abd8(uint param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ID IVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  ulong uVar14;
  code *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar16;
  long lVar17;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  uint local_ac;
  long local_a8;
  long lStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80 [3];
  ID local_68;
  
  lVar6 = 0;
  local_ac = param_1;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  local_a8 = *(long *)(lVar6 + -8);
  lStack_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar6 = 0;
  local_b8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar3 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_100995f88;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar17 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar7 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined1 *)(param_5 + 0x10) = 0;
  puVar8 = &_OBJC_CLASS___NSOperationQueue;
  _objc_allocWithZone();
  IVar9 = _objc_msgSend((ID)puVar8,"init");
  *(ID *)(param_5 + 0x18) = IVar9;
  puVar8 = &DAT_100a7a428;
  FUN_100004bb4(&DAT_100a7a428,&DAT_10080edc8);
  _swift_allocObject();
  FUN_1003e43e4();
  *(undefined **)(param_5 + 0x20) = puVar8;
  *(undefined8 *)(param_5 + 0x30) = 0;
  _swift_unknownObjectWeakInit(param_5 + 0x28,0);
  *(undefined8 *)(param_5 + 0x40) = 0;
  _swift_unknownObjectWeakInit(param_5 + 0x38,0);
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
  local_80[0] = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar10 = &DAT_100a750d0;
  FUN_100005c90(&DAT_100a750d0,puVar3,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_100995f98);
  puVar8 = &DAT_100a750d8;
  FUN_100004bb4(&DAT_100a750d8,&DAT_1008083f0);
  uVar1 = local_ac;
  puVar11 = &DAT_100a750e0;
  FUN_10003f840(&DAT_100a750e0,&DAT_100a750d8,&DAT_1008083f0,PTR___sSayxGSTsMc_100995898);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar17,local_80,puVar8,puVar11,lVar6,puVar10);
  puVar4 = local_b8;
  (**(code **)(local_a8 + 0x68))
            (local_b8,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
             ,lStack_a0);
  uVar5 = local_98;
  uVar12 = 0xd000000000000020;
  __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
            (0xd000000000000020,0x8000000100894240,lVar7,lVar17,puVar4,0);
  *(undefined8 *)(param_5 + 0x48) = uVar12;
  local_80[0] = (undefined *)0x5;
  FUN_100004bb4(&DAT_100a7a280,&DAT_10080ebf8);
  _swift_allocObject();
  ppuVar13 = local_80;
  FUN_1003f2d90();
  *(undefined ***)(param_5 + 0x50) = ppuVar13;
  *(undefined8 *)(param_5 + 0x30) = local_90;
  _swift_unknownObjectWeakAssign(param_5 + 0x28,uVar5);
  *(undefined ***)(param_5 + 0x40) = &PTR_PTR_10099f598;
  _swift_unknownObjectWeakAssign(param_5 + 0x38,local_88);
  uVar2 = (undefined1)uVar1;
  *(undefined1 *)(param_5 + 0x10) = uVar2;
  if (uVar5 == 0) {
    IVar9 = *(ID *)(param_5 + 0x18);
LAB_10016b028:
    _objc_msgSend(IVar9,"setMaxConcurrentOperationCount:",5);
  }
  else {
    _swift_unknownObjectRetain(uVar5);
    FUN_1001bc2b4();
    _swift_unknownObjectRelease(uVar5);
    lVar6 = _TtC14UURemoteServer16ClipboardHandler::ref;
    _swift_beginAccess(uVar5 + _TtC14UURemoteServer16ClipboardHandler::ref,local_80,0,0);
    lVar6 = uVar5 + lVar6;
    _swift_unknownObjectWeakLoadStrong();
    uVar14 = uVar5;
    _swift_unknownObjectRetain();
    if ((lVar6 == 0) || (FUN_10000b338(), (uVar14 & 1) == 0)) {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001bcb20,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                    0x80000001008927f0,0x80,7);
      uVar12 = 5;
    }
    else {
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001bcaf4,0,0xd00000000000009f,0x8000000100892750,0xd00000000000001d,
                    0x80000001008927f0,0x7d,7);
      uVar12 = 3;
    }
    _swift_unknownObjectRelease(uVar5);
    IVar9 = *(ID *)(param_5 + 0x18);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 2) {
      _objc_msgSend(IVar9,"setMaxConcurrentOperationCount:",uVar12);
      FUN_100401b14(0);
      pcVar15 = FUN_10016bd08;
      uVar12 = 0x25;
    }
    else {
      if (uVar1 != 3) goto LAB_10016b028;
      _objc_msgSend(IVar9,"setMaxConcurrentOperationCount:",uVar12);
      FUN_100401b14(0);
      pcVar15 = FUN_10016bd00;
      uVar12 = 0x28;
    }
    FUN_1003fb45c(pcVar15,param_5,0xd0000000000000ab,0x8000000100891c00,0xd000000000000036,
                  0x8000000100894270,uVar12,7);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined1 *)(lVar7 + -0x10) = uVar2;
  *(long *)(lVar7 + -8) = param_5;
  FUN_1003fb45c(FUN_10016bcf4,lVar7 + -0x20,0xd0000000000000ab,0x8000000100891c00,0xd000000000000036
                ,0x8000000100894270,0x2d,7);
  plVar16 = *(long **)(param_5 + 0x50);
  IVar9 = *(ID *)(param_5 + 0x18);
  _swift_retain(plVar16);
  local_68 = _objc_msgSend(IVar9,"maxConcurrentOperationCount");
  (**(code **)(*plVar16 + 0x90))(&local_68);
  _swift_release(plVar16);
  return param_5;
}

