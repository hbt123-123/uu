// rea decompile_all
// name: FUN_1002b0020
// address: 0x1002b0020
// body: available
// range: 0x1002b0020-0x1002b0ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002b0020(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  char *pcVar21;
  long alStack_1d0 [2];
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 *local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [16];
  char acStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  puVar2 = &DAT_100a82460;
  local_150 = param_5;
  local_148 = param_4;
  local_140 = param_6;
  local_118 = param_3;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar12 = (long)&local_1c0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0;
  local_1a8 = lVar12;
  FUN_100277ad0();
  local_1b0 = *(long *)(lVar3 + -8);
  lVar12 = lVar12 - (*(long *)(local_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_1b8 = lVar12;
  local_160 = param_8;
  local_158 = param_9;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,0x1008fab88,&TargetProtocolRequirement_1008fab90);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  __ss6ResultOMa(0,uVar4,lVar3,puVar5);
  local_188 = *(long *)(lVar6 + -8);
  lVar12 = lVar12 - (*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_180 = lVar12;
  local_128 = lVar6;
  FUN_1002a7694();
  lVar12 = lVar12 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100a83428;
  local_138 = lVar7;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar7 = lVar12 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_100 = lVar7;
  FUN_1002c76a8();
  pcVar21 = (char *)(lVar7 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar17 = (long)pcVar21 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_178 = puVar5;
  local_170 = uVar4;
  local_120 = lVar3;
  FUN_1002d9e30(0,uVar4,lVar3,puVar5);
  local_108 = *(long *)(lVar6 + -8);
  local_168 = *(long *)(local_108 + 0x40);
  uVar13 = local_168 + 0xfU & 0xfffffffffffffff0;
  local_1a0 = lVar17 - uVar13;
  local_1c0 = local_1a0 - uVar13;
  lVar7 = local_1c0 - uVar13;
  plVar20 = *(long **)(param_7 + _TtC9Alamofire7Request::mutableState);
  uVar4 = *(undefined8 *)(plVar20[2] + 0x10);
  local_130 = lVar6;
  local_110 = lVar7;
  _os_unfair_lock_lock(uVar4);
  lVar3 = (long)plVar20 + *(long *)(*plVar20 + 0x60);
  _swift_beginAccess(lVar3,auStack_a0,0,0);
  FUN_100082394(lVar3,pcVar21,FUN_1002c76a8);
  lVar15 = *(long *)(pcVar21 + 0x148);
  _swift_bridgeObjectRetain(lVar15);
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  lVar6 = *(long *)(lVar15 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(lVar15);
    lVar8 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
  }
  else {
    lVar8 = 0;
    __s10Foundation10URLRequestVMa();
    lVar18 = *(long *)(lVar8 + -8);
    (**(code **)(lVar18 + 0x10))
              (lVar17,lVar15 + ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar18 + 0x48) * (lVar6 + -1),lVar8);
    _swift_bridgeObjectRelease(lVar15);
    pcVar14 = *(code **)(lVar18 + 0x38);
  }
  lVar15 = lVar17;
  (*pcVar14)(lVar17,lVar6 == 0,1,lVar8);
  FUN_1002c85ec();
  plVar19 = *(long **)(param_7 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar4 = *(undefined8 *)(plVar19[2] + 0x10);
  local_190 = lVar15;
  _os_unfair_lock_lock(uVar4);
  lVar6 = *(long *)(*plVar19 + 0x60);
  _swift_beginAccess((long)plVar19 + lVar6,auStack_b8,0,0);
  pcVar14 = FUN_1002a7694;
  FUN_100082394((long)plVar19 + lVar6,lVar12,FUN_1002a7694);
  FUN_10007f314(lVar12 + *(int *)(local_138 + 0x14),local_100,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar12,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar4);
  FUN_1002a7418();
  uVar16 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  FUN_100082394(lVar3,pcVar21,FUN_1002c76a8);
  uVar13 = *(ulong *)(pcVar21 + 0x158);
  _swift_bridgeObjectRetain(uVar13);
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  if (uVar13 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    if (uVar9 != 0) goto LAB_1002b04e4;
LAB_1002b053c:
    _swift_bridgeObjectRelease(uVar13);
    uVar10 = 0;
  }
  else {
    uVar9 = uVar13 & 0xffffffffffffff8;
    if ((long)uVar13 < 0) {
      uVar9 = uVar13;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar9 == 0) goto LAB_1002b053c;
LAB_1002b04e4:
    uVar10 = uVar9 - 1;
    if (SBORROW8(uVar9,1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b0ad4);
      (*pcVar14)();
    }
    if ((uVar13 & 0xc000000000000001) == 0) {
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b0ae4);
        (*pcVar14)();
      }
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1002b0ae8);
        (*pcVar14)();
      }
      uVar10 = *(ulong *)(uVar13 + uVar10 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar10,uVar13);
    }
    _swift_bridgeObjectRelease(uVar13);
  }
  lVar6 = local_180;
  (**(code **)(local_188 + 0x10))(local_180,local_118,local_128);
  *(undefined8 **)(lVar7 + -8) = local_178;
  *(long *)(lVar7 + -0x10) = local_120;
  lVar7 = local_110;
  uVar16 = local_170;
  FUN_1002d9d20(local_110,param_1 - param_2,lVar17,local_190,local_100,uVar4,pcVar14,uVar10,lVar6,
                local_170);
  uVar4 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100082394(lVar3,pcVar21,FUN_1002c76a8);
  FUN_10007f314(pcVar21 + 0xf0,auStack_e0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  if (local_c8 == 0) {
    FUN_100040bb4(auStack_e0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_e0,local_c8);
    (**(code **)(local_c0 + 0x168))(param_7,lVar7,uVar16,local_c8,local_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar12 = local_168;
  uVar4 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_100082394(lVar3,pcVar21,FUN_1002c76a8);
  cVar1 = *pcVar21;
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  lVar15 = local_130;
  lVar6 = local_1a8;
  local_198 = param_7;
  if (cVar1 != '\x03') {
    FUN_10031178c(local_1a8,local_128);
    lVar8 = lVar6;
    (**(code **)(local_1b0 + 0x30))(lVar6,1,local_120);
    lVar17 = local_1b8;
    if ((int)lVar8 == 1) {
      FUN_100040bb4(lVar6,&DAT_100a82460,&DAT_1008175c0);
    }
    else {
      FUN_10026531c(lVar6,local_1b8);
      param_7 = param_7 + _TtC9Alamofire7Request::delegate;
      _swift_beginAccess(param_7,auStack_f8,0,0);
      lVar6 = param_7;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 != 0) {
        local_118 = *(long *)(param_7 + 8);
        lVar17 = lVar6;
        _swift_getObjectType();
        lVar3 = local_108;
        local_100 = lVar17;
        (**(code **)(local_108 + 0x10))(local_1c0,lVar7,lVar15);
        uVar13 = (ulong)*(byte *)(lVar3 + 0x50);
        uVar9 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = lVar12 + uVar9 + 7 & 0xfffffffffffffff8;
        puVar2 = &DAT_1009acb00;
        _swift_allocObject(&DAT_1009acb00,uVar10 + 0x28,uVar13 | 7);
        uVar4 = local_140;
        *(undefined8 *)(puVar2 + 0x10) = local_160;
        *(undefined8 *)(puVar2 + 0x18) = local_158;
        *(undefined8 *)(puVar2 + 0x20) = local_148;
        *(undefined8 *)(puVar2 + 0x28) = local_150;
        *(undefined8 *)(puVar2 + 0x30) = local_140;
        (**(code **)(lVar3 + 0x20))(puVar2 + uVar9,local_1c0,local_130);
        lVar3 = local_198;
        *(double *)(puVar2 + uVar10) = param_1;
        *(double *)(puVar2 + uVar10 + 8) = param_2;
        *(long *)(puVar2 + uVar10 + 0x10) = lVar6;
        *(long *)((long)(puVar2 + uVar10 + 0x10) + 8) = local_118;
        *(long *)(puVar2 + uVar10 + 0x20) = local_198;
        pcVar14 = *(code **)(local_118 + 0x28);
        _swift_retain(uVar4);
        _swift_unknownObjectRetain(lVar6);
        _swift_retain(lVar3);
        lVar15 = local_130;
        lVar3 = local_1b8;
        (*pcVar14)();
        _swift_unknownObjectRelease(lVar6);
        _swift_release(puVar2);
        FUN_1000d27dc(lVar3,FUN_100277ad0);
        goto LAB_1002b0a54;
      }
      FUN_1000d27dc(lVar17,FUN_100277ad0);
    }
  }
  lVar17 = local_108;
  lVar6 = local_1a0;
  (**(code **)(local_108 + 0x10))(local_1a0,lVar7,lVar15);
  uVar13 = (ulong)*(byte *)(lVar17 + 0x50);
  uVar9 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009acab0;
  _swift_allocObject(&DAT_1009acab0,uVar9 + lVar12,uVar13 | 7);
  uVar4 = local_140;
  *(undefined8 *)(puVar2 + 0x10) = local_160;
  *(undefined8 *)(puVar2 + 0x18) = local_158;
  *(undefined8 *)(puVar2 + 0x20) = local_148;
  *(undefined8 *)(puVar2 + 0x28) = local_150;
  *(undefined8 *)(puVar2 + 0x30) = local_140;
  (**(code **)(lVar17 + 0x20))(puVar2 + uVar9,lVar6,lVar15);
  uVar16 = *(undefined8 *)(plVar20[2] + 0x10);
  _swift_retain(uVar4);
  _os_unfair_lock_lock(uVar16);
  _swift_beginAccess(lVar3,auStack_e0,0x21,0);
  *(undefined1 *)(lVar3 + 0xd8) = 0;
  puVar11 = &DAT_1009acad8;
  _swift_allocObject(&DAT_1009acad8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1002b9d84;
  *(undefined **)(puVar11 + 0x18) = puVar2;
  uVar10 = *(ulong *)(lVar3 + 0xe0);
  _swift_retain(puVar2);
  uVar13 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar3 + 0xe0) = uVar10;
  uVar9 = uVar10;
  if ((uVar13 & 1) == 0) {
    uVar9 = 0;
    FUN_100296548(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(lVar3 + 0xe0) = uVar9;
  }
  uVar13 = *(ulong *)(uVar9 + 0x10);
  uVar10 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar13) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_100296548(uVar10,uVar13 + 1,1,uVar9);
  }
  *(ulong *)(uVar10 + 0x10) = uVar13 + 1;
  lVar6 = uVar10 + uVar13 * 0x10;
  *(code **)(lVar6 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar6 + 0x28) = puVar11;
  *(ulong *)(lVar3 + 0xe0) = uVar10;
  _swift_endAccess(auStack_e0);
  _os_unfair_lock_unlock(uVar16);
  FUN_1002cbca4();
  _swift_release(puVar2);
LAB_1002b0a54:
  (**(code **)(local_108 + 8))(local_110,lVar15);
  return;
}

