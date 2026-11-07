// rea decompile_all
// name: FUN_1001085ac
// address: 0x1001085ac
// body: available
// range: 0x1001085ac-0x100108df7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001085ac(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  void *buffer;
  void *pvVar11;
  ulong *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int pid;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined1 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar12 = (ulong *)*param_1;
  lVar3 = *(long *)PTR__kCGWindowNumber_100995590;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_100108670:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    _swift_bridgeObjectRelease(param_2);
LAB_100108680:
    puVar5 = (ulong *)&DAT_100a766e0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_100108698:
    uVar15 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    uVar9 = param_2;
    FUN_1001a2c70(lVar3);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_100108670;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(puVar12);
    if (local_78 == 0) goto LAB_100108680;
    puVar4 = &local_a0;
    puVar5 = &local_90;
    _swift_dynamicCast(puVar4,puVar5,PTR___sypN_100995e88 + 8,PTR___ss6UInt32VN_100995dc0,6);
    if ((int)puVar4 == 0) goto LAB_100108698;
    uVar15 = (int)local_a0;
  }
  lVar3 = *(long *)PTR__kCGWindowName_100995588;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_1001086fc:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    puVar4 = puVar5;
    FUN_1001a2c70(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_1001086fc;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar5);
  if (local_78 == 0) {
    puVar5 = (ulong *)&DAT_100a766e0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_10010875c:
    uVar13 = 0xa9000000000000b0;
    uVar9 = 0xa7e78d90e5a097e6;
  }
  else {
    puVar4 = &local_a0;
    puVar5 = &local_90;
    _swift_dynamicCast(puVar4,puVar5,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    uVar13 = uStack_98;
    uVar9 = local_a0;
    if (((ulong)puVar4 & 1) == 0) goto LAB_10010875c;
  }
  lVar3 = *(long *)PTR__kCGWindowLayer_100995580;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_1001087d4:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    puVar4 = puVar5;
    FUN_1001a2c70(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_1001087d4;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar5);
  if (local_78 == 0) {
    puVar5 = (ulong *)&DAT_100a766e0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_100108834:
    uVar16 = 999;
  }
  else {
    puVar4 = &local_a0;
    puVar5 = &local_90;
    _swift_dynamicCast(puVar4,puVar5,PTR___sypN_100995e88 + 8,PTR___sSiN_100995968,6);
    uVar16 = local_a0;
    if ((int)puVar4 == 0) goto LAB_100108834;
  }
  lVar3 = *(long *)PTR__kCGWindowOwnerPID_1009955a0;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_100108898:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    puVar4 = puVar5;
    FUN_1001a2c70(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_100108898;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar5);
  if (local_78 == 0) {
    puVar5 = (ulong *)&DAT_100a766e0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_1001088f8:
    pid = 0;
  }
  else {
    puVar4 = &local_a0;
    puVar5 = &local_90;
    _swift_dynamicCast(puVar4,puVar5,PTR___sypN_100995e88 + 8,PTR___ss5Int32VN_100995c78,6);
    if ((int)puVar4 == 0) goto LAB_1001088f8;
    pid = (int)local_a0;
  }
  lVar3 = *(long *)PTR__kCGWindowIsOnscreen_100995578;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_10010895c:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    puVar4 = puVar5;
    FUN_1001a2c70(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_10010895c;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar5);
  if (local_78 == 0) {
    puVar5 = (ulong *)&DAT_100a766e0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_1001089bc:
    uVar14 = 0;
  }
  else {
    puVar4 = &local_a0;
    puVar5 = &local_90;
    _swift_dynamicCast(puVar4,puVar5,PTR___sypN_100995e88 + 8,PTR___sSbN_1009958c8,6);
    if ((int)puVar4 == 0) goto LAB_1001089bc;
    uVar14 = local_a0 & 0xff;
  }
  lVar3 = *(long *)PTR__kCGWindowBounds_100995570;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (puVar12[2] == 0) {
LAB_100108a20:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    puVar4 = puVar5;
    FUN_1001a2c70(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar12);
      goto LAB_100108a20;
    }
    FUN_10003e8bc(puVar12[7] + lVar3 * 0x20,&local_90);
    _swift_bridgeObjectRelease(puVar5);
    puVar5 = puVar12;
  }
  _swift_bridgeObjectRelease(puVar5);
  if (local_78 == 0) {
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_100108ac4:
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    uVar17 = 0xbff0000000000000;
LAB_100108af0:
    FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_100108b08:
    uVar1 = 0xbff0000000000000;
  }
  else {
    puVar6 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    puVar2 = PTR___sypN_100995e88;
    puVar12 = &local_a0;
    _swift_dynamicCast(puVar12,&local_90,PTR___sypN_100995e88 + 8,puVar6,6);
    uVar1 = local_a0;
    if ((((ulong)puVar12 & 1) == 0) || (local_a0 == 0)) goto LAB_100108ac4;
    if (*(long *)(local_a0 + 0x10) == 0) {
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
LAB_100108d20:
      FUN_100040bb4(&local_90,&DAT_100a766e0,&DAT_10080bdb0);
LAB_100108d38:
      uVar17 = 0xbff0000000000000;
      if (*(long *)(uVar1 + 0x10) == 0) goto LAB_100108d80;
LAB_100108d44:
      _swift_bridgeObjectRetain(uVar1);
      lVar3 = 0x59;
      uVar7 = 0;
      FUN_1001a2c70(0x59);
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar1);
        goto LAB_100108d80;
      }
      FUN_10003e8bc(*(long *)(uVar1 + 0x38) + lVar3 * 0x20,&local_90);
      _swift_bridgeObjectRelease(uVar1);
    }
    else {
      _swift_bridgeObjectRetain(local_a0);
      lVar3 = 0x58;
      uVar17 = 0;
      FUN_1001a2c70(0x58);
      if ((uVar17 & 1) == 0) {
        uStack_88 = 0;
        local_90 = 0;
        local_78 = 0;
        uStack_80 = 0;
      }
      else {
        FUN_10003e8bc(*(long *)(uVar1 + 0x38) + lVar3 * 0x20,&local_90);
      }
      _swift_bridgeObjectRelease(uVar1);
      if (local_78 == 0) goto LAB_100108d20;
      puVar12 = &local_a0;
      _swift_dynamicCast(puVar12,&local_90,puVar2 + 8,PTR___s12CoreGraphics7CGFloatVN_100996360,6);
      if ((int)puVar12 == 0) goto LAB_100108d38;
      uVar17 = local_a0;
      if (*(long *)(uVar1 + 0x10) != 0) goto LAB_100108d44;
LAB_100108d80:
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    _swift_bridgeObjectRelease(uVar1);
    if (local_78 == 0) goto LAB_100108af0;
    puVar12 = &local_a0;
    _swift_dynamicCast(puVar12,&local_90,puVar2 + 8,PTR___s12CoreGraphics7CGFloatVN_100996360,6);
    uVar1 = local_a0;
    if ((int)puVar12 == 0) goto LAB_100108b08;
  }
  if ((long)uVar16 < 0) {
    uVar7 = uVar9;
    uVar10 = uVar13;
    __sSS10lowercasedSSyF();
    local_a0 = 0x657061706c6c6177;
    uStack_98 = 0xe900000000000072;
    local_90 = uVar7;
    uStack_88 = uVar10;
    FUN_10009ff0c();
    puVar12 = &local_a0;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (puVar12,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,uVar7,uVar7);
    _swift_bridgeObjectRelease(uVar10);
    if (((ulong)puVar12 & 1) != 0) {
      uVar8 = 0x400;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (0x400,PTR___ss4Int8VN_100995c20);
      *(undefined8 *)(uVar8 + 0x10) = 0x400;
      _bzero((void *)(uVar8 + 0x20),0x400);
      buffer = (void *)(uVar8 + 0x20);
      _proc_name(pid,buffer,0x400);
      uVar7 = uVar8;
      FUN_100108560();
      _swift_bridgeObjectRelease(uVar8);
      pvVar11 = buffer;
      __sSS10lowercasedSSyF();
      _swift_bridgeObjectRelease(buffer);
      if ((uVar7 == 0x6b636f64) && (pvVar11 == (void *)0xe400000000000000)) {
        _swift_bridgeObjectRelease(0xe400000000000000);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar7,pvVar11,0x6b636f64,0xe400000000000000,0);
        _swift_bridgeObjectRelease(pvVar11);
        if ((uVar7 & 1) == 0) goto LAB_100108dc0;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_b0 = (undefined1)uVar14;
      local_e0 = uVar15;
      local_d8 = uVar9;
      uStack_d0 = uVar13;
      local_c8 = uVar16;
      local_c0 = uVar17;
      uStack_b8 = uVar1;
      FUN_1003fb48c(FUN_10010a3cc,auStack_f0,0xd000000000000097,0x8000000100889170,
                    0xd000000000000019,0x800000010088af70,0x4e,0);
      _swift_bridgeObjectRelease(uVar13);
      return uVar14;
    }
  }
LAB_100108dc0:
  _swift_bridgeObjectRelease(uVar13);
  return 0;
}

