// rea decompile_all
// name: FUN_10028777c
// address: 0x10028777c
// body: available
// range: 0x10028777c-0x1002879b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028777c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  local_c0 = param_2;
  local_a0 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_a8 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar10 = lVar7 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c38;
  lStack_b0 = lVar2;
  FUN_100004bb4(&DAT_100a82c38,&DAT_1008171f8);
  lVar8 = *(long *)(puVar3 + -8);
  lVar11 = *(long *)(lVar8 + 0x40);
  lVar2 = lVar10 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_4,lVar2,&DAT_100a82c38,&DAT_1008171f8);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009aab18;
  _swift_allocObject(&DAT_1009aab18,uVar9 + lVar11,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = local_c0;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  FUN_1000a00a8(lVar2,puVar3 + uVar9,&DAT_100a82c38,&DAT_1008171f8);
  local_70 = thunk_FUN_10028b808;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009aab30;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_3);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar3;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar7,&local_98,puVar3,puVar5,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar10,lVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(lVar7,lVar1);
  (**(code **)(local_b8 + 8))(lVar10,lStack_b0);
  _swift_release(local_68);
  return;
}

