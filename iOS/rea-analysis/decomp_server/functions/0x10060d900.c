// rea decompile_all
// name: FUN_10060d900
// address: 0x10060d900
// body: available
// range: 0x10060d900-0x10060e20f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10060d900(void *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  void *pvVar22;
  long lVar23;
  undefined8 auStack_1b0 [2];
  undefined *local_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  void *local_150;
  long local_148;
  void *local_140;
  uint local_134;
  long local_130;
  void *local_128;
  ulong local_120;
  undefined8 local_118;
  long local_110;
  void *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *local_d0;
  undefined1 local_c8 [8];
  ulong uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  byte local_a0;
  byte local_9f;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = 0;
  local_108 = param_1;
  __s8Dispatch0A3QoSVMa();
  lVar20 = *(long *)(lVar1 + -8);
  lVar23 = (long)&local_1a0 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar18 = *(long *)(lVar2 + -8);
  uVar12 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168 = lVar23 - uVar12;
  lVar13 = local_168 - uVar12;
  puVar3 = &DAT_100aaffc0;
  local_158 = lVar13;
  FUN_100004bb4(&DAT_100aaffc0,&DAT_100848498);
  local_130 = *(long *)(puVar3 + -8);
  local_128 = *(void **)(local_130 + 0x40);
  uVar12 = (long)local_128 + 0xfU & 0xfffffffffffffff0;
  local_160 = lVar13 - uVar12;
  lVar13 = local_160 - uVar12;
  local_120 = lVar13 - uVar12;
  local_110 = local_120 - uVar12;
  lVar17 = local_110 - uVar12;
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    return;
  }
  pcVar21 = *(code **)(lVar18 + 0x38);
  local_190 = lVar20;
  local_188 = lVar1;
  local_178 = lVar23;
  local_170 = lVar18;
  local_148 = lVar13;
  (*pcVar21)(lVar17,1,1,lVar2);
  puVar3 = &DAT_1009ded70;
  _swift_allocObject(&DAT_1009ded70,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(void **)(puVar3 + 0x18) = local_108;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  lVar1 = DAT_100aafef8;
  _swift_retain(param_2);
  local_118 = param_2;
  if (lVar1 != -1) {
    _swift_once(&DAT_100aafef8,FUN_10060f124);
  }
  _swift_beginAccess(&DAT_100b3a770,auStack_98,0,0);
  pvVar11 = DAT_100b3a778;
  uVar4 = 0;
  FUN_100616218(0,param_4);
  pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar4);
  FUN_1006170a4(pvVar11,lVar17,FUN_10060ec0c,puVar3,uVar4,pTVar5);
  local_140 = pvVar11;
  _swift_release(param_3);
  _swift_release(puVar3);
  FUN_1006070b4(lVar17);
  lVar1 = local_110;
  local_180 = lVar2;
  (*pcVar21)(local_110,1,1,lVar2);
  puVar3 = &DAT_1009ded98;
  _swift_allocObject(&DAT_1009ded98,0x28,7);
  uVar4 = local_118;
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(void **)(puVar3 + 0x18) = local_108;
  *(undefined8 *)(puVar3 + 0x20) = local_118;
  pvVar11 = DAT_100b3a778;
  local_134 = (uint)DAT_100b3a780;
  lVar2 = 0;
  local_198 = param_4;
  FUN_100609324();
  _swift_allocObject();
  puVar6 = &DAT_100aaff00;
  FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
  _swift_allocObject();
  FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
  _swift_allocObject();
  local_150 = pvVar11;
  _swift_retain_n(uVar4,2);
  FUN_10061047c();
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  puVar7 = &DAT_1009dedc0;
  _swift_allocObject(&DAT_1009dedc0,0x20,7);
  uVar12 = local_120;
  *(code **)(puVar7 + 0x10) = FUN_100605b80;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  *(undefined **)(lVar2 + 0x10) = puVar6;
  *(code **)(lVar2 + 0x18) = FUN_1000f4ed4;
  *(undefined **)(lVar2 + 0x20) = puVar7;
  FUN_100607210(lVar1,local_120);
  lVar1 = local_148;
  FUN_100607210(uVar12,local_148);
  uVar14 = (ulong)*(byte *)(local_130 + 0x50);
  uVar15 = uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff);
  uVar19 = (long)local_128 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_1009dede8;
  _swift_allocObject(&DAT_1009dede8,uVar19 + 0x18,uVar14 | 7);
  pvVar22 = local_140;
  puVar6[0x10] = (char)local_134;
  local_128 = pvVar11;
  *(void **)(puVar6 + 0x18) = pvVar11;
  FUN_100607324(uVar12,puVar6 + uVar15);
  pvVar11 = local_150;
  *(code **)(puVar6 + uVar19) = FUN_10060ec28;
  *(undefined **)((long)(puVar6 + uVar19) + 8) = puVar3;
  *(long *)(puVar6 + uVar19 + 0x10) = lVar2;
  plVar16 = *(long **)((long)pvVar22 + 0x10);
  pcVar21 = *(code **)(*plVar16 + 0x58);
  _swift_retain(uVar4);
  _swift_retain(puVar3);
  _swift_retain(lVar2);
  (*pcVar21)(&local_a8);
  uVar12 = (ulong)local_a0;
  if ((local_9f & 1) == 0) {
    FUN_1006070b4(lVar1);
    FUN_1006073e8(local_a8,uVar12,0);
    *(code **)(lVar17 + -0x10) = FUN_10060ecf8;
    *(undefined **)(lVar17 + -8) = puVar6;
    (**(code **)(*plVar16 + 0x60))(FUN_1006074f4);
    _swift_release(local_118);
    _swift_release(puVar3);
    _swift_release(pvVar22);
    _swift_release(puVar6);
    goto LAB_10060e1c8;
  }
  if ((local_a0 & 1) == 0) {
LAB_10060dda8:
    (**(code **)(lVar2 + 0x18))();
  }
  else {
    if (local_134 != 0) {
      _swift_getErrorValue(local_a8,auStack_b0,local_c8);
      FUN_10060f8ac(uStack_c0,local_b8);
      if ((uStack_c0 & 1) != 0) goto LAB_10060dda8;
    }
    puVar7 = &DAT_1009dee10;
    _swift_allocObject(&DAT_1009dee10,0x30,7);
    lVar13 = local_160;
    *(code **)(puVar7 + 0x10) = FUN_10060ec28;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    *(undefined8 *)(puVar7 + 0x20) = local_a8;
    *(long *)(puVar7 + 0x28) = lVar2;
    if (local_128 == (void *)0x0) {
      _swift_retain(puVar3);
      _swift_retain(lVar2);
      FUN_100607438(local_a8,uVar12,1);
      FUN_10060e2f4(local_a8,local_108,local_118,local_198);
      (**(code **)(lVar2 + 0x18))();
    }
    else {
      local_108 = pvVar11;
      FUN_100607210(lVar1,local_160);
      lVar18 = local_170;
      lVar17 = local_180;
      lVar20 = lVar13;
      (**(code **)(local_170 + 0x30))(lVar13,1,local_180);
      local_1a0 = puVar3;
      local_d0 = puVar7;
      if ((int)lVar20 == 1) {
        _swift_retain(puVar3);
        _swift_retain(lVar2);
        local_120 = CONCAT44(local_120._4_4_,(uint)local_a0);
        FUN_100607438(local_a8,uVar12,1);
        FUN_1006070b4(lVar13);
        local_d8 = FUN_10060742c;
        local_f8 = PTR___NSConcreteStackBlock_100995490;
        local_f0 = 0x42000000;
        local_e8 = FUN_1000acdb4;
        puStack_e0 = &DAT_1009dee28;
        local_128 = __Block_copy(&local_f8);
        puVar8 = puVar7;
        _swift_retain(puVar7);
        lVar13 = local_178;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_178);
        local_100 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_100607460();
        puVar9 = &DAT_100aaffd0;
        FUN_100004bb4(&DAT_100aaffd0,&DAT_1008484a0);
        puVar10 = puVar9;
        FUN_1006074a4();
        lVar18 = local_168;
        puVar3 = local_1a0;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (local_168,&local_100,puVar9,puVar10,lVar17,puVar8);
        pvVar11 = local_128;
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,lVar18,local_128);
        __Block_release(pvVar11);
        _swift_release(puVar7);
        uVar12 = local_120 & 0xffffffff;
        (**(code **)(local_170 + 8))(lVar18,lVar17);
        pcVar21 = *(code **)(local_190 + 8);
        lVar13 = -0x78;
        lVar17 = local_178;
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_158,lVar13,lVar17);
        local_d8 = FUN_10060742c;
        local_f8 = PTR___NSConcreteStackBlock_100995490;
        local_f0 = 0x42000000;
        local_e8 = FUN_1000acdb4;
        puStack_e0 = &DAT_1009dee50;
        pvVar11 = __Block_copy(&local_f8);
        _swift_retain(puVar3);
        _swift_retain(lVar2);
        FUN_100607438(local_a8,uVar12,1);
        _swift_retain(puVar7);
        lVar13 = local_178;
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(local_178);
        lVar17 = local_158;
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,local_158,pvVar11);
        __Block_release(pvVar11);
        _swift_release(puVar7);
        puVar3 = local_1a0;
        (**(code **)(local_190 + 8))(lVar13,local_188);
        pcVar21 = *(code **)(local_170 + 8);
        lVar13 = -0x70;
      }
      (*pcVar21)(lVar17,*(undefined8 *)((long)&local_110 + lVar13));
      puVar7 = local_d0;
    }
    _swift_release(puVar7);
    pvVar22 = local_140;
  }
  FUN_1006070b4(lVar1);
  FUN_1006073e8(local_a8,uVar12,1);
  _swift_release(local_118);
  _swift_release(puVar3);
  _swift_release(pvVar22);
  _swift_release(puVar6);
LAB_10060e1c8:
  _swift_release(lVar2);
  FUN_1006070b4(local_110);
  return;
}

