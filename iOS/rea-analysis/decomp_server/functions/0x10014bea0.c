// rea decompile_all
// name: FUN_10014bea0
// address: 0x10014bea0
// body: available
// range: 0x10014bea0-0x10014c8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10014bea0(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  dispatch_semaphore_t pdVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  ID *pIVar14;
  ulong uVar15;
  ulong uVar16;
  ID self;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined1 auStack_1d0 [16];
  ID aIStack_1c0 [2];
  undefined8 local_1b0;
  ID *local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  ID local_188;
  undefined8 local_180;
  long local_178;
  char *local_170;
  undefined *local_168;
  dispatch_semaphore_t local_160;
  long local_158;
  code *local_150;
  dispatch_semaphore_t local_148;
  undefined8 local_140;
  char *local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [48];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [32];
  
  puVar13 = &DAT_100a77040;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  local_158 = (long)&local_1b0 + lVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  uVar16 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar16 != 0) {
    uVar15 = uVar16;
    FUN_100152228();
    FUN_100151618();
    if ((uVar15 & 1) == 0) {
      local_1b0 = param_2;
      local_160 = _dispatch_semaphore_create(0);
      puVar13 = &DAT_10099eee8;
      _swift_allocObject(&DAT_10099eee8,0x18,7);
      pIVar14 = (ID *)(puVar13 + 0x10);
      *pIVar14 = 0;
      uVar5 = 0;
      local_168 = puVar13;
      FUN_100401b14();
      pcVar17 = "fileContentsRequest";
      local_170 = s___FileContent______100892af0 + 0x20;
      local_178 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
      local_1a8 = pIVar14;
      _swift_beginAccess(pIVar14,&local_a0,0,0);
      pcVar18 = "checkSendOffsetIsEnd()";
      local_180 = 0xd000000000000016;
      uVar19 = 0xd000000000000031;
      local_198 = "fileContentsRequest";
      local_138 = "checkSendOffsetIsEnd()";
      local_1a0 = 0xd000000000000031;
      local_190 = uVar5;
      local_188 = uVar16;
      while( true ) {
        self = local_188;
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_1c0 + lVar2) = self;
        FUN_1003fb45c(FUN_1001526a0,auStack_1d0 + lVar2,0xd0000000000000b5,
                      (ulong)pcVar17 | 0x8000000000000000,local_180,
                      (ulong)local_170 | 0x8000000000000000,0x15f,7);
        lVar12 = self + local_178;
        _swift_weakLoadStrong();
        if (lVar12 == 0) break;
        uVar16 = *(ulong *)(lVar12 + 0x88);
        _swift_retain(uVar16);
        _swift_release(lVar12);
        if (uVar16 == 0) break;
        uVar15 = *(ulong *)(uVar16 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::fileSize);
        _swift_release();
        FUN_100149dec();
        if (uVar15 <= uVar16) break;
        IVar6 = _objc_msgSend(self,"isCancelled");
        if ((int)IVar6 != 0) {
          FUN_1003fb45c(thunk_FUN_10014afd8,0,0xd0000000000000b5,(ulong)pcVar17 | 0x8000000000000000
                        ,uVar19,(ulong)pcVar18 | 0x8000000000000000,0x99,7);
          puVar13 = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          uVar5 = 0xd00000000000001b;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd00000000000001b,0x8000000100892880);
          IVar6 = _objc_msgSend((ID)puVar13,"initWithDomain:code:userInfo:",uVar5,0x186a9,0);
          pIVar14 = local_1a8;
          _swift_beginAccess(local_1a8,auStack_130,1,0);
          *pIVar14 = IVar6;
          break;
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_1c0 + lVar2) = self;
        FUN_1003fb45c(thunk_FUN_1001525c4,auStack_1d0 + lVar2,0xd0000000000000b5,
                      (ulong)pcVar17 | 0x8000000000000000,uVar19,(ulong)pcVar18 | 0x8000000000000000
                      ,0x9e,7);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_1c0 + lVar2) = self;
        puVar13 = &DAT_100a7a2f8;
        FUN_100004bb4(&DAT_100a7a2f8,&DAT_10080ec70);
        puVar7 = puVar13;
        _swift_allocObject();
        pcVar8 = FUN_1001526b8;
        FUN_100615648(FUN_1001526b8,auStack_1d0 + lVar2,puVar7);
        lVar9 = 0;
        __s8Dispatch0A13WorkItemFlagsVMa();
        lVar12 = local_158;
        local_150 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
        (*local_150)(local_158,1,1,lVar9);
        puVar7 = &DAT_10099ec90;
        _swift_allocObject(&DAT_10099ec90,0x18,7);
        _swift_unknownObjectWeakInit(puVar7 + 0x10,self);
        puVar10 = &DAT_10099ef10;
        _swift_allocObject(&DAT_10099ef10,0x20,7);
        *(undefined **)(puVar10 + 0x10) = puVar7;
        *(dispatch_semaphore_t *)(puVar10 + 0x18) = local_160;
        local_148 = local_160;
        IVar6 = self;
        FUN_10060edd8();
        _swift_beginAccess();
        uVar19 = *(undefined8 *)(IVar6 + 8);
        puVar7 = &DAT_100a7a300;
        FUN_10003f840(&DAT_100a7a300,&DAT_100a7a2f8,&DAT_10080ec70,
                      &TargetProtocolConformanceDescriptor_1008488a0);
        FUN_1006170a4(uVar19,lVar12,FUN_10015271c,puVar10,puVar13,puVar7);
        local_140 = uVar19;
        _swift_release(pcVar8);
        _swift_release(puVar10);
        FUN_100040bb4(lVar12,&DAT_100a77040,&DAT_10080e910);
        (*local_150)(lVar12,1,1,lVar9);
        puVar13 = &DAT_10099ec90;
        _swift_allocObject(&DAT_10099ec90,0x18,7);
        _swift_unknownObjectWeakInit(puVar13 + 0x10,self);
        puVar7 = &DAT_10099ef38;
        local_150 = (code *)self;
        _swift_allocObject(&DAT_10099ef38,0x28,7);
        pdVar4 = local_148;
        puVar3 = local_168;
        *(undefined **)(puVar7 + 0x10) = local_168;
        *(undefined **)(puVar7 + 0x18) = puVar13;
        *(dispatch_semaphore_t *)(puVar7 + 0x20) = local_148;
        _swift_beginAccess(IVar6,auStack_100,0,0);
        uVar5 = *(undefined8 *)(IVar6 + 8);
        _swift_beginAccess(IVar6,auStack_118,0,0);
        uVar1 = *(undefined1 *)(IVar6 + 0x10);
        local_148 = pdVar4;
        _swift_retain(puVar3);
        _swift_retain(puVar13);
        puVar10 = &DAT_100a77058;
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar11 = &DAT_100a77060;
        FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                      &TargetProtocolConformanceDescriptor_1008488bc);
        uVar19 = local_140;
        FUN_10060913c(uVar5,lVar12,uVar1,FUN_100152738,puVar7,puVar10,puVar11);
        _swift_release();
        _swift_release(uVar19);
        pcVar17 = local_198;
        _swift_release(puVar7);
        FUN_100040bb4(lVar12,&DAT_100a77040,&DAT_10080e910);
        uVar19 = local_1a0;
        _swift_release(puVar13);
        FUN_1003fb45c(FUN_10014d4b8,0,0xd0000000000000b5,(ulong)pcVar17 | 0x8000000000000000,uVar19,
                      (ulong)local_138 | 0x8000000000000000,0xad,7);
        pcVar18 = local_138;
        __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
        FUN_1003fb45c(FUN_10014d4e4,0,0xd0000000000000b5,(ulong)pcVar17 | 0x8000000000000000,uVar19,
                      (ulong)pcVar18 | 0x8000000000000000,0xaf,7);
        lVar12 = *(long *)(puVar3 + 0x10);
        if (lVar12 != 0) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)((long)aIStack_1c0 + lVar2) = lVar12;
          FUN_1003fb45c(FUN_10015274c,auStack_1d0 + lVar2,0xd0000000000000b5,
                        (ulong)pcVar17 | 0x8000000000000000,uVar19,
                        (ulong)pcVar18 | 0x8000000000000000,0xb1,7);
          self = local_188;
          break;
        }
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(code **)((long)aIStack_1c0 + lVar2) = local_150;
        FUN_1003fb45c(FUN_100152744,auStack_1d0 + lVar2,0xd0000000000000b5,
                      (ulong)pcVar17 | 0x8000000000000000,uVar19,(ulong)pcVar18 | 0x8000000000000000
                      ,0xb4,7);
      }
      pIVar14 = local_1a8;
      _swift_beginAccess(local_1a8,auStack_b8,0,0);
      IVar6 = *pIVar14;
      if (IVar6 == 0) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_1c0 + lVar2) = self;
        FUN_1003fb45c(FUN_1001526a8,auStack_1d0 + lVar2,0xd0000000000000b5,
                      (ulong)pcVar17 | 0x8000000000000000,uVar19,(ulong)pcVar18 | 0x8000000000000000
                      ,0xba,7);
        uStack_c8 = 0xf000000000000000;
        local_d0 = 0;
        FUN_10061630c(&local_d0);
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ID *)((long)aIStack_1c0 + lVar2) = self;
        FUN_1003fb45c(FUN_1001526b0,auStack_1d0 + lVar2,0xd0000000000000b5,
                      (ulong)pcVar17 | 0x8000000000000000,uVar19,(ulong)pcVar18 | 0x8000000000000000
                      ,0xb7,7);
        FUN_100616260(IVar6);
      }
      FUN_1003fb45c(FUN_10014d9e0,0,0xd0000000000000b5,(ulong)pcVar17 | 0x8000000000000000,uVar19,
                    (ulong)pcVar18 | 0x8000000000000000,0xbd,7);
      _swift_release(local_168);
    }
    else {
      uStack_98 = 0xc000000000000000;
      local_a0 = 0;
      FUN_10061630c(&local_a0);
      FUN_100006cc8(local_a0,uStack_98);
      FUN_100401b14(0);
      FUN_1003fb45c(thunk_FUN_10014afac,0,0xd0000000000000b5,0x8000000100891cf0,0xd000000000000031,
                    0x8000000100892b30,0x91,7);
    }
  }
  return;
}

