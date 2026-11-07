// rea decompile_all
// name: FUN_10033cd18
// address: 0x10033cd18
// body: available
// range: 0x10033cd18-0x10033cf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033cd18(undefined8 *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  void *aBlock;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar4 + -8);
  lVar9 = (long)&local_b0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s8Dispatch0A3QoSVMa();
  local_a0 = *(long *)(lVar5 + -8);
  lVar10 = lVar9 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  bVar3 = *(byte *)(param_1 + 3);
  if (bVar3 == 2) {
    if (param_2 == 2) {
      return;
    }
  }
  else if (bVar3 == 3) {
    if (param_2 == 3) {
      return;
    }
  }
  else if (((bVar3 != 4) && ((param_2 & 0xfe) != 2)) && (((bVar3 ^ param_2) & 1) == 0)) {
    return;
  }
  *(byte *)(param_1 + 3) = param_2;
  local_a8 = param_1[2];
  if (local_a8 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    puVar6 = &DAT_1009b2df0;
    lStack_98 = lVar5;
    _swift_allocObject(&DAT_1009b2df0,0x21,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar1;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    puVar6[0x20] = param_2;
    local_70 = FUN_10033d52c;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009b2e08;
    local_68 = puVar6;
    aBlock = __Block_copy(&local_90);
    FUN_10004090c(uVar1,uVar2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar7 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar6 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = &DAT_100a82c20;
    local_b0 = lVar11;
    FUN_1000d61d8(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar9,&local_58,puVar6,puVar8,lVar4,puVar7);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,lVar9,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b0 + 8))(lVar9,lVar4);
    (**(code **)(local_a0 + 8))(lVar10,lStack_98);
    _swift_release(local_68);
  }
  return;
}

