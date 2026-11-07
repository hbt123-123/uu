// rea decompile_all
// name: FUN_100051288
// address: 0x100051288
// body: available
// range: 0x100051288-0x10005194f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005192c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100051288(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined4 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ID self;
  ushort uVar20;
  undefined1 auStack_160 [16];
  uint local_150;
  undefined4 *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char *local_120;
  char *local_118;
  undefined *local_110;
  undefined4 local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [24];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(unaff_x20 + 0x70,auStack_98,0,0);
  lVar12 = *(long *)(unaff_x20 + 0x70);
  lVar17 = lVar12;
  _swift_bridgeObjectRetain();
  FUN_10004b550();
  local_110 = (undefined *)0x0;
  _swift_bridgeObjectRelease(lVar12);
  lVar12 = lVar17;
  FUN_100074ee0(lVar17,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0,&DAT_100a761e0,
                &DAT_10080a978);
  _swift_bridgeObjectRelease();
  FUN_10004c86c();
  uVar18 = *(ulong *)(lVar17 + 0x10);
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease(lVar12);
    _swift_bridgeObjectRelease(lVar17);
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar19 = 0;
    puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      if (*(ulong *)(lVar17 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100051924);
        (*pcVar7)();
      }
      iVar2 = *(int *)(lVar17 + 0x20 + uVar19 * 4);
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar8 = *(ulong *)(lVar12 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar8,iVar2,4);
        uVar11 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
        uVar8 = uVar8 & (uVar11 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar12 + 0x38 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) & 1) !=
            0) {
          do {
            if (*(int *)(*(long *)(lVar12 + 0x30) + uVar8 * 4) == iVar2) goto LAB_10005136c;
            uVar8 = uVar8 + 1 & ~uVar11;
          } while ((*(ulong *)(lVar12 + 0x38 + (uVar8 >> 3 & 0xffffffffffffff8)) >> (uVar8 & 0x3f) &
                   1) != 0);
        }
      }
      puVar10 = puVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      local_100 = SUB84(puVar13,0);
      iStack_fc = (int)((ulong)puVar13 >> 0x20);
      if (((ulong)puVar10 & 1) == 0) {
        FUN_10006fbb8(0,*(long *)(puVar13 + 0x10) + 1,1);
        puVar13 = (undefined *)CONCAT44(iStack_fc,local_100);
      }
      uVar8 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar8) {
        FUN_10006fbb8(1 < *(ulong *)(puVar13 + 0x18),uVar8 + 1,1);
        puVar13 = (undefined *)CONCAT44(iStack_fc,local_100);
      }
      *(ulong *)(puVar13 + 0x10) = uVar8 + 1;
      *(int *)(puVar13 + uVar8 * 4 + 0x20) = iVar2;
LAB_10005136c:
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar18);
    _swift_bridgeObjectRelease(lVar12);
    _swift_bridgeObjectRelease(lVar17);
  }
  lVar17 = *(long *)(puVar13 + 0x10);
  if (lVar17 == 0) {
    puVar10 = *(undefined **)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar9 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    puVar16 = local_110;
    puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar10 == (undefined *)0x0) goto LAB_10005154c;
  }
  else {
    local_100 = SUB84(PTR___swiftEmptyArrayStorage_100995ea0,0);
    iStack_fc = (int)((ulong)PTR___swiftEmptyArrayStorage_100995ea0 >> 0x20);
    FUN_10006fbe4(0,lVar17,0);
    puVar14 = (undefined *)CONCAT44(iStack_fc,local_100);
    puVar15 = (undefined4 *)(puVar13 + 0x20);
    do {
      uVar1 = *puVar15;
      _CGDisplayBounds(uVar1);
      local_100 = SUB84(puVar14,0);
      iStack_fc = (int)((ulong)puVar14 >> 0x20);
      uVar18 = *(ulong *)(puVar14 + 0x10);
      puVar10 = (undefined *)(uVar18 + 1);
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
        FUN_10006fbe4(1 < *(ulong *)(puVar14 + 0x18),puVar10,1);
        puVar14 = (undefined *)CONCAT44(iStack_fc,local_100);
      }
      *(undefined **)(puVar14 + 0x10) = puVar10;
      *(undefined4 *)(puVar14 + uVar18 * 0x18 + 0x20) = uVar1;
      *(undefined8 *)(puVar14 + uVar18 * 0x18 + 0x28) = param_1;
      *(undefined8 *)(puVar14 + uVar18 * 0x18 + 0x30) = param_2;
      lVar17 = lVar17 + -1;
      puVar15 = puVar15 + 1;
    } while (lVar17 != 0);
  }
  puVar16 = local_110;
  FUN_100004bb4(&DAT_100a761a8,&DAT_10080c1e0);
  __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
  puVar9 = puVar10;
