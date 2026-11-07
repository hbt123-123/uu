// rea decompile_all
// name: FUN_10060b61c
// address: 0x10060b61c
// body: available
// range: 0x10060b61c-0x10060b9a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060b8b0 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10060b61c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_a8 = param_4;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar1 + -8);
  lVar11 = (long)&local_c0 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100aaffc0;
  local_a0 = lVar11;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar11 - uVar9;
  lVar13 = lVar12 - uVar9;
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar15 = *param_1;
    puVar2 = &DAT_1009de7a0;
    local_b0 = lVar14;
    _swift_allocObject(&DAT_1009de7a0,0x30,7);
    *(code **)(puVar2 + 0x10) = FUN_100008290;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = uVar15;
    *(long *)(puVar2 + 0x28) = param_2;
    if (param_3 == 0) {
      pcVar10 = *(code **)(**(long **)(param_2 + 0x10) + 0x68);
      _swift_retain(param_2);
      FUN_100330f30(uVar15,1);
      (*pcVar10)();
      _swift_release(puVar2);
      return;
    }
    local_c0 = param_3;
    local_b8 = lVar1;
    FUN_100607210(local_a8,lVar11);
    lVar1 = lVar11;
    (**(code **)(lVar8 + 0x30))(lVar11,1,lVar3);
    local_68 = puVar2;
    if ((int)lVar1 == 1) {
      _swift_retain(param_2);
      FUN_100330f30(uVar15,1);
      FUN_1006070b4(lVar11);
      local_70 = thunk_FUN_10060cc3c;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009de7b8;
      pvVar4 = __Block_copy(&local_90);
      puVar5 = puVar2;
      _swift_retain(puVar2);
      lVar13 = local_a0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a0);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100607460();
      puVar6 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar7 = puVar6;
      FUN_1006074a4();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar12,&local_98,puVar6,puVar7,lVar3,puVar5);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,lVar12,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar2);
      (**(code **)(lVar8 + 8))(lVar12,lVar3);
      pcVar10 = *(code **)(local_b0 + 8);
      lVar3 = local_b8;
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar13,lVar11,lVar3);
      local_70 = thunk_FUN_10060cc3c;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009de7e0;
      pvVar4 = __Block_copy(&local_90);
      _swift_retain(param_2);
      FUN_100330f30(uVar15,1);
      _swift_retain(puVar2);
      lVar1 = local_a0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_a0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar1,lVar13,pvVar4);
      __Block_release(pvVar4);
      _swift_release(puVar2);
      (**(code **)(local_b0 + 8))(lVar1,local_b8);
      pcVar10 = *(code **)(lVar8 + 8);
    }
    (*pcVar10)(lVar13,lVar3);
    _swift_release(local_68);
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x68))();
  }
  return;
}

