// rea decompile_all
// name: FUN_1002ce218
// address: 0x1002ce218
// body: available
// range: 0x1002ce218-0x1002ce46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002ce218(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *aBlock;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  undefined *local_58;
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar3 + -8);
  puVar8 = auStack_e0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_a0 = lVar3;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar4 + -8);
  lVar9 = (long)puVar8 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    puVar5 = &DAT_1009adef0;
    lStack_b0 = lVar4;
    _swift_allocObject(&DAT_1009adef0,0x30,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    *(undefined8 *)(puVar5 + 0x18) = uVar1;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    *(undefined8 *)(puVar5 + 0x28) = param_2;
    local_70 = FUN_1002d8848;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009adf08;
    local_d0 = uVar2;
    local_c0 = uVar1;
    local_68 = puVar5;
    local_c8 = __Block_copy(&local_90);
    FUN_1002d8884(lVar3,uVar1,uVar2);
    local_d8 = lVar3;
    _swift_retain(uVar2);
    _swift_retain(param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    lVar4 = local_a0;
    puVar7 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar8,&local_58,puVar5,puVar7,lVar4,puVar6);
    aBlock = local_c8;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,puVar8,local_c8);
    __Block_release(aBlock);
    uVar1 = local_d0;
    _swift_release(local_d0);
    (**(code **)(local_a8 + 8))(puVar8,lVar4);
    (**(code **)(local_b8 + 8))(lVar9,lStack_b0);
    _swift_release(local_68);
    FUN_10028a014(lVar3,local_c0,uVar1);
    *(long *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return;
}

