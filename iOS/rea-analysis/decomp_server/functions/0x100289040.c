// rea decompile_all
// name: FUN_100289040
// address: 0x100289040
// body: available
// range: 0x100289040-0x1002897c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100289040(double param_1,double param_2,long param_3,char param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  long param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [8];
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  
  lVar2 = 0;
  local_140 = param_8;
  local_110 = param_6;
  uStack_108 = param_7;
  local_100 = param_5;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_170 + lVar2;
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar13 = (long)puVar18 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_118 = param_13;
  local_120 = param_12;
  local_f0 = lVar13;
  _swift_getAssociatedTypeWitness
            (0xff,param_13,param_12,0x1008fab60,&TargetProtocolRequirement_1008fab68);
  uVar5 = 0xff;
  FUN_100277ad0(0xff);
  puVar6 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar4,uVar5,puVar6);
  local_138 = *(long *)(lVar7 + -8);
  uVar14 = *(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130 = lVar13 - uVar14;
  lVar22 = local_130 - uVar14;
  lVar13 = 0;
  local_128 = uVar4;
  local_f8 = lVar7;
  FUN_1002d9bd8(0,uVar4,uVar5,puVar6);
  lVar16 = *(long *)(lVar13 + -8);
  lVar19 = *(long *)(lVar16 + 0x40);
  uVar14 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar22 - uVar14;
  lVar7 = lVar17 - uVar14;
  if (param_4 == '\0') {
    uVar4 = 0;
LAB_100289710:
    _swift_getObjectType(param_9);
    (**(code **)(param_10 + 0x30))(param_11,param_3,uVar4,param_9,param_10);
  }
  else {
    local_e8 = param_11;
    if (param_4 == '\x01') {
      local_160 = lVar17;
      local_158 = lVar19;
      local_150 = lVar16;
      local_148 = lVar7;
      local_140 = lVar13;
      _swift_getErrorValue(param_3,auStack_80,local_98);
      FUN_100277ae4(lVar22,FUN_1002897c8,0,"Alamofire/DataRequest.swift",0x1b,2,0x123,uStack_90,
                    local_88);
      _swift_storeEnumTagMultiPayload(lVar22,local_f8,1);
      plVar21 = *(long **)(param_11 + _TtC9Alamofire7Request::mutableState);
      uVar4 = *(undefined8 *)(plVar21[2] + 0x10);
      _os_unfair_lock_lock(uVar4);
      lVar17 = *(long *)(*plVar21 + 0x60);
      _swift_beginAccess((long)plVar21 + lVar17,auStack_b0,0,0);
      FUN_10028ab0c((long)plVar21 + lVar17,puVar18);
      lVar16 = *(long *)(&stack0xffffffffffffffd8 + lVar2);
      _swift_bridgeObjectRetain(lVar16);
      FUN_1000d27dc(puVar18,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar4);
      lVar13 = *(long *)(lVar16 + 0x10);
      if (lVar13 == 0) {
        _swift_bridgeObjectRelease(lVar16);
        lVar8 = 0;
        __s10Foundation10URLRequestVMa();
        pcVar15 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
        lVar19 = local_f0;
      }
      else {
        lVar8 = 0;
        __s10Foundation10URLRequestVMa();
        lVar19 = local_f0;
        lVar23 = *(long *)(lVar8 + -8);
        (**(code **)(lVar23 + 0x10))
                  (local_f0,lVar16 + ((ulong)*(byte *)(lVar23 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar23 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar23 + 0x48) * (lVar13 + -1),lVar8);
        _swift_bridgeObjectRelease(lVar16);
        pcVar15 = *(code **)(lVar23 + 0x38);
      }
      (*pcVar15)(lVar19,lVar13 == 0,1,lVar8);
      lVar13 = local_e8;
      FUN_1002c85ec();
      lVar13 = *(long *)(lVar13 + _TtC9Alamofire11DataRequest::dataMutableState);
      uVar20 = *(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10);
      local_168 = lVar19;
      _os_unfair_lock_lock(uVar20);
      _swift_beginAccess(lVar13 + 0x18,auStack_c8,0,0);
      uVar4 = *(undefined8 *)(lVar13 + 0x18);
      uVar1 = *(undefined8 *)(lVar13 + 0x20);
      FUN_10010bd10(uVar4,uVar1);
      _os_unfair_lock_unlock(uVar20);
      uVar20 = *(undefined8 *)(plVar21[2] + 0x10);
      _os_unfair_lock_lock(uVar20);
      FUN_10028ab0c((long)plVar21 + lVar17,puVar18);
      uVar14 = *(ulong *)(&stack0xffffffffffffffe8 + lVar2);
      _swift_bridgeObjectRetain(uVar14);
      FUN_1000d27dc(puVar18,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar20);
      if (uVar14 >> 0x3e == 0) {
        uVar9 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar9 = uVar14 & 0xffffffffffffff8;
        if ((long)uVar14 < 0) {
          uVar9 = uVar14;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      param_11 = local_e8;
      if (uVar9 == 0) {
        _swift_bridgeObjectRelease(uVar14);
        uVar10 = 0;
      }
      else {
        uVar10 = uVar9 - 1;
        if (SBORROW8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1002897b4);
          (*pcVar15)();
        }
        if ((uVar14 & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1002897c4);
            (*pcVar15)();
          }
          if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1002897c8);
            (*pcVar15)();
          }
          uVar10 = *(ulong *)(uVar14 + uVar10 * 8 + 0x20);
        }
        else {
          FUN_1002d392c(uVar10,uVar14);
        }
        _swift_bridgeObjectRelease(uVar14);
      }
      lVar13 = local_130;
      (**(code **)(local_138 + 0x20))(local_130,lVar22,local_f8);
      *(undefined8 **)(lVar7 + -0x10) = puVar6;
      lVar2 = local_160;
      FUN_1002d9af4(local_160,param_1 - param_2,local_f0,local_168,uVar4,uVar1,uVar10,lVar13,
                    local_128,uVar5);
      lVar16 = local_140;
      lVar13 = local_148;
      lVar7 = local_150;
      pcVar15 = *(code **)(local_150 + 0x20);
      (*pcVar15)(local_148,lVar2,local_140);
      uVar14 = (ulong)*(byte *)(lVar7 + 0x50);
      uVar9 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
      puVar3 = &DAT_1009ab018;
      _swift_allocObject(&DAT_1009ab018,uVar9 + local_158,uVar14 | 7);
      uVar4 = uStack_108;
      *(undefined8 *)(puVar3 + 0x10) = local_120;
      *(undefined8 *)(puVar3 + 0x18) = local_118;
      *(undefined8 *)(puVar3 + 0x20) = local_110;
      *(undefined8 *)(puVar3 + 0x28) = uStack_108;
      (*pcVar15)(puVar3 + uVar9,lVar13,lVar16);
      pcVar15 = thunk_FUN_10028ee74;
    }
    else {
      if (param_3 == 0) {
        uVar4 = 1;
        goto LAB_100289710;
      }
      (**(code **)(lVar16 + 0x10))(lVar7,local_140,lVar13);
      uVar14 = (ulong)*(byte *)(lVar16 + 0x50);
      uVar9 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
      puVar3 = &DAT_1009ab090;
      _swift_allocObject(&DAT_1009ab090,uVar9 + lVar19,uVar14 | 7);
      uVar4 = uStack_108;
      *(undefined8 *)(puVar3 + 0x10) = local_120;
      *(undefined8 *)(puVar3 + 0x18) = local_118;
      *(undefined8 *)(puVar3 + 0x20) = local_110;
      *(undefined8 *)(puVar3 + 0x28) = uStack_108;
      (**(code **)(lVar16 + 0x20))(puVar3 + uVar9,lVar7,lVar13);
      pcVar15 = thunk_FUN_10028ee74;
    }
    uVar5 = local_100;
    puVar11 = &DAT_1009ab040;
    _swift_allocObject(&DAT_1009ab040,0x28,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar5;
    *(code **)(puVar11 + 0x18) = pcVar15;
    *(undefined **)(puVar11 + 0x20) = puVar3;
    plVar21 = *(long **)(param_11 + _TtC9Alamofire7Request::mutableState);
    uVar5 = *(undefined8 *)(plVar21[2] + 0x10);
    _swift_retain(uVar4);
    FUN_10004090c(pcVar15,puVar3);
    _os_unfair_lock_lock(uVar5);
    lVar2 = (long)plVar21 + *(long *)(*plVar21 + 0x60);
    _swift_beginAccess(lVar2,auStack_e0,0x21,0);
    *(undefined1 *)(lVar2 + 0xd8) = 0;
    puVar12 = &DAT_1009ab068;
    _swift_allocObject(&DAT_1009ab068,0x20,7);
    *(code **)(puVar12 + 0x10) = thunk_FUN_10028b81c;
    *(undefined **)(puVar12 + 0x18) = puVar11;
    uVar10 = *(ulong *)(lVar2 + 0xe0);
    _swift_retain(puVar11);
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar2 + 0xe0) = uVar10;
    uVar9 = uVar10;
    if ((uVar14 & 1) == 0) {
      uVar9 = 0;
      FUN_100296548(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(lVar2 + 0xe0) = uVar9;
    }
    uVar14 = *(ulong *)(uVar9 + 0x10);
    uVar10 = uVar9;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar14) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_100296548(uVar10,uVar14 + 1,1,uVar9);
    }
    *(ulong *)(uVar10 + 0x10) = uVar14 + 1;
    lVar7 = uVar10 + uVar14 * 0x10;
    *(code **)(lVar7 + 0x20) = thunk_FUN_1000f4ed4;
    *(undefined **)(lVar7 + 0x28) = puVar12;
    *(ulong *)(lVar2 + 0xe0) = uVar10;
    _swift_endAccess(auStack_e0);
    _os_unfair_lock_unlock(uVar5);
    FUN_1002cbca4();
    _swift_release(puVar11);
    FUN_10007ed2c(pcVar15,puVar3);
  }
  return;
}

