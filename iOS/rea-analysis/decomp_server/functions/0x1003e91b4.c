// rea decompile_all
// name: FUN_1003e91b4
// address: 0x1003e91b4
// body: available
// range: 0x1003e91b4-0x1003e9a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003e94e4) */

void FUN_1003e91b4(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_160 [16];
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [8];
  long local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  undefined1 *local_b8;
  long local_b0;
  ulong local_a8;
  undefined *local_a0 [8];
  
  uVar15 = *unaff_x20;
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b0 = *(long *)(lVar4 + -8);
  local_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_b0 + 0x40));
  lVar4 = 0;
  local_b8 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  local_c8 = *(long *)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c8 + 0x40));
  lVar12 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d0 = lVar12;
  __s8Dispatch0A12TimeIntervalOMa();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar16 + 0x40));
  lVar5 = 0;
  __s8Dispatch0A4TimeVMa();
  local_e8 = *(long *)(lVar5 + -8);
  local_d8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e8 + 0x40));
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = ((lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar5 = 0;
  local_e0 = lVar12;
  __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVMa();
  lVar14 = *(long *)(lVar5 + -8);
  local_f8 = lVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar12 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar12;
  if (DAT_100a89350 != -1) {
    _swift_once(&DAT_100a89350,FUN_1003e8da0);
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)(lVar12 + -0x10) = uVar15;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (local_a0,FUN_1003eabfc,lVar12 + -0x20,PTR___sSbN_1009958c8);
  if ((char)local_a0[0] == '\x01') {
    puVar10 = &DAT_1009bb280;
    puVar6 = puVar10;
    local_128 = lVar16;
    local_120 = lVar4;
    _swift_allocObject(&DAT_1009bb280,0x18,7);
    _swift_weakInit(puVar6 + 0x10);
    puVar7 = puVar10;
    _swift_allocObject(&DAT_1009bb280,0x18,7);
    _swift_weakInit(puVar7 + 0x10);
    puVar8 = puVar10;
    _swift_allocObject(&DAT_1009bb280,0x18,7);
    _swift_weakInit(puVar8 + 0x10);
    puVar9 = &DAT_1009bb2a8;
    _swift_allocObject(&DAT_1009bb2a8,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(undefined8 *)(puVar9 + 0x18) = uVar15;
    local_110 = puVar9;
    _swift_allocObject(&DAT_1009bb280,0x18,7);
    _swift_weakInit(puVar10 + 0x10);
    puVar9 = &DAT_1009bb2d0;
    _swift_allocObject(&DAT_1009bb2d0,0x20,7);
    *(undefined **)(puVar9 + 0x10) = puVar10;
    *(undefined8 *)(puVar9 + 0x18) = uVar15;
    uVar13 = *(undefined8 *)((long)unaff_x20 + _TtC8UUCommon11FileMonitor::dispatchSource);
    local_138 = _TtC8UUCommon11FileMonitor::dispatchSource;
    *(undefined8 *)((long)unaff_x20 + _TtC8UUCommon11FileMonitor::dispatchSource) = 0;
    local_130 = uVar15;
    local_118 = puVar9;
    local_108 = puVar6;
    _swift_retain(puVar6);
    local_100 = puVar7;
    _swift_retain(puVar7);
    _swift_retain(puVar8);
    _swift_retain(puVar10);
    _swift_release(uVar13);
    uVar15 = *(undefined8 *)((long)unaff_x20 + _TtC8UUCommon11FileMonitor::monitorQueue);
    lVar4 = (long)unaff_x20 + _TtC8UUCommon11FileMonitor::fileURL;
    FUN_1003e9bec(lVar4,*(undefined1 *)
                         ((long)unaff_x20 + _TtC8UUCommon11FileMonitor::createFileIfNeed));
    local_a8 = CONCAT44(local_a8._4_4_,(int)lVar4);
    puVar9 = &DAT_100a8d348;
    FUN_100004bb4(&DAT_100a8d348,&DAT_1008236b0);
    lVar4 = *(long *)(lVar14 + 0x48);
    bVar1 = *(byte *)(lVar14 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 10;
    *(undefined8 *)(puVar9 + 0x10) = 5;
    puVar6 = puVar9 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV5writeAEvgZ(puVar6);
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6extendAEvgZ(puVar6 + lVar4);
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6deleteAEvgZ(puVar6 + lVar4 * 2);
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6revokeAEvgZ(puVar6 + lVar4 * 3);
    __sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventV6renameAEvgZ(puVar6 + lVar4 * 4);
    puVar6 = &DAT_100a8d350;
    local_a0[0] = puVar9;
    FUN_100005c90(&DAT_100a8d350,
                  PTR___sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVMa_100995fc8,
                  PTR___sSo18OS_dispatch_sourceC8DispatchE15FileSystemEventVs10SetAlgebraACMc_100995fd8
                 );
    puVar9 = &DAT_100a8d358;
    FUN_100004bb4(&DAT_100a8d358,&DAT_1008236b8);
    puVar7 = &DAT_100a8d360;
    FUN_1000d61d8(&DAT_100a8d360,&DAT_100a8d358,&DAT_1008236b8);
    lVar4 = local_f0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_f0,local_a0,puVar9,puVar7,local_f8,puVar6);
    FUN_1003eabdc(0);
    _swift_allocObject();
    uVar11 = local_a8 & 0xffffffff;
    FUN_1003ea4a4(uVar11,lVar4,uVar15);
    puVar9 = &DAT_1009bb348;
    _swift_allocObject(&DAT_1009bb348,0x30,7);
    puVar2 = local_108;
    puVar6 = local_118;
    *(code **)(puVar9 + 0x10) = FUN_1003eac0c;
    *(undefined **)(puVar9 + 0x18) = local_108;
    *(code **)(puVar9 + 0x20) = FUN_1003eac48;
    *(undefined **)(puVar9 + 0x28) = local_118;
    uVar15 = *(undefined8 *)(uVar11 + 0x18);
    uVar13 = *(undefined8 *)(uVar11 + 0x20);
    *(code **)(uVar11 + 0x18) = FUN_1003eac84;
    *(undefined **)(uVar11 + 0x20) = puVar9;
    _swift_retain(local_108);
    _swift_retain(puVar6);
    FUN_10007ed2c(uVar15,uVar13);
    puVar9 = &DAT_1009bb370;
    _swift_allocObject(&DAT_1009bb370,0x20,7);
    puVar3 = local_100;
    *(code **)(puVar9 + 0x10) = FUN_1003eac14;
    *(undefined **)(puVar9 + 0x18) = local_100;
    uVar15 = *(undefined8 *)(uVar11 + 0x28);
    uVar13 = *(undefined8 *)(uVar11 + 0x30);
    *(code **)(uVar11 + 0x28) = FUN_100102840;
    *(undefined **)(uVar11 + 0x30) = puVar9;
    _swift_retain(local_100);
    FUN_10007ed2c(uVar15,uVar13);
    puVar9 = &DAT_1009bb398;
    _swift_allocObject(&DAT_1009bb398,0x20,7);
    puVar7 = local_110;
    *(code **)(puVar9 + 0x10) = FUN_1003eac40;
    *(undefined **)(puVar9 + 0x18) = local_110;
    uVar15 = *(undefined8 *)(uVar11 + 0x38);
    uVar13 = *(undefined8 *)(uVar11 + 0x40);
    *(code **)(uVar11 + 0x38) = thunk_FUN_100102840;
    *(undefined **)(uVar11 + 0x40) = puVar9;
    _swift_retain(local_110);
    FUN_10007ed2c(uVar15,uVar13);
    _swift_getObjectType(*(undefined8 *)(uVar11 + 0x10));
    __sSo18OS_dispatch_sourceP8DispatchE6resumeyyF();
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(puVar7);
    _swift_release(puVar6);
    uVar15 = *(undefined8 *)((long)unaff_x20 + local_138);
    *(ulong *)((long)unaff_x20 + local_138) = uVar11;
    _swift_release(puVar2);
    _swift_release(puVar3);
    _swift_release(puVar8);
    _swift_release(puVar10);
    _swift_release(uVar15);
  }
  return;
}

