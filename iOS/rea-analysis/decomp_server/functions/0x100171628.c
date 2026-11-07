// rea decompile_all
// name: FUN_100171628
// address: 0x100171628
// body: available
// range: 0x100171628-0x1001721f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100171628(long param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  ID *pIVar5;
  undefined *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  dispatch_semaphore_t pdVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  undefined8 uVar13;
  ID IVar14;
  code *pcVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x12;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined1 auStack_210 [16];
  ID IStack_200;
  ulong auStack_1f8 [3];
  undefined8 local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  ID *local_1c8;
  ulong *local_1c0;
  ID local_1b8;
  dispatch_semaphore_t local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  long local_180;
  char *local_178;
  undefined8 local_170;
  ulong *local_168;
  dispatch_semaphore_t local_160;
  dispatch_semaphore_t local_158;
  undefined *local_150;
  undefined *local_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar19 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  local_198 = (long)&local_1e0 + lVar4;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  IVar12 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar12 == 0) {
    puVar19 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    uVar13 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
    IVar12 = _objc_msgSend((ID)puVar19,"initWithDomain:code:userInfo:",uVar13,0xf424c,0);
    FUN_100616260(IVar12);
    return 0;
  }
  local_1e0 = param_2;
  pdVar9 = _dispatch_semaphore_create(0);
  puVar19 = &DAT_1009a0730;
  _swift_allocObject(&DAT_1009a0730,0x18,7);
  local_1c8 = (ID *)(puVar19 + 0x10);
  *local_1c8 = 0;
  puVar11 = &DAT_1009a0758;
  puVar10 = puVar11;
  local_190 = puVar19;
  _swift_allocObject(&DAT_1009a0758,0x18,7);
  local_168 = (ulong *)(puVar10 + 0x10);
  *local_168 = 0;
  uVar20 = 0;
  local_148 = puVar10;
  _swift_allocObject(&DAT_1009a0758,0x18,7);
  puVar22 = (ulong *)(puVar11 + 0x10);
  *puVar22 = 0;
  local_180 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  lVar18 = IVar12 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  local_188 = puVar11;
  _swift_weakLoadStrong();
  if (lVar18 != 0) {
    cVar1 = *(char *)(lVar18 + 0x164);
    _swift_release(lVar18);
    if (cVar1 == '\x01') {
      lVar18 = IVar12 + local_180;
      _swift_weakLoadStrong();
      if (lVar18 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)(lVar18 + 0x158);
        _swift_release();
      }
      *local_168 = uVar20;
      lVar18 = IVar12 + local_180;
      _swift_weakLoadStrong();
      uVar21 = 0;
      if (lVar18 != 0) {
        uVar21 = (ulong)*(uint *)(lVar18 + 0x160);
        _swift_release(lVar18);
      }
    }
    else {
      uVar21 = 0;
      if (cVar1 != '\x02') goto LAB_100171968;
      *local_168 = 0;
      FUN_1001762e4();
      if ((uVar20 & 1) != 0) {
        puVar19 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        uVar13 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0)
        ;
        IVar12 = _objc_msgSend((ID)puVar19,"initWithDomain:code:userInfo:",uVar13,0x186a6,0);
        puVar19 = local_148;
        FUN_100173ef4(*(undefined8 *)(local_148 + 0x10),IVar12);
        FUN_100616260(IVar12);
        _swift_release(local_190);
        _swift_release(puVar19);
        _swift_release(local_188);
        return 0;
      }
    }
    *puVar22 = uVar21;
  }
