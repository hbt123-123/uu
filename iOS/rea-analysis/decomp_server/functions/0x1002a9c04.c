// rea decompile_all
// name: FUN_1002a9c04
// address: 0x1002a9c04
// body: available
// range: 0x1002a9c04-0x1002aa2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a9c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong auStack_130 [5];
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  undefined1 auStack_c0 [24];
  long local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  auStack_130[2] = param_1;
  local_100 = param_3;
  local_f8 = param_2;
  uStack_f0 = param_4;
  FUN_1002a7694();
  lVar18 = (long)auStack_130 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar4 = &DAT_100a83428;
  local_e8 = lVar3;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar9 = lVar18 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_d8 = lVar9;
  FUN_1002c76a8();
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar17 = lVar9 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a83900;
  FUN_100004bb4(&DAT_100a83900,&DAT_100817e30);
  auStack_130[3] = *(ulong *)(puVar4 + -8);
  auStack_130[4] = *(long *)(auStack_130[3] + 0x40);
  uVar10 = auStack_130[4] + 0xf & 0xfffffffffffffff0;
  local_108 = lVar17 - uVar10;
  lVar16 = local_108 - uVar10;
  plVar13 = *(long **)(param_5 + _TtC9Alamofire7Request::mutableState);
  uVar19 = *(undefined8 *)(plVar13[2] + 0x10);
  local_d0 = param_5;
  _os_unfair_lock_lock(uVar19);
  lVar3 = (long)plVar13 + *(long *)(*plVar13 + 0x60);
  local_c8 = plVar13;
  _swift_beginAccess(lVar3,auStack_80,0,0);
  FUN_100082394(lVar3,lVar9,FUN_1002c76a8);
  lVar14 = *(long *)(lVar9 + 0x148);
  _swift_bridgeObjectRetain(lVar14);
  FUN_1000d27dc(lVar9,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  lVar11 = *(long *)(lVar14 + 0x10);
  local_e0 = lVar17;
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar14);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar12 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar20 = *(long *)(lVar5 + -8);
    (**(code **)(lVar20 + 0x10))
              (lVar17,lVar14 + ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar20 + 0x48) * (lVar11 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar14);
    pcVar12 = *(code **)(lVar20 + 0x38);
  }
  (*pcVar12)(lVar17,lVar11 == 0,1,lVar5);
  lVar11 = local_d0;
  FUN_1002c85ec();
  plVar13 = *(long **)(lVar11 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar19 = *(undefined8 *)(plVar13[2] + 0x10);
  auStack_130[1] = lVar17;
  _os_unfair_lock_lock(uVar19);
  lVar17 = *(long *)(*plVar13 + 0x60);
  _swift_beginAccess((long)plVar13 + lVar17,auStack_98,0,0);
  pcVar12 = FUN_1002a7694;
  FUN_100082394((long)plVar13 + lVar17,lVar18,FUN_1002a7694);
  FUN_10007f314(lVar18 + *(int *)(local_e8 + 0x14),local_d8,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar18);
  _os_unfair_lock_unlock();
  FUN_1002a7418();
  uVar15 = *(undefined8 *)(local_c8[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_100082394(lVar3,lVar9,FUN_1002c76a8);
  uVar10 = *(ulong *)(lVar9 + 0x158);
  _swift_bridgeObjectRetain(uVar10);
  FUN_1000d27dc(lVar9,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  if (uVar10 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    lVar17 = local_e0;
  }
  else {
    uVar6 = uVar10 & 0xffffffffffffff8;
    if ((long)uVar10 < 0) {
      uVar6 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar17 = local_e0;
  }
  local_e0 = lVar17;
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(uVar10);
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6 - 1;
    if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1002aa2b4);
      (*pcVar12)();
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002aa2c4);
        (*pcVar12)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002aa2c8);
        (*pcVar12)();
      }
      uVar7 = *(ulong *)(uVar10 + uVar7 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar7,uVar10);
    }
    _swift_bridgeObjectRelease(uVar10);
  }
  FUN_10007f314(auStack_130[2],lVar16 + *(int *)(puVar4 + 0x40),&DAT_100a838f8,&DAT_100817e28);
  FUN_1000a00a8(lVar17,lVar16,&DAT_100a82c30,&DAT_1008171f0);
  *(ulong *)(lVar16 + *(int *)(puVar4 + 0x2c)) = auStack_130[1];
  FUN_1000a00a8(local_d8,lVar16 + *(int *)(puVar4 + 0x30),&DAT_100a83428,&DAT_100817bb0);
  iVar1 = *(int *)(puVar4 + 0x34);
  *(undefined8 *)(lVar16 + iVar1) = uVar19;
  ((undefined8 *)(lVar16 + iVar1))[1] = pcVar12;
  *(ulong *)(lVar16 + *(int *)(puVar4 + 0x38)) = uVar7;
  *(undefined8 *)(lVar16 + *(int *)(puVar4 + 0x3c)) = 0;
  uVar19 = *(undefined8 *)(local_c8[2] + 0x10);
  _os_unfair_lock_lock(uVar19);
  FUN_100082394(lVar3,lVar9,FUN_1002c76a8);
  FUN_10007f314(lVar9 + 0xf0,auStack_c0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar9,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  if (local_a8 == 0) {
    FUN_100040bb4(auStack_c0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_c0,local_a8);
    (**(code **)(local_a0 + 0x160))(local_d0,lVar16,local_a8,local_a0);
    FUN_10003f094(auStack_c0);
  }
  uVar2 = uStack_f0;
  uVar15 = local_f8;
  uVar19 = local_100;
  lVar17 = local_108;
  uVar10 = auStack_130[3];
  FUN_10007f314(lVar16,local_108,&DAT_100a83900,&DAT_100817e30);
  uVar10 = (ulong)*(byte *)(uVar10 + 0x50);
  uVar6 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
  puVar4 = &DAT_1009acc90;
  _swift_allocObject(&DAT_1009acc90,uVar6 + auStack_130[4],uVar10 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar15;
  *(undefined8 *)(puVar4 + 0x18) = uVar19;
  *(undefined8 *)(puVar4 + 0x20) = uVar2;
  FUN_1000a00a8(lVar17,puVar4 + uVar6,&DAT_100a83900,&DAT_100817e30);
  uVar19 = *(undefined8 *)(local_c8[2] + 0x10);
  _swift_retain(uVar2);
  _os_unfair_lock_lock(uVar19);
  _swift_beginAccess(lVar3,auStack_c0,0x21,0);
  *(undefined1 *)(lVar3 + 0xd8) = 0;
  puVar8 = &DAT_1009accb8;
  _swift_allocObject(&DAT_1009accb8,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1002bb01c;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  uVar7 = *(ulong *)(lVar3 + 0xe0);
  _swift_retain(puVar4);
  uVar10 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar3 + 0xe0) = uVar7;
  uVar6 = uVar7;
  if ((uVar10 & 1) == 0) {
    uVar6 = 0;
    FUN_100296548(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(lVar3 + 0xe0) = uVar6;
  }
  uVar10 = *(ulong *)(uVar6 + 0x10);
  uVar7 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_100296548(uVar7,uVar10 + 1,1,uVar6);
  }
  *(ulong *)(uVar7 + 0x10) = uVar10 + 1;
  lVar17 = uVar7 + uVar10 * 0x10;
  *(code **)(lVar17 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar17 + 0x28) = puVar8;
  *(ulong *)(lVar3 + 0xe0) = uVar7;
  _swift_endAccess(auStack_c0);
  _os_unfair_lock_unlock(uVar19);
  FUN_1002cbca4();
  _swift_release(puVar4);
  FUN_100040bb4(lVar16,&DAT_100a83900,&DAT_100817e30);
  return;
}

