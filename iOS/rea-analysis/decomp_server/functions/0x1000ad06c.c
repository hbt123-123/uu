// rea decompile_all
// name: FUN_1000ad06c
// address: 0x1000ad06c
// body: available
// range: 0x1000ad06c-0x1000ad4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000ad06c(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  char *pcStack_e0;
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  local_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  puVar14 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  uVar11 = local_a0;
  lVar2 = _TtC14UURemoteServer11AppDelegate::cleanupState;
  lVar16 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(unaff_x20 + _TtC14UURemoteServer11AppDelegate::cleanupState) == '\0') {
    local_d8 = lVar3;
    local_d0 = lVar13;
    local_c8 = puVar14;
    local_c0 = lVar12;
    lStack_b8 = lVar4;
    local_b0 = lVar17;
    local_a8 = lVar5;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    FUN_1000f2704();
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
    uVar6 = 0;
    FUN_100401b14();
    pcStack_e0 = "Server/AppDelegate.swift";
    local_e8 = uVar6;
    FUN_1003fb48c(FUN_1000ad500,0,0xd000000000000088,0x80000001008813c0,0xd00000000000001e,
                  0x8000000100881450,0x34,0);
    FUN_100004b70(0);
    lVar2 = local_a8;
    (**(code **)(lVar15 + 0x68))
              (lVar16,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_100995f60,
               local_a8);
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ(lVar16);
    (**(code **)(lVar15 + 8))(lVar16,lVar2);
    puVar7 = &DAT_10099a548;
    _swift_allocObject(&DAT_10099a548,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    puVar8 = &DAT_10099a570;
    _swift_allocObject(&DAT_10099a570,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar7;
    *(undefined8 *)(puVar8 + 0x18) = uVar11;
    local_70 = FUN_1000adc48;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_10099a588;
    local_68 = puVar8;
    aBlock = __Block_copy(&local_90);
    _swift_retain(puVar7);
    lVar3 = local_d0;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_d0,uVar11);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar8 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar9 = puVar8;
    FUN_10004eec4();
    puVar14 = local_c8;
    lVar2 = local_d8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_98,puVar8,puVar9,local_d8,uVar11);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,puVar14,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b0 + 8))(puVar14,lVar2);
    (**(code **)(local_c0 + 8))(lVar3,lStack_b8);
    puVar8 = local_68;
    _swift_release(puVar7);
    _swift_release(puVar8);
    pcVar10 = FUN_1000adb0c;
    uVar11 = 0x47;
    pcVar1 = pcStack_e0;
  }
  else {
    if (*(char *)(unaff_x20 + _TtC14UURemoteServer11AppDelegate::cleanupState) != '\x01') {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000ad4a8,0,0xd000000000000088,0x80000001008813c0,0xd00000000000001e,
                    0x8000000100881450,0x28,0);
      return 1;
    }
    FUN_100401b14(0);
    pcVar10 = FUN_1000ad4d4;
    uVar11 = 0x2d;
    pcVar1 = "Server/AppDelegate.swift";
  }
  FUN_1003fb48c(pcVar10,0,0xd000000000000088,0x80000001008813c0,0xd00000000000001e,
                (ulong)pcVar1 | 0x8000000000000000,uVar11,0);
  return 0;
}

