// rea decompile_all
// name: FUN_10026bed0
// address: 0x10026bed0
// body: available
// range: 0x10026bed0-0x10026c457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_10026bed0(undefined *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,code *param_7,undefined4 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  dispatch_semaphore_t pdVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  double dVar15;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  ulong local_c8;
  code *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  local_c8 = CONCAT44(local_c8._4_4_,param_8);
  lVar3 = 0;
  local_d0 = param_6;
  local_c0 = param_7;
  __s8Dispatch0A4TimeVMa();
  local_120 = *(long *)(lVar3 + -8);
  uVar11 = *(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_120 - uVar11;
  lVar12 = lVar14 - uVar11;
  lVar4 = 0;
  local_e8 = lVar12;
  local_e0 = lVar3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_100 = *(long *)(lVar4 + -8);
  lVar12 = lVar12 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_108 = lVar12;
  local_f0 = lVar4;
  __s8Dispatch0A3QoSVMa();
  local_110 = *(long *)(lVar3 + -8);
  lVar12 = lVar12 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_118 = lVar12;
  local_f8 = lVar3;
  __s10Foundation10URLRequestVMa();
  local_d8 = *(long *)(lVar4 + -8);
  lVar12 = lVar12 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    param_3 = *(ulong *)(unaff_x20 + 0x60);
  }
  pcVar5 = (code *)0x0;
  local_b8 = lVar4;
  FUN_100264ccc();
  _swift_allocObject();
  pcVar5[0x28] = (code)0x0;
  pdVar6 = _dispatch_semaphore_create(1);
  *(dispatch_semaphore_t *)(pcVar5 + 0x30) = pdVar6;
  *(undefined8 *)(pcVar5 + 0x18) = 0;
  *(undefined8 *)(pcVar5 + 0x20) = 0;
  *(code **)(pcVar5 + 0x10) = FUN_100008290;
  FUN_10026940c(lVar12,param_2,param_1);
  pcVar2 = pcVar5;
  FUN_100268ac8(pcVar5,param_1,param_4,param_5,local_d0,*(undefined8 *)(unaff_x20 + 0x48),lVar12);
  lVar3 = local_b8;
  if ((local_c8 & 1) == 0) {
    dVar15 = (double)local_c0 * 1000000000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10026c3fc);
      (*pcVar2)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10026c400);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10026c404);
      (*pcVar2)();
    }
    __s8Dispatch0A4TimeV3nowACyFZ(lVar14);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_e8,(double)(long)dVar15 / 1000000000.0,lVar14);
    pcVar13 = *(code **)(local_120 + 8);
    (*pcVar13)(lVar14,local_e0);
    uVar11 = param_3;
    local_c0 = pcVar13;
    if (param_3 == 0) {
      uVar11 = 0;
      FUN_100265294();
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    }
    local_c8 = uVar11;
    puVar9 = &DAT_1009a91e0;
    _swift_allocObject(&DAT_1009a91e0,0x20,7);
    *(code **)(puVar9 + 0x10) = pcVar2;
    *(undefined **)(puVar9 + 0x18) = param_1;
    local_88 = FUN_100102840;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009a91f8;
    local_80 = puVar9;
    pvVar7 = __Block_copy(&local_a8);
    _swift_retain(param_1);
    lVar4 = local_118;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118,param_3);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10026b624();
    puVar9 = &DAT_100a81398;
    FUN_100004bb4(&DAT_100a81398,&DAT_100815530);
    puVar10 = puVar9;
    FUN_10026c568();
    lVar1 = local_f0;
    lVar14 = local_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_108,&local_b0,puVar9,puVar10,local_f0,param_3);
    lVar3 = local_e8;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (local_e8,lVar4,lVar14,pvVar7);
    __Block_release(pvVar7);
    _swift_release(param_1);
    (**(code **)(local_100 + 8))(lVar14,lVar1);
    (**(code **)(local_110 + 8))(lVar4,local_f8);
    lVar4 = local_e0;
    pcVar2 = local_c0;
  }
  else {
    if (local_c0 == (code *)0x0) {
      *(undefined4 *)(lVar12 + -8) = 0;
      *(undefined8 *)(lVar12 + -0x10) = 0x9a;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000038,0x80000001008a85a0,"Moya/MoyaProvider.swift"
                 ,0x17,2);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10026c458);
      (*pcVar2)();
    }
    if (param_3 == 0) {
      (*pcVar2)();
      _swift_release(param_1);
      (**(code **)(local_d8 + 8))(lVar12,lVar3);
      return pcVar5;
    }
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009a9220;
    local_88 = pcVar2;
    local_80 = param_1;
    pvVar7 = __Block_copy(&local_a8);
    puVar10 = param_1;
    _swift_retain(param_1);
    lVar3 = local_118;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_118);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10026b624();
    puVar9 = &DAT_100a81398;
    FUN_100004bb4(&DAT_100a81398,&DAT_100815530);
    puVar8 = puVar9;
    FUN_10026c568();
    lVar14 = local_f0;
    lVar4 = local_108;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_108,&local_b0,puVar9,puVar8,local_f0,puVar10);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar3,lVar4,pvVar7);
    __Block_release(pvVar7);
    _swift_release(param_1);
    (**(code **)(local_100 + 8))(lVar4,lVar14);
    lVar4 = local_f8;
    pcVar2 = *(code **)(local_110 + 8);
  }
  (*pcVar2)(lVar3,lVar4);
  (**(code **)(local_d8 + 8))(lVar12,local_b8);
  _swift_release(local_80);
  return pcVar5;
}

