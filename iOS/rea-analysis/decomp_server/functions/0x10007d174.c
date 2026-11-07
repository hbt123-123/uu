// rea decompile_all
// name: FUN_10007d174
// address: 0x10007d174
// body: available
// range: 0x10007d174-0x10007df4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10007d2f8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007d174(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined *param_6,ulong param_7,ulong param_8,
                  undefined *param_9,long param_10,long param_11,code *param_12,undefined8 param_13)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  ID IVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  long extraout_x8;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *puVar23;
  long lVar24;
  code *pcVar25;
  undefined1 *puVar26;
  ulong auStack_240 [10];
  undefined auStack_1f0 [8];
  undefined *local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_100;
  undefined4 local_f6;
  undefined3 uStack_f2;
  undefined4 uStack_ef;
  undefined3 uStack_eb;
  undefined1 auStack_e8 [24];
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_198 = (undefined *)CONCAT44(local_198._4_4_,param_5);
  puVar8 = (undefined *)0x0;
  local_1a8 = param_3;
  local_1a0 = param_4;
  __s10Foundation4DateVMa();
  local_178 = *(undefined **)(puVar8 + -8);
  local_170 = puVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_178 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_190 = auStack_1f0 + lVar3;
  puVar8 = &DAT_100998968;
  _swift_allocObject(&DAT_100998968,0x28,7);
  *(long *)(puVar8 + 0x10) = param_11;
  *(code **)(puVar8 + 0x18) = param_12;
  *(undefined8 *)(puVar8 + 0x20) = param_13;
  local_168 = param_9;
  if (*(undefined **)(param_10 + 0xb8) != param_9) {
    uVar18 = 0x2713;
LAB_10007d278:
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar18);
    puStack_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (*(char *)(param_11 + 0x10) == '\x01') {
      _swift_retain(param_11);
      _swift_retain(param_13);
    }
    else {
      *(undefined1 *)(param_11 + 0x10) = 1;
      pcVar25 = *(code **)(param_11 + 0x18);
      _swift_retain(param_11);
      _swift_retain(param_13);
      (*pcVar25)(&local_d0);
    }
    (*param_12)();
    _swift_release(puVar8);
    return;
  }
  uVar11 = (ulong)param_6 & 0xffffffffffff;
  if ((param_7 & 0x2000000000000000) != 0) {
    uVar11 = param_7 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    uVar18 = 0x2719;
    goto LAB_10007d278;
  }
  if ((param_8 & 1) != 0) {
    uVar18 = 0x2718;
    goto LAB_10007d278;
  }
  local_1b0 = param_10;
  _swift_retain(param_11);
  _swift_retain(param_13);
  IVar9 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  puStack_c8 = (undefined *)0x0;
  uStack_c0 = 0;
  local_d0 = (undefined *)0xb;
  IVar9 = NSProcessInfo::isOperatingSystemAtLeastVersion_
                    (IVar9,"isOperatingSystemAtLeastVersion:",&local_d0);
  iVar7 = 0;
  if (((int)IVar9 == 0) || (thunk_FUN_10000286c(), iVar7 == 0)) {
    uVar18 = 0x2712;
  }
  else {
    if ((undefined *)0xfffffffffffffffc < param_2 + -4) {
      local_1d8 = param_13;
      local_1d0 = param_12;
      local_1e8 = param_6;
      local_1e0 = param_7;
      local_1c8 = puVar8;
      FUN_1000498c8(param_6,param_7);
      lVar22 = *(long *)(param_6 + 0x10);
      if (lVar22 == 0) {
        _swift_bridgeObjectRelease();
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        local_d0 = PTR___swiftEmptyArrayStorage_100995ea0;
        local_1b8 = param_6;
        FUN_10006fc00(0,lVar22,0);
        lVar24 = 0x20;
        puVar10 = local_1b8;
        uVar11 = *(ulong *)(local_d0 + 0x10);
        do {
          uVar21 = *(undefined8 *)(puVar10 + lVar24);
          uVar20 = uVar11 + 1;
          if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar11) {
            FUN_10006fc00(1 < *(ulong *)(local_d0 + 0x18),uVar20,1);
            puVar10 = local_1b8;
          }
          puVar8 = local_d0;
          *(ulong *)(local_d0 + 0x10) = uVar20;
          *(undefined8 *)(local_d0 + uVar11 * 8 + 0x20) = uVar21;
          lVar24 = lVar24 + 0x58;
          lVar22 = lVar22 + -1;
          uVar11 = uVar20;
        } while (lVar22 != 0);
        _swift_bridgeObjectRelease();
      }
      puVar10 = puVar8;
      FUN_100074f60();
      _swift_bridgeObjectRelease(puVar8);
      lVar22 = local_1b0;
      puVar15 = auStack_e8;
      _swift_beginAccess(local_1b0 + 0x70,puVar15,0,0);
      local_d0 = puVar10;
      _swift_bridgeObjectRetain(*(undefined8 *)(lVar22 + 0x70));
      FUN_10005ffa0();
      puVar10 = local_d0;
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar23 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar26 = (undefined1 *)0x1;
      do {
        if (*(long *)(puVar10 + 0x10) != 0) {
          uVar11 = *(ulong *)(puVar10 + 0x28);
          puVar15 = puVar26;
          __ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ();
          uVar20 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
          uVar11 = uVar11 & (uVar20 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar10 + (uVar11 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar11 & 0x3f) & 1
              ) != 0) {
            do {
              if (*(undefined1 **)(*(long *)(puVar10 + 0x30) + uVar11 * 8) == puVar26)
              goto LAB_10007d558;
              uVar11 = uVar11 + 1 & ~uVar20;
            } while ((*(ulong *)(puVar10 + (uVar11 >> 3 & 0xffffffffffffff8) + 0x38) >>
                      (uVar11 & 0x3f) & 1) != 0);
          }
        }
        puVar12 = puVar23;
        _swift_isUniquelyReferenced_nonNull_native();
        local_d0 = puVar23;
        if (((ulong)puVar12 & 1) == 0) {
          puVar15 = (undefined1 *)(*(long *)(puVar23 + 0x10) + 1);
          FUN_10006fc00(0,puVar15,1);
        }
        uVar11 = *(ulong *)(local_d0 + 0x10);
        puVar1 = (undefined1 *)(uVar11 + 1);
        if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar11) {
          puVar15 = puVar1;
          FUN_10006fc00(1 < *(ulong *)(local_d0 + 0x18),puVar1,1);
        }
        *(undefined1 **)(local_d0 + 0x10) = puVar1;
        *(undefined1 **)(local_d0 + uVar11 * 8 + 0x20) = puVar26;
        puVar23 = local_d0;
