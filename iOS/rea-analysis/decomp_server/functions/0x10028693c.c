// rea decompile_all
// name: FUN_10028693c
// address: 0x10028693c
// body: available
// range: 0x10028693c-0x10028730b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10028693c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
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
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 auStack_1b0 [2];
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 *local_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [8];
  char acStack_b0 [16];
  undefined1 auStack_a0 [32];
  
  puVar2 = &DAT_100a82460;
  local_148 = param_5;
  local_140 = param_4;
  local_138 = param_6;
  local_118 = param_3;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar12 = (long)&local_1a0 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar3 = 0;
  local_190 = lVar12;
  FUN_100277ad0();
  local_198 = *(long *)(lVar3 + -8);
  lVar12 = lVar12 - (*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_158 = param_8;
  local_150 = param_9;
  local_130 = lVar12;
  _swift_getAssociatedTypeWitness
            (0xff,param_9,param_8,0x1008fab60,&TargetProtocolRequirement_1008fab68);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  __ss6ResultOMa(0,uVar4,lVar3,puVar5);
  local_180 = *(long *)(lVar6 + -8);
  lVar12 = lVar12 - (*(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_120 = lVar6;
  FUN_1002c76a8();
  pcVar21 = (char *)(lVar12 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  puVar2 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar16 = (long)pcVar21 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_178 = puVar5;
  local_170 = uVar4;
  local_160 = lVar3;
  FUN_1002d9bd8(0,uVar4,lVar3,puVar5);
  local_108 = *(long *)(lVar6 + -8);
  local_168 = *(long *)(local_108 + 0x40);
  uVar13 = local_168 + 0xfU & 0xfffffffffffffff0;
  local_188 = lVar16 - uVar13;
  local_1a0 = local_188 - uVar13;
  lVar7 = local_1a0 - uVar13;
  plVar19 = *(long **)(param_7 + _TtC9Alamofire7Request::mutableState);
  uVar4 = *(undefined8 *)(plVar19[2] + 0x10);
  local_128 = lVar6;
  local_110 = lVar7;
  _os_unfair_lock_lock(uVar4);
  lVar3 = (long)plVar19 + *(long *)(*plVar19 + 0x60);
  _swift_beginAccess(lVar3,auStack_a0,0,0);
  FUN_10028ab0c(lVar3,pcVar21);
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
    lVar17 = *(long *)(lVar8 + -8);
    (**(code **)(lVar17 + 0x10))
              (lVar16,lVar15 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar17 + 0x48) * (lVar6 + -1),lVar8);
    _swift_bridgeObjectRelease(lVar15);
    pcVar14 = *(code **)(lVar17 + 0x38);
  }
  lVar15 = lVar16;
  (*pcVar14)(lVar16,lVar6 == 0,1,lVar8);
  FUN_1002c85ec();
  lVar6 = *(long *)(param_7 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar18 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
  local_100 = param_7;
  _os_unfair_lock_lock(uVar18);
  _swift_beginAccess(lVar6 + 0x18,auStack_b8,0,0);
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  uVar20 = *(undefined8 *)(lVar6 + 0x20);
  FUN_10010bd10(uVar4,uVar20);
  _os_unfair_lock_unlock(uVar18);
  uVar18 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar18);
  FUN_10028ab0c(lVar3,pcVar21);
  uVar13 = *(ulong *)(pcVar21 + 0x158);
  _swift_bridgeObjectRetain(uVar13);
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar18);
  if (uVar13 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    if (uVar9 != 0) goto LAB_100286d2c;
LAB_100286d80:
    _swift_bridgeObjectRelease(uVar13);
    uVar10 = 0;
  }
  else {
    uVar9 = uVar13 & 0xffffffffffffff8;
    if ((long)uVar13 < 0) {
      uVar9 = uVar13;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar9 == 0) goto LAB_100286d80;
LAB_100286d2c:
    uVar10 = uVar9 - 1;
    if (SBORROW8(uVar9,1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1002872f8);
      (*pcVar14)();
    }
    if ((uVar13 & 0xc000000000000001) == 0) {
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100287308);
        (*pcVar14)();
      }
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10028730c);
        (*pcVar14)();
      }
      uVar10 = *(ulong *)(uVar13 + uVar10 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar10,uVar13);
    }
    _swift_bridgeObjectRelease(uVar13);
  }
  (**(code **)(local_180 + 0x10))(lVar12,local_118,local_120);
  *(undefined8 **)(lVar7 + -0x10) = local_178;
  lVar7 = local_110;
  lVar6 = local_160;
  uVar18 = local_170;
  FUN_1002d9af4(local_110,param_1 - param_2,lVar16,lVar15,uVar4,uVar20,uVar10,lVar12,local_170,
                local_160);
  uVar4 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_10028ab0c(lVar3,pcVar21);
  FUN_10007f314(pcVar21 + 0xf0,auStack_e0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  if (local_c8 == 0) {
    FUN_100040bb4(auStack_e0,&DAT_100a82c40,&DAT_100817200);
    lVar12 = local_100;
  }
  else {
    FUN_10003f030(auStack_e0,local_c8);
    lVar12 = local_100;
    (**(code **)(local_c0 + 0x118))(local_100,lVar7,uVar18,local_c8,local_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar16 = local_130;
  uVar4 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  FUN_10028ab0c(lVar3,pcVar21);
  cVar1 = *pcVar21;
  FUN_1000d27dc(pcVar21,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  lVar8 = local_128;
  lVar15 = local_190;
  if (cVar1 != '\x03') {
    FUN_10031178c(local_190,local_120);
    lVar17 = lVar15;
    (**(code **)(local_198 + 0x30))(lVar15,1,lVar6);
    if ((int)lVar17 == 1) {
      FUN_100040bb4(lVar15,&DAT_100a82460,&DAT_1008175c0);
    }
    else {
      FUN_10026531c(lVar15,lVar16);
      lVar12 = lVar12 + _TtC9Alamofire7Request::delegate;
      _swift_beginAccess(lVar12,auStack_f8,0,0);
      lVar6 = lVar12;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 != 0) {
        local_120 = *(long *)(lVar12 + 8);
        lVar12 = lVar6;
        _swift_getObjectType();
        lVar3 = local_108;
        local_118 = lVar12;
        (**(code **)(local_108 + 0x10))(local_1a0,lVar7,lVar8);
        uVar13 = (ulong)*(byte *)(lVar3 + 0x50);
        uVar9 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = local_168 + uVar9 + 7 & 0xfffffffffffffff8;
        puVar2 = &DAT_1009aaff0;
        _swift_allocObject(&DAT_1009aaff0,uVar10 + 0x28,uVar13 | 7);
        uVar4 = local_138;
        *(undefined8 *)(puVar2 + 0x10) = local_158;
        *(undefined8 *)(puVar2 + 0x18) = local_150;
        *(undefined8 *)(puVar2 + 0x20) = local_140;
        *(undefined8 *)(puVar2 + 0x28) = local_148;
        *(undefined8 *)(puVar2 + 0x30) = local_138;
        (**(code **)(lVar3 + 0x20))(puVar2 + uVar9,local_1a0,local_128);
        lVar3 = local_100;
        *(double *)(puVar2 + uVar10) = param_1;
        *(double *)(puVar2 + uVar10 + 8) = param_2;
        *(long *)(puVar2 + uVar10 + 0x10) = lVar6;
        *(long *)((long)(puVar2 + uVar10 + 0x10) + 8) = local_120;
        *(long *)(puVar2 + uVar10 + 0x20) = local_100;
        pcVar14 = *(code **)(local_120 + 0x28);
        _swift_retain(uVar4);
        _swift_unknownObjectRetain(lVar6);
        _swift_retain(lVar3);
        lVar8 = local_128;
        lVar3 = local_130;
        (*pcVar14)();
        _swift_unknownObjectRelease(lVar6);
        _swift_release(puVar2);
        FUN_1000d27dc(lVar3,FUN_100277ad0);
        goto LAB_100287278;
      }
      FUN_1000d27dc(lVar16,FUN_100277ad0);
    }
  }
  lVar12 = local_108;
  lVar6 = local_188;
  (**(code **)(local_108 + 0x10))(local_188,lVar7,lVar8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar9 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
  puVar2 = &DAT_1009aafa0;
  _swift_allocObject(&DAT_1009aafa0,uVar9 + local_168,uVar13 | 7);
  uVar4 = local_138;
  *(undefined8 *)(puVar2 + 0x10) = local_158;
  *(undefined8 *)(puVar2 + 0x18) = local_150;
  *(undefined8 *)(puVar2 + 0x20) = local_140;
  *(undefined8 *)(puVar2 + 0x28) = local_148;
  *(undefined8 *)(puVar2 + 0x30) = local_138;
  (**(code **)(lVar12 + 0x20))(puVar2 + uVar9,lVar6,lVar8);
  uVar20 = *(undefined8 *)(plVar19[2] + 0x10);
  _swift_retain(uVar4);
  _os_unfair_lock_lock(uVar20);
  _swift_beginAccess(lVar3,auStack_e0,0x21,0);
  *(undefined1 *)(lVar3 + 0xd8) = 0;
  puVar11 = &DAT_1009aafc8;
  _swift_allocObject(&DAT_1009aafc8,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10028e468;
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
  _os_unfair_lock_unlock(uVar20);
  FUN_1002cbca4();
  _swift_release(puVar2);
LAB_100287278:
  (**(code **)(local_108 + 8))(local_110,lVar8);
  return;
}

