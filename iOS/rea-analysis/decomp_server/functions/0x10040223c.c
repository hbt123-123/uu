// rea decompile_all
// name: FUN_10040223c
// address: 0x10040223c
// body: available
// range: 0x10040223c-0x1004032bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004032bc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100402814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040223c(ulong param_1,undefined8 param_2,ID param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ID IVar9;
  undefined *puVar10;
  ID IVar11;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x8_03;
  ID IVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 auStack_220 [2];
  undefined1 auStack_210 [16];
  long alStack_200 [2];
  undefined1 auStack_1f0 [16];
  ulong auStack_1e0 [2];
  ID local_1d0;
  ulong local_1c8;
  undefined4 local_1bc;
  long local_1b8;
  ID local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  ulong local_190;
  ulong local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  char *local_160;
  long local_158;
  long local_150;
  undefined4 local_144;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_108;
  long local_100;
  ID local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8 [2];
  undefined *local_a8;
  undefined1 auStack_a0 [48];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  local_1a0 = param_2;
  FUN_1005cac3c();
  lVar19 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  uVar7 = (long)&local_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  IVar15 = uVar7 - extraout_x12;
  local_f8 = IVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = IVar15 - extraout_x12_00;
  local_190 = uVar16;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar16 = uVar16 - extraout_x12_01;
  puVar21 = &DAT_100a76718;
  local_1a8 = uVar16;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = uVar16 - extraout_x8_00;
  lVar3 = 0;
  local_180 = lVar13;
  __s10Foundation4DateVMa();
  local_178 = *(long *)(lVar3 + -8);
  local_170 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_178 + 0x40));
  uVar16 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_188 = uVar16;
  __s10Foundation17URLResourceValuesVMa();
  local_158 = *(long *)(lVar3 + -8);
  local_150 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_158 + 0x40));
  lVar14 = uVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c8 = lVar14;
  __s10Foundation3URLVMa();
  local_e0 = *(long *)(lVar3 + -8);
  lVar13 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_e0 + 0x40));
  lVar14 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar14 - extraout_x12_02;
  local_e8 = param_1;
  local_c0 = lVar14;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  puVar21 = &DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  local_108 = puVar21;
  _swift_allocObject();
  uStack_118 = 4;
  local_120 = 2;
  *(undefined8 *)(puVar21 + 0x18) = 4;
  *(undefined8 *)(puVar21 + 0x10) = 2;
  uVar17 = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
  uVar22 = *(undefined8 *)PTR__NSURLIsRegularFileKey_100995380;
  *(undefined8 *)(puVar21 + 0x20) = uVar17;
  *(undefined8 *)(puVar21 + 0x28) = uVar22;
  uVar4 = 0;
  FUN_10000603c();
  puVar5 = puVar21;
  local_138 = uVar22;
  local_130 = uVar17;
  local_128 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar21,uVar4);
  _swift_bridgeObjectRelease(puVar21);
  local_a8 = (undefined *)0x0;
  local_1b0 = param_3;
  IVar15 = _objc_msgSend(param_3,
                         "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",lVar13
                         ,puVar5,4,&local_a8);
  local_d8 = lVar2;
  local_d0 = lVar19;
  if (IVar15 == 0) {
    puVar21 = local_a8;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(lVar14 + -0x10) = local_e8;
    *(undefined **)(lVar14 + -8) = puVar21;
    IVar15 = local_f8;
    (**(code **)(lVar19 + 0x68))(local_f8,4,lVar2);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar9 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      IVar11 = IVar15;
      FUN_1005cc2b8();
      if ((IVar11 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        IVar11 = 0xd000000000000081;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000081,0x80000001008b5420)
        ;
        pcVar12 = "lastPathComponent";
        IVar11 = _objc_msgSend(IVar11,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar11);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar14 + -0x30) = FUN_1004032c0;
        *(long *)(lVar14 + -0x28) = lVar14 + -0x20;
        *(undefined8 *)(lVar14 + -0x50) = 0x80000001008b5540;
        *(undefined8 *)(lVar14 + -0x48) = 0x154;
        FUN_1005cc010(thunk_FUN_1003a85e4,lVar14 + -0x40,IVar15,0x65746f6d65525555,
                      0xe800000000000000,IVar11,pcVar12,0xd00000000000003c);
        _swift_release(lVar3);
        lVar2 = local_d8;
        _swift_bridgeObjectRelease(pcVar12);
        lVar19 = local_d0;
      }
    }
    _objc_msgSend(IVar9,"unlock");
    (**(code **)(lVar19 + 8))(IVar15,lVar2);
    _swift_errorRelease(puVar21);
    puVar21 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar15,lVar3);
    local_a8 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_e8 = *(ulong *)(IVar15 + 0x10);
    if (local_e8 == 0) {
      local_198 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar16 = 0;
      local_1c8 = (ulong)*(byte *)(local_e0 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_e0 + 0x50) ^ 0xffffffffffffffff);
      local_100 = IVar15 + local_1c8;
      local_160 = "tId";
      local_168 = 0x80000001008b5540;
      local_144 = 4;
      local_1bc = 3;
      local_198 = PTR___swiftEmptyArrayStorage_100995ea0;
      lVar13 = local_e0;
      lVar6 = local_c0;
      local_140 = uVar7;
      local_f8 = IVar15;
      local_f0 = lVar3;
      do {
        if (*(ulong *)(local_f8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10040328c);
          (*pcVar20)();
        }
        lVar18 = *(long *)(lVar13 + 0x48);
        lVar19 = local_100 + lVar18 * uVar16;
        pcVar20 = *(code **)(lVar13 + 0x10);
        (*pcVar20)(lVar6,lVar19,lVar3);
        __s10Foundation3URLV17lastPathComponentSSvg();
        uVar4 = DAT_100a8a6c8;
        uVar7 = DAT_100a8a6c0;
        _swift_bridgeObjectRetain(DAT_100a8a6c8);
        __sSS9hasSuffixySbSSF(uVar7,uVar4,lVar6,lVar19);
        _swift_bridgeObjectRelease(uVar4);
        uVar4 = DAT_100a8a6d8;
        uVar8 = _s__slog_100a8a6d0;
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRetain(DAT_100a8a6d8);
          __sSS9hasSuffixySbSSF(uVar8,uVar4,lVar6,lVar19);
          _swift_bridgeObjectRelease(uVar4);
          uVar4 = ram0x000100a8a6e8;
          uVar7 = s__slog_mmap_100a8a6e0._0_8_;
          if ((uVar8 & 1) != 0) goto LAB_100402784;
          _swift_bridgeObjectRetain(ram0x000100a8a6e8);
          __sSS9hasSuffixySbSSF(uVar7,uVar4,lVar6,lVar19);
          _swift_bridgeObjectRelease(uVar4);
          if ((uVar7 & 1) != 0) goto LAB_100402784;
          _swift_bridgeObjectRelease(lVar19);
          lVar13 = local_e0;
          lVar19 = local_d0;
          lVar3 = local_f0;
          lVar6 = local_c0;
        }
        else {
LAB_100402784:
          _swift_bridgeObjectRelease(lVar19);
          puVar21 = local_108;
          _swift_initStackObject(local_108,auStack_a0);
          *(undefined8 *)(puVar21 + 0x18) = uStack_118;
          *(undefined8 *)(puVar21 + 0x10) = local_120;
          *(undefined8 *)(puVar21 + 0x20) = local_130;
          *(undefined8 *)(puVar21 + 0x28) = local_138;
          puVar5 = puVar21;
          FUN_100128084();
          _swift_setDeallocating(puVar21);
          _swift_arrayDestroy(puVar21 + 0x20,2,local_128);
          lVar6 = local_c0;
          __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
                    (local_c8,puVar5);
          _swift_bridgeObjectRelease();
          uVar1 = (uint)puVar5;
          __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
          lVar3 = local_180;
          if (((uVar1 & 0xff) == 2) || ((uVar1 & 1) == 0)) {
            (**(code **)(local_158 + 8))(local_c8,local_150);
            lVar13 = local_e0;
            lVar19 = local_d0;
            lVar3 = local_f0;
          }
          else {
            __s10Foundation17URLResourceValuesV12creationDateAA0E0VSgvg(local_180);
            lVar13 = local_170;
            lVar19 = local_178;
            lVar6 = lVar3;
            (**(code **)(local_178 + 0x30))(lVar3,1,local_170);
            uVar7 = local_188;
            if ((int)lVar6 == 1) {
              FUN_100040bb4(lVar3,&DAT_100a76718,&DAT_10080ccc0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              lVar6 = local_c0;
              *(long *)(lVar14 + -0x10) = local_c0;
              uVar7 = local_1a8;
              (**(code **)(local_d0 + 0x68))(local_1a8,local_1bc,lVar2);
              if (DAT_100a89358 != -1) {
                _swift_once(&DAT_100a89358,FUN_1003fba60);
              }
              IVar15 = DAT_100a8e090;
              _objc_msgSend(DAT_100a8e090,"lock");
              lVar3 = DAT_100a8e098;
              if (DAT_100a8e098 != 0) {
                _swift_retain(DAT_100a8e098);
                uVar8 = uVar7;
                FUN_1005cc2b8();
                if ((uVar8 & 1) == 0) {
                  _swift_release(lVar3);
                }
                else {
                  IVar9 = 0xd000000000000081;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000081,(ulong)local_160 | 0x8000000000000000);
                  pcVar12 = "lastPathComponent";
                  IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                  lVar6 = local_c0;
                  local_1d0 = IVar9;
                  (*(code *)PTR____chkstk_darwin_100995498)(0);
                  *(code **)(lVar14 + -0x30) = FUN_1004032d8;
                  *(long *)(lVar14 + -0x28) = lVar14 + -0x20;
                  *(undefined8 *)(lVar14 + -0x48) = 0x15e;
                  *(undefined8 *)(lVar14 + -0x50) = local_168;
                  FUN_1005cc010(thunk_FUN_1003a85e4,lVar14 + -0x40,uVar7,0x65746f6d65525555,
                                0xe800000000000000,local_1d0,pcVar12,0xd00000000000003c);
                  _swift_release(lVar3);
                  _swift_bridgeObjectRelease(pcVar12);
                  lVar2 = local_d8;
                }
              }
              _objc_msgSend(IVar15,"unlock");
              lVar19 = local_d0;
              (**(code **)(local_d0 + 8))(uVar7,lVar2);
              (**(code **)(local_158 + 8))(local_c8,local_150);
              lVar13 = local_e0;
              lVar3 = local_f0;
            }
            else {
              (**(code **)(lVar19 + 0x20))(local_188,lVar3,lVar13);
              uVar8 = uVar7;
              __s10Foundation4DateV1loiySbAC_ACtFZ(uVar7,local_1a0);
              lVar6 = local_c0;
              if ((uVar8 & 1) == 0) {
                (**(code **)(lVar19 + 8))(uVar7,lVar13);
                (**(code **)(local_158 + 8))(local_c8,local_150);
                lVar13 = local_e0;
                lVar19 = local_d0;
                lVar3 = local_f0;
                lVar6 = local_c0;
              }
              else {
                __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
                local_b8[0] = 0;
                IVar15 = _objc_msgSend(local_1b0,"removeItemAtURL:error:",uVar8,local_b8);
                if ((int)IVar15 == 0) {
                  uVar4 = local_b8[0];
                  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
                  _swift_willThrow(0);
                  (**(code **)(local_178 + 8))(uVar7,local_170);
                  (**(code **)(local_158 + 8))(local_c8,local_150);
                  uVar7 = local_140;
                  (*(code *)PTR____chkstk_darwin_100995498)();
                  *(long *)(lVar14 + -0x10) = lVar6;
                  *(undefined8 *)(lVar14 + -8) = uVar4;
                  lVar19 = local_d0;
                  (**(code **)(local_d0 + 0x68))(uVar7,local_144,local_d8);
                  if (DAT_100a89358 != -1) {
                    _swift_once(&DAT_100a89358,FUN_1003fba60);
                  }
                  IVar15 = DAT_100a8e090;
                  _objc_msgSend(DAT_100a8e090,"lock");
                  lVar3 = DAT_100a8e098;
                  if (DAT_100a8e098 != 0) {
                    _swift_retain(DAT_100a8e098);
                    uVar8 = uVar7;
                    FUN_1005cc2b8();
                    if ((uVar8 & 1) == 0) {
                      _swift_release(lVar3);
                    }
                    else {
                      IVar9 = 0xd000000000000081;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (0xd000000000000081,(ulong)local_160 | 0x8000000000000000);
                      pcVar12 = "lastPathComponent";
                      IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
                      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ
                                (IVar9);
                      (*(code *)PTR____chkstk_darwin_100995498)(0);
                      *(code **)(lVar14 + -0x30) = FUN_1004032c8;
                      *(long *)(lVar14 + -0x28) = lVar14 + -0x20;
                      *(undefined8 *)(lVar14 + -0x48) = 0x165;
                      *(undefined8 *)(lVar14 + -0x50) = local_168;
                      uVar7 = local_140;
                      FUN_1005cc010(thunk_FUN_1003a85e4,lVar14 + -0x40,local_140,0x65746f6d65525555,
                                    0xe800000000000000,IVar9,pcVar12,0xd00000000000003c);
                      _swift_release(lVar3);
                      lVar19 = local_d0;
                      _swift_bridgeObjectRelease(pcVar12);
                    }
                  }
                  _objc_msgSend(IVar15,"unlock");
                  _swift_errorRelease(uVar4);
                  lVar2 = local_d8;
                  (**(code **)(lVar19 + 8))(uVar7,local_d8);
                  lVar13 = local_e0;
                  lVar3 = local_f0;
                  lVar6 = local_c0;
                }
                else {
                  (*pcVar20)(local_1b8,lVar6,local_f0);
                  puVar21 = local_198;
                  puVar5 = local_198;
                  _swift_isUniquelyReferenced_nonNull_native();
                  puVar10 = puVar21;
                  if (((ulong)puVar5 & 1) == 0) {
                    puVar10 = (undefined *)0x0;
                    FUN_100033f0c(0,*(long *)(puVar21 + 0x10) + 1,1,puVar21);
                  }
                  uVar7 = *(ulong *)(puVar10 + 0x10);
                  local_198 = puVar10;
                  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar7) {
                    puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                    FUN_100033f0c(puVar21,uVar7 + 1,1,puVar10);
                    local_198 = puVar21;
                  }
                  lVar13 = local_e0;
                  lVar3 = local_f0;
                  puVar21 = local_198;
                  *(ulong *)(local_198 + 0x10) = uVar7 + 1;
                  (**(code **)(local_e0 + 0x20))
                            (local_198 + uVar7 * lVar18 + local_1c8,local_1b8,local_f0);
                  (**(code **)(local_178 + 8))(local_188,local_170);
                  (**(code **)(local_158 + 8))(local_c8,local_150);
                  lVar19 = local_d0;
                  local_a8 = puVar21;
                }
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
        (**(code **)(lVar13 + 8))(lVar6,lVar3);
      } while (local_e8 != uVar16);
    }
    _swift_bridgeObjectRelease();
    puVar21 = local_198;
    if (*(long *)(local_198 + 0x10) != 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined ***)(lVar14 + -0x10) = &local_a8;
      uVar16 = local_190;
      (**(code **)(lVar19 + 0x68))(local_190,2);
      if (DAT_100a89358 != -1) {
        _swift_once(&DAT_100a89358,FUN_1003fba60);
      }
      IVar15 = DAT_100a8e090;
      _objc_msgSend(DAT_100a8e090,"lock");
      lVar3 = DAT_100a8e098;
      if (DAT_100a8e098 != 0) {
        _swift_retain(DAT_100a8e098);
        uVar7 = uVar16;
        FUN_1005cc2b8();
        if ((uVar7 & 1) == 0) {
          _swift_release(lVar3);
        }
        else {
          IVar9 = 0xd000000000000081;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000081,0x80000001008b5420);
          pcVar12 = "lastPathComponent";
          IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
          (*(code *)PTR____chkstk_darwin_100995498)(0);
          *(code **)(lVar14 + -0x30) = FUN_1004032d0;
          *(long *)(lVar14 + -0x28) = lVar14 + -0x20;
          *(undefined8 *)(lVar14 + -0x50) = 0x80000001008b5540;
          *(undefined8 *)(lVar14 + -0x48) = 0x169;
          uVar16 = local_190;
          FUN_1005cc010(thunk_FUN_1003a85e4,lVar14 + -0x40,local_190,0x65746f6d65525555,
                        0xe800000000000000,IVar9,pcVar12,0xd00000000000003c);
          _swift_release(lVar3);
          lVar19 = local_d0;
          _swift_bridgeObjectRelease(pcVar12);
        }
      }
      _objc_msgSend(IVar15,"unlock");
      (**(code **)(lVar19 + 8))(uVar16,local_d8);
      puVar21 = local_a8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar21);
}

