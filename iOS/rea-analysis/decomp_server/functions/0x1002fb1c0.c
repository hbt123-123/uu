// rea decompile_all
// name: FUN_1002fb1c0
// address: 0x1002fb1c0
// body: available
// range: 0x1002fb1c0-0x1002fb3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002fb1c0(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_98 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_b0 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar9 = lVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *param_1;
  if (*(long *)(lVar8 + 0x10) != 0) {
    local_a8 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
    puVar3 = &DAT_1009afb00;
    local_a0 = lVar2;
    _swift_allocObject(&DAT_1009afb00,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar8;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    local_70 = FUN_10030d7f0;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009afb18;
    local_68 = puVar3;
    aBlock = __Block_copy(&local_90);
    _swift_bridgeObjectRetain(lVar8);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9,param_3);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar3 = &DAT_100a82c18;
    local_b0 = param_1;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar5 = puVar3;
    FUN_10028abfc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar7,&local_58,puVar3,puVar5,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar7,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_98 + 8))(lVar7,lVar1);
    (**(code **)(lVar6 + 8))(lVar9,local_a0);
    puVar3 = local_68;
    _swift_bridgeObjectRelease(lVar8);
    _swift_release(puVar3);
    *local_b0 = (long)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  return;
}