LAB_100171968:
  uVar13 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar7 = local_168;
  *(ulong **)((long)auStack_1f8 + lVar4 + 8) = local_168;
  *(ulong **)((long)auStack_1f8 + lVar4 + 0x10) = puVar22;
  local_178 = "$_uploadCopyQueue";
  local_1d8 = s_______data_100896530 + 0x10;
  local_1d0 = 0xd000000000000017;
  local_170 = uVar13;
  FUN_1003fb45c(FUN_100177f84,(long)&IStack_200 + lVar4,0xd0000000000000b4,0x8000000100896020,
                0xd000000000000017,0x8000000100896540,0x4f,7);
  _swift_beginAccess(puVar7,auStack_98,0,0);
  _swift_beginAccess(puVar22,auStack_b0,0,0);
  _swift_beginAccess(local_1c8,auStack_c8,0,0);
  local_1a0 = "responseFileDataBlock()";
  local_1a8 = 0xd000000000000021;
  local_1c0 = puVar22;
  local_1b8 = IVar12;
  local_1b0 = pdVar9;
  do {
    uVar20 = *local_168;
    uVar21 = *puVar22;
    lVar18 = IVar12 + local_180;
    _swift_weakLoadStrong();
    if (lVar18 == 0) goto LAB_100172040;
    bVar2 = *(byte *)(lVar18 + 0x164);
    _swift_release();
    if (1 < bVar2 - 1) goto LAB_100172040;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(byte *)((long)&IStack_200 + lVar4) = bVar2;
    *(ulong *)((long)auStack_1f8 + lVar4) = uVar20;
    *(ulong *)((long)auStack_1f8 + lVar4 + 8) = uVar21;
    FUN_1003fb45c(FUN_100177f9c,auStack_210 + lVar4,0xd0000000000000b4,
                  (ulong)local_178 | 0x8000000000000000,local_1a8,
                  (ulong)local_1a0 | 0x8000000000000000,0x10e,7);
    if (uVar21 <= uVar20) goto LAB_100172040;
    IVar14 = _objc_msgSend(IVar12,"isCancelled");
    puVar11 = local_148;
    puVar19 = local_188;
    if ((int)IVar14 != 0) {
      FUN_1003fb45c(FUN_100172304,0,0xd0000000000000b4,(ulong)local_178 | 0x8000000000000000,
                    local_1d0,(ulong)local_1d8 | 0x8000000000000000,0x53,7);
      puVar19 = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      uVar13 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000001008959a0);
      IVar14 = _objc_msgSend((ID)puVar19,"initWithDomain:code:userInfo:",uVar13,0x186a9,0);
      pIVar5 = local_1c8;
      _swift_beginAccess(local_1c8,auStack_140,1,0);
      *pIVar5 = IVar14;
      goto LAB_100172040;
    }
    (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x10));
    *(ID *)((long)&IStack_200 + lVar4) = IVar12;
    *(undefined8 *)((long)auStack_1f8 + lVar4) = extraout_x8_00;
    *(undefined8 *)((long)auStack_1f8 + lVar4 + 8) = extraout_x12;
    puVar10 = &DAT_100a7a2e8;
    FUN_100004bb4(&DAT_100a7a2e8,&DAT_10080ec60);
    local_150 = puVar10;
    _swift_allocObject();
    pcVar15 = FUN_100177fa8;
    FUN_100615648(FUN_100177fa8,auStack_210 + lVar4,puVar10);
    lVar16 = 0;
    __s8Dispatch0A13WorkItemFlagsVMa();
    lVar18 = local_198;
    local_158 = *(dispatch_semaphore_t *)(*(long *)(lVar16 + -8) + 0x38);
    (*(code *)local_158)(local_198,1,1,lVar16);
    puVar10 = &DAT_1009a05c8;
    _swift_allocObject(&DAT_1009a05c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10,IVar12);
    puVar17 = &DAT_1009a0780;
    _swift_allocObject(&DAT_1009a0780,0x38,7);
    puVar6 = local_190;
    *(undefined **)(puVar17 + 0x10) = puVar10;
    *(undefined **)(puVar17 + 0x18) = puVar11;
    *(undefined **)(puVar17 + 0x20) = local_190;
    *(dispatch_semaphore_t *)(puVar17 + 0x28) = pdVar9;
    *(undefined **)(puVar17 + 0x30) = puVar19;
    _swift_retain(puVar11);
    _swift_retain(puVar6);
    local_160 = pdVar9;
    _swift_retain();
    FUN_10060edd8();
    _swift_beginAccess();
    uVar13 = *(undefined8 *)(puVar19 + 8);
    puVar11 = &DAT_100a7a2f0;
    FUN_10003f840(&DAT_100a7a2f0,&DAT_100a7a2e8,&DAT_10080ec60,
                  &TargetProtocolConformanceDescriptor_1008488a0);
    FUN_1006170a4(uVar13,lVar18,FUN_100178008,puVar17,local_150,puVar11);
    local_150 = (undefined *)uVar13;
    _swift_release(pcVar15);
    _swift_release(puVar17);
    FUN_100040bb4(lVar18,&DAT_100a77040,&DAT_10080e910);
    (*(code *)local_158)(lVar18,1,1,lVar16);
    puVar11 = &DAT_1009a05c8;
    _swift_allocObject(&DAT_1009a05c8,0x18,7);
    _swift_unknownObjectWeakInit(puVar11 + 0x10,IVar12);
    puVar10 = &DAT_1009a07a8;
    _swift_allocObject(&DAT_1009a07a8,0x30,7);
    puVar17 = local_148;
    pdVar9 = local_160;
    *(undefined **)(puVar10 + 0x10) = puVar11;
    *(undefined **)(puVar10 + 0x18) = local_148;
    *(undefined **)(puVar10 + 0x20) = puVar6;
    *(dispatch_semaphore_t *)(puVar10 + 0x28) = local_160;
    _swift_beginAccess(puVar19,auStack_110,0,0);
    uVar13 = *(undefined8 *)(puVar19 + 8);
    _swift_beginAccess(puVar19,auStack_128,0,0);
    uVar3 = puVar19[0x10];
    _swift_retain(puVar17);
    _swift_retain(puVar6);
    local_158 = pdVar9;
    _swift_retain(puVar11);
    puVar19 = &DAT_100a77058;
    FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
    puVar17 = &DAT_100a77060;
    FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                  &TargetProtocolConformanceDescriptor_1008488bc);
    puVar8 = local_150;
    puVar22 = local_1c0;
    FUN_10060913c(uVar13,lVar18,uVar3,FUN_100178064,puVar10,puVar19,puVar17);
    _swift_release();
    _swift_release(puVar8);
    IVar12 = local_1b8;
    _swift_release(puVar10);
    pdVar9 = local_1b0;
    FUN_100040bb4(lVar18,&DAT_100a77040,&DAT_10080e910);
    _swift_release(puVar11);
    __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
    lVar18 = *(long *)(puVar6 + 0x10);
  } while (lVar18 == 0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)auStack_1f8 + lVar4 + 8) = lVar18;
  FUN_1003fb45c(FUN_100178070,(long)&IStack_200 + lVar4,0xd0000000000000b4,
                (ulong)local_178 | 0x8000000000000000,local_1d0,
                (ulong)local_1d8 | 0x8000000000000000,0x8b,7);
LAB_100172040:
  pIVar5 = local_1c8;
  _swift_beginAccess(local_1c8,auStack_e0,0,0);
  IVar14 = *pIVar5;
  if (IVar14 == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ID *)((long)auStack_1f8 + lVar4 + 8) = IVar12;
    FUN_1003fb45c(FUN_100177f8c,(long)&IStack_200 + lVar4,0xd0000000000000b4,
                  (ulong)local_178 | 0x8000000000000000,local_1d0,
                  (ulong)local_1d8 | 0x8000000000000000,0x93,7);
    FUN_10061630c();
    _swift_release(local_190);
    _swift_release(local_148);
    _swift_release(local_188);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ID *)((long)auStack_1f8 + lVar4 + 8) = IVar12;
    FUN_1003fb45c(FUN_100177f94,(long)&IStack_200 + lVar4,0xd0000000000000b4,
                  (ulong)local_178 | 0x8000000000000000,local_1d0,
                  (ulong)local_1d8 | 0x8000000000000000,0x90,7);
    FUN_100616260(IVar14);
    _swift_release(local_190);
    _swift_release(local_148);
    _swift_release(local_188);
  }
  return 0;
}

