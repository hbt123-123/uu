// rea decompile_all
// name: FUN_100285728
// address: 0x100285728
// body: available
// range: 0x100285728-0x10028602f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100285728(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  char *pcVar22;
  char acStack_170 [8];
  long local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  char *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [32];
  
  puVar4 = &DAT_100a82c50;
  local_128 = param_5;
  local_120 = param_4;
  local_118 = param_6;
  local_108 = param_3;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  lVar12 = *(long *)(*(long *)(puVar4 + -8) + 0x40);
  lVar5 = 0;
  local_150 = puVar4;
  local_148 = acStack_170 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  FUN_100277ad0();
  uVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168 = (long)(acStack_170 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) - uVar13;
  lVar12 = local_168 - uVar13;
  lVar5 = 0;
  local_158 = lVar12;
  FUN_1002c76a8();
  pcVar22 = (char *)(lVar12 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  puVar4 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar18 = (long)pcVar22 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c58;
  FUN_100004bb4(&DAT_100a82c58,&DAT_100817218);
  local_138 = *(long *)(puVar4 + -8);
  local_130 = *(long *)(local_138 + 0x40);
  uVar13 = local_130 + 0xfU & 0xfffffffffffffff0;
  local_160 = lVar18 - uVar13;
  local_140 = local_160 - uVar13;
  local_110 = local_140 - uVar13;
  plVar17 = *(long **)(param_7 + _TtC9Alamofire7Request::mutableState);
  uVar19 = *(undefined8 *)(plVar17[2] + 0x10);
  _os_unfair_lock_lock(uVar19);
  lVar5 = (long)plVar17 + *(long *)(*plVar17 + 0x60);
  _swift_beginAccess(lVar5,auStack_a0,0,0);
  FUN_10028ab0c(lVar5,pcVar22);
  lVar15 = *(long *)(pcVar22 + 0x148);
  _swift_bridgeObjectRetain(lVar15);
  FUN_1000d27dc(pcVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  lVar12 = *(long *)(lVar15 + 0x10);
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(lVar15);
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  }
  else {
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    lVar20 = *(long *)(lVar6 + -8);
    (**(code **)(lVar20 + 0x10))
              (lVar18,lVar15 + ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar20 + 0x48) * (lVar12 + -1),lVar6);
    _swift_bridgeObjectRelease(lVar15);
    pcVar14 = *(code **)(lVar20 + 0x38);
  }
  lVar15 = lVar18;
  (*pcVar14)(lVar18,lVar12 == 0,1,lVar6);
  FUN_1002c85ec();
  lVar12 = *(long *)(param_7 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
  local_100 = param_7;
  _os_unfair_lock_lock(uVar16);
  _swift_beginAccess(lVar12 + 0x18,auStack_b8,0,0);
  uVar19 = *(undefined8 *)(lVar12 + 0x18);
  uVar21 = *(undefined8 *)(lVar12 + 0x20);
  FUN_10010bd10(uVar19,uVar21);
  _os_unfair_lock_unlock(uVar16);
  uVar16 = *(undefined8 *)(plVar17[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  FUN_10028ab0c(lVar5,pcVar22);
  uVar13 = *(ulong *)(pcVar22 + 0x158);
  _swift_bridgeObjectRetain(uVar13);
  FUN_1000d27dc(pcVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  if (uVar13 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    if (uVar7 != 0) goto LAB_100285a6c;
LAB_100285ac0:
    _swift_bridgeObjectRelease(uVar13);
    uVar8 = 0;
  }
  else {
    uVar7 = uVar13 & 0xffffffffffffff8;
    if ((long)uVar13 < 0) {
      uVar7 = uVar13;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar7 == 0) goto LAB_100285ac0;
LAB_100285a6c:
    uVar8 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10028601c);
      (*pcVar14)();
    }
    if ((uVar13 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10028602c);
        (*pcVar14)();
      }
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100286030);
        (*pcVar14)();
      }
      uVar8 = *(ulong *)(uVar13 + uVar8 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar8,uVar13);
    }
    _swift_bridgeObjectRelease(uVar13);
  }
  lVar12 = local_110;
  FUN_10007f314(local_108,local_110 + *(int *)(puVar4 + 0x3c),&DAT_100a82c50,&DAT_100817210);
  FUN_1000a00a8(lVar18,lVar12,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar12 + *(int *)(puVar4 + 0x2c)) = lVar15;
  iVar2 = *(int *)(puVar4 + 0x30);
  *(undefined8 *)(lVar12 + iVar2) = uVar19;
  ((undefined8 *)(lVar12 + iVar2))[1] = uVar21;
  *(ulong *)(lVar12 + *(int *)(puVar4 + 0x34)) = uVar8;
  *(double *)(lVar12 + *(int *)(puVar4 + 0x38)) = param_1 - param_2;
  uVar19 = *(undefined8 *)(plVar17[2] + 0x10);
  _os_unfair_lock_lock(uVar19);
  FUN_10028ab0c(lVar5,pcVar22);
  FUN_10007f314(pcVar22 + 0xf0,auStack_e0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(pcVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  if (local_c8 == 0) {
    FUN_100040bb4(auStack_e0,&DAT_100a82c40,&DAT_100817200);
    lVar15 = local_100;
  }
  else {
    FUN_10003f030(auStack_e0,local_c8);
    lVar15 = local_100;
    (**(code **)(local_c0 + 0x118))(local_100,lVar12,PTR___sSSN_1009957f8,local_c8,local_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar6 = local_130;
  lVar18 = local_138;
  uVar19 = *(undefined8 *)(plVar17[2] + 0x10);
  _os_unfair_lock_lock(uVar19);
  FUN_10028ab0c(lVar5,pcVar22);
  cVar1 = *pcVar22;
  FUN_1000d27dc(pcVar22,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  pcVar22 = local_148;
  if (cVar1 != '\x03') {
    FUN_10007f314(local_108,local_148,&DAT_100a82c50,&DAT_100817210);
    pcVar9 = pcVar22;
    _swift_getEnumCaseMultiPayload(pcVar22,local_150);
    lVar20 = local_168;
    if ((int)pcVar9 == 1) {
      FUN_10026531c(pcVar22,local_168);
      lVar3 = local_158;
      FUN_10026531c(lVar20,local_158);
      lVar20 = lVar15 + _TtC9Alamofire7Request::delegate;
      _swift_beginAccess(lVar20,auStack_f8,0,0);
      lVar10 = lVar20;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar10 != 0) {
        local_130 = *(long *)(lVar20 + 8);
        lVar5 = lVar10;
        _swift_getObjectType();
        local_108 = lVar5;
        FUN_10007f314(lVar12,local_160,&DAT_100a82c58,&DAT_100817218);
        uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
        uVar7 = uVar13 + 0x28 & (uVar13 ^ 0xffffffffffffffff);
        uVar8 = lVar6 + uVar7 + 7 & 0xfffffffffffffff8;
        puVar4 = &DAT_1009aac30;
        _swift_allocObject(&DAT_1009aac30,uVar8 + 0x28,uVar13 | 7);
        uVar19 = local_118;
        *(undefined8 *)(puVar4 + 0x10) = local_120;
        *(undefined8 *)(puVar4 + 0x18) = local_128;
        *(undefined8 *)(puVar4 + 0x20) = local_118;
        FUN_1000a00a8(local_160,puVar4 + uVar7,&DAT_100a82c58,&DAT_100817218);
        lVar12 = local_110;
        *(double *)(puVar4 + uVar8) = param_1;
        *(double *)(puVar4 + uVar8 + 8) = param_2;
        *(long *)(puVar4 + uVar8 + 0x10) = lVar10;
        *(long *)((long)(puVar4 + uVar8 + 0x10) + 8) = local_130;
        *(long *)(puVar4 + uVar8 + 0x20) = lVar15;
        pcVar14 = *(code **)(local_130 + 0x28);
        _swift_retain(uVar19);
        _swift_unknownObjectRetain(lVar10);
        _swift_retain(lVar15);
        lVar5 = local_158;
        (*pcVar14)();
        _swift_unknownObjectRelease(lVar10);
        _swift_release(puVar4);
        FUN_1000d27dc(lVar5,FUN_100277ad0);
        goto LAB_100285f94;
      }
      FUN_1000d27dc(lVar3,FUN_100277ad0);
    }
    else {
      FUN_100040bb4(pcVar22,&DAT_100a82c50,&DAT_100817210);
    }
  }
  lVar15 = local_140;
  FUN_10007f314(lVar12,local_140,&DAT_100a82c58,&DAT_100817218);
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar7 = uVar13 + 0x28 & (uVar13 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009aabe0;
  _swift_allocObject(&DAT_1009aabe0,uVar7 + lVar6,uVar13 | 7);
  uVar19 = local_118;
  *(undefined8 *)(puVar4 + 0x10) = local_120;
  *(undefined8 *)(puVar4 + 0x18) = local_128;
  *(undefined8 *)(puVar4 + 0x20) = local_118;
  FUN_1000a00a8(lVar15,puVar4 + uVar7,&DAT_100a82c58,&DAT_100817218);
  uVar21 = *(undefined8 *)(plVar17[2] + 0x10);
  _swift_retain(uVar19);
  _os_unfair_lock_lock(uVar21);
  _swift_beginAccess(lVar5,auStack_e0,0x21,0);
  *(undefined1 *)(lVar5 + 0xd8) = 0;
  puVar11 = &DAT_1009aac08;
  _swift_allocObject(&DAT_1009aac08,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10028c2bc;
  *(undefined **)(puVar11 + 0x18) = puVar4;
  uVar8 = *(ulong *)(lVar5 + 0xe0);
  _swift_retain(puVar4);
  uVar13 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar5 + 0xe0) = uVar8;
  uVar7 = uVar8;
  if ((uVar13 & 1) == 0) {
    uVar7 = 0;
    FUN_100296548(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar5 + 0xe0) = uVar7;
  }
  uVar13 = *(ulong *)(uVar7 + 0x10);
  uVar8 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar13) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100296548(uVar8,uVar13 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
  lVar15 = uVar8 + uVar13 * 0x10;
  *(code **)(lVar15 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar15 + 0x28) = puVar11;
  *(ulong *)(lVar5 + 0xe0) = uVar8;
  _swift_endAccess(auStack_e0);
  _os_unfair_lock_unlock(uVar21);
  FUN_1002cbca4();
  _swift_release(puVar4);
LAB_100285f94:
  FUN_100040bb4(lVar12,&DAT_100a82c58,&DAT_100817218);
  return;
}

