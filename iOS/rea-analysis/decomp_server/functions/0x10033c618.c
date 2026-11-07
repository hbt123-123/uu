// rea decompile_all
// name: FUN_10033c618
// address: 0x10033c618
// body: available
// range: 0x10033c618-0x10033c94f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033c94c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033c618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  code *local_a0;
  code *pcStack_98;
  code *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_f8 = *(long *)(lVar2 + -8);
  lVar12 = (long)&local_110 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_100 = lVar12;
  local_f0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_110 = *(long *)(lVar3 + -8);
  lVar12 = lVar12 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_108 = lVar3;
  (**(code **)(*unaff_x20 + 0xa0))();
  lVar2 = unaff_x20[4];
  uVar13 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar13);
  _swift_beginAccess(lVar2 + 0x18,auStack_88,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  uVar11 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  _swift_retain(param_3);
  FUN_10007ed2c(uVar11,uVar1);
  _os_unfair_lock_unlock(uVar13);
  puVar4 = (undefined *)0x0;
  FUN_10033cf84();
  _swift_allocObject();
  _swift_weakInit(puVar4 + 0x10,0);
  _swift_weakAssign(puVar4 + 0x10);
  local_b0 = 0;
  local_a0 = _swift_retain;
  pcStack_98 = _swift_release;
  local_90 = thunk_FUN_10033c958;
  uVar6 = unaff_x20[3];
  uVar5 = uVar6;
  puStack_a8 = puVar4;
  _SCNetworkReachabilitySetDispatchQueue(uVar6,unaff_x20[2]);
  _SCNetworkReachabilitySetCallback(uVar6,FUN_10033cb6c,&local_b0);
  uVar7 = uVar6;
  (**(code **)(*unaff_x20 + 0x80))();
  if ((uVar7 >> 0x20 & 1) == 0) {
    puVar8 = &DAT_1009b2bf8;
    _swift_allocObject(&DAT_1009b2bf8,0x1c,7);
    *(long **)(puVar8 + 0x10) = unaff_x20;
    *(int *)(puVar8 + 0x18) = (int)uVar7;
    local_c0 = FUN_10033cfc8;
    local_e0 = PTR___NSConcreteStackBlock_100995490;
    local_d8 = 0x42000000;
    local_d0 = FUN_1000acdb4;
    puStack_c8 = &DAT_1009b2c10;
    local_b8 = puVar8;
    aBlock = __Block_copy(&local_e0);
    _swift_retain();
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    local_e8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar8 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar10 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    lVar3 = local_f0;
    lVar2 = local_100;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_100,&local_e8,puVar8,puVar10,local_f0,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar12,lVar2,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_f8 + 8))(lVar2,lVar3);
    (**(code **)(local_110 + 8))(lVar12,lStack_108);
    _swift_release(puVar4);
    puVar4 = local_b8;
  }
  _swift_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((uVar5 & 0xff) != 0 && (int)uVar6 != 0);
}

