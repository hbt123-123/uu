// rea decompile_all
// name: FUN_1002820c4
// address: 0x1002820c4
// body: available
// range: 0x1002820c4-0x100282697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002820c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong local_110 [5];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  undefined1 auStack_c0 [24];
  long local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  local_110[1] = param_1;
  local_110[4] = param_3;
  local_e0 = param_4;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)local_110 + lVar1;
  puVar5 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar21 = lVar20 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a82c78;
  FUN_100004bb4(&DAT_100a82c78,&DAT_100817240);
  local_110[2] = *(ulong *)(puVar5 + -8);
  local_110[3] = *(long *)(local_110[2] + 0x40);
  uVar10 = local_110[3] + 0xf & 0xfffffffffffffff0;
  local_110[0] = lVar21 - uVar10;
  lVar15 = local_110[0] - uVar10;
  plVar19 = *(long **)(param_5 + _TtC9Alamofire7Request::mutableState);
  uVar16 = *(undefined8 *)(plVar19[2] + 0x10);
  local_c8 = param_5;
  _os_unfair_lock_lock(uVar16);
  lVar4 = (long)plVar19 + *(long *)(*plVar19 + 0x60);
  _swift_beginAccess(lVar4,auStack_80,0,0);
  FUN_10028ab0c(lVar4,lVar20);
  lVar13 = *(long *)(&stack0x00000038 + lVar1);
  _swift_bridgeObjectRetain(lVar13);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  lVar11 = *(long *)(lVar13 + 0x10);
  local_e8 = param_2;
  local_d8 = lVar21;
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(lVar13);
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar12 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  }
  else {
    lVar6 = 0;
    __s10Foundation10URLRequestVMa();
    lVar17 = *(long *)(lVar6 + -8);
    (**(code **)(lVar17 + 0x10))
              (lVar21,lVar13 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar17 + 0x48) * (lVar11 + -1),lVar6);
    _swift_bridgeObjectRelease(lVar13);
    pcVar12 = *(code **)(lVar17 + 0x38);
  }
  (*pcVar12)(lVar21,lVar11 == 0,1,lVar6);
  lVar11 = local_c8;
  FUN_1002c85ec();
  lVar11 = *(long *)(lVar11 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar14);
  _swift_beginAccess(lVar11 + 0x18,auStack_98,0,0);
  uVar16 = *(undefined8 *)(lVar11 + 0x18);
  uVar2 = *(undefined8 *)(lVar11 + 0x20);
  FUN_10010bd10(uVar16,uVar2);
  _os_unfair_lock_unlock(uVar14);
  uVar14 = *(undefined8 *)(plVar19[2] + 0x10);
  local_d0 = plVar19;
  _os_unfair_lock_lock(uVar14);
  FUN_10028ab0c(lVar4,lVar20);
  uVar10 = *(ulong *)(&stack0x00000048 + lVar1);
  _swift_bridgeObjectRetain(uVar10);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar14);
  if (uVar10 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    lVar11 = local_d8;
  }
  else {
    uVar7 = uVar10 & 0xffffffffffffff8;
    if ((long)uVar10 < 0) {
      uVar7 = uVar10;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar11 = local_d8;
  }
  local_d8 = lVar11;
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(uVar10);
    uVar8 = 0;
  }
  else {
    uVar8 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100282684);
      (*pcVar12)();
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100282694);
        (*pcVar12)();
      }
      if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100282698);
        (*pcVar12)();
      }
      uVar8 = *(ulong *)(uVar10 + uVar8 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar8,uVar10);
    }
    _swift_bridgeObjectRelease(uVar10);
  }
  FUN_10007f314(local_110[1],lVar15 + *(int *)(puVar5 + 0x3c),&DAT_100a82c70,&DAT_100817238);
  FUN_1000a00a8(lVar11,lVar15,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar15 + *(int *)(puVar5 + 0x2c)) = lVar21;
  iVar3 = *(int *)(puVar5 + 0x30);
  *(undefined8 *)(lVar15 + iVar3) = uVar16;
  ((undefined8 *)(lVar15 + iVar3))[1] = uVar2;
  *(ulong *)(lVar15 + *(int *)(puVar5 + 0x34)) = uVar8;
  *(undefined8 *)(lVar15 + *(int *)(puVar5 + 0x38)) = 0;
  uVar16 = *(undefined8 *)(local_d0[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  FUN_10028ab0c(lVar4,lVar20);
  FUN_10007f314(&stack0xffffffffffffffe0 + lVar1,auStack_c0,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  if (local_a8 == 0) {
    FUN_100040bb4(auStack_c0,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_10003f030(auStack_c0,local_a8);
    (**(code **)(local_a0 + 0x110))(local_c8,lVar15,local_a8,local_a0);
    FUN_10003f094(auStack_c0);
  }
  uVar2 = local_e0;
  uVar16 = local_e8;
  uVar8 = local_110[4];
  uVar7 = local_110[2];
  uVar10 = local_110[0];
  FUN_10007f314(lVar15,local_110[0],&DAT_100a82c78,&DAT_100817240);
  uVar7 = (ulong)*(byte *)(uVar7 + 0x50);
  uVar18 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar5 = &DAT_1009ab180;
  _swift_allocObject(&DAT_1009ab180,uVar18 + local_110[3],uVar7 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar16;
  *(ulong *)(puVar5 + 0x18) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  FUN_1000a00a8(uVar10,puVar5 + uVar18,&DAT_100a82c78,&DAT_100817240);
  uVar16 = *(undefined8 *)(local_d0[2] + 0x10);
  _swift_retain(uVar2);
  _os_unfair_lock_lock(uVar16);
  _swift_beginAccess(lVar4,auStack_c0,0x21,0);
  *(undefined1 *)(lVar4 + 0xd8) = 0;
  puVar9 = &DAT_1009ab1a8;
  _swift_allocObject(&DAT_1009ab1a8,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_10028f6c8;
  *(undefined **)(puVar9 + 0x18) = puVar5;
  uVar8 = *(ulong *)(lVar4 + 0xe0);
  _swift_retain(puVar5);
  uVar10 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar4 + 0xe0) = uVar8;
  uVar7 = uVar8;
  if ((uVar10 & 1) == 0) {
    uVar7 = 0;
    FUN_100296548(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar4 + 0xe0) = uVar7;
  }
  uVar10 = *(ulong *)(uVar7 + 0x10);
  uVar8 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100296548(uVar8,uVar10 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
  lVar1 = uVar8 + uVar10 * 0x10;
  *(code **)(lVar1 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar1 + 0x28) = puVar9;
  *(ulong *)(lVar4 + 0xe0) = uVar8;
  _swift_endAccess(auStack_c0);
  _os_unfair_lock_unlock(uVar16);
  FUN_1002cbca4();
  _swift_release(puVar5);
  FUN_100040bb4(lVar15,&DAT_100a82c78,&DAT_100817240);
  return;
}

