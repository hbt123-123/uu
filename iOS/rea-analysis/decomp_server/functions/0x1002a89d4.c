// rea decompile_all
// name: FUN_1002a89d4
// address: 0x1002a89d4
// body: available
// range: 0x1002a89d4-0x1002a8c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a89d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined8 local_c0;
  code *pcStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  local_e8 = param_3;
  local_c0 = param_5;
  pcStack_b8 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_c8 = *(long *)(lVar3 + -8);
  puVar10 = auStack_f0 + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_d8 = *(long *)(lVar4 + -8);
  lVar11 = (long)puVar10 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(param_6 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar8 = *(undefined8 *)(plVar9[2] + 0x10);
  lStack_d0 = lVar4;
  _os_unfair_lock_lock(uVar8);
  puVar6 = (undefined8 *)((long)plVar9 + *(long *)(*plVar9 + 0x60));
  _swift_beginAccess(puVar6,auStack_78,1,0);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  *puVar6 = param_1;
  puVar6[1] = param_2;
  local_e0 = param_2;
  FUN_10010bd10(param_1,param_2);
  FUN_100006cc8(uVar1,uVar2);
  _os_unfair_lock_unlock(uVar8);
  puVar5 = &DAT_1009ace70;
  _swift_allocObject(&DAT_1009ace70,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = local_e8;
  *(long *)(puVar5 + 0x18) = param_6;
  local_88 = FUN_1002bb4c8;
  local_a8 = PTR___NSConcreteStackBlock_100995490;
  local_a0 = 0x42000000;
  local_98 = FUN_1000acdb4;
  puStack_90 = &DAT_1009ace88;
  local_80 = puVar5;
  aBlock = __Block_copy(&local_a8);
  _swift_retain(param_6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar6 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar5;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar10,&local_b0,puVar5,puVar7,lVar3,puVar6);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,puVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_c8 + 8))(puVar10,lVar3);
  (**(code **)(local_d8 + 8))(lVar11,lStack_d0);
  _swift_release(local_80);
  (*pcStack_b8)(param_1,local_e0);
  return;
}

