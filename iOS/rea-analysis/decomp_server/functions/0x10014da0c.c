// rea decompile_all
// name: FUN_10014da0c
// address: 0x10014da0c
// body: available
// range: 0x10014da0c-0x10014e443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10014da0c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  dispatch_semaphore_t pdVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long extraout_x8;
  byte *pbVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  char *pcVar23;
  char *pcVar24;
  undefined1 auStack_300 [16];
  long alStack_2f0 [2];
  ID aIStack_2e0 [4];
  undefined4 *local_2c0;
  char *local_2b8;
  undefined8 uStack_2b0;
  ID local_2a8;
  long local_2a0;
  undefined *local_298;
  char *local_290;
  long local_288;
  byte *local_280;
  code *local_278;
  ID local_270;
  code *local_268;
  dispatch_semaphore_t local_260;
  undefined8 local_258;
  undefined *local_250;
  dispatch_semaphore_t local_248;
  undefined *local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [48];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 local_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [192];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined1 local_70;
  
  puVar17 = &DAT_100a77040;
  local_230 = param_2;
  FUN_100004bb4(&DAT_100a77040,&DAT_10080e910);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  local_2a0 = (long)&local_2c0 + lVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_190,0,0);
  IVar6 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar6 == 0) {
    puVar17 = &_OBJC_CLASS___NSError;
    _objc_allocWithZone();
    puVar18 = &DAT_d000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(&DAT_d000000000000013,0x8000000100891cd0);
    IVar6 = _objc_msgSend((ID)puVar17,"initWithDomain:code:userInfo:",puVar18,0xf424c,0);
    FUN_100616260(IVar6);
  }
  else {
    uVar4 = 0;
    FUN_100401b14();
    pcVar23 = "fileContentsRequest";
    pcVar24 = s___FileContent______100892c70 + 0x20;
    FUN_1003fb45c(FUN_10014e444,0,0xd0000000000000b5,0x8000000100891cf0,&DAT_d000000000000028,
                  0x8000000100892c90,0xcb,7);
    puVar17 = &DAT_10099f050;
    _swift_allocObject(&DAT_10099f050,0x40,7);
    local_2c0 = (undefined4 *)(puVar17 + 0x10);
    *(undefined4 *)(puVar17 + 0x18) = 0;
    *(undefined8 *)(puVar17 + 0x20) = 0;
    *(undefined4 *)(puVar17 + 0x28) = 0;
    uStack_238 = 0xc000000000000000;
    local_240 = (undefined *)0x0;
    *(undefined8 *)(puVar17 + 0x38) = 0xc000000000000000;
    *(undefined8 *)(puVar17 + 0x30) = 0;
    lVar14 = _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    lVar5 = IVar6 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
    local_298 = puVar17;
    _swift_weakLoadStrong();
    if (lVar5 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(lVar5 + 0x14);
      _swift_release(lVar5);
    }
    *local_2c0 = uVar22;
    uVar7 = IVar6 + lVar14;
    _swift_weakLoadStrong();
    if (uVar7 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *(undefined4 *)(uVar7 + 0x90);
      _swift_release();
    }
    puVar17 = local_298;
    *(undefined4 *)(local_298 + 0x14) = uVar22;
    FUN_100150b88();
    *(int *)(puVar17 + 0x28) = (int)uVar7;
    uVar8 = uVar7;
    FUN_100149dec();
    *(ulong *)(puVar17 + 0x20) = uVar8;
    *(undefined4 *)(puVar17 + 0x18) = 2;
    local_b8 = *(undefined8 *)(puVar17 + 0x10);
    uStack_a0 = uVar7 & 0xffffffff;
    local_198 = 1;
    uStack_b0 = 2;
    uStack_90 = uStack_238;
    local_98 = local_240;
    local_78 = 0;
    local_70 = 1;
    local_a8 = uVar8;
    FUN_100008184(0,0xc000000000000000);
    FUN_100193a8c(auStack_178,&local_b8);
    FUN_100006cdc(0,0xc000000000000000);
    (*(code *)PTR____chkstk_darwin_100995498)();
    puVar3 = local_2c0;
    *(ID *)((long)aIStack_2e0 + lVar2 + 0x10) = IVar6;
    *(undefined4 **)((long)aIStack_2e0 + lVar2 + 0x18) = puVar3;
    FUN_1003fb45c(thunk_FUN_100152678,(long)aIStack_2e0 + lVar2,0xd0000000000000b5,
                  0x8000000100891cf0,&DAT_d000000000000028,0x8000000100892c90,0xd3,7);
    pdVar9 = _dispatch_semaphore_create(0);
    puVar17 = &DAT_10099f078;
    _swift_allocObject(&DAT_10099f078,0x11,7);
    pbVar19 = puVar17 + 0x10;
    *pbVar19 = 1;
    local_288 = _TtC14UURemoteServer22ClipboardBaseOperation::managerDelegate;
    local_240 = puVar17;
    _swift_beginAccess(pbVar19,auStack_1b0,0,0);
    local_280 = pbVar19;
    if (*pbVar19 == 1) {
      local_2b8 = "fileContentsRequest";
      local_290 = s___FileContent______100892c70 + 0x20;
      puVar17 = local_240;
      uStack_2b0 = uVar4;
      local_2a8 = IVar6;
      local_248 = pdVar9;
      do {
        IVar10 = _objc_msgSend(IVar6,"isCancelled");
        if ((int)IVar10 != 0) {
          puVar17 = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          puVar18 = &DAT_d000000000000013;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (&DAT_d000000000000013,0x8000000100891cd0);
          IVar10 = _objc_msgSend((ID)puVar17,"initWithDomain:code:userInfo:",puVar18,0x186a9,0);
          FUN_100616260(IVar10);
          FUN_1003fb45c(FUN_10014e6dc,0,0xd0000000000000b5,(ulong)pcVar23 | 0x8000000000000000,
                        &DAT_d000000000000028,(ulong)pcVar24 | 0x8000000000000000,0xdb,7);
          break;
        }
        puVar11 = &DAT_10099ec90;
        _swift_allocObject(&DAT_10099ec90,0x18,7);
        _swift_unknownObjectWeakInit(puVar11 + 0x10,IVar6);
        puVar12 = &DAT_10099f0a0;
        _swift_allocObject(&DAT_10099f0a0,0x28,7);
        *(undefined **)(puVar12 + 0x10) = puVar11;
        *(undefined **)(puVar12 + 0x18) = puVar17;
        *(dispatch_semaphore_t *)(puVar12 + 0x20) = pdVar9;
        lVar5 = IVar6 + local_288;
        _swift_unknownObjectWeakLoadStrong();
        lVar14 = _TtC14UURemoteServer16ClipboardHandler::ref;
        if (lVar5 == 0) {
          _swift_retain(puVar17);
        }
        else {
          _swift_beginAccess(lVar5 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_1c8,0,0);
          lVar20 = lVar5 + lVar14;
          _swift_unknownObjectWeakLoadStrong();
          local_250 = puVar12;
          if (lVar20 == 0) {
            _swift_retain(local_240);
            _swift_retain(puVar12);
LAB_10014dfa0:
            FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
            _swift_allocObject();
LAB_10014dfcc:
            pcVar13 = FUN_1001be730;
            FUN_100615648(FUN_1001be730,0);
            local_278 = pcVar13;
            _swift_release(puVar12);
            _swift_unknownObjectRelease(lVar5);
          }
          else {
            lVar20 = lVar20 + _TtC14UURemoteServer22StreamerConnectSession::_peerState;
            _swift_beginAccess(lVar20,auStack_1e0,0,0);
            lVar20 = *(long *)(lVar20 + 8);
            _swift_retain(local_240);
            _swift_retain(puVar12);
            if (lVar20 != 5) goto LAB_10014dfa0;
            lVar14 = lVar5 + lVar14;
            _swift_unknownObjectWeakLoadStrong();
            if (lVar14 == 0) {
              FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
              _swift_allocObject();
              goto LAB_10014dfcc;
            }
            FUN_1000c8ac4();
            (*(code *)PTR____chkstk_darwin_100995498)(0);
            *(long *)((long)alStack_2f0 + lVar2) = lVar5;
            *(undefined1 **)((long)alStack_2f0 + lVar2 + 8) = auStack_178;
            *(code **)((long)aIStack_2e0 + lVar2) = FUN_1001527d4;
            *(undefined **)((long)aIStack_2e0 + lVar2 + 8) = puVar12;
            *(long *)((long)aIStack_2e0 + lVar2 + 0x10) = lVar14;
            puVar17 = &DAT_100a79cf0;
            FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
            _swift_allocObject();
            pcVar13 = FUN_100152890;
            FUN_100615648(FUN_100152890,auStack_300 + lVar2,puVar17);
            local_278 = pcVar13;
            _swift_release(lVar14);
            _swift_release(puVar12);
            _swift_unknownObjectRelease(lVar5);
          }
          puVar16 = &DAT_100a79cf0;
          lVar14 = 0;
          __s8Dispatch0A13WorkItemFlagsVMa();
          lVar5 = local_2a0;
          local_268 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
          (*local_268)(local_2a0,1,1,lVar14);
          puVar11 = &DAT_10099f0c8;
          _swift_allocObject(&DAT_10099f0c8,0x38,7);
          puVar17 = local_240;
          pdVar9 = local_248;
          puVar15 = local_298;
          *(undefined8 *)(puVar11 + 0x10) = local_230;
          *(undefined **)(puVar11 + 0x18) = local_240;
          *(ID *)(puVar11 + 0x20) = IVar6;
          *(dispatch_semaphore_t *)(puVar11 + 0x28) = local_248;
          *(undefined **)(puVar11 + 0x30) = local_298;
          local_270 = IVar6;
          _swift_retain(local_240);
          local_260 = pdVar9;
          _swift_retain(local_230);
          _swift_retain();
          FUN_10060edd8();
          _swift_beginAccess();
          uVar4 = *(undefined8 *)(puVar15 + 8);
          FUN_100004bb4(&DAT_100a79cf0,&DAT_10080fb50);
          puVar12 = &DAT_100a79cf8;
          FUN_10003f840(&DAT_100a79cf8,&DAT_100a79cf0,&DAT_10080fb50,
                        &TargetProtocolConformanceDescriptor_1008488a0);
          pcVar13 = local_278;
          FUN_1006170a4(uVar4,lVar5,FUN_100152828,puVar11,puVar16,puVar12);
          local_258 = uVar4;
          _swift_release(pcVar13);
          _swift_release(puVar11);
          FUN_100040bb4(lVar5,&DAT_100a77040,&DAT_10080e910);
          (*local_268)(lVar5,1,1,lVar14);
          puVar11 = &DAT_10099ec90;
          _swift_allocObject(&DAT_10099ec90,0x18,7);
          _swift_unknownObjectWeakInit(puVar11 + 0x10,local_270);
          puVar12 = &DAT_10099f0f0;
          _swift_allocObject(&DAT_10099f0f0,0x30,7);
          *(undefined8 *)(puVar12 + 0x10) = local_230;
          *(undefined **)(puVar12 + 0x18) = puVar17;
          *(undefined **)(puVar12 + 0x20) = puVar11;
          *(dispatch_semaphore_t *)(puVar12 + 0x28) = local_260;
          _swift_beginAccess(puVar15,auStack_210,0,0);
          uVar21 = *(undefined8 *)(puVar15 + 8);
          _swift_beginAccess(puVar15,auStack_228,0,0);
          uVar1 = puVar15[0x10];
          local_268 = (code *)uVar21;
          _swift_retain(puVar17);
          _swift_retain(local_230);
          _swift_retain(puVar11);
          puVar15 = &DAT_100a77058;
          FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
          puVar16 = &DAT_100a77060;
          FUN_10003f840(&DAT_100a77060,&DAT_100a77058,&DAT_10080e920,
                        &TargetProtocolConformanceDescriptor_1008488bc);
          uVar4 = local_258;
          IVar6 = local_2a8;
          FUN_10060913c(uVar21,lVar5,uVar1,FUN_100152884,puVar12,puVar15,puVar16);
          _swift_release();
          _swift_release(uVar4);
          _swift_release(puVar12);
          FUN_100040bb4(lVar5,&DAT_100a77040,&DAT_10080e910);
          pdVar9 = local_248;
          _swift_release(puVar11);
          puVar12 = local_250;
          pcVar23 = local_2b8;
        }
        pcVar24 = local_290;
        FUN_1003fb45c(thunk_FUN_10014bc08,0,0xd0000000000000b5,(ulong)pcVar23 | 0x8000000000000000,
                      &DAT_d000000000000028,(ulong)local_290 | 0x8000000000000000,0x112,7);
        __sSo21OS_dispatch_semaphoreC8DispatchE4waityyF();
        _swift_release(puVar12);
      } while ((*local_280 & 1) != 0);
    }
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    puVar3 = local_2c0;
    *(ID *)((long)aIStack_2e0 + lVar2 + 0x10) = IVar6;
    *(undefined4 **)((long)aIStack_2e0 + lVar2 + 0x18) = puVar3;
    FUN_1003fb45c(FUN_100152798,(long)aIStack_2e0 + lVar2,0xd0000000000000b5,
                  (ulong)pcVar23 | 0x8000000000000000,&DAT_d000000000000028,
                  (ulong)pcVar24 | 0x8000000000000000,0x115,7);
    _swift_release(local_240);
    FUN_1000914e4(auStack_178);
    _swift_release(local_298);
  }
  return;
}