LAB_10007d558:
        bVar6 = puVar26 != (undefined1 *)0x3;
        puVar26 = puVar26 + 1;
      } while (bVar6);
      _swift_bridgeObjectRelease();
      puVar12 = local_1c8;
      pcVar25 = local_1d0;
      if ((param_2 != (undefined *)0x0) && (*(undefined **)(puVar23 + 0x10) < param_2)) {
LAB_10007d68c:
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,0xffffffff);
        puStack_c8 = puVar8;
        if ((*(byte *)(param_11 + 0x10) & 1) == 0) {
          *(undefined1 *)(param_11 + 0x10) = 1;
          (**(code **)(param_11 + 0x18))(&local_d0);
        }
        (*pcVar25)();
        _swift_release(puVar12);
        _swift_unknownObjectRelease(puVar23);
        return;
      }
      lVar22 = *(long *)(*(long *)(local_1b0 + 0x70) + 0x10);
      if (SCARRY8(lVar22,(long)param_2)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x10007df48);
        (*pcVar25)();
      }
      if (3 < (long)(param_2 + lVar22)) goto LAB_10007d68c;
      FUN_100075194();
      lVar22 = *(long *)(puVar10 + 0x10);
      _swift_bridgeObjectRelease();
      if (SCARRY8(lVar22,(long)param_2)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x10007df4c);
        (*pcVar25)();
      }
      if (5 < (long)(param_2 + lVar22)) goto LAB_10007d68c;
      FUN_100075588();
      puVar13 = puVar10;
      FUN_1000753bc();
      FUN_10004518c();
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_1c0 = puVar15;
      local_1b8 = puVar13;
      if (((ulong)local_198 & 1) == 0) {
        uVar11 = 1;
        uVar21 = local_1a8;
        uVar16 = local_1a0;
        FUN_1000457e0();
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
        if ((uVar11 & 1) == 0) {
          puVar8 = &DAT_100a75988;
          FUN_100004bb4(&DAT_100a75988,&DAT_10080a9f0);
          _swift_allocObject();
          param_1 = 1;
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          *(undefined8 *)(puVar8 + 0x20) = uVar21;
          *(undefined8 *)(puVar8 + 0x28) = uVar16;
        }
      }
      puVar13 = local_190;
      __s10Foundation4DateVACycfC(local_190);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      (**(code **)(local_178 + 8))(puVar13,local_170);
      local_160 = puVar12;
      FUN_10006fb9c(0,param_2,0);
      if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x10007df44);
        (*pcVar25)();
      }
      local_178 = (undefined *)(CONCAT44(local_178._4_4_,(int)puVar10) & 0xffffffff00000001);
      lVar22 = 0x20;
      uStack_188 = 0;
      local_190 = (undefined *)0x3c;
      local_198 = puVar8;
      while( true ) {
        puVar10 = local_160;
        local_170 = param_2 + -1;
        uVar21 = *(undefined8 *)(puVar23 + lVar22);
        local_d0 = (undefined *)0x8ba8e79cbfe85555;
        puStack_c8 = (undefined *)0xa900000000000020;
        puVar14 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
        local_100 = uVar21;
        __ss23CustomStringConvertibleP11descriptionSSvgTj(PTR___sSiN_100995968);
        puVar17 = puVar14;
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease();
        puVar13 = puStack_c8;
        puVar12 = local_d0;
        uVar11 = *(ulong *)(puVar10 + 0x10);
        puVar8 = (undefined *)(uVar11 + 1);
        local_160 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          puVar17 = puVar8;
          FUN_10006fb9c(puVar14,puVar8,1);
        }
        puVar10 = local_160;
        lVar24 = local_1b0;
        *(undefined **)(local_160 + 0x10) = puVar8;
        puVar2 = (undefined8 *)(local_160 + 0x20);
        puVar19 = puVar2 + uVar11 * 0xb;
        *puVar19 = uVar21;
        puVar19[1] = puVar12;
        puVar19[2] = puVar13;
        puVar19[3] = local_1b8;
        puVar19[4] = local_1c0;
        *(char *)(puVar19 + 5) = (char)local_178;
        *(undefined4 *)((long)puVar19 + 0x29) = uStack_ef;
        *(uint *)((long)puVar19 + 0x2c) = CONCAT31(uStack_eb,uStack_ef._3_1_);
        puVar19[7] = uStack_188;
        puVar19[6] = local_190;
        *(undefined1 *)(puVar19 + 8) = 1;
        *(uint *)((long)puVar19 + 0x44) = CONCAT31(uStack_f2,local_f6._3_1_);
        *(undefined4 *)((long)puVar19 + 0x41) = local_f6;
        puVar19[9] = param_1;
        puVar19[10] = param_1;
        if (local_170 == (undefined *)0x0) break;
        lVar22 = lVar22 + 8;
        param_2 = local_170;
      }
      FUN_100051fd8();
      puVar8 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      _swift_weakInit(puVar8 + 0x10,lVar24);
      puVar12 = local_1c8;
      uVar11 = local_1e0;
      if (*(undefined **)(lVar24 + 0xb8) != local_168) {
        _swift_retain_n(puVar8,2);
        _swift_retain_n(puVar12,2);
        _swift_bridgeObjectRetain_n(uVar11,2);
        _swift_bridgeObjectRetain(puVar14);
        _swift_bridgeObjectRetain(puVar17);
        _swift_bridgeObjectRelease(puVar10);
        _swift_bridgeObjectRelease(local_198);
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_1000533fc(PTR___swiftEmptyArrayStorage_100995ea0);
        _swift_beginAccess(puVar8 + 0x10,&local_d0,0,0);
        puVar10 = puVar8 + 0x10;
        _swift_weakLoadStrong();
        if (puVar10 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar23);
          _swift_bridgeObjectRelease_n(puVar17,2);
          _swift_bridgeObjectRelease_n(puVar14,2);
          _swift_bridgeObjectRelease_n(uVar11,2);
        }
        else {
          FUN_10005283c();
          local_160 = (undefined *)CONCAT44(local_160._4_4_,0x2713);
          local_158 = puVar13;
          if ((*(byte *)(param_11 + 0x10) & 1) == 0) {
            *(undefined1 *)(param_11 + 0x10) = 1;
            (**(code **)(param_11 + 0x18))(&local_160);
          }
          (*local_1d0)();
          _swift_release(puVar10);
          _swift_unknownObjectRelease(puVar23);
          _swift_bridgeObjectRelease_n(puVar17,2);
          _swift_bridgeObjectRelease_n(puVar14,2);
          _swift_bridgeObjectRelease_n(local_1e0,2);
          puVar12 = local_1c8;
        }
        _swift_release_n(puVar12,3);
