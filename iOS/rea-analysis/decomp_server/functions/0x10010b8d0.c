// rea decompile_all
// name: FUN_10010b8d0
// address: 0x10010b8d0
// body: available
// range: 0x10010b8d0-0x10010bc0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010b8d0(undefined4 param_1,undefined *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_e0 [4];
  undefined4 local_dc;
  long local_d8;
  long lStack_d0;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar2 = 0;
  local_dc = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar2 + -8);
  local_b8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar2 = 0;
  local_c8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar2 + -8);
  lStack_d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_d8 + 0x40));
  lVar11 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar2 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = 0x6562747261656822;
  uStack_70 = 0xeb00000000227461;
  local_a8 = param_2;
  local_a0 = param_3;
  FUN_10009ff0c();
  puVar4 = &local_78;
  __sSy10FoundationE8containsySbqd__SyRd__lF
            (puVar4,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,lVar2,lVar2);
  if (((ulong)puVar4 & 1) == 0) {
    _swift_beginAccess(unaff_x20 + 0x18,&local_78,0,0);
    lVar5 = unaff_x20 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar5 != 0) {
      FUN_1000cb82c();
    }
  }
  local_a8 = param_2;
  local_a0 = param_3;
  __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar9);
  uVar8 = 0;
  lVar5 = lVar9;
  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
            (lVar9,0,PTR___sSSN_1009957f8,lVar2);
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  if (uVar8 >> 0x3c < 0xf) {
    puVar6 = &DAT_10099d5b8;
    _swift_allocObject(&DAT_10099d5b8,0x38,7);
    *(long *)(puVar6 + 0x10) = lVar5;
    *(ulong *)(puVar6 + 0x18) = uVar8;
    *(undefined4 *)(puVar6 + 0x20) = local_dc;
    *(undefined **)(puVar6 + 0x28) = param_2;
    *(undefined8 *)(puVar6 + 0x30) = param_3;
    local_88 = FUN_10010bce8;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_10099d5d0;
    local_80 = puVar6;
    aBlock = __Block_copy(&local_a8);
    FUN_10010bd10(lVar5,uVar8);
    _swift_bridgeObjectRetain(param_3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
    lVar2 = local_b8;
    puVar1 = local_c8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_c8,&local_b0,puVar6,puVar7,local_b8,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,puVar1,aBlock);
    __Block_release(aBlock);
    FUN_100006cc8(lVar5,uVar8);
    (**(code **)(local_c0 + 8))(puVar1,lVar2);
    (**(code **)(local_d8 + 8))(lVar11,lStack_d0);
    _swift_release(local_80);
  }
  return;
}

