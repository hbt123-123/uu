// rea decompile_all
// name: FUN_1002ae198
// address: 0x1002ae198
// body: available
// range: 0x1002ae198-0x1002aebc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002ae198(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  undefined8 uVar20;
  double dStack_190;
  long local_188 [3];
  undefined *local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  code *local_120;
  undefined8 local_118;
  long *local_110;
  long local_108;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  char acStack_a0 [32];
  
  puVar3 = &DAT_100a82c60;
  local_138 = param_5;
  local_130 = param_4;
  local_128 = param_6;
  FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
  lVar11 = (long)&dStack_190 -
           (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_170 = puVar3;
  local_168 = lVar11;
  FUN_100277ad0();
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_188[0] = lVar11 - uVar9;
  lVar10 = local_188[0] - uVar9;
  lVar4 = 0;
  local_188[2] = lVar10;
  FUN_1002a7694();
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a83428;
  local_120 = (code *)lVar4;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_108 = lVar11;
  FUN_1002c76a8();
  pcVar18 = (char *)(lVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = (long)pcVar18 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a838e0;
  FUN_100004bb4(&DAT_100a838e0,&DAT_100817e08);
  local_148 = *(long *)(puVar3 + -8);
  local_140 = *(long *)(local_148 + 0x40);
  uVar9 = local_140 + 0xfU & 0xfffffffffffffff0;
  local_188[1] = lVar11 - uVar9;
  local_160 = local_188[1] - uVar9;
  lVar17 = local_160 - uVar9;
  plVar15 = *(long **)(param_7 + _TtC9Alamofire7Request::mutableState);
  uVar20 = *(undefined8 *)(plVar15[2] + 0x10);
  local_100 = param_7;
  _os_unfair_lock_lock(uVar20);
  lVar4 = (long)plVar15 + *(long *)(*plVar15 + 0x60);
  local_110 = plVar15;
  _swift_beginAccess(lVar4,acStack_a0,0,0);
  FUN_100082394(lVar4,pcVar18,FUN_1002c76a8);
  lVar16 = *(long *)(pcVar18 + 0x148);
  _swift_bridgeObjectRetain(lVar16);
  FUN_1000d27dc(pcVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar20);
  lVar12 = *(long *)(lVar16 + 0x10);
  local_150 = lVar11;
  local_118 = param_3;
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(lVar16);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar19 = *(long *)(lVar5 + -8);
    (**(code **)(lVar19 + 0x10))
              (lVar11,lVar16 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar19 + 0x48) * (lVar12 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar16);
    pcVar13 = *(code **)(lVar19 + 0x38);
  }
  (*pcVar13)(lVar11,lVar12 == 0,1,lVar5);
  lVar12 = local_100;
  FUN_1002c85ec();
  plVar15 = *(long **)(lVar12 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar20 = *(undefined8 *)(plVar15[2] + 0x10);
  local_158 = lVar11;
  _os_unfair_lock_lock(uVar20);
  lVar11 = *(long *)(*plVar15 + 0x60);
  _swift_beginAccess((long)plVar15 + lVar11,auStack_b8,0,0);
  pcVar13 = FUN_1002a7694;
  FUN_100082394((long)plVar15 + lVar11,lVar10,FUN_1002a7694);
  FUN_10007f314(lVar10 + *(int *)((long)local_120 + 0x14),local_108,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar10);
  _os_unfair_lock_unlock();
  FUN_1002a7418();
  plVar15 = local_110;
  uVar14 = *(undefined8 *)(local_110[2] + 0x10);
  local_120 = pcVar13;
  _os_unfair_lock_lock(uVar14);
  FUN_100082394(lVar4,pcVar18,FUN_1002c76a8);
  uVar9 = *(ulong *)(pcVar18 + 0x158);
  _swift_bridgeObjectRetain(uVar9);
  FUN_1000d27dc(pcVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar14);
  if (uVar9 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar9 & 0xffffffffffffff8;
    if ((long)uVar9 < 0) {
      uVar6 = uVar9;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar14 = local_118;
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(uVar9);
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6 - 1;
    if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1002aebb0);
      (*pcVar13)();
    }
    if ((uVar9 & 0xc000000000000001) == 0) {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002aebc0);
        (*pcVar13)();
      }
      if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002aebc4);
        (*pcVar13)();
      }
      uVar7 = *(ulong *)(uVar9 + uVar7 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar7,uVar9);
    }
    _swift_bridgeObjectRelease(uVar9);
  }
  FUN_10007f314(uVar14,lVar17 + *(int *)(puVar3 + 0x40),&DAT_100a82c60,&DAT_100817220);
  FUN_1000a00a8(local_150,lVar17,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar17 + *(int *)(puVar3 + 0x2c)) = local_158;
  FUN_1000a00a8(local_108,lVar17 + *(int *)(puVar3 + 0x30),&DAT_100a83428,&DAT_100817bb0);
  pcVar13 = local_120;
  iVar2 = *(int *)(puVar3 + 0x34);
  *(undefined8 *)(lVar17 + iVar2) = uVar20;
  ((undefined8 *)(lVar17 + iVar2))[1] = pcVar13;
  *(ulong *)(lVar17 + *(int *)(puVar3 + 0x38)) = uVar7;
  *(double *)(lVar17 + *(int *)(puVar3 + 0x3c)) = param_1 - param_2;
  uVar20 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar20);
  FUN_100082394(lVar4,pcVar18,FUN_1002c76a8);
  FUN_10007f314(pcVar18 + 0xf0,auStack_e0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(pcVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar20);
  lVar11 = local_100;
  if (local_c8 == 0) {
    FUN_100040bb4(auStack_e0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_e0,local_c8);
    plVar15 = local_110;
    (**(code **)(local_c0 + 0x168))
              (lVar11,lVar17,PTR___s10Foundation4DataVN_1009961e8,local_c8,local_c0);
    FUN_10003f094(auStack_e0);
  }
  lVar12 = local_140;
  uVar20 = *(undefined8 *)(plVar15[2] + 0x10);
  _os_unfair_lock_lock(uVar20);
  FUN_100082394(lVar4,pcVar18,FUN_1002c76a8);
  cVar1 = *pcVar18;
  FUN_1000d27dc(pcVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar20);
  lVar10 = local_168;
  if (cVar1 != '\x03') {
    FUN_10007f314(uVar14,local_168,&DAT_100a82c60,&DAT_100817220);
    lVar5 = lVar10;
    _swift_getEnumCaseMultiPayload(lVar10,local_170);
    lVar16 = local_188[0];
    if ((int)lVar5 == 1) {
      FUN_10026531c(lVar10,local_188[0]);
      lVar10 = local_188[2];
      FUN_10026531c(lVar16,local_188[2]);
      lVar11 = lVar11 + _TtC9Alamofire7Request::delegate;
      _swift_beginAccess(lVar11,auStack_f8,0,0);
      lVar16 = lVar11;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar16 != 0) {
        local_110 = *(long **)(lVar11 + 8);
        lVar4 = lVar16;
        _swift_getObjectType();
        local_108 = lVar4;
        FUN_10007f314(lVar17,local_188[1],&DAT_100a838e0,&DAT_100817e08);
        uVar9 = (ulong)*(byte *)(local_148 + 0x50);
        uVar6 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = lVar12 + uVar6 + 7 & 0xfffffffffffffff8;
        puVar3 = &DAT_1009ac740;
        _swift_allocObject(&DAT_1009ac740,uVar7 + 0x28,uVar9 | 7);
        uVar20 = local_128;
        *(undefined8 *)(puVar3 + 0x10) = local_130;
        *(undefined8 *)(puVar3 + 0x18) = local_138;
        *(undefined8 *)(puVar3 + 0x20) = local_128;
        FUN_1000a00a8(local_188[1],puVar3 + uVar6,&DAT_100a838e0,&DAT_100817e08);
        lVar4 = local_100;
        *(double *)(puVar3 + uVar7) = param_1;
        *(double *)(puVar3 + uVar7 + 8) = param_2;
        *(long *)(puVar3 + uVar7 + 0x10) = lVar16;
        *(long **)((long)(puVar3 + uVar7 + 0x10) + 8) = local_110;
        *(long *)(puVar3 + uVar7 + 0x20) = local_100;
        pcVar13 = (code *)local_110[5];
        _swift_retain(uVar20);
        _swift_unknownObjectRetain(lVar16);
        _swift_retain(lVar4);
        lVar4 = local_188[2];
        (*pcVar13)();
        _swift_unknownObjectRelease(lVar16);
        _swift_release(puVar3);
        FUN_1000d27dc(lVar4,FUN_100277ad0);
        goto LAB_1002aeb14;
      }
      FUN_1000d27dc(lVar10,FUN_100277ad0);
      plVar15 = local_110;
    }
    else {
      FUN_100040bb4(lVar10,&DAT_100a82c60,&DAT_100817220);
      plVar15 = local_110;
    }
  }
  lVar11 = local_160;
  FUN_10007f314(lVar17,local_160,&DAT_100a838e0,&DAT_100817e08);
  uVar9 = (ulong)*(byte *)(local_148 + 0x50);
  uVar6 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  puVar3 = &DAT_1009ac6f0;
  _swift_allocObject(&DAT_1009ac6f0,uVar6 + lVar12,uVar9 | 7);
  uVar20 = local_128;
  *(undefined8 *)(puVar3 + 0x10) = local_130;
  *(undefined8 *)(puVar3 + 0x18) = local_138;
  *(undefined8 *)(puVar3 + 0x20) = local_128;
  FUN_1000a00a8(lVar11,puVar3 + uVar6,&DAT_100a838e0,&DAT_100817e08);
  uVar14 = *(undefined8 *)(plVar15[2] + 0x10);
  _swift_retain(uVar20);
  _os_unfair_lock_lock(uVar14);
  _swift_beginAccess(lVar4,auStack_e0,0x21,0);
  *(undefined1 *)(lVar4 + 0xd8) = 0;
  puVar8 = &DAT_1009ac718;
  _swift_allocObject(&DAT_1009ac718,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1002b7cdc;
  *(undefined **)(puVar8 + 0x18) = puVar3;
  uVar7 = *(ulong *)(lVar4 + 0xe0);
  _swift_retain(puVar3);
  uVar9 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar4 + 0xe0) = uVar7;
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
    FUN_100296548(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(lVar4 + 0xe0) = uVar6;
  }
  uVar9 = *(ulong *)(uVar6 + 0x10);
  uVar7 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100296548(uVar7,uVar9 + 1,1,uVar6);
  }
  *(ulong *)(uVar7 + 0x10) = uVar9 + 1;
  lVar11 = uVar7 + uVar9 * 0x10;
  *(code **)(lVar11 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar11 + 0x28) = puVar8;
  *(ulong *)(lVar4 + 0xe0) = uVar7;
  _swift_endAccess(auStack_e0);
  _os_unfair_lock_unlock(uVar14);
  FUN_1002cbca4();
  _swift_release(puVar3);
LAB_1002aeb14:
  FUN_100040bb4(lVar17,&DAT_100a838e0,&DAT_100817e08);
  return;
}

