// rea decompile_all
// name: FUN_10014caf4
// address: 0x10014caf4
// body: available
// range: 0x10014caf4-0x10014cdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014caf4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined *local_58;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  lVar8 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  lVar3 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_100150690();
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100152754,param_2,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000031,
                0x8000000100892b30,0xa1,7);
  _swift_beginAccess(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100149be8();
    puVar4 = &DAT_10099efb0;
    local_d0 = param_2;
    _swift_allocObject(&DAT_10099efb0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    local_a0 = thunk_FUN_1000a9f7c;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_10099efc8;
    local_98 = puVar4;
    aBlock = __Block_copy(&local_c0);
    local_d8 = lVar9;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar7,param_3);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar6 = &DAT_100a75aa0;
    local_e0 = lVar2;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_58,puVar4,puVar6,lVar1,puVar5);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar7,lVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_c8 + 8))(lVar8,lVar1);
    (**(code **)(local_d8 + 8))(lVar7,local_e0);
    _swift_release(local_98);
  }
  return;
}

