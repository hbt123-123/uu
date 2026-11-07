// rea decompile_all
// name: FUN_100114fb8
// address: 0x100114fb8
// body: available
// range: 0x100114fb8-0x100115223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100114fb8(undefined8 param_1,long param_2)

{
  void *aBlock;
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *local_d0;
  undefined *local_c8;
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
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_2 != 0) &&
     (*(char *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::isReading) != '\x01')) {
    *(undefined1 *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::isReading) = 1;
    local_c0 = *(undefined8 *)(param_2 + _TtC14UURemoteServer22ClipboardMobileManager::queue);
    puVar3 = &DAT_10099d818;
    local_b8 = param_2;
    _swift_allocObject(&DAT_10099d818,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,param_2);
    local_88 = FUN_1001166ec;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_10099d8a8;
    local_c8 = puVar3;
    local_80 = puVar3;
    local_d0 = __Block_copy(&local_a8);
    _swift_retain(puVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar3 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar5 = &DAT_100a75aa0;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar6,&local_b0,puVar3,puVar5,lVar1,puVar4);
    aBlock = local_d0;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar7,lVar6,local_d0);
    __Block_release(aBlock);
    (**(code **)(lVar9 + 8))(lVar6,lVar1);
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    puVar3 = local_80;
    _swift_release(local_c8);
    _swift_release(puVar3);
  }
  return;
}

