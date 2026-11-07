// rea decompile_all
// name: FUN_1002b25d8
// address: 0x1002b25d8
// body: available
// range: 0x1002b25d8-0x1002b2d9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002b25d8(double param_1,double param_2,long param_3,char param_4,undefined8 param_5,
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
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  double dStack_150;
  long local_148 [4];
  long local_128;
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
  
  local_e8 = param_11;
  lVar2 = 0;
  local_120 = param_6;
  local_118 = param_7;
  local_110 = param_5;
  FUN_1002a7694();
  lVar16 = (long)&dStack_150 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100a83428;
  local_128 = lVar2;
  FUN_100004bb4(&DAT_100a83428,&DAT_100817bb0);
  lVar10 = lVar16 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_f0 = lVar10;
  FUN_1002c76a8();
  lVar10 = lVar10 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c50;
  local_f8 = lVar11;
  FUN_100004bb4(&DAT_100a82c50,&DAT_100817210);
  lVar11 = lVar11 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a838d8;
  local_100 = lVar11;
  FUN_100004bb4(&DAT_100a838d8,&DAT_100817df8);
  local_148[2] = *(long *)(puVar4 + -8);
  local_148[3] = *(long *)(local_148[2] + 0x40);
  uVar12 = local_148[3] + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar11 - uVar12;
  lVar2 = lVar11 - uVar12;
  local_108 = lVar2;
  if (param_4 == '\0') {
    uVar15 = 0;
LAB_1002b2a94:
    _swift_getObjectType(param_9);
    (**(code **)(param_10 + 0x30))(local_e8,param_3,uVar15,param_9,param_10);
    return;
  }
  if (param_4 != '\x01') {
    if (param_3 == 0) {
      uVar15 = 1;
      goto LAB_1002b2a94;
    }
    FUN_10007f314(param_8,lVar2,&DAT_100a838d8,&DAT_100817df8);
    pcVar13 = thunk_FUN_1002b71f0;
    puVar3 = &DAT_1009ac600;
    goto LAB_1002b2b9c;
  }
  _swift_getErrorValue(param_3,auStack_80,local_98);
  lVar2 = local_100;
  FUN_100277ae4(local_100,FUN_1002897c8,0,"Alamofire/DownloadRequest.swift",0x1f,2,0x1a4,uStack_90,
                local_88);
  _swift_storeEnumTagMultiPayload(lVar2,puVar3,1);
  plVar20 = *(long **)(local_e8 + _TtC9Alamofire7Request::mutableState);
  uVar15 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar15);
  lVar2 = *(long *)(*plVar20 + 0x60);
  _swift_beginAccess((long)plVar20 + lVar2,auStack_b0,0,0);
  local_148[1] = lVar2;
  FUN_100082394((long)plVar20 + lVar2,lVar10,FUN_1002c76a8);
  lVar14 = *(long *)(lVar10 + 0x148);
  _swift_bridgeObjectRetain(lVar14);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar15);
  lVar2 = *(long *)(lVar14 + 0x10);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(lVar14);
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    lVar6 = local_f8;
  }
  else {
    lVar5 = 0;
    __s10Foundation10URLRequestVMa();
    lVar6 = local_f8;
    lVar19 = *(long *)(lVar5 + -8);
    (**(code **)(lVar19 + 0x10))
              (local_f8,lVar14 + ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)) +
                        *(long *)(lVar19 + 0x48) * (lVar2 + -1),lVar5);
    _swift_bridgeObjectRelease(lVar14);
    pcVar13 = *(code **)(lVar19 + 0x38);
  }
  (*pcVar13)(lVar6,lVar2 == 0,1,lVar5);
  lVar2 = local_e8;
  FUN_1002c85ec();
  plVar17 = *(long **)(lVar2 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar15 = *(undefined8 *)(plVar17[2] + 0x10);
  local_148[0] = lVar6;
  _os_unfair_lock_lock(uVar15);
  lVar2 = *(long *)(*plVar17 + 0x60);
  _swift_beginAccess((long)plVar17 + lVar2,auStack_c8,0,0);
  pcVar13 = FUN_1002a7694;
  FUN_100082394((long)plVar17 + lVar2,lVar16,FUN_1002a7694);
  FUN_10007f314(lVar16 + *(int *)(local_128 + 0x14),local_f0,&DAT_100a83428,&DAT_100817bb0);
  FUN_1000d27dc(lVar16);
  _os_unfair_lock_unlock();
  FUN_1002a7418();
  uVar18 = *(undefined8 *)(plVar20[2] + 0x10);
  _os_unfair_lock_lock(uVar18);
  FUN_100082394((long)plVar20 + local_148[1],lVar10,FUN_1002c76a8);
  uVar12 = *(ulong *)(lVar10 + 0x158);
  _swift_bridgeObjectRetain(uVar12);
  FUN_1000d27dc(lVar10,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar18);
  if (uVar12 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    if (uVar7 == 0) goto LAB_1002b2ad8;
LAB_1002b2a50:
    lVar2 = local_108;
    uVar8 = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1002b2d88);
      (*pcVar13)();
    }
    if ((uVar12 & 0xc000000000000001) == 0) {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002b2d98);
        (*pcVar13)();
      }
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1002b2d9c);
        (*pcVar13)();
      }
      uVar8 = *(ulong *)(uVar12 + uVar8 * 8 + 0x20);
    }
    else {
      FUN_1002d392c(uVar8,uVar12);
    }
    _swift_bridgeObjectRelease(uVar12);
  }
  else {
    uVar7 = uVar12 & 0xffffffffffffff8;
    if ((long)uVar12 < 0) {
      uVar7 = uVar12;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar7 != 0) goto LAB_1002b2a50;
LAB_1002b2ad8:
    lVar2 = local_108;
    _swift_bridgeObjectRelease(uVar12);
    uVar8 = 0;
  }
  FUN_1000a00a8(local_100,lVar11 + *(int *)(puVar4 + 0x40),&DAT_100a82c50,&DAT_100817210);
  FUN_1000a00a8(local_f8,lVar11,&DAT_100a82c30,&DAT_1008171f0);
  *(long *)(lVar11 + *(int *)(puVar4 + 0x2c)) = local_148[0];
  FUN_1000a00a8(local_f0,lVar11 + *(int *)(puVar4 + 0x30),&DAT_100a83428,&DAT_100817bb0);
  iVar1 = *(int *)(puVar4 + 0x34);
  *(undefined8 *)(lVar11 + iVar1) = uVar15;
  ((undefined8 *)(lVar11 + iVar1))[1] = pcVar13;
  *(ulong *)(lVar11 + *(int *)(puVar4 + 0x38)) = uVar8;
  *(double *)(lVar11 + *(int *)(puVar4 + 0x3c)) = param_1 - param_2;
  FUN_1000a00a8(lVar11,lVar2,&DAT_100a838d8,&DAT_100817df8);
  pcVar13 = FUN_1002b71f0;
  puVar3 = &DAT_1009ac588;
