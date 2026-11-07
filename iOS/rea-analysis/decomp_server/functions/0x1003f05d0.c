// rea decompile_all
// name: FUN_1003f05d0
// address: 0x1003f05d0
// body: available
// range: 0x1003f05d0-0x1003f0993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f05d0(undefined8 param_1,long *param_2,byte param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  void *aBlock;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long alStack_110 [4];
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 local_88 [8];
  ulong uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  lVar11 = *param_2;
  lVar5 = 0;
  local_e0 = param_5;
  local_d8 = param_7;
  local_d0 = param_8;
  local_c8 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f0 = *(long *)(lVar5 + -8);
  local_e8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f0 + 0x40));
  lVar13 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  alStack_110[3] = lVar13;
  __s8Dispatch0A3QoSVMa();
  alStack_110[1] = *(long *)(lVar5 + -8);
  alStack_110[2] = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(alStack_110[1] + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar11 + 0x50);
  lVar5 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  lVar11 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0;
  FUN_100616300(0,lVar14);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar12 = (undefined8 *)(lVar11 - extraout_x12);
  (**(code **)(extraout_x8_02 + 0x10))(puVar12,param_1,uVar6);
  puVar7 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,uVar6);
  if ((int)puVar7 != 1) {
    (**(code **)(lVar5 + 0x20))(lVar11,puVar12,lVar14);
    FUN_10061630c(lVar11);
    (**(code **)(lVar5 + 8))(lVar11,lVar14);
    return;
  }
  uVar6 = *puVar12;
  if ((param_3 & 1) != 0) {
    _swift_getErrorValue(uVar6,auStack_70,local_88);
    FUN_10060f8ac(uStack_80,local_78);
    if ((uStack_80 & 1) != 0) {
      FUN_100616260(uVar6);
      goto LAB_1003f096c;
    }
  }
  puVar8 = &DAT_1009bb7f8;
  _swift_allocObject(&DAT_1009bb7f8,0x49,7);
  uVar4 = local_c8;
  uVar3 = local_d0;
  uVar2 = local_d8;
  uVar1 = local_e0;
  *(undefined8 *)(puVar8 + 0x10) = local_e0;
  *(undefined8 *)(puVar8 + 0x18) = local_c8;
  *(undefined8 *)(puVar8 + 0x20) = uVar6;
  *(long **)(puVar8 + 0x28) = param_2;
  *(long *)(puVar8 + 0x30) = param_4;
  *(undefined8 *)(puVar8 + 0x38) = local_d8;
  *(undefined8 *)(puVar8 + 0x40) = local_d0;
  puVar8[0x48] = param_3 & 1;
  if (param_4 != 0) {
    local_98 = FUN_1003f22d8;
    local_b8 = PTR___NSConcreteStackBlock_100995490;
    local_b0 = 0x42000000;
    local_a8 = FUN_1000acdb4;
    puStack_a0 = &DAT_1009bb810;
    local_90 = puVar8;
    aBlock = __Block_copy(&local_b8);
    _swift_errorRetain(uVar6);
    _swift_retain(uVar3);
    _swift_retain(param_2);
    _swift_retain(uVar4);
    puVar9 = puVar8;
    _swift_retain(puVar8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar10 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    lVar11 = local_e8;
    lVar5 = alStack_110[3];
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (alStack_110[3],&local_c0,puVar10,puVar7,local_e8,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,lVar5,aBlock);
    __Block_release(aBlock);
    _swift_release(puVar8);
    _swift_errorRelease(uVar6);
    (**(code **)(local_f0 + 8))(lVar5,lVar11);
    (**(code **)(alStack_110[1] + 8))(lVar13,alStack_110[2]);
    _swift_release(local_90);
    return;
  }
  _swift_errorRetain(uVar6);
  _swift_retain(uVar3);
  _swift_retain(param_2);
  _swift_retain(uVar4);
  FUN_1003f0994(uVar1,uVar4,uVar6,param_2,0,uVar2,uVar3,param_3 & 1);
  _swift_release(puVar8);
LAB_1003f096c:
  _swift_errorRelease(uVar6);
  return;
}

