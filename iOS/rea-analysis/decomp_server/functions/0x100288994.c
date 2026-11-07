// rea decompile_all
// name: FUN_100288994
// address: 0x100288994
// body: available
// range: 0x100288994-0x10028903f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100288994(double param_1,double param_2,long param_3,char param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,long param_11)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  double dStack_130;
  long local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  
  local_e8 = param_11;
  lVar2 = 0;
  local_108 = param_6;
  uStack_100 = param_7;
  local_f8 = param_5;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)&dStack_130 + lVar2;
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar10 = lVar18 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c28;
  local_f0 = lVar10;
  FUN_100004bb4(&DAT_100a82c28,&DAT_1008171e0);
  lVar10 = lVar10 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a82c38;
  FUN_100004bb4(&DAT_100a82c38,&DAT_1008171f8);
  local_128[1] = *(long *)(puVar4 + -8);
  local_128[2] = *(long *)(local_128[1] + 0x40);
  uVar11 = local_128[2] + 0xfU & 0xfffffffffffffff0;
  lVar22 = lVar10 - uVar11;
  lVar12 = lVar22 - uVar11;
  local_128[3] = lVar12;
  if (param_4 == '\0') {
    uVar16 = 0;
LAB_100288d68:
    _swift_getObjectType(param_9);
    (**(code **)(param_10 + 0x30))(local_e8,param_3,uVar16,param_9,param_10);
    return;
  }
  if (param_4 != '\x01') {
    if (param_3 == 0) {
      uVar16 = 1;
      goto LAB_100288d68;
    }
    FUN_10007f314(param_8,lVar12,&DAT_100a82c38,&DAT_1008171f8);
    pcVar13 = thunk_FUN_10028b808;
    puVar3 = &DAT_1009aaaa0;
    goto LAB_100288e4c;
  }
  _swift_getErrorValue(param_3,auStack_80,local_98);
  FUN_100277ae4(lVar10,FUN_1002897c8,0,"Alamofire/DataRequest.swift",0x1b,2,0x123,uStack_90,local_88
               );
  _swift_storeEnumTagMultiPayload(lVar10,puVar3,1);
  plVar19 = *(long **)(local_e8 + _TtC9Alamofire7Request::mutableState);
  uVar16 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar16);
  lVar21 = *(long *)(*plVar19 + 0x60);
  _swift_beginAccess((long)plVar19 + lVar21,auStack_b0,0,0);
  FUN_10028ab0c((long)plVar19 + lVar21,lVar18);
  lVar14 = *(long *)(&stack0x00000018 + lVar2);
  _swift_bridgeObjectRetain(lVar14);
  FUN_1000d27dc(lVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar16);
  lVar12 = *(long *)(lVar14 + 0x10);
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(lVar14);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    lVar6 = local_f0;
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar6 = local_f0;
    lVar17 = *(long *)(lVar5 + -8);
    (**(code **)(lVar17 + 0x10))
              (local_f0,lVar14 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar17 + 0x48) * (lVar12 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar14);
    pcVar13 = *(code **)(lVar17 + 0x38);
  }
  (*pcVar13)(lVar6,lVar12 == 0,1,lVar5);
  lVar12 = local_e8;
  FUN_1002c85ec();
  lVar12 = *(long *)(lVar12 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
  local_128[0] = lVar6;
  _os_unfair_lock_lock(uVar15);
  _swift_beginAccess(lVar12 + 0x18,auStack_c8,0,0);
  uVar16 = *(undefined8 *)(lVar12 + 0x18);
  uVar20 = *(undefined8 *)(lVar12 + 0x20);
  FUN_10010bd10(uVar16,uVar20);
  _os_unfair_lock_unlock(uVar15);
  uVar15 = *(undefined8 *)(plVar19[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  FUN_10028ab0c((long)plVar19 + lVar21,lVar18);
  uVar11 = *(ulong *)(&stack0x00000028 + lVar2);
  _swift_bridgeObjectRetain(uVar11);
  FUN_1000d27dc(lVar18,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  if (uVar11 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    if (uVar7 == 0) goto LAB_100288da4;
LAB_100288d24:
    uVar8 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10028902c);
      (*pcVar13)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10028903c);
        (*pcVar13)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100289040);
        (*pcVar13)();
      }
      uVar8 = *(ulong *)(uVar11 + uVar8 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar8,uVar11);
    }
    _swift_bridgeObjectRelease(uVar11);
  }
  else {
    uVar7 = uVar11 & 0xffffffffffffff8;
    if ((long)uVar11 < 0) {
      uVar7 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar7 != 0) goto LAB_100288d24;
LAB_100288da4:
    _swift_bridgeObjectRelease(uVar11);
    uVar8 = 0;
  }
  FUN_1000a00a8(lVar10,lVar22 + *(int *)(puVar4 + 0x3c),&DAT_100a82c28,&DAT_1008171e0);
  FUN_1000a00a8(local_f0,lVar22,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar22 + *(int *)(puVar4 + 0x2c)) = local_128[0];
  iVar1 = *(int *)(puVar4 + 0x30);
  *(undefined8 *)(lVar22 + iVar1) = uVar16;
  ((undefined8 *)(lVar22 + iVar1))[1] = uVar20;
  *(ulong *)(lVar22 + *(int *)(puVar4 + 0x34)) = uVar8;
  *(double *)(lVar22 + *(int *)(puVar4 + 0x38)) = param_1 - param_2;
  lVar12 = local_128[3];
  FUN_1000a00a8(lVar22,local_128[3],&DAT_100a82c38,&DAT_1008171f8);
  pcVar13 = FUN_10028b808;
  puVar3 = &DAT_1009aaa28;
