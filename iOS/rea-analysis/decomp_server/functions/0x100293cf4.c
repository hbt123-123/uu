// rea decompile_all
// name: FUN_100293cf4
// address: 0x100293cf4
// body: available
// range: 0x100293cf4-0x100293fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100293cf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long local_120;
  undefined8 local_118;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  local_f0 = param_6;
  local_e8 = param_1;
  local_e0 = param_2;
  local_d8 = param_5;
  local_d0 = param_7;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lVar12 = (long)&local_120 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0 = *(long *)(lVar5 + -8);
  local_c8 = lVar12 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_9 + -8);
  lVar14 = *(long *)(lVar13 + 0x40);
  lVar10 = local_c8 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    local_118 = *(undefined8 *)(param_3 + _TtC9Alamofire7Request::serializationQueue);
    local_120 = param_3;
    (**(code **)(lVar13 + 0x10))(lVar10,param_4,param_9);
    uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar16 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar16 + 7 & 0xfffffffffffffff8;
    puVar6 = &DAT_1009abd98;
    local_110 = lVar12;
    lStack_108 = lVar4;
    local_100 = lVar11;
    local_f8 = lVar5;
    _swift_allocObject(&DAT_1009abd98,uVar15 + 0x30,uVar9 | 7);
    *(long *)(puVar6 + 0x10) = param_9;
    *(undefined8 *)(puVar6 + 0x18) = param_10;
    (**(code **)(lVar13 + 0x20))(puVar6 + uVar16,lVar10,param_9);
    uVar3 = local_d0;
    uVar2 = local_e0;
    uVar1 = local_e8;
    lVar4 = local_120;
    *(undefined8 *)(puVar6 + uVar15) = local_e8;
    *(undefined8 *)((long)(puVar6 + uVar15) + 8) = local_e0;
    *(undefined8 *)(puVar6 + uVar15 + 0x10) = local_d8;
    *(undefined8 *)(puVar6 + uVar15 + 0x18) = local_f0;
    *(undefined8 *)((long)(puVar6 + uVar15 + 0x18) + 8) = local_d0;
    *(long *)(puVar6 + uVar15 + 0x28) = local_120;
    local_90 = FUN_1002a6468;
    local_b0 = PTR___NSConcreteStackBlock_100995490;
    local_a8 = 0x42000000;
    local_a0 = FUN_1000acdb4;
    puStack_98 = &DAT_1009abdb0;
    local_88 = puVar6;
    aBlock = __Block_copy(&local_b0);
    FUN_100008184(uVar1,uVar2);
    _swift_retain(uVar3);
    _swift_retain(lVar4);
    lVar11 = local_c8;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_c8);
    local_b8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = puVar6;
    FUN_10028abfc();
    lVar10 = lStack_108;
    lVar5 = local_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_110,&local_b8,puVar6,puVar8,lStack_108,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar11,lVar5,aBlock);
    __Block_release(aBlock);
    _swift_release(lVar4);
    (**(code **)(local_100 + 8))(lVar5,lVar10);
    (**(code **)(local_c0 + 8))(lVar11,local_f8);
    _swift_release(local_88);
  }
  return;
}

