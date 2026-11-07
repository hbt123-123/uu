// rea decompile_all
// name: FUN_10031eed8
// address: 0x10031eed8
// body: available
// range: 0x10031eed8-0x10031f303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031eed8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar4 + -8);
  lVar14 = (long)&local_e0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_c0 = lVar4;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar5 + -8);
  lVar18 = lVar14 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100a82c30;
  lStack_d0 = lVar5;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar18 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_unownedRetainStrong(param_2);
  _swift_unownedRetainStrong();
  local_b8 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
  _swift_release(param_2);
  puVar6 = &DAT_100a85c70;
  FUN_100004bb4(&DAT_100a85c70,&DAT_10081a2a0);
  lVar4 = *(long *)(puVar6 + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  lVar19 = lVar11 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar19,param_1,puVar6);
  uVar10 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar13 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar7 = &DAT_1009b2110;
  _swift_allocObject(&DAT_1009b2110,uVar13 + lVar5,uVar10 | 7);
  (**(code **)(lVar4 + 0x20))(puVar7 + uVar13,lVar19,puVar6);
  plVar12 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar16 = *(undefined8 *)(plVar12[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  lVar4 = (long)plVar12 + *(long *)(*plVar12 + 0x60);
  _swift_beginAccess(lVar4,auStack_78,0x21,0);
  lVar19 = *(long *)(lVar4 + 0x148);
  lVar5 = *(long *)(lVar19 + 0x10);
  if (lVar5 == 0) {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar11,1,1,lVar5);
    FUN_100040bb4(lVar11,&DAT_100a82c30,&DAT_1008171f0);
    uVar3 = local_b8;
    uVar1 = *(undefined8 *)(lVar4 + 0x88);
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar15 = *(undefined8 *)(lVar4 + 0x98);
    _swift_retain(puVar7);
    FUN_10028a014(uVar1,uVar2,uVar15);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    *(code **)(lVar4 + 0x90) = FUN_10032da3c;
    *(undefined **)(lVar4 + 0x98) = puVar7;
  }
  else {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar17 = *(long *)(lVar4 + -8);
    local_e0 = uVar16;
    (**(code **)(lVar17 + 0x10))
              (lVar11,lVar19 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar17 + 0x48) * (lVar5 + -1),lVar4);
    (**(code **)(lVar17 + 0x38))(lVar11,0,1,lVar4);
    FUN_100040bb4(lVar11,&DAT_100a82c30,&DAT_1008171f0);
    puVar6 = &DAT_1009b2138;
    _swift_allocObject(&DAT_1009b2138,0x28,7);
    *(code **)(puVar6 + 0x10) = FUN_10032da3c;
    *(undefined **)(puVar6 + 0x18) = puVar7;
    *(long *)(puVar6 + 0x20) = param_2;
    local_88 = FUN_10032dac0;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009b2150;
    local_80 = puVar6;
    aBlock = __Block_copy(&local_a8);
    _swift_retain(puVar7);
    _swift_retain(param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar8 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar9 = &DAT_100a82c20;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    lVar4 = local_c0;
    uVar16 = local_e0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar14,&local_b0,puVar6,puVar9,local_c0,puVar8);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar18,lVar14,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_c8 + 8))(lVar14,lVar4);
    (**(code **)(local_d8 + 8))(lVar18,lStack_d0);
    _swift_release(local_80);
  }
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar16);
  _swift_release(param_2);
  _swift_release(puVar7);
  return;
}

