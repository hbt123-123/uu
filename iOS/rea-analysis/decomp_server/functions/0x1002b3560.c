// rea decompile_all
// name: FUN_1002b3560
// address: 0x1002b3560
// body: available
// range: 0x1002b3560-0x1002b3de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002b3560(double param_1,double param_2,long param_3,char param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  long param_10,long param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 auStack_1a0 [2];
  undefined1 auStack_190 [8];
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
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
  
  lVar1 = 0;
  local_158 = param_8;
  local_120 = param_6;
  local_118 = param_7;
  local_110 = param_5;
  FUN_1002a7694();
  puVar16 = auStack_190 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  local_138 = lVar1;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar10 = (long)puVar16 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_f0 = lVar10;
  FUN_1002c76a8();
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0xff;
  local_128 = param_13;
  local_130 = param_12;
  local_f8 = lVar11;
  _swift_getAssociatedTypeWitness
            (0xff,param_13,param_12,0x1008fab88,&TargetProtocolRequirement_1008fab90);
  uVar4 = 0xff;
  FUN_100277ad0();
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar1 = 0;
  __ss6ResultOMa(0,uVar3,uVar4,puVar5);
  local_150 = *(long *)(lVar1 + -8);
  uVar12 = *(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_148 = lVar11 - uVar12;
  lVar13 = local_148 - uVar12;
  lVar11 = 0;
  local_140 = uVar3;
  local_108 = lVar13;
  local_100 = lVar1;
  FUN_1002d9e30(0,uVar3,uVar4,puVar5);
  lVar21 = *(long *)(lVar11 + -8);
  lVar15 = *(long *)(lVar21 + 0x40);
  uVar12 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar13 - uVar12;
  lVar1 = lVar13 - uVar12;
  if (param_4 == '\0') {
    uVar3 = 0;
LAB_1002b3d2c:
    _swift_getObjectType(param_9);
    (**(code **)(param_10 + 0x30))(param_11,param_3,uVar3,param_9,param_10);
  }
  else {
    if (param_4 == '\x01') {
      local_180 = lVar13;
      local_178 = lVar15;
      local_170 = lVar1;
      local_168 = lVar11;
      _swift_getErrorValue(param_3,auStack_80,local_98);
      lVar11 = local_108;
      FUN_100277ae4(local_108,FUN_1002897c8,0,"Alamofire/DownloadRequest.swift",0x1f,2,0x1a4,
                    uStack_90,local_88);
      _swift_storeEnumTagMultiPayload(lVar11,local_100,1);
      local_e8 = param_11;
      plVar17 = *(long **)(param_11 + _TtC9Alamofire7Request::mutableState);
      uVar3 = *(undefined8 *)(plVar17[2] + 0x10);
      _os_unfair_lock_lock(uVar3);
      lVar11 = *(long *)(*plVar17 + 0x60);
      _swift_beginAccess((long)plVar17 + lVar11,auStack_b0,0,0);
      local_158 = lVar11;
      FUN_100082394((long)plVar17 + lVar11,lVar10,FUN_1002c76a8);
      lVar13 = *(long *)(lVar10 + 0x148);
      _swift_bridgeObjectRetain(lVar13);
      FUN_1000d27dc(lVar10,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar3);
      lVar11 = *(long *)(lVar13 + 0x10);
      local_160 = lVar21;
      if (lVar11 == 0) {
        _swift_bridgeObjectRelease(lVar13);
        lVar21 = 0;
        __s10Foundation10URLRequestVMa();
        pcVar14 = *(code **)(*(long *)(lVar21 + -8) + 0x38);
        lVar15 = local_f8;
      }
      else {
        lVar21 = 0;
        __s10Foundation10URLRequestVMa();
        lVar15 = local_f8;
        lVar19 = *(long *)(lVar21 + -8);
        (**(code **)(lVar19 + 0x10))
                  (local_f8,lVar13 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar19 + 0x48) * (lVar11 + -1),lVar21);
        _swift_bridgeObjectRelease(lVar13);
        pcVar14 = *(code **)(lVar19 + 0x38);
      }
      (*pcVar14)(lVar15,lVar11 == 0,1,lVar21);
      lVar11 = local_e8;
      FUN_1002c85ec();
      plVar18 = *(long **)(lVar11 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
      uVar22 = *(undefined8 *)(plVar18[2] + 0x10);
      local_188 = lVar15;
      _os_unfair_lock_lock(uVar22);
      lVar11 = *(long *)(*plVar18 + 0x60);
      _swift_beginAccess((long)plVar18 + lVar11,auStack_c8,0,0);
      pcVar14 = FUN_1002a7694;
      FUN_100082394((long)plVar18 + lVar11,puVar16,FUN_1002a7694);
      FUN_10007f314(puVar16 + *(int *)(local_138 + 0x14),local_f0,&DAT_100a83428,&DAT_100817bb0);
      FUN_1000d27dc(puVar16,FUN_1002a7694);
      _os_unfair_lock_unlock(uVar22);
      FUN_1002a7418();
      uVar3 = *(undefined8 *)(plVar17[2] + 0x10);
      _os_unfair_lock_lock(uVar3);
      FUN_100082394((long)plVar17 + local_158,lVar10,FUN_1002c76a8);
      uVar12 = *(ulong *)(lVar10 + 0x158);
      _swift_bridgeObjectRetain(uVar12);
      FUN_1000d27dc(lVar10,FUN_1002c76a8);
      _os_unfair_lock_unlock(uVar3);
      if (uVar12 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar12 & 0xffffffffffffff8;
        if ((long)uVar12 < 0) {
          uVar6 = uVar12;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uVar20 = local_110;
      uVar3 = local_118;
      lVar11 = local_160;
      if (uVar6 == 0) {
        _swift_bridgeObjectRelease(uVar12);
        uVar7 = 0;
      }
      else {
        uVar7 = uVar6 - 1;
        if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b3dd4);
          (*pcVar14)();
        }
        if ((uVar12 & 0xc000000000000001) == 0) {
          if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b3de4);
            (*pcVar14)();
          }
          if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b3de8);
            (*pcVar14)();
          }
          uVar7 = *(ulong *)(uVar12 + uVar7 * 8 + 0x20);
        }
        else {
          FUN_1002d392c(uVar7,uVar12);
        }
        _swift_bridgeObjectRelease(uVar12);
      }
      lVar10 = local_148;
      (**(code **)(local_150 + 0x20))(local_148,local_108,local_100);
      *(undefined8 *)(lVar1 + -0x10) = uVar4;
      *(undefined8 **)(lVar1 + -8) = puVar5;
      lVar1 = local_180;
      FUN_1002d9d20(local_180,param_1 - param_2,local_f8,local_188,local_f0,uVar22,pcVar14,uVar7,
                    lVar10,local_140);
      lVar13 = local_168;
      lVar10 = local_170;
      pcVar14 = *(code **)(lVar11 + 0x20);
      (*pcVar14)(local_170,lVar1,local_168);
      uVar12 = (ulong)*(byte *)(lVar11 + 0x50);
      uVar6 = uVar12 + 0x30 & (uVar12 ^ 0xffffffffffffffff);
      puVar2 = &DAT_1009acb28;
      _swift_allocObject(&DAT_1009acb28,uVar6 + local_178,uVar12 | 7);
      *(undefined8 *)(puVar2 + 0x10) = local_130;
      *(undefined8 *)(puVar2 + 0x18) = local_128;
      *(undefined8 *)(puVar2 + 0x20) = local_120;
      *(undefined8 *)(puVar2 + 0x28) = uVar3;
      (*pcVar14)(puVar2 + uVar6,lVar10,lVar13);
      pcVar14 = thunk_FUN_1002ba7c8;
    }
    else {
      if (param_3 == 0) {
        uVar3 = 1;
        goto LAB_1002b3d2c;
      }
      local_e8 = param_11;
      (**(code **)(lVar21 + 0x10))(lVar1,local_158,lVar11);
      uVar12 = (ulong)*(byte *)(lVar21 + 0x50);
      uVar6 = uVar12 + 0x30 & (uVar12 ^ 0xffffffffffffffff);
      puVar2 = &DAT_1009acba0;
      _swift_allocObject(&DAT_1009acba0,uVar6 + lVar15,uVar12 | 7);
      uVar3 = local_118;
      *(undefined8 *)(puVar2 + 0x10) = local_130;
      *(undefined8 *)(puVar2 + 0x18) = local_128;
      *(undefined8 *)(puVar2 + 0x20) = local_120;
      *(undefined8 *)(puVar2 + 0x28) = local_118;
      (**(code **)(lVar21 + 0x20))(puVar2 + uVar6,lVar1,lVar11);
      pcVar14 = thunk_FUN_1002ba7c8;
      uVar20 = local_110;
    }
    puVar8 = &DAT_1009acb50;
    _swift_allocObject(&DAT_1009acb50,0x28,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar20;
    *(code **)(puVar8 + 0x18) = pcVar14;
    *(undefined **)(puVar8 + 0x20) = puVar2;
    plVar17 = *(long **)(local_e8 + _TtC9Alamofire7Request::mutableState);
    uVar4 = *(undefined8 *)(plVar17[2] + 0x10);
    _swift_retain(uVar3);
    FUN_10004090c(pcVar14,puVar2);
    _os_unfair_lock_lock(uVar4);
    lVar1 = (long)plVar17 + *(long *)(*plVar17 + 0x60);
    _swift_beginAccess(lVar1,auStack_e0,0x21,0);
    *(undefined1 *)(lVar1 + 0xd8) = 0;
    puVar9 = &DAT_1009acb78;
    _swift_allocObject(&DAT_1009acb78,0x20,7);
    *(code **)(puVar9 + 0x10) = thunk_FUN_1002b62f0;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    uVar7 = *(ulong *)(lVar1 + 0xe0);
    _swift_retain(puVar8);
    uVar12 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar1 + 0xe0) = uVar7;
    uVar6 = uVar7;
    if ((uVar12 & 1) == 0) {
      uVar6 = 0;
      FUN_100296548(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(lVar1 + 0xe0) = uVar6;
    }
    uVar12 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar12) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100296548(uVar7,uVar12 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar12 + 1;
    lVar11 = uVar7 + uVar12 * 0x10;
    *(code **)(lVar11 + 0x20) = thunk_FUN_1000f4ed4;
    *(undefined **)(lVar11 + 0x28) = puVar9;
    *(ulong *)(lVar1 + 0xe0) = uVar7;
    _swift_endAccess(auStack_e0);
    _os_unfair_lock_unlock(uVar4);
    FUN_1002cbca4();
    _swift_release(puVar8);
    FUN_10007ed2c(pcVar14,puVar2);
  }
  return;
}