LAB_1002b2b9c:
  uVar12 = (ulong)*(byte *)(local_148[2] + 0x50);
  uVar7 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar3,uVar7 + local_148[3],uVar12 | 7);
  uVar15 = local_118;
  *(undefined8 *)(puVar3 + 0x10) = local_120;
  *(undefined8 *)(puVar3 + 0x18) = local_118;
  FUN_1000a00a8(lVar2,puVar3 + uVar7,&DAT_100a838d8,&DAT_100817df8);
  puVar4 = &DAT_1009ac5b0;
  _swift_allocObject(&DAT_1009ac5b0,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = local_110;
  *(code **)(puVar4 + 0x18) = pcVar13;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  plVar20 = *(long **)(local_e8 + _TtC9Alamofire7Request::mutableState);
  uVar18 = *(undefined8 *)(plVar20[2] + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain(uVar15);
  _os_unfair_lock_lock(uVar18);
  lVar2 = (long)plVar20 + *(long *)(*plVar20 + 0x60);
  _swift_beginAccess(lVar2,auStack_e0,0x21,0);
  *(undefined1 *)(lVar2 + 0xd8) = 0;
  puVar9 = &DAT_1009ac5d8;
  _swift_allocObject(&DAT_1009ac5d8,0x20,7);
  *(code **)(puVar9 + 0x10) = thunk_FUN_1002b62f0;
  *(undefined **)(puVar9 + 0x18) = puVar4;
  uVar8 = *(ulong *)(lVar2 + 0xe0);
  _swift_retain(puVar4);
  uVar12 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar2 + 0xe0) = uVar8;
  uVar7 = uVar8;
  if ((uVar12 & 1) == 0) {
    uVar7 = 0;
    FUN_100296548(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar2 + 0xe0) = uVar7;
  }
  uVar12 = *(ulong *)(uVar7 + 0x10);
  uVar8 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar12) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_100296548(uVar8,uVar12 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar12 + 1;
  lVar10 = uVar8 + uVar12 * 0x10;
  *(code **)(lVar10 + 0x20) = thunk_FUN_1000f4ed4;
  *(undefined **)(lVar10 + 0x28) = puVar9;
  *(ulong *)(lVar2 + 0xe0) = uVar8;
  _swift_endAccess(auStack_e0);
  FUN_10007ed2c(pcVar13,puVar3);
  _os_unfair_lock_unlock(uVar18);
  FUN_1002cbca4();
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}

