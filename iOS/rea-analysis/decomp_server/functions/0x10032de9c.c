// rea decompile_all
// name: FUN_10032de9c
// address: 0x10032de9c
// body: available
// range: 0x10032de9c-0x10032e11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032de9c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *puStack_d0;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar3 + -8);
  puVar11 = &stack0xfffffffffffffee0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar4 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(*param_1 + 0x10);
  if (lVar10 != 0) {
    lVar13 = *param_1 + 0x20;
    do {
      FUN_1000b142c(lVar13,auStack_90);
      lVar2 = lStack_70;
      uVar1 = local_78;
      FUN_10003f030(auStack_90,local_78);
      (**(code **)(lVar2 + 8))(uVar1,lVar2);
      thunk_FUN_1000a0074(auStack_90,auStack_b8);
      puVar5 = &DAT_1009b2b58;
      _swift_allocObject(&DAT_1009b2b58,0x40,7);
      *(undefined8 *)(puVar5 + 0x10) = param_2;
      thunk_FUN_1000a0074(auStack_b8,puVar5 + 0x18);
      local_c8 = FUN_1003381c0;
      local_e8 = PTR___NSConcreteStackBlock_100995490;
      local_e0 = 0x42000000;
      local_d8 = FUN_1000acdb4;
      puStack_d0 = &DAT_1009b2b70;
      local_c0 = puVar5;
      aBlock = __Block_copy(&local_e8);
      _swift_retain(param_2);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
      local_f0 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar6 = &DAT_100a82c10;
      FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar5 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar7 = puVar5;
      FUN_10028abfc();
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar11,&local_f0,puVar5,puVar7,lVar3,puVar6);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,puVar11,aBlock);
      __Block_release(aBlock);
      (**(code **)(lVar8 + 8))(puVar11,lVar3);
      (**(code **)(lVar9 + 8))(lVar12,lVar4);
      _swift_release(local_c0);
      lVar13 = lVar13 + 0x28;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}

