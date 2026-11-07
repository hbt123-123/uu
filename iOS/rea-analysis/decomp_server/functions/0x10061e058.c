// rea decompile_all
// name: FUN_10061e058
// address: 0x10061e058
// body: available
// range: 0x10061e058-0x10061e423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10061e334 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061e058(undefined *param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_b8 = param_4;
  __s8Dispatch0A3QoSVMa();
  local_a8 = *(long *)(lVar1 + -8);
  lVar11 = (long)&local_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100aaffc0;
  local_b0 = lVar11;
  lStack_a0 = lVar1;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar11 - uVar9;
  lVar1 = lVar13 - uVar9;
  if ((param_2 & 1) == 0) {
    puVar2 = &DAT_1009e0e08;
    _swift_allocObject(&DAT_1009e0e08,0x28,7);
    *(long *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    *(undefined8 *)(puVar2 + 0x20) = param_7;
    if (param_3 == 0) {
      _swift_retain(param_7);
      _swift_retain(param_5);
      FUN_10061e424();
      _swift_release(puVar2);
      return;
    }
    local_c0 = param_3;
    FUN_100607210(local_b8,lVar11);
    lVar4 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,lVar3);
    local_68 = puVar2;
    if ((int)lVar4 == 1) {
      _swift_retain(param_7);
      _swift_retain(param_5);
      FUN_1006070b4(lVar11);
      local_70 = FUN_1006277c0;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009e0e20;
      pvVar5 = __Block_copy(&local_90);
      _swift_retain(puVar2);
      lVar1 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100aaffc8;
      FUN_100005c90(&DAT_100aaffc8,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar7 = &DAT_100aaffd0;
      FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
      puVar8 = &DAT_100aaffd8;
      FUN_10003f840(&DAT_100aaffd8,&DAT_100aaffd0,&DAT_1008484a0,PTR___sSayxGSTsMc_100995898);
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lVar13,&local_98,puVar7,puVar8,lVar3,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar1,lVar13,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar2);
      (**(code **)(lVar10 + 8))(lVar13,lVar3);
      pcVar12 = *(code **)(local_a8 + 8);
      lVar3 = lStack_a0;
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar1,lVar11,lVar3);
      local_70 = FUN_1006277c0;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009e0e48;
      pvVar5 = __Block_copy(&local_90);
      _swift_retain(param_7);
      _swift_retain(param_5);
      _swift_retain(puVar2);
      lVar11 = local_b0;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_b0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar11,lVar1,pvVar5);
      __Block_release(pvVar5);
      _swift_release(puVar2);
      (**(code **)(local_a8 + 8))(lVar11,lStack_a0);
      pcVar12 = *(code **)(lVar10 + 8);
    }
    (*pcVar12)(lVar1,lVar3);
    _swift_release(local_68);
  }
  else {
    local_88 = CONCAT71(local_88._1_7_,1);
    pcVar12 = *(code **)(**(long **)(param_5 + 0x10) + 0x68);
    local_90 = param_1;
    _swift_errorRetain(param_1);
    (*pcVar12)(&local_90);
    FUN_1001803c8(param_1,1);
  }
  return;
}

