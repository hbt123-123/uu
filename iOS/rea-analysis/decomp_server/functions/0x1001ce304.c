// rea decompile_all
// name: FUN_1001ce304
// address: 0x1001ce304
// body: available
// range: 0x1001ce304-0x1001ce5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ce304(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  local_d8 = param_3;
  uStack_d0 = param_4;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b8 + 0x40));
  lVar8 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar2 + -8);
  lStack_c0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s7Network12NWConnectionC5StateOMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = lVar9 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  lVar2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar2 != 0) {
    local_e0 = *(undefined8 *)(lVar2 + 0x18);
    _swift_release(lVar2);
    (**(code **)(lVar13 + 0x10))(lVar10,param_1,lVar3);
    uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar14 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    uVar12 = lVar11 + uVar14 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_1009a34e8;
    _swift_allocObject(&DAT_1009a34e8,uVar12 + 0x10,uVar7 | 7);
    *(long *)(puVar4 + 0x10) = param_2;
    (**(code **)(lVar13 + 0x20))(puVar4 + uVar14,lVar10,lVar3);
    *(undefined8 *)(puVar4 + uVar12) = local_d8;
    *(undefined8 *)((long)(puVar4 + uVar12) + 8) = uStack_d0;
    local_88 = FUN_1001d3154;
    local_a8 = PTR___NSConcreteStackBlock_100995490;
    local_a0 = 0x42000000;
    local_98 = FUN_1000acdb4;
    puStack_90 = &DAT_1009a3500;
    local_80 = puVar4;
    aBlock = __Block_copy(&local_a8);
    _swift_retain(param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9);
    local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar5 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar4 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar6 = &DAT_100a75aa0;
    FUN_1000d61d8(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar8,&local_b0,puVar4,puVar6,lVar1,puVar5);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,lVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_b8 + 8))(lVar8,lVar1);
    (**(code **)(local_c8 + 8))(lVar9,lStack_c0);
    _swift_release(local_80);
  }
  return;
}