LAB_10005154c:
  local_100 = SUB84(puVar9,0);
  iStack_fc = (int)((ulong)puVar9 >> 0x20);
  _swift_bridgeObjectRetain(puVar14);
  FUN_100073284();
  if (puVar16 == (undefined *)0x0) {
    local_138 = puVar16;
    _swift_bridgeObjectRelease(puVar14);
    local_140 = CONCAT44(iStack_fc,local_100);
    uVar18 = *(ulong *)(puVar13 + 0x10);
    if (uVar18 == 0) {
      local_110 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar19 = 0;
      local_118 = "captureFailedRetryCount";
      local_110 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_120 = "ace- remove begin screenIDs:";
      do {
        if (*(ulong *)(puVar13 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100051928);
          (*pcVar7)();
        }
        uVar3 = *(uint *)(puVar13 + uVar19 * 4 + 0x20);
        self = (ID)uVar3;
        uVar8 = self;
        _CGDisplayCreateUUIDFromDisplayID();
        if (uVar8 != 0) {
          lVar17 = 0;
          _CFUUIDCreateString();
          if (lVar17 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10005192c);
            (*pcVar7)();
          }
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          FUN_10000290c();
          if (self == 0) {
            _swift_bridgeObjectRelease(uVar8);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            local_150 = uVar3;
            FUN_1003fb4ec(FUN_10003e8f8,auStack_160,0xd0000000000000a9,
                          (ulong)local_118 | 0x8000000000000000,0xd000000000000017,
                          (ulong)local_120 | 0x8000000000000000,0x78,0);
          }
          else {
            uStack_e8 = 0;
            local_f0 = 0;
            uStack_ec = 0;
            local_d8 = 0;
            uStack_e0 = 0;
            iStack_f8 = 0;
            iStack_f4 = 0;
            local_100 = 0;
            iStack_fc = 0;
            _objc_msgSend(self,"getValue:",&local_100);
            uVar5 = uStack_e0;
            uVar4 = uStack_e8;
            uVar1 = local_100;
            uVar6 = (undefined1)local_d8;
            local_c8 = local_100;
            local_b0 = uStack_e8;
            uStack_a8 = uStack_e0;
            local_a0 = (undefined1)local_d8;
            uStack_bc = CONCAT44(local_f0,iStack_f4);
            local_c4 = CONCAT44(iStack_f8,iStack_fc);
            uVar20 = NEON_umaxv(CONCAT26(-(ushort)(local_f0 < 1),
                                         CONCAT24(-(ushort)(iStack_f4 < 1),
                                                  CONCAT22(-(ushort)(iStack_f8 < 1),
                                                           -(ushort)(iStack_fc < 1)))),2);
            if ((uVar20 & 1) == 0) {
              puVar10 = local_110;
              local_130 = local_c4;
              uStack_128 = uStack_bc;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar10 & 1) == 0) {
                puVar10 = (undefined *)0x0;
                FUN_1000345ac(0,*(long *)(local_110 + 0x10) + 1,1);
                local_110 = puVar10;
              }
              uVar11 = *(ulong *)(local_110 + 0x10);
              if (*(ulong *)(local_110 + 0x18) >> 1 <= uVar11) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_110 + 0x18));
                FUN_1000345ac(puVar10,uVar11 + 1,1,local_110);
                local_110 = puVar10;
              }
              *(ulong *)(local_110 + 0x10) = uVar11 + 1;
              *(long *)(local_110 + uVar11 * 0x40 + 0x20) = lVar17;
              *(ulong *)(local_110 + uVar11 * 0x40 + 0x28) = uVar8;
              *(undefined4 *)(local_110 + uVar11 * 0x40 + 0x30) = uVar1;
              *(int *)(local_110 + uVar11 * 0x40 + 0x34) = (int)local_130;
              *(int *)(local_110 + uVar11 * 0x40 + 0x38) = (int)((ulong)local_130 >> 0x20);
              *(int *)(local_110 + uVar11 * 0x40 + 0x3c) = (int)uStack_128;
              *(int *)(local_110 + uVar11 * 0x40 + 0x40) = (int)((ulong)uStack_128 >> 0x20);
              *(undefined8 *)(local_110 + uVar11 * 0x40 + 0x48) = uVar4;
              *(undefined8 *)(local_110 + uVar11 * 0x40 + 0x50) = uVar5;
              local_110[uVar11 * 0x40 + 0x58] = uVar6;
            }
            else {
              _swift_bridgeObjectRelease(uVar8);
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)();
              local_148 = &local_c8;
              local_150 = uVar3;
              FUN_1003fb4ec(FUN_10003e900,auStack_160,0xd0000000000000a9,
                            (ulong)local_118 | 0x8000000000000000,0xd000000000000017,
                            (ulong)local_120 | 0x8000000000000000,0x7d,0);
            }
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar18 != uVar19);
    }
    _swift_release(puVar13);
    puVar13 = local_110;
    puVar16 = local_138;
    puVar14 = *(undefined **)(local_110 + 0x10);
    puVar10 = PTR___swiftEmptyDictionarySingleton_100995ea8;
    if (puVar14 != (undefined *)0x0) {
      FUN_100004bb4(&DAT_100a761f0,&DAT_10080a988);
      __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
      puVar10 = puVar14;
    }
    local_100 = SUB84(puVar10,0);
    iStack_fc = (int)((ulong)puVar10 >> 0x20);
    _swift_bridgeObjectRetain(puVar13);
    FUN_100072e54();
    if (puVar16 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar13);
      if (*(long *)PTR____stack_chk_guard_1009954a0 != local_80) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return local_140;
    }
  }
  _swift_unexpectedError(puVar16,"Swift/arm64e-apple-macos.swiftinterface",0x27,1,0x202e);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100051950);
  (*pcVar7)();
}

