// rea decompile_all
// name: FUN_100290720
// address: 0x100290720
// body: available
// range: 0x100290720-0x100290973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100290960) */

void FUN_100290720(byte param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  void *aBlock;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long lStack_b0;
  long local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar1 + -8);
  puVar7 = auStack_c0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar9 = (long)puVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar2;
  if ((param_1 & 1) != 0) {
    plVar6 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
    uVar11 = *(undefined8 *)(plVar6[2] + 0x10);
    local_b8 = param_3;
    lStack_b0 = lVar10;
    _os_unfair_lock_lock(uVar11);
    lVar10 = *(long *)(*plVar6 + 0x60);
    _swift_beginAccess((long)plVar6 + lVar10,&local_90,0x21,0);
    FUN_1002d0d94((long)plVar6 + lVar10,param_2);
    _swift_endAccess(&local_90);
    _os_unfair_lock_unlock(uVar11);
    param_3 = local_b8;
    lVar10 = lStack_b0;
  }
  puVar3 = &DAT_1009aba28;
  _swift_allocObject(&DAT_1009aba28,0x21,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  puVar3[0x20] = param_1 & 1;
  local_70 = FUN_10028ac98;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009aba40;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_4);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar3 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar5 = puVar3;
  FUN_10028abfc();
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar7,&local_98,puVar3,puVar5,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar9,puVar7,aBlock);
  __Block_release(aBlock);
  (**(code **)(lVar10 + 8))(puVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar9,local_a8);
  _swift_release(local_68);
  return;
}

