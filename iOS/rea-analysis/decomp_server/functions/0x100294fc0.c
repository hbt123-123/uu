// rea decompile_all
// name: FUN_100294fc0
// address: 0x100294fc0
// body: available
// range: 0x100294fc0-0x1002952cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100294fc0(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *local_80;
  long lStack_78;
  
  lVar3 = 0;
  local_108 = param_4;
  uStack_100 = param_5;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar3 + -8);
  lVar10 = (long)&local_110 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_f8 = *(long *)(lVar4 + -8);
  lVar11 = lVar10 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = param_1;
  lVar9 = param_2;
  lStack_f0 = lVar4;
  FUN_1002d3c9c();
  if (lVar9 == 0) {
    local_80 = param_1;
    lStack_78 = param_2;
    FUN_100008184(param_1,param_2);
    puVar5 = &DAT_100a82788;
    FUN_100004bb4(&DAT_100a82788,&DAT_100816f50);
    ppuVar6 = &local_b0;
    _swift_dynamicCast(ppuVar6,&local_80,PTR___s10Foundation4DataVN_1009961e8,puVar5,6);
    if (((ulong)ppuVar6 & 1) == 0) {
      local_90 = 0;
      lStack_a8 = 0;
      local_b0 = (undefined *)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      FUN_100040bb4(&local_b0,&DAT_100a82790,&DAT_1008178d0);
    }
    else {
      local_110 = 0;
      FUN_1000a0074(&local_b0,&local_e0);
      pcVar2 = local_c0;
      puVar5 = local_c8;
      FUN_10003f030(&local_e0,local_c8);
      __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(puVar5,pcVar2);
      if (((ulong)puVar5 & 1) != 0) {
        FUN_10003f030(&local_e0,local_c8);
        __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                  (&local_b0,FUN_1002d38c0,0,PTR___sSSN_1009957f8,local_c8,local_c0);
        lVar9 = lStack_a8;
        puVar5 = local_b0;
        FUN_10003f094(&local_e0);
        goto LAB_100295164;
      }
      FUN_10003f094(&local_e0);
    }
    FUN_1002d3858();
    puVar5 = param_1;
    lVar9 = param_2;
  }
LAB_100295164:
  puVar7 = &DAT_1009abc08;
  _swift_allocObject(&DAT_1009abc08,0x40,7);
  uVar1 = uStack_100;
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(long *)(puVar7 + 0x18) = lVar9;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = local_108;
  *(undefined8 *)(puVar7 + 0x30) = uStack_100;
  *(undefined8 *)(puVar7 + 0x38) = param_6;
  local_c0 = FUN_1002a62d4;
  local_e0 = PTR___NSConcreteStackBlock_100995490;
  local_d8 = 0x42000000;
  local_d0 = FUN_1000acdb4;
  local_c8 = &DAT_1009abc20;
  local_b8 = puVar7;
  aBlock = __Block_copy(&local_e0);
  _swift_retain(uVar1);
  _swift_retain(param_6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
  local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar8 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar7 = puVar5;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar10,&local_b0,puVar5,puVar7,lVar3,puVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar11,lVar10,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_e8 + 8))(lVar10,lVar3);
  (**(code **)(local_f8 + 8))(lVar11,lStack_f0);
  _swift_release(local_b8);
  return;
}

