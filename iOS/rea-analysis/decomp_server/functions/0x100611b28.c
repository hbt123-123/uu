// rea decompile_all
// name: FUN_100611b28
// address: 0x100611b28
// body: available
// range: 0x100611b28-0x100611e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100611d80 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100611b28(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(local_a0 + 0x40);
  puVar3 = &DAT_100aaffc0;
  local_b0 = auStack_c0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar14 = (long)(auStack_c0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar8 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar14 - uVar9;
  puVar13 = (undefined1 *)(lVar12 - uVar9);
  puVar3 = &DAT_1009df670;
  _swift_allocObject(&DAT_1009df670,0x28,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(code **)(puVar3 + 0x18) = FUN_100008290;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  local_a8 = param_1;
  if (param_1 != 0) {
    local_b8 = lVar2;
    FUN_100607210(param_2,lVar14);
    lVar2 = lVar14;
    (**(code **)(lVar11 + 0x30))(lVar14,1,lVar8);
    local_68 = puVar3;
    if ((int)lVar2 == 1) {
      _swift_retain(param_3);
      FUN_1006070b4(lVar14);
      local_70 = thunk_FUN_100614ce8;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009df688;
      pvVar4 = __Block_copy(&local_90);
      puVar5 = puVar3;
      _swift_retain(puVar3);
      puVar13 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar6 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar7 = puVar6;
      FUN_1006074a4();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar12,&local_98,puVar6,puVar7,lVar8,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,puVar13,lVar12,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar3);
      (**(code **)(lVar11 + 8))(lVar12,lVar8);
      pcVar10 = *(code **)(local_a0 + 8);
      lVar8 = local_b8;
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar13,lVar14,lVar8);
      local_70 = thunk_FUN_100614ce8;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009df6b0;
      pvVar4 = __Block_copy(&local_90);
      _swift_retain(param_3);
      _swift_retain(puVar3);
      puVar1 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,puVar1,puVar13,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar3);
      (**(code **)(local_a0 + 8))(puVar1,local_b8);
      pcVar10 = *(code **)(lVar11 + 8);
    }
    (*pcVar10)(puVar13,lVar8);
    _swift_release(local_68);
    return;
  }
  pcVar10 = *(code **)(**(long **)(param_3 + 0x10) + 0x68);
  _swift_retain(param_3);
  (*pcVar10)();
  _swift_release(puVar3);
  return;
}

