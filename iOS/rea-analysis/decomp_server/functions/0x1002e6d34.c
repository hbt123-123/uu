// rea decompile_all
// name: FUN_1002e6d34
// address: 0x1002e6d34
// body: available
// range: 0x1002e6d34-0x1002e701f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e6d34(long param_1,long param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  uint local_d4;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar2 = 0;
  local_d4 = param_3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_100 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_f0 = lVar9;
  local_e0 = lVar2;
  __s8Dispatch0A3QoSVMa();
  local_100 = *(long *)(lVar3 + -8);
  lVar9 = lVar9 - (*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_f8 = lVar3;
  FUN_1002c76a8();
  pcVar12 = (char *)(lVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar2 = *(long *)(param_1 + 0xd0);
  uVar10 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar10);
  _swift_beginAccess(lVar2 + 0x18,auStack_80,0x21,0);
  plVar8 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar11 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar11);
  lVar2 = *(long *)(*plVar8 + 0x60);
  _swift_beginAccess((long)plVar8 + lVar2,auStack_98,0,0);
  FUN_100082394((long)plVar8 + lVar2,pcVar12,FUN_1002c76a8);
  cVar1 = *pcVar12;
  FUN_1000d27dc(pcVar12,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar11);
  if (cVar1 != '\x03') {
    _swift_retain(param_2);
    ppuVar4 = &local_c8;
    FUN_10034cf08(ppuVar4,param_2);
    _swift_release(local_c8);
    if ((((ulong)ppuVar4 & 1) != 0) || ((local_d4 & 1) != 0)) {
      puVar5 = &DAT_1009aeff0;
      _swift_allocObject(&DAT_1009aeff0,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(long *)(puVar5 + 0x18) = param_1;
      local_a8 = FUN_1002f1140;
      local_c8 = PTR___NSConcreteStackBlock_100995490;
      local_c0 = 0x42000000;
      local_b8 = FUN_1000acdb4;
      puStack_b0 = &DAT_1009af008;
      local_a0 = puVar5;
      aBlock = __Block_copy(&local_c8);
      _swift_retain(param_2);
      _swift_retain(param_1);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
      local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100a82c10;
      FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar7 = &DAT_100a82c20;
      FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
      lVar3 = local_e0;
      lVar2 = local_f0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_f0,&local_d0,puVar5,puVar7,local_e0,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar9,lVar2,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_e8 + 8))(lVar2,lVar3);
      (**(code **)(local_100 + 8))(lVar9,lStack_f8);
      _swift_release(local_a0);
    }
  }
  _swift_endAccess(auStack_80);
  _os_unfair_lock_unlock(uVar10);
  return;
}

