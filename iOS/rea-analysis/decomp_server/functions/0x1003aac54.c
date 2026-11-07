// rea decompile_all
// name: FUN_1003aac54
// address: 0x1003aac54
// body: available
// range: 0x1003aac54-0x1003aaf8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003aac54(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *aBlock;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long lVar9;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  undefined *local_58;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = &stack0xffffffffffffff10 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_4 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar10 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar20 = *param_1;
  lVar3 = lVar20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar3 + 0x10);
    _swift_release(lVar3);
  }
  lVar20 = lVar20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar20 == 0) {
    uVar21 = 0;
    uVar13 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar20 + 0x18);
    uVar13 = *(undefined8 *)(lVar20 + 0x20);
    _swift_retain(uVar13);
    _swift_release(lVar20);
  }
  if (lVar11 == 0) {
    FUN_10007ed2c(uVar21,uVar13);
  }
  else {
    pcVar17 = *(code **)(lVar15 + 0x10);
    (*pcVar17)(lVar16 - extraout_x12,param_2,param_4);
    (*pcVar17)(lVar16,param_3,param_4);
    uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar18 = uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff);
    uVar19 = lVar14 + uVar12 + uVar18 & (uVar12 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar19 + lVar14,uVar12 | 7);
    *(long *)(param_5 + 0x10) = param_4;
    *(undefined8 *)(param_5 + 0x18) = uVar21;
    *(undefined8 *)(param_5 + 0x20) = uVar13;
    pcVar17 = *(code **)(lVar15 + 0x20);
    (*pcVar17)(param_5 + uVar18,lVar16 - extraout_x12,param_4);
    (*pcVar17)(param_5 + uVar19,lVar16,param_4);
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    uStack_78 = param_7;
    local_70 = param_6;
    local_68 = param_5;
    aBlock = __Block_copy(&local_90);
    uVar4 = uVar21;
    FUN_10004090c(uVar21,uVar13);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
    FUN_10003f7fc();
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar6 = puVar5;
    FUN_10004eec4();
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar8,&local_58,puVar5,puVar6,lVar1,uVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar10,puVar8,aBlock);
    __Block_release(aBlock);
    FUN_10007ed2c(uVar21,uVar13);
    (**(code **)(lVar7 + 8))(puVar8,lVar1);
    (**(code **)(lVar9 + 8))(lVar10,lVar2);
    _swift_release(local_68);
  }
  return;
}

