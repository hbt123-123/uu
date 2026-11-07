// rea decompile_all
// name: FUN_100244cd0
// address: 0x100244cd0
// body: available
// range: 0x100244cd0-0x100245077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100244cd0(byte param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *aBlock;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_b0 = param_7;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DAT_100b363e9 = param_1;
  if ((param_1 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (DAT_100a7ddc8 != -1) {
        _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
      }
      lVar1 = DAT_100b362c8;
      _swift_beginAccess(DAT_100b362c8 + 0x10,&local_a8,0x21,0);
      _pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar1 + 0x10));
      _swift_endAccess(&local_a8);
      uVar2 = DAT_100b363d0;
      DAT_100b363c8 = 0;
      DAT_100b363d0 = 0;
      _swift_bridgeObjectRelease(uVar2);
      _swift_beginAccess(lVar1 + 0x10,&local_a8,0x21,0);
      _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar1 + 0x10));
      _swift_endAccess(&local_a8);
      _swift_beginAccess(&DAT_100a7fa48,auStack_78,1,0);
      DAT_100a7fa48 = 0;
      FUN_10021e878(0);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      local_88 = thunk_FUN_10024507c;
      local_80 = (undefined *)0x0;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a7aa0;
      puVar5 = __Block_copy(&local_a8);
      aBlock = puVar5;
    }
    else {
      if (DAT_100a7ddc8 != -1) {
        _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
      }
      lVar1 = DAT_100b362c8;
      _swift_beginAccess(DAT_100b362c8 + 0x10,&local_a8,0x21,0);
      _pthread_rwlock_wrlock((pthread_rwlock_t *)(lVar1 + 0x10));
      _swift_endAccess(&local_a8);
      uVar2 = DAT_100b363d0;
      DAT_100b363c8 = param_2;
      DAT_100b363d0 = param_3;
      _swift_bridgeObjectRelease(uVar2);
      _swift_beginAccess(lVar1 + 0x10,&local_a8,0x21,0);
      _swift_bridgeObjectRetain(param_3);
      _pthread_rwlock_unlock((pthread_rwlock_t *)(lVar1 + 0x10));
      _swift_endAccess(&local_a8);
      FUN_10021e878(0);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar5 = &DAT_1009a7ad8;
      _swift_allocObject(&DAT_1009a7ad8,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = param_2;
      *(undefined8 *)(puVar5 + 0x18) = param_3;
      *(undefined8 *)(puVar5 + 0x20) = param_6;
      local_88 = FUN_100247cc4;
      local_a8 = PTR___NSConcreteStackBlock_100995490;
      local_a0 = 0x42000000;
      local_98 = FUN_1000acdb4;
      puStack_90 = &DAT_1009a7af0;
      local_80 = puVar5;
      aBlock = __Block_copy(&local_a8);
      puVar5 = local_80;
      _swift_bridgeObjectRetain(param_3);
      _swift_bridgeObjectRetain(param_6);
      _swift_release(puVar5);
    }
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10021e8d8();
    puVar6 = &DAT_100a7e2d8;
    FUN_100004bb4(&DAT_100a7e2d8,&DAT_100813640);
    puVar7 = puVar6;
    FUN_10021e91c();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar9,&local_a8,puVar6,puVar7,lVar3,puVar5);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,puVar9,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b8 + 8))(puVar9,lVar3);
    (**(code **)(lVar8 + 8))(lVar10,lVar4);
  }
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
  return;
}

