// rea decompile_all
// name: FUN_100370d9c
// address: 0x100370d9c
// body: available
// range: 0x100370d9c-0x100370fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100370d9c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar1 + -8);
  lVar6 = (long)&local_c0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar8 = lVar6 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100361acc(0);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    puVar3 = &DAT_1009b5470;
    local_b0 = lVar2;
    _swift_allocObject(&DAT_1009b5470,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    local_88 = FUN_100372ea0;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009b5488;
    local_80 = puVar3;
    aBlock = __Block_copy(&local_a8);
    local_c0 = param_2;
    local_b8 = lVar9;
    _swift_release(local_80);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar8);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a889a8;
    FUN_100005c90(&DAT_100a889a8,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar3 = &DAT_100a889b0;
    FUN_100004bb4(&DAT_100a889b0,&DAT_10081cc60);
    puVar5 = &DAT_100a889b8;
    FUN_1000d61d8(&DAT_100a889b8,&DAT_100a889b0,&DAT_10081cc60);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar6,&local_a8,puVar3,puVar5,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar8,lVar6,aBlock);
    __Block_release(aBlock);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
    (**(code **)(local_b8 + 8))(lVar8,local_b0);
  }
  return;
}

