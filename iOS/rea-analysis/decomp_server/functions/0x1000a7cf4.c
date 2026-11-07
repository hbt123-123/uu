// rea decompile_all
// name: FUN_1000a7cf4
// address: 0x1000a7cf4
// body: available
// range: 0x1000a7cf4-0x1000a89fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000a89f8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000a7cf4(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ID IVar10;
  ID IVar11;
  dispatch_semaphore_t pdVar12;
  void *aBlock;
  ulong uVar13;
  ID IVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  ID IVar19;
  char *pcVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long lVar21;
  pid_t pVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  code *pcVar26;
  undefined1 auStack_1e0 [16];
  long alStack_1d0 [2];
  ID aIStack_1c0 [4];
  ID aIStack_1a0 [2];
  char acStack_190 [8];
  ID local_188;
  code *local_180;
  ulong local_178;
  long local_170;
  char *local_168;
  ID local_160;
  char *local_158;
  ID local_150;
  ID local_148;
  long local_140;
  undefined4 *local_138;
  ID local_130;
  dispatch_semaphore_t local_128;
  long local_120;
  undefined8 local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined *puStack_e0;
  code *local_d8;
  undefined *local_d0;
  undefined1 local_c8 [8];
  ID IStack_c0;
  char *local_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  char *local_90;
  long lStack_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  local_138 = param_1;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pcVar5 = (char *)0x0;
  local_158 = acStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A4TimeVMa();
  local_178 = *(ulong *)(pcVar5 + -8);
  local_168 = pcVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_178 + 0x40));
  IVar19 = (long)(acStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_150 = IVar19;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = IVar19 - extraout_x12;
  lVar4 = 0;
  local_170 = lVar18;
  __s10Foundation4DateVMa();
  local_148 = *(ID *)(lVar4 + -8);
  local_140 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x40));
  lVar18 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar23 = lVar18 - extraout_x12_00;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar21 + 0x40));
  lVar25 = lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar19 = _objc_msgSend((ID)puVar6,"init");
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = uVar9;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar25,uVar9,uVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar21 + 8))(lVar25,lVar4);
  _objc_msgSend(IVar19,"setExecutableURL:",uVar7);
  uVar7 = param_2;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_2,PTR___sSSN_1009957f8);
  _objc_msgSend(IVar19,"setArguments:",uVar7);
  puVar6 = &DAT_100a750f8;
  FUN_100004bb4(&DAT_100a750f8,&DAT_100809c20);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar1;
  local_f8 = puVar6;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_10005f920();
  puVar2 = local_f8;
  puVar6 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar8 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  pcVar5 = (char *)0x20;
  lVar4 = -0x1f00000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x20,0xe100000000000000,puVar6,puVar8);
  _swift_bridgeObjectRelease(puVar2);
  local_120 = lVar23;
  __s10Foundation4DateVACycfC(lVar23);
  uVar9 = 0;
  FUN_100401b14();
  local_100 = "socketPath";
  local_110 = s_exitCode__100880a70;
  local_118 = uVar9;
  local_108 = pcVar5;
  local_90 = pcVar5;
  lStack_88 = lVar4;
  FUN_1003fb48c(FUN_1000a9f50,auStack_a0,0xd000000000000094,0x8000000100880950,0xd000000000000015,
                0x8000000100880a70,0x264,0);
  puVar6 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  IVar10 = _objc_msgSend((ID)puVar6,"init");
  puVar6 = &_OBJC_CLASS___NSPipe;
  _objc_allocWithZone();
  IVar11 = _objc_msgSend((ID)puVar6,"init");
  local_130 = IVar10;
  _objc_msgSend(IVar19,"setStandardOutput:",IVar10);
  _objc_msgSend(IVar19,"setStandardError:",IVar11);
  pdVar12 = _dispatch_semaphore_create(0);
  puVar6 = &DAT_10099a1c0;
  _swift_allocObject(&DAT_10099a1c0,0x18,7);
  *(dispatch_semaphore_t *)(puVar6 + 0x10) = pdVar12;
  local_d8 = FUN_1000a9f7c;
  local_f8 = PTR___NSConcreteStackBlock_100995490;
  uVar9 = 0x42000000;
  local_f0 = 0x42000000;
  local_e8 = FUN_1000a8c3c;
  puStack_e0 = &DAT_10099a1d8;
  local_d0 = puVar6;
  aBlock = __Block_copy(&local_f8);
  puVar2 = local_d0;
  local_128 = pdVar12;
  FUN_10004090c(FUN_1000a9f7c,puVar6);
  _swift_release(puVar2);
  _objc_msgSend(IVar19,"setTerminationHandler:",aBlock);
  __Block_release(aBlock);
  _swift_release(puVar6);
  local_f8 = (undefined *)0x0;
  IVar10 = _objc_msgSend(IVar19,"launchAndReturnError:",&local_f8);
  if ((int)IVar10 == 0) {
    puVar6 = local_f8;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    __s10Foundation4DateVACycfC(lVar18);
    lVar23 = local_120;
    __s10Foundation4DateV17timeIntervalSinceySdACF(local_120);
    lVar21 = local_140;
    pcVar26 = *(code **)(local_148 + 8);
    (*pcVar26)(lVar18,local_140);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(char **)(lVar25 + -0x20) = local_108;
    *(long *)(lVar25 + -0x18) = lVar4;
    *(undefined8 *)(lVar25 + -0x10) = uVar9;
    *(undefined **)(lVar25 + -8) = puVar6;
    FUN_1003fb4ec(FUN_1000a9f9c,lVar25 + -0x30,0xd000000000000094,
                  (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                  (ulong)local_110 | 0x8000000000000000,0x274,0);
    _swift_bridgeObjectRelease(lVar4);
    _swift_getErrorValue(puVar6,auStack_b0,local_c8);
    IVar10 = IStack_c0;
    pcVar5 = local_b8;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg();
    _swift_errorRelease(puVar6);
    (*pcVar26)(lVar23,lVar21);
    IVar19 = 0;
    uVar17 = 0;
    pcVar20 = (char *)0xe000000000000000;
    uVar24 = 0xffffffff;
  }
  else {
    local_180 = (code *)lVar18;
    local_160 = IVar11;
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(char **)(lVar25 + -0x20) = local_108;
    *(long *)(lVar25 + -0x18) = lVar4;
    *(ID *)(lVar25 + -0x10) = IVar19;
    FUN_1003fb48c(FUN_1000a9fac,lVar25 + -0x30,0xd000000000000094,
                  (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                  (ulong)local_110 | 0x8000000000000000,0x271,0);
    IVar10 = local_150;
    __s8Dispatch0A4TimeV3nowACyFZ(local_150);
    lVar18 = local_170;
    uVar9 = 0x4000000000000000;
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(local_170,IVar10);
    pcVar5 = local_168;
    pcVar26 = *(code **)(local_178 + 8);
    (*pcVar26)(IVar10,local_168);
    lVar21 = lVar18;
    __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
    (*pcVar26)(lVar18,pcVar5);
    uVar13 = (ulong)((uint)lVar21 & 1);
    __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar13,1);
    IVar10 = local_130;
    local_178 = CONCAT44(local_178._4_4_,(int)uVar13);
    if ((uVar13 & 1) != 0) {
      IVar11 = _objc_msgSend(IVar19,"processIdentifier");
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(char **)(lVar25 + -0x20) = local_108;
      *(long *)(lVar25 + -0x18) = lVar4;
      *(pid_t *)(lVar25 + -0x10) = pVar22;
      FUN_1003fb4ec(FUN_1000a9fd0,lVar25 + -0x30,extraout_x12_01 + 0x7f,
                    (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                    (ulong)local_110 | 0x8000000000000000,0x27c,0);
      IVar14 = _objc_msgSend(IVar19,"isRunning");
      pVar22 = (pid_t)IVar11;
      if ((((int)IVar14 != 0) && (iVar3 = _kill(pVar22,0xf), iVar3 != 0)) &&
         (__s6Darwin5errnos5Int32Vvg(), iVar3 != 3)) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(char **)(lVar25 + -0x20) = local_108;
        *(long *)(lVar25 + -0x18) = lVar4;
        *(pid_t *)(lVar25 + -0x10) = pVar22;
        FUN_1003fb4bc(FUN_1000a9ff4,lVar25 + -0x30,0xd000000000000094,
                      (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                      (ulong)local_110 | 0x8000000000000000,0x280,0);
      }
      IVar11 = local_150;
      __s8Dispatch0A4TimeV3nowACyFZ(local_150);
      uVar9 = 0x3fc999999999999a;
      __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar18,IVar11);
      (*pcVar26)(IVar11,pcVar5);
      lVar21 = lVar18;
      __sSo21OS_dispatch_semaphoreC8DispatchE4wait7timeoutAC0D13TimeoutResultOAC0D4TimeV_tF();
      (*pcVar26)(lVar18,pcVar5);
      uVar13 = (ulong)((uint)lVar21 & 1);
      __s8Dispatch0A13TimeoutResultO2eeoiySbAC_ACtFZ(uVar13,1);
      if (((uVar13 & 1) != 0) && (IVar11 = _objc_msgSend(IVar19,"isRunning"), (int)IVar11 != 0)) {
        iVar3 = _kill(pVar22,9);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(char **)(lVar25 + -0x20) = local_108;
        *(long *)(lVar25 + -0x18) = lVar4;
        *(pid_t *)(lVar25 + -0x10) = pVar22;
        if (iVar3 == 0) {
          FUN_1003fb4bc(FUN_1000a9fe8,lVar25 + -0x30,0xd000000000000094,
                        (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                        (ulong)local_110 | 0x8000000000000000,0x289,0);
        }
        else {
          FUN_1003fb4ec(FUN_1000a9fdc,lVar25 + -0x30,0xd000000000000094,
                        (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                        (ulong)local_110 | 0x8000000000000000,0x287,0);
        }
      }
      _objc_msgSend(IVar19,"waitUntilExit");
    }
    IVar10 = _objc_msgSend(IVar10,"fileHandleForReading");
    pcVar15 = "readDataToEndOfFile";
    IVar11 = _objc_msgSend(IVar10,"readDataToEndOfFile");
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    local_170 = lVar4;
    IVar10 = _objc_msgSend(local_160,"fileHandleForReading");
    pcVar16 = "readDataToEndOfFile";
    IVar14 = _objc_msgSend(IVar10,"readDataToEndOfFile");
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    pcVar5 = local_158;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(local_158,0);
    IVar10 = IVar11;
    pcVar20 = pcVar15;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar11,pcVar15,pcVar5);
    local_150 = 0;
    if (pcVar20 != (char *)0x0) {
      local_150 = IVar10;
    }
    local_168 = (char *)0xe000000000000000;
    if (pcVar20 != (char *)0x0) {
      local_168 = pcVar20;
    }
    __sSS10FoundationE8EncodingV4utf8ACvgZ(pcVar5);
    IVar10 = IVar14;
    pcVar20 = pcVar16;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(IVar14,pcVar16,pcVar5);
    pcVar26 = local_180;
    local_158 = (char *)0xe000000000000000;
    if (pcVar20 != (char *)0x0) {
      local_158 = pcVar20;
    }
    local_188 = IVar10;
    __s10Foundation4DateVACycfC(local_180);
    __s10Foundation4DateV17timeIntervalSinceySdACF(local_120);
    lVar18 = local_140;
    local_180 = *(code **)(local_148 + 8);
    (*local_180)(pcVar26,local_140);
    (*(code *)PTR____chkstk_darwin_100995498)();
    lVar4 = local_170;
    *(char **)(lVar25 + -0x40) = local_108;
    *(long *)(lVar25 + -0x38) = lVar4;
    *(ID *)(lVar25 + -0x30) = IVar19;
    *(undefined8 *)(lVar25 + -0x28) = uVar9;
    local_148 = IVar11;
    *(ID *)(lVar25 + -0x20) = IVar11;
    *(char **)(lVar25 + -0x18) = pcVar15;
    local_108 = pcVar15;
    *(ID *)(lVar25 + -0x10) = IVar14;
    *(char **)(lVar25 + -8) = pcVar16;
    FUN_1003fb48c(FUN_1000a9fb8,lVar25 + -0x50,0xd000000000000094,
                  (ulong)local_100 | 0x8000000000000000,0xd000000000000015,
                  (ulong)local_110 | 0x8000000000000000,0x295,0);
    _swift_bridgeObjectRelease(lVar4);
    if ((local_178 & 1) == 0) {
      IVar10 = 0;
      if (pcVar20 != (char *)0x0) {
        IVar10 = local_188;
      }
      IVar19 = _objc_msgSend(IVar19,"terminationStatus");
      uVar24 = (undefined4)IVar19;
      (*local_180)(local_120,lVar18);
      FUN_100006cdc(local_148,local_108);
      FUN_100006cdc(IVar14,pcVar16);
      uVar17 = 0;
      IVar19 = local_150;
      pcVar20 = local_168;
      pcVar5 = local_158;
    }
    else {
      _swift_bridgeObjectRelease(local_158);
      FUN_100006cdc(local_148,local_108);
      FUN_100006cdc(IVar14,pcVar16);
      (*local_180)(local_120,lVar18);
      IVar10 = 0xd000000000000016;
      uVar17 = 1;
      uVar24 = 0xfffffffe;
      IVar19 = local_150;
      pcVar20 = local_168;
      pcVar5 = (char *)0x8000000100880a90;
    }
  }
  *local_138 = uVar24;
  *(ID *)(local_138 + 2) = IVar19;
  *(char **)(local_138 + 4) = pcVar20;
  *(ID *)(local_138 + 6) = IVar10;
  *(char **)(local_138 + 8) = pcVar5;
  *(undefined1 *)(local_138 + 10) = uVar17;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

