// rea decompile_all
// name: FUN_1002cca58
// address: 0x1002cca58
// body: available
// range: 0x1002cca58-0x1002ccdd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cca58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_c8 = param_1;
  local_c0 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar12 = (long)&local_e0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar4 + -8);
  lVar16 = lVar12 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar17 = lVar16 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(undefined8 *)(unaff_x20 + _TtC9Alamofire7Request::underlyingQueue);
  plVar13 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar11 = *(undefined8 *)(plVar13[2] + 0x10);
  _os_unfair_lock_lock(uVar11);
  lVar6 = (long)plVar13 + *(long *)(*plVar13 + 0x60);
  _swift_beginAccess(lVar6,auStack_78,0x21,0);
  lVar14 = *(long *)(lVar6 + 0x148);
  lVar9 = *(long *)(lVar14 + 0x10);
  if (lVar9 == 0) {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar17,1,1,lVar3);
    FUN_100040bb4(lVar17,&DAT_100a82c30,&DAT_1008171f0);
    uVar1 = *(undefined8 *)(lVar6 + 0x88);
    uVar2 = *(undefined8 *)(lVar6 + 0x90);
    uVar15 = *(undefined8 *)(lVar6 + 0x98);
    *(undefined8 *)(lVar6 + 0x88) = local_b8;
    *(undefined8 *)(lVar6 + 0x90) = local_c8;
    *(undefined8 *)(lVar6 + 0x98) = local_c0;
    _swift_retain();
    FUN_10028a014(uVar1,uVar2,uVar15);
  }
  else {
    lVar6 = 0;
    local_d8 = lVar4;
    __s10Foundation10URLRequestVMa();
    lVar4 = *(long *)(lVar6 + -8);
    local_e0 = lVar10;
    (**(code **)(lVar4 + 0x10))
              (lVar17,lVar14 + ((ulong)*(byte *)(lVar4 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar4 + 0x48) * (lVar9 + -1),lVar6);
    (**(code **)(lVar4 + 0x38))(lVar17,0,1,lVar6);
    FUN_100040bb4(lVar17,&DAT_100a82c30,&DAT_1008171f0);
    puVar5 = &DAT_1009adae0;
    _swift_allocObject(&DAT_1009adae0,0x28,7);
    uVar1 = local_c0;
    *(undefined8 *)(puVar5 + 0x10) = local_c8;
    *(undefined8 *)(puVar5 + 0x18) = local_c0;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    local_88 = thunk_FUN_1002d3f64;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009adaf8;
    local_80 = puVar5;
    aBlock = __Block_copy(&local_a8);
    _swift_retain(uVar1);
    _swift_retain();
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar12,&local_b0,puVar5,puVar8,lVar3,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar16,lVar12,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_e0 + 8))(lVar12,lVar3);
    (**(code **)(local_d0 + 8))(lVar16,local_d8);
    _swift_release(local_80);
  }
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar11);
  _swift_retain();
  return;
}

