// rea decompile_all
// name: FUN_1002fc7f4
// address: 0x1002fc7f4
// body: available
// range: 0x1002fc7f4-0x1002fcc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002fc7f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  long lVar4;
  void *pvVar5;
  ID self;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double local_100 [2];
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  double local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  lVar2 = 0;
  dVar19 = param_1;
  local_e8 = param_6;
  local_e0 = param_5;
  local_d8 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar2 + -8);
  lVar16 = (long)local_100 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  dVar3 = 0.0;
  local_b8 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)((long)dVar3 + -8);
  lVar17 = lVar16 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c0 = dVar3;
  FUN_10030cc54();
  lVar12 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  uVar10 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar17 - uVar10;
  lVar18 = lVar15 - uVar10;
  dVar3 = 0.0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)((long)dVar3 + -8);
  lVar2 = lVar18 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    local_100[0] = dVar3;
    local_100[1] = (double)param_4;
    local_f0 = lVar11;
    __s10Foundation4DateVACycfC(lVar2);
    self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    NSProcessInfo::systemUptime(self,"systemUptime");
    dVar3 = local_100[0];
    pcVar9 = *(code **)(lVar11 + 0x10);
    (*pcVar9)(lVar18,local_e8,local_100[0]);
    (*pcVar9)(lVar18 + *(int *)(lVar4 + 0x14),lVar2,dVar3);
    *(double *)(lVar18 + *(int *)(lVar4 + 0x18)) = dVar19 - param_1;
    FUN_100082394(lVar18,lVar15,FUN_10030cc54);
    uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar13 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
    puVar6 = &DAT_1009afe48;
    _swift_allocObject(&DAT_1009afe48,uVar13 + lVar14,uVar10 | 7);
    uVar1 = local_e0;
    *(double *)(puVar6 + 0x10) = local_100[1];
    *(undefined8 *)(puVar6 + 0x18) = local_e0;
    FUN_1000823d8(lVar15,puVar6 + uVar13,FUN_10030cc54);
    local_88 = FUN_10030e8d8;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009afe60;
    local_80 = puVar6;
    pvVar5 = __Block_copy(&local_a8);
    _swift_retain(uVar1);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = puVar6;
    FUN_10028abfc();
    lVar4 = local_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar16,&local_b0,puVar6,puVar8,local_b8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar17,lVar16,pvVar5);
    __Block_release(pvVar5);
    (**(code **)(local_c8 + 8))(lVar16,lVar4);
    (**(code **)(local_d0 + 8))(lVar17,local_c0);
    FUN_1000d27dc(lVar18,FUN_10030cc54);
    pcVar9 = *(code **)(local_f0 + 8);
  }
  else {
    puVar6 = &DAT_1009afe98;
    _swift_allocObject(&DAT_1009afe98,0x28,7);
    uVar1 = local_e0;
    *(undefined8 *)(puVar6 + 0x10) = param_4;
    *(undefined8 *)(puVar6 + 0x18) = local_e0;
    *(long *)(puVar6 + 0x20) = param_2;
    local_88 = FUN_10030e94c;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009afeb0;
    local_80 = puVar6;
    pvVar5 = __Block_copy(&local_a8);
    _swift_errorRetain(param_2);
    _swift_retain(uVar1);
    _swift_errorRetain(param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar17);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = puVar6;
    FUN_10028abfc();
    lVar2 = local_b8;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar16,&local_b0,puVar6,puVar8,local_b8,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar17,lVar16,pvVar5);
    __Block_release(pvVar5);
    _swift_errorRelease(param_2);
    (**(code **)(local_c8 + 8))(lVar16,lVar2);
    pcVar9 = *(code **)(local_d0 + 8);
    lVar2 = lVar17;
    dVar3 = local_c0;
  }
  (*pcVar9)(lVar2,dVar3);
  _swift_release(local_80);
  return;
}

