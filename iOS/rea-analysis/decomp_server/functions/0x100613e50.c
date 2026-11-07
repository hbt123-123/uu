// rea decompile_all
// name: FUN_100613e50
// address: 0x100613e50
// body: available
// range: 0x100613e50-0x100614203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100614100 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100613e50(long param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  long lStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  local_c0 = param_2;
  __s8Dispatch0A3QoSVMa();
  local_a8 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(local_a8 + 0x40);
  puVar3 = &DAT_100aaffc0;
  local_b0 = auStack_d0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar2;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar13 = (long)(auStack_d0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar2 + -8);
  uVar11 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = lVar13 - uVar11;
  puVar14 = (undefined1 *)(local_c8 - uVar11);
  puVar3 = &DAT_1009df8c8;
  _swift_allocObject(&DAT_1009df8c8,0x20,7);
  *(code **)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  puVar4 = &DAT_1009df8f0;
  _swift_allocObject(&DAT_1009df8f0,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_100102840;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = param_3;
  local_b8 = param_1;
  if (param_1 != 0) {
    FUN_100607210(local_c0,lVar13);
    lVar5 = lVar13;
    (**(code **)(lVar10 + 0x30))(lVar13,1,lVar2);
    local_68 = puVar4;
    if ((int)lVar5 == 1) {
      _swift_retain(param_5);
      _swift_retain(param_3);
      _swift_retain(puVar3);
      FUN_1006070b4(lVar13);
      local_70 = thunk_FUN_1006150fc;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009df908;
      pvVar6 = __Block_copy(&local_90);
      puVar7 = puVar4;
      _swift_retain(puVar4);
      puVar14 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar8 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar9 = puVar8;
      FUN_1006074a4();
      lVar13 = local_c8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_c8,&local_98,puVar8,puVar9,lVar2,puVar7);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,puVar14,lVar13,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(lVar10 + 8))(lVar13,lVar2);
      pcVar12 = *(code **)(local_a8 + 8);
      lVar2 = lStack_a0;
    }
    else {
      (**(code **)(lVar10 + 0x20))(puVar14,lVar13,lVar2);
      local_70 = thunk_FUN_1006150fc;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009df930;
      pvVar6 = __Block_copy(&local_90);
      _swift_retain(param_5);
      _swift_retain(param_3);
      _swift_retain(puVar3);
      _swift_retain(puVar4);
      puVar1 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,puVar1,puVar14,pvVar6);
      __Block_release(pvVar6);
      _swift_release(puVar4);
      (**(code **)(local_a8 + 8))(puVar1,lStack_a0);
      pcVar12 = *(code **)(lVar10 + 8);
    }
    (*pcVar12)(puVar14,lVar2);
    puVar4 = local_68;
    _swift_release(puVar3);
    _swift_release(puVar4);
    return;
  }
  _swift_retain(param_5);
  _swift_retain(param_3);
  _swift_retain(puVar3);
  (*param_4)();
  (**(code **)(**(long **)(param_3 + 0x10) + 0x68))();
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

