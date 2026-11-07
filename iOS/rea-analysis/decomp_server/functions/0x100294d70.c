// rea decompile_all
// name: FUN_100294d70
// address: 0x100294d70
// body: available
// range: 0x100294d70-0x100294fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100294d70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  local_c0 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar6 = (long)&local_d0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar7 = lVar6 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    puVar3 = &DAT_1009abbb8;
    local_d0 = lVar8;
    local_c8 = lVar2;
    _swift_allocObject(&DAT_1009abbb8,0x40,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = local_c0;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    *(long *)(puVar3 + 0x38) = param_3;
    local_88 = FUN_1002a628c;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009abbd0;
    local_80 = puVar3;
    aBlock = __Block_copy(&local_a8);
    FUN_100008184(param_1,param_2);
    _swift_retain(param_6);
    _swift_retain(param_3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar3 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar5 = puVar3;
    FUN_10028abfc();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar6,&local_b0,puVar3,puVar5,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar7,lVar6,aBlock);
    __Block_release(aBlock);
    _swift_release(param_3);
    (**(code **)(local_d0 + 8))(lVar6,lVar1);
    (**(code **)(local_b8 + 8))(lVar7,local_c8);
    _swift_release(local_80);
  }
  return;
}