LAB_100288e4c:
  uVar11 = (ulong)*(byte *)(local_128[1] + 0x50);
  uVar7 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar3,uVar7 + local_128[2],uVar11 | 7);
  uVar16 = uStack_100;
  *(undefined8 *)(puVar3 + 0x10) = local_108;
  *(undefined8 *)(puVar3 + 0x18) = uStack_100;
  FUN_1000a00a8(lVar12,puVar3 + uVar7,&DAT_100a82c38,&DAT_1008171f8);
  puVar4 = &DAT_1009aaa50;
  _swift_allocObject(&DAT_1009aaa50,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = local_f8;
  *(code **)(puVar4 + 0x18) = pcVar13;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  plVar19 = *(long **)(local_e8 + _TtC9Alamofire7Request::mutableState);
  uVar20 = *(undefined8 *)(plVar19[2] + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain(uVar16);
  _os_unfair_lock_lock(uVar20);
  lVar2 = (long)plVar19 + *(long *)(*plVar19 + 0x60);
  _swift_beginAccess(lVar2,auStack_e0,0x21,0);
  *(undefined1 *)(lVar2 + 0xd8) = 0;
  puVar9 = &DAT_1009aaa78;
  _swift_allocObject(&DAT_1009aaa78,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_10028b81c;
  *(undefined **)(puVar9 + 0x18) = puVar4;
  uVar8 = *(ulong *)(lVar2 + 0xe0);
  _swift_retain(puVar4);
  uVar11 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar2 + 0xe0) = uVar8;
  uVar7 = uVar8;
  if ((uVar11 & 1) == 0) {
    uVar7 = 0;
    FUN_100296548(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar2 + 0xe0) = uVar7;
  }
  uVar11 = *(ulong *)(uVar7 + 0x10);
  uVar8 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar11) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100296548(uVar8,uVar11 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
  lVar12 = uVar8 + uVar11 * 0x10;
  *(code **)(lVar12 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar12 + 0x28) = puVar9;
  *(ulong *)(lVar2 + 0xe0) = uVar8;
  _swift_endAccess(auStack_e0);
  FUN_10007ed2c(pcVar13,puVar3);
  _os_unfair_lock_unlock(uVar20);
  FUN_1002cbca4();
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

