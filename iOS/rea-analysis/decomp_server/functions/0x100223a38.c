// rea decompile_all
// name: FUN_100223a38
// address: 0x100223a38
// body: available
// range: 0x100223a38-0x100223f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100223a38(undefined8 param_1,ulong param_2,ID param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ID self;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  undefined8 local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  lVar13 = param_4;
  local_b8 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_a8 + 0x40));
  lVar14 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b0 = *(long *)(lVar3 + -8);
  local_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar3 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_3 == 0) ||
     (self = param_3, _swift_dynamicCastObjCClass(param_3,&_OBJC_CLASS___NSHTTPURLResponse),
     self == 0)) {
    puVar7 = &DAT_1009a5d30;
    _swift_allocObject(&DAT_1009a5d30,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = param_6;
    *(undefined8 *)(puVar7 + 0x18) = param_7;
    local_70 = FUN_100223fc0;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a5d48;
    local_68 = puVar7;
    pvVar10 = __Block_copy(&local_90);
    _swift_retain(param_7);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar8 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar9 = &DAT_100a7e2e0;
    FUN_1000d61d8(&DAT_100a7e2e0,&DAT_100a7e2d8,&DAT_100813640);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_98,puVar7,puVar9,lVar2,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar14,pvVar10);
    __Block_release(pvVar10);
  }
  else {
    IVar4 = self;
    local_d0 = param_6;
    local_c0 = param_7;
    FUN_1002236f4();
    _swift_allocObject();
    *(undefined8 *)(IVar4 + 0x18) = 0xc000000000000000;
    *(undefined8 *)(IVar4 + 0x10) = 0;
    *(undefined8 *)(IVar4 + 0x28) = 0;
    *(undefined8 *)(IVar4 + 0x20) = 0x194;
    *(long *)(IVar4 + 0x30) = param_4;
    _swift_errorRetain(param_4);
    IVar5 = _objc_msgSend(self,"statusCode");
    *(ID *)(IVar4 + 0x20) = IVar5;
    *(ID *)(IVar4 + 0x28) = self;
    uVar1 = 0;
    if (param_2 >> 0x3c < 0xf) {
      uVar1 = param_1;
    }
    uVar6 = 0xc000000000000000;
    if (param_2 >> 0x3c < 0xf) {
      uVar6 = param_2;
    }
    *(undefined8 *)(IVar4 + 0x10) = uVar1;
    *(ulong *)(IVar4 + 0x18) = uVar6;
    local_c8 = param_3;
    FUN_10010bd10(param_1,param_2);
    FUN_100006cdc(0,0xc000000000000000);
    local_90 = (undefined *)_objc_msgSend(self,"statusCode");
    puVar7 = PTR___sSiN_100995968;
    puVar11 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    uVar6 = 1;
    puVar12 = puVar11;
    FUN_100075d40(1,puVar7,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    FUN_1000aa024(uVar6,puVar7,puVar12,lVar13,0x32,0xe100000000000000);
    _swift_bridgeObjectRelease(lVar13);
    if ((param_4 == 0) && ((uVar6 & 1) != 0)) {
      puVar7 = &DAT_1009a5dd0;
      _swift_allocObject(&DAT_1009a5dd0,0x28,7);
      *(undefined8 *)(puVar7 + 0x10) = local_d0;
      *(undefined8 *)(puVar7 + 0x18) = local_c0;
      *(ID *)(puVar7 + 0x20) = IVar4;
      local_70 = FUN_1001fa3a4;
      puStack_78 = &DAT_1009a5de8;
      local_68 = puVar7;
    }
    else {
      puVar7 = &DAT_1009a5d80;
      _swift_allocObject(&DAT_1009a5d80,0x28,7);
      *(undefined8 *)(puVar7 + 0x10) = local_d0;
      *(undefined8 *)(puVar7 + 0x18) = local_c0;
      *(ID *)(puVar7 + 0x20) = IVar4;
      local_70 = FUN_100223fe4;
      puStack_78 = &DAT_1009a5d98;
      local_68 = puVar7;
    }
    uVar1 = local_c0;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    pvVar10 = __Block_copy(&local_90);
    _swift_retain(uVar1);
    _swift_retain(IVar4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar3);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar8 = &DAT_100a7e2d0;
    FUN_100005c90(&DAT_100a7e2d0,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar7 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar9 = &DAT_100a7e2e0;
    FUN_1000d61d8(&DAT_100a7e2e0,&DAT_100a7e2d8,&DAT_100813640);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_98,puVar7,puVar9,lVar2,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar14,pvVar10);
    __Block_release(pvVar10);
    _swift_release(IVar4);
  }
  (**(code **)(local_a8 + 8))(lVar14,lVar2);
  (**(code **)(local_b0 + 8))(lVar3,local_a0);
  _swift_release(local_68);
  return;
}