LAB_10007def0:
        _swift_release_n(puVar8,3);
        return;
      }
      local_178 = puVar8;
      local_170 = puVar17;
      if (*(long *)(puVar10 + 0x10) == 0) {
        _swift_retain_n(puVar8,2);
        _swift_retain_n(puVar12,2);
        uVar11 = local_1e0;
        _swift_bridgeObjectRetain_n(local_1e0,2);
        local_168 = puVar14;
        _swift_bridgeObjectRetain_n(puVar14,2);
        puVar13 = local_170;
        _swift_bridgeObjectRetain_n(local_170,2);
        _swift_bridgeObjectRelease(puVar10);
        _swift_bridgeObjectRelease(local_198);
        _swift_beginAccess(puVar8 + 0x10,&local_d0,0,0);
        puVar10 = puVar8 + 0x10;
        _swift_weakLoadStrong();
        if (puVar10 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar23);
          _swift_bridgeObjectRelease_n(puVar13,3);
          _swift_bridgeObjectRelease_n(local_168,3);
          _swift_bridgeObjectRelease_n(uVar11,2);
          _swift_release_n(puVar12,3);
        }
        else {
          pcVar25 = *(code **)(puVar10 + 0x78);
          if (pcVar25 != (code *)0x0) {
            uVar21 = *(undefined8 *)(puVar10 + 0x80);
            _swift_retain(uVar21);
            (*pcVar25)(local_1e8,uVar11,4);
            FUN_10007ed2c(pcVar25,uVar21);
          }
          puVar8 = local_170;
          FUN_100075dc8(local_170);
          FUN_10005d508();
          FUN_10005dad4(0x657461657263,0xe600000000000000,local_168,puVar8,0);
          pcVar25 = *(code **)(puVar10 + 0x78);
          if (pcVar25 != (code *)0x0) {
            uVar21 = *(undefined8 *)(puVar10 + 0x80);
            _swift_retain(uVar21);
            (*pcVar25)(0x657461657263,0xe600000000000000,5);
            FUN_10007ed2c(pcVar25,uVar21);
          }
          _swift_bridgeObjectRelease(local_170);
          _swift_bridgeObjectRelease(local_168);
          puVar8 = local_1c8;
          local_158 = PTR___swiftEmptyArrayStorage_100995ea0;
          pcVar25 = *(code **)(puVar10 + 0x78);
          if (pcVar25 != (code *)0x0) {
            uVar21 = *(undefined8 *)(puVar10 + 0x80);
            _swift_retain(uVar21);
            (*pcVar25)(PTR___swiftEmptyArrayStorage_100995ea0,0,0);
            FUN_10007ed2c(pcVar25,uVar21);
          }
          pcVar25 = local_1d0;
          uVar11 = local_1e0;
          local_160 = (undefined *)((ulong)local_160 & 0xffffffff00000000);
          if ((*(byte *)(param_11 + 0x10) & 1) == 0) {
            *(undefined1 *)(param_11 + 0x10) = 1;
            (**(code **)(param_11 + 0x18))(&local_160);
          }
          (*pcVar25)();
          _swift_release(puVar10);
          _swift_unknownObjectRelease(puVar23);
          _swift_bridgeObjectRelease_n(local_170,2);
          _swift_bridgeObjectRelease_n(local_168,2);
          _swift_bridgeObjectRelease_n(uVar11,2);
          _swift_release_n(puVar8,3);
          puVar8 = local_178;
        }
        goto LAB_10007def0;
      }
      uStack_a8 = *(undefined8 *)(puVar10 + 0x48);
      local_b0 = *(undefined8 *)(puVar10 + 0x40);
      uStack_98 = *(undefined8 *)(puVar10 + 0x58);
      uStack_a0 = *(undefined8 *)(puVar10 + 0x50);
      uStack_88 = *(undefined8 *)(puVar10 + 0x68);
      local_90 = *(undefined8 *)(puVar10 + 0x60);
      local_80 = *(undefined8 *)(puVar10 + 0x70);
      puStack_c8 = *(undefined **)(puVar10 + 0x28);
      local_d0 = (undefined *)*puVar2;
      uStack_b8 = *(undefined8 *)(puVar10 + 0x38);
      uStack_c0 = *(undefined8 *)(puVar10 + 0x30);
      puVar13 = &DAT_1009985d0;
      _swift_allocObject(&DAT_1009985d0,0x18,7);
      lVar22 = local_1b0;
      local_190 = puVar10;
      _swift_weakInit(puVar13 + 0x10,local_1b0);
      puVar8 = local_178;
      _swift_retain_n(local_178,2);
      _swift_retain_n(puVar12,2);
      uVar11 = local_1e0;
      _swift_bridgeObjectRetain_n(local_1e0,2);
      _swift_retain_n(puVar13,2);
      puVar17 = local_198;
      _swift_bridgeObjectRetain_n(local_198,2);
      _swift_bridgeObjectRetain(puVar14);
      puVar5 = local_170;
      _swift_bridgeObjectRetain(local_170);
      puVar4 = local_190;
      _swift_bridgeObjectRetain(local_190);
      FUN_10004985c(&local_d0,&local_160);
      *(undefined **)((long)auStack_240 + lVar3 + 0x38) = puVar14;
      *(undefined **)((long)auStack_240 + lVar3 + 0x40) = puVar5;
      *(ulong *)((long)auStack_240 + lVar3 + 0x30) = uVar11;
      puVar10 = local_1e8;
      *(undefined **)((long)auStack_240 + lVar3 + 0x20) = puVar12;
      *(undefined **)((long)auStack_240 + lVar3 + 0x28) = puVar10;
      *(undefined **)((long)auStack_240 + lVar3 + 0x10) = puVar8;
      *(code **)((long)auStack_240 + lVar3 + 0x18) = thunk_FUN_10007eeec;
      puVar10 = local_168;
      *(undefined **)((long)auStack_240 + lVar3) = puVar17;
      *(undefined **)((long)auStack_240 + lVar3 + 8) = puVar10;
      FUN_10007a2cc(&local_d0,puVar17,puVar10,lVar22,puVar13,puVar4,0,
                    PTR___swiftEmptyArrayStorage_100995ea0);
      _swift_bridgeObjectRelease_n(puVar5,2);
      _swift_bridgeObjectRelease_n(puVar14,2);
      _swift_bridgeObjectRelease_n(uVar11,2);
      _swift_release_n(puVar12,2);
      _swift_release_n(puVar8,2);
      _swift_bridgeObjectRelease(puVar4);
      _swift_release_n(puVar13,2);
      _swift_bridgeObjectRelease_n(puVar17,2);
      _swift_unknownObjectRelease(puVar23);
      FUN_10007ef48(&local_d0);
      _swift_release(puVar12);
      goto LAB_10007d3c4;
    }
    uVar18 = 0xffffffff;
  }
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar18);
  puStack_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((*(byte *)(param_11 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_11 + 0x10) = 1;
    (**(code **)(param_11 + 0x18))(&local_d0);
  }
  (*param_12)();
LAB_10007d3c4:
  _swift_release(puVar8);
  return;
}

