// rea decompile_all
// name: FUN_1002cc6e8
// address: 0x1002cc6e8
// body: available
// range: 0x1002cc6e8-0x1002cca57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002cc6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
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
  
  lVar3 = 0;
  local_b8 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c0 = *(long *)(lVar3 + -8);
  lVar11 = (long)&local_e0 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_d0 = *(long *)(lVar4 + -8);
  lVar14 = lVar11 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82c30;
  lStack_c8 = lVar4;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar16 = lVar14 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar9[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar4 = (long)plVar9 + *(long *)(*plVar9 + 0x60);
  _swift_beginAccess(lVar4,auStack_78,0x21,0);
  lVar12 = *(long *)(lVar4 + 0x148);
  lVar8 = *(long *)(lVar12 + 0x10);
  if (lVar8 == 0) {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar16,1,1,lVar3);
    FUN_100040bb4(lVar16,&DAT_100a82c30,&DAT_1008171f0);
    uVar1 = *(undefined8 *)(lVar4 + 0x88);
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar13 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(lVar4 + 0x88) = param_1;
    *(undefined8 *)(lVar4 + 0x90) = local_b8;
    *(undefined8 *)(lVar4 + 0x98) = param_3;
    _swift_retain(param_3);
    FUN_10028a014(uVar1,uVar2,uVar13);
  }
  else {
    lVar4 = 0;
    local_d8 = uVar15;
    __s10Foundation10URLRequestVMa();
    lVar10 = *(long *)(lVar4 + -8);
    local_e0 = param_1;
    (**(code **)(lVar10 + 0x10))
              (lVar16,lVar12 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar10 + 0x48) * (lVar8 + -1),lVar4);
    (**(code **)(lVar10 + 0x38))(lVar16,0,1,lVar4);
    FUN_100040bb4(lVar16,&DAT_100a82c30,&DAT_1008171f0);
    puVar5 = &DAT_1009ada90;
    _swift_allocObject(&DAT_1009ada90,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = local_b8;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    local_88 = thunk_FUN_1002d3f64;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009adaa8;
    local_80 = puVar5;
    aBlock = __Block_copy(&local_a8);
    _swift_retain(param_3);
    _swift_retain();
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar7 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar11,&local_b0,puVar5,puVar7,lVar3,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar14,lVar11,aBlock);
    uVar15 = local_d8;
    __Block_release(aBlock);
    (**(code **)(local_c0 + 8))(lVar11,lVar3);
    (**(code **)(local_d0 + 8))(lVar14,lStack_c8);
    _swift_release(local_80);
  }
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar15);
  _swift_retain();
  return;
}

