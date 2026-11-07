// rea decompile_all
// name: FUN_1002900dc
// address: 0x1002900dc
// body: available
// range: 0x1002900dc-0x100290477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002900dc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_e0;
  void *local_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar11 = (long)&local_e0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar9 = *(long *)(lVar3 + -8);
  lVar12 = lVar11 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *param_1;
  if (lVar10 != 0) {
    local_d0 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
    puVar4 = &DAT_1009ab9b0;
    local_c8 = param_1;
    _swift_allocObject(&DAT_1009ab9b0,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar10;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    local_70 = FUN_1002a60dc;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ab9c8;
    local_68 = puVar4;
    local_d8 = __Block_copy(&local_90);
    local_e0 = lVar10;
    FUN_100008184(param_3,param_4);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_58 = puVar6;
    puVar5 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    local_c0 = param_4;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar4 = puVar6;
    FUN_10028abfc();
    param_4 = local_c0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_58,puVar6,puVar4,lVar2,puVar5);
    pvVar7 = local_d8;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,local_d8);
    __Block_release(pvVar7);
    (**(code **)(lVar8 + 8))(lVar11,lVar2);
    (**(code **)(lVar9 + 8))(lVar12,lVar3);
    _swift_release(local_68);
    param_1 = local_c8;
  }
  lVar10 = param_1[1];
  if (!SCARRY8(param_1[2],*(long *)(lVar10 + 0x10))) {
    param_1[2] = param_1[2] + *(long *)(lVar10 + 0x10);
    puVar6 = &DAT_1009ab960;
    _swift_allocObject(&DAT_1009ab960,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar10;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    local_70 = FUN_1002a60a4;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ab978;
    local_68 = puVar6;
    pvVar7 = __Block_copy(&local_90);
    FUN_100008184(param_3,param_4);
    _swift_bridgeObjectRetain(lVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar4 = puVar6;
    FUN_10028abfc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_58,puVar6,puVar4,lVar2,puVar5);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar11,pvVar7);
    __Block_release(pvVar7);
    (**(code **)(lVar8 + 8))(lVar11,lVar2);
    (**(code **)(lVar9 + 8))(lVar12,lVar3);
    _swift_release(local_68);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100290478);
  (*pcVar1)();
}

