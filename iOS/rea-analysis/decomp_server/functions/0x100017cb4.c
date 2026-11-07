// rea decompile_all
// name: FUN_100017cb4
// address: 0x100017cb4
// body: available
// range: 0x100017cb4-0x1000187ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100017cb4(ulong param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ID IVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  ID self;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 auStack_1c0 [4];
  undefined4 local_1b0;
  int iStack_1ac;
  undefined8 local_1a8;
  undefined1 auStack_120 [76];
  undefined1 local_d4;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(unaff_x20 + 200,auStack_80,0x21,0);
  FUN_1001ddfa4(param_1);
  _swift_endAccess(auStack_80);
  self = *(ID *)(unaff_x20 + 0x10);
  IVar3 = _objc_msgSend(self,"screenId");
  uVar4 = param_1;
  FUN_10002250c();
  iVar15 = (int)param_1;
  iVar16 = (int)IVar3;
  uVar18 = (undefined4)param_2;
  if (iVar16 == iVar15) {
    _swift_beginAccess(unaff_x20 + 0x88,auStack_80,0,0);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x88);
    puVar9 = &DAT_100a759b8;
    FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
    _swift_initStackObject();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(int *)(puVar9 + 0x20) = iVar15;
    _swift_bridgeObjectRetain(uVar13);
    puVar10 = puVar9;
    FUN_100038de4(puVar9,uVar13);
    _swift_setDeallocating(puVar9);
    lVar14 = *(long *)(puVar10 + 0x10);
    _swift_release(puVar10);
    bVar2 = lVar14 == 0;
  }
  else {
    if ((uVar4 >> 0x20 & 1) != 0) {
      if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
         (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
        puVar11 = auStack_80;
        _swift_beginAccess(unaff_x20 + 0x80,puVar11,0x20,0);
        if (*(long *)(*(long *)(unaff_x20 + 0x80) + 0x10) == 0) {
          _swift_endAccess(auStack_80);
        }
        else {
          thunk_FUN_1001a2c34(param_1);
          _swift_endAccess(auStack_80);
          if (((ulong)puVar11 & 1) != 0) {
            puVar9 = &DAT_100a759b8;
            FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
            _swift_initStackObject();
            *(undefined8 *)(puVar9 + 0x18) = 2;
            *(undefined8 *)(puVar9 + 0x10) = 1;
            *(int *)(puVar9 + 0x20) = iVar15;
            puVar10 = puVar9;
            FUN_100128278();
            _swift_setDeallocating(puVar9);
            FUN_100022f10(param_1,puVar10);
            _swift_bridgeObjectRelease(puVar10);
            if (((param_1 & 1) != 0) && ((param_3 & 1) != 0)) {
              FUN_1000162bc(param_2,0);
            }
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            puVar12 = auStack_1c0;
            local_1a8 = (undefined *)(CONCAT71(local_1a8._1_7_,(char)param_1) & 0xffffffffffffff01);
            pcVar6 = FUN_10003f9f8;
            uVar13 = 0x5a5;
            local_1b0 = uVar18;
            iStack_1ac = iVar15;
            goto LAB_10001872c;
          }
        }
      }
      puVar9 = &DAT_100a759b8;
      FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(int *)(puVar9 + 0x20) = iVar15;
      puVar10 = puVar9;
      FUN_100128278();
      _swift_setDeallocating(puVar9);
      FUN_100022f10(param_1,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      if (((param_1 & 1) != 0) && ((param_3 & 1) != 0)) {
        FUN_1000162bc(param_2,0);
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      puVar12 = &local_1b0;
      pcVar6 = FUN_10003f9ec;
      uVar13 = 0x5ac;
LAB_10001872c:
      FUN_1003fb48c(pcVar6,puVar12,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000030,
                    0x8000000100879130,uVar13,0);
      return;
    }
    bVar2 = false;
  }
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_1a8 = (undefined *)(CONCAT35(local_1a8._5_3_,(int5)uVar4) & 0xffffff01ffffffff);
  local_1a8._0_6_ = CONCAT15(iVar16 == iVar15,(undefined5)local_1a8);
  local_1b0 = uVar18;
  iStack_1ac = iVar15;
  FUN_1003fb48c(FUN_10003fa08,auStack_1c0,0xd0000000000000a9,0x8000000100877660,
                &DAT_d000000000000030,0x8000000100879130,0x5af,0);
  local_d4 = 0;
  FUN_100021f40(param_2,param_1 & 0xffffffff,0);
  puVar9 = &DAT_100a759b8;
  FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
  puVar10 = puVar9;
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(int *)(puVar10 + 0x20) = iVar15;
  puVar5 = puVar10;
  FUN_100128278();
  _swift_setDeallocating(puVar10);
  FUN_100022f10(param_1,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar6 = FUN_10003fa34;
  FUN_1003fb48c(FUN_10003fa34,&local_1b0,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000030
                ,0x8000000100879130,0x5b2,0);
  if (bVar2) {
    uVar7 = 0;
    FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
    thunk_FUN_1003d7218();
    if (uVar7 != 0) {
      FUN_1003d541c();
      _swift_initStackObject(puVar9,auStack_120);
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(int *)(puVar9 + 0x20) = iVar15;
      puVar10 = puVar9;
      FUN_100128278();
      _swift_setDeallocating(puVar9);
      FUN_1000231b4(uVar7,puVar10);
      _swift_bridgeObjectRelease();
      if ((uVar7 & 1) != 0) {
        FUN_1003d541c();
        puVar9 = puVar10;
        FUN_10002250c();
        uVar17 = SUB84(puVar10,0);
        if (((ulong)puVar9 >> 0x20 & 1) == 0) {
          _objc_msgSend(self,"setScreenId:",puVar10);
          _objc_msgSend(self,"setVideoTrackIndex:",puVar9);
          FUN_10001ab44(self);
          (*(code *)PTR____chkstk_darwin_100995498)();
          FUN_1003fb48c(thunk_FUN_10003f6e0,&local_1b0,0xd0000000000000a9,0x8000000100877660,
                        &DAT_d000000000000030,0x8000000100878320,0x972,0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_1a8 = (undefined *)CONCAT44((int)puVar9,uVar17);
          local_1b0 = uVar18;
          iStack_1ac = iVar15;
          FUN_1003fb48c(FUN_10003fa84,auStack_1c0,0xd0000000000000a9,0x8000000100877660,
                        &DAT_d000000000000030,0x8000000100879130,0x5d6,0);
          if ((param_3 & 1) == 0) {
            return;
          }
          FUN_1000162bc(param_2 & 0xffffffff,0);
          return;
        }
        puVar9 = puVar10;
        FUN_10001a914();
        IVar3 = _objc_msgSend((ID)puVar9,"videoTrackIndex");
        local_d4 = 0;
        FUN_10001e990(puVar10,IVar3 & 0xffffffff);
        if (((ulong)puVar10 >> 0x20 & 1) == 0) {
          _objc_msgSend((ID)puVar9,"setVideoTrackIndex:",puVar10);
          FUN_10001adc4(param_2 & 0xffffffff,puVar9,1);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_1b0 = uVar18;
          iStack_1ac = iVar15;
          local_1a8 = puVar9;
          FUN_1003fb48c(FUN_10003fa74,auStack_1c0,0xd0000000000000a9,0x8000000100877660,
                        &DAT_d000000000000030,0x8000000100879130,0x5e7,0);
        }
        else {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,uVar17);
          local_1b0 = uVar18;
          iStack_1ac = iVar15;
          FUN_1003fb4ec(FUN_10003fa64,auStack_1c0,0xd0000000000000a9,0x8000000100877660,
                        &DAT_d000000000000030,0x8000000100879130,0x5df,0);
        }
        if ((param_3 & 1) == 0) {
          return;
        }
        FUN_1000162bc(param_2 & 0xffffffff,0);
        return;
      }
    }
    if ((uVar4 >> 0x20 & 1) == 0) {
      FUN_100028c58(param_2 & 0xffffffff,param_1,uVar4);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4ec(FUN_10003fa4c,&local_1b0,0xd0000000000000a9,0x8000000100877660,
                    &DAT_d000000000000030,0x8000000100879130,0x5ca,0);
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar12 = &local_1b0;
    pcVar6 = FUN_10003fa58;
    uVar13 = 0x5cc;
  }
  else {
    if (iVar16 != iVar15) goto LAB_100018530;
    FUN_10001920c();
    thunk_FUN_10004b080();
    pcVar8 = pcVar6;
    FUN_100045da4();
    _swift_bridgeObjectRelease(pcVar6);
    if (*(long *)(pcVar8 + 0x10) == 0) {
      _swift_bridgeObjectRelease(pcVar8);
      goto LAB_100018530;
    }
    uVar1 = *(uint *)(pcVar8 + 0x20);
    _swift_bridgeObjectRelease(pcVar8);
    uVar4 = (ulong)uVar1;
    FUN_10001efe0();
    if ((uVar4 >> 0x20 & 1) != 0) goto LAB_100018530;
    _objc_msgSend(self,"setScreenId:",uVar4);
    _objc_msgSend(self,"setVideoTrackIndex:",(ulong)uVar1);
    FUN_10001ab44(self);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f6e0,&local_1b0,0xd0000000000000a9,0x8000000100877660,
                  &DAT_d000000000000030,0x8000000100878320,0x972,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar12 = auStack_1c0;
    local_1a8 = (undefined *)CONCAT44(uVar1,(int)uVar4);
    pcVar6 = FUN_10003fa40;
    uVar13 = 0x5b9;
    local_1b0 = uVar18;
    iStack_1ac = iVar15;
  }
  FUN_1003fb48c(pcVar6,puVar12,0xd0000000000000a9,0x8000000100877660,&DAT_d000000000000030,
                0x8000000100879130,uVar13,0);
LAB_100018530:
  if ((param_3 & 1) != 0) {
    FUN_1000162bc(param_2 & 0xffffffff,0);
  }
  return;
}

