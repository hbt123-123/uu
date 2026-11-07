// rea decompile_all
// name: FUN_1006826a0
// address: 0x1006826a0
// body: available
// range: 0x1006826a0-0x100682dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100682db0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1006826a0(long param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  ID IVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  undefined1 uVar26;
  ulong uVar27;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined7 local_1a8;
  undefined1 uStack_1a1;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined1 uStack_19e;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  ID local_150 [3];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  ulong local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [32];
  ulong local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar23 = (ulong *)(param_1 + 0x40);
  uVar21 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar27 = 0xffffffffffffffff;
  if ((long)uVar21 < 0x40) {
    uVar27 = ~(-1L << (uVar21 & 0x3f));
  }
  uVar27 = uVar27 & *puVar23;
  lVar10 = param_1;
  _swift_bridgeObjectRetain();
  lVar25 = 0;
  while( true ) {
    for (; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
      uVar19 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar25 << 6;
      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar19 * 0x10);
      local_a0 = *puVar20;
      uVar14 = puVar20[1];
      uStack_98 = uVar14;
      FUN_10003e8bc(*(long *)(param_1 + 0x38) + uVar19 * 0x20,auStack_90);
      FUN_10007f314(&local_a0,&local_d0,&DAT_100ab9ff8,&DAT_10084dd80);
      uVar7 = uStack_c8;
      uVar19 = local_d0;
      FUN_10007f314(&local_a0,&local_100,&DAT_100ab9ff8,&DAT_10084dd80);
      uVar6 = local_f8;
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRelease(uVar6);
      FUN_10003e8bc(auStack_f0,auStack_120);
      puVar20 = &local_130;
      _swift_dynamicCast(puVar20,auStack_120,PTR___sypN_100995e88 + 8,
                         PTR___s10Foundation4DataVN_1009961e8,0);
      uVar6 = uStack_128;
      uVar14 = local_130;
      if ((int)puVar20 == 0) {
        FUN_10003e8bc(auStack_f0,local_150);
        local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
        puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
        FUN_10068dedc();
        local_1c0 = 0;
        uStack_1b8 = 0xe000000000000000;
        puStack_1c8 = puVar13;
        FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
        uVar14 = 0;
        __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
        puVar13 = &_OBJC_CLASS___NSNull;
        uStack_1b0 = uVar14;
        _objc_allocWithZone();
        IVar11 = _objc_msgSend((ID)puVar13,"init");
        local_1a8 = (undefined7)IVar11;
        uStack_1a1 = (undefined1)(IVar11 >> 0x38);
        uStack_1a0 = 0;
        uStack_19f = 5;
        uStack_19e = 6;
        FUN_10003e8bc(local_150,auStack_170);
        FUN_10067f3d8(auStack_170);
        FUN_10003f094(local_150);
        uVar26 = uStack_19e;
        uVar4 = uStack_19f;
        uVar5 = uStack_1a0;
        puStack_1f8 = puStack_1c8;
        local_200 = local_1d0;
        local_208 = local_1c0;
        uStack_218 = uStack_1b0;
        local_220 = uStack_1b8;
        local_228 = CONCAT17(uStack_1a1,local_1a8);
        FUN_10003f094(auStack_f0);
      }
      else {
        FUN_100008184(local_130,uStack_128);
        uVar12 = uVar14;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar14,uVar6);
        local_1d0 = (undefined *)0x0;
        IVar11 = NSJSONSerialization::JSONObjectWithData_options_error_
                           ((ID)&_OBJC_CLASS___NSJSONSerialization,
                            "JSONObjectWithData:options:error:",uVar12,0,&local_1d0);
        param_1 = lVar10;
        if (IVar11 == 0) {
          puVar13 = local_1d0;
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_1d0);
          _swift_willThrow(0);
          FUN_100006cdc(uVar14,uVar6);
          puVar15 = &_OBJC_CLASS___NSNull;
          _objc_allocWithZone();
          IVar11 = _objc_msgSend((ID)puVar15,"init");
          uVar12 = 0;
          FUN_10004003c(0,&DAT_100ab9e80,&PTR__OBJC_CLASS___NSNull_100a659f8);
          local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
          local_150[0] = IVar11;
          local_138 = uVar12;
          FUN_10068dedc();
          local_1c0 = 0;
          uStack_1b8 = 0xe000000000000000;
          puStack_1c8 = puVar15;
          FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
          uVar12 = 0;
          __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
          puVar15 = &_OBJC_CLASS___NSNull;
          uStack_1b0 = uVar12;
          _objc_allocWithZone();
          IVar11 = _objc_msgSend((ID)puVar15,"init");
          local_1a8 = (undefined7)IVar11;
          uStack_1a1 = (undefined1)(IVar11 >> 0x38);
          uStack_1a0 = 0;
          uStack_19f = 5;
          uStack_19e = 6;
          FUN_10003e8bc(local_150,auStack_170);
          FUN_10067f3d8(auStack_170);
          FUN_10003f094(local_150);
          _swift_errorRelease(puVar13);
          FUN_100006cdc(uVar14,uVar6);
          uVar26 = uStack_19e;
          uVar4 = uStack_19f;
          uVar5 = uStack_1a0;
          puStack_1f8 = puStack_1c8;
          local_200 = local_1d0;
          local_208 = local_1c0;
          uStack_218 = uStack_1b0;
          local_220 = uStack_1b8;
          local_228 = CONCAT17(uStack_1a1,local_1a8);
          FUN_10003f094(auStack_f0);
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(local_150,IVar11);
          _swift_unknownObjectRelease(IVar11);
          FUN_10003e8bc(local_150,auStack_170);
          local_1d0 = PTR___swiftEmptyArrayStorage_100995ea0;
          puVar13 = PTR___swiftEmptyArrayStorage_100995ea0;
          FUN_10068dedc();
          local_1c0 = 0;
          uStack_1b8 = 0xe000000000000000;
          puStack_1c8 = puVar13;
          FUN_10004003c(0,&DAT_100ab9e90,&PTR__OBJC_CLASS___NSNumber_100a65780);
          uVar12 = 0;
          __sSo8NSNumberC10FoundationE14integerLiteralABSi_tcfC();
          puVar13 = &_OBJC_CLASS___NSNull;
          uStack_1b0 = uVar12;
          _objc_allocWithZone();
          IVar11 = _objc_msgSend((ID)puVar13,"init");
          local_1a8 = (undefined7)IVar11;
          uStack_1a1 = (undefined1)(IVar11 >> 0x38);
          uStack_1a0 = 0;
          uStack_19f = 5;
          uStack_19e = 6;
          FUN_10003e8bc(auStack_170,auStack_190);
          FUN_10067f3d8(auStack_190);
          FUN_10003f094(auStack_170);
          uVar26 = uStack_19e;
          uVar4 = uStack_19f;
          uVar5 = uStack_1a0;
          puStack_1f8 = puStack_1c8;
          local_200 = local_1d0;
          local_208 = local_1c0;
          uStack_218 = uStack_1b0;
          local_220 = uStack_1b8;
          local_228 = CONCAT17(uStack_1a1,local_1a8);
          FUN_10003f094(local_150);
          FUN_100006cdc(uVar14,uVar6);
          FUN_10003f094(auStack_f0);
          FUN_100006cdc(uVar14,uVar6);
        }
      }
      FUN_10003f094(auStack_120);
      uVar16 = *param_2;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar24 = *param_2;
      *param_2 = 0x8000000000000000;
      uVar17 = uVar19;
      uVar18 = uVar7;
      local_100 = uVar24;
      FUN_1001a2c70();
      uVar22 = (ulong)~(uint)uVar18 & 1;
      lVar1 = *(long *)(uVar24 + 0x10) + uVar22;
      if (SCARRY8(*(long *)(uVar24 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100682dac);
        (*pcVar8)();
      }
      if (*(long *)(uVar24 + 0x18) < lVar1) {
        FUN_10068d598(lVar1,uVar16);
        uVar17 = uVar19;
        uVar16 = uVar7;
        FUN_1001a2c70();
        if (((uint)uVar18 & 1) != ((uint)uVar16 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100682dc4);
          (*pcVar8)();
        }
      }
      else if ((uVar16 & 1) == 0) {
        FUN_10068d134();
      }
      uVar16 = local_100;
      if ((uVar18 & 1) == 0) {
        lVar1 = local_100 + (uVar17 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar17 & 0x3f);
        puVar2 = (ulong *)(*(long *)(local_100 + 0x30) + uVar17 * 0x10);
        *puVar2 = uVar19;
        puVar2[1] = uVar7;
        puVar20 = (undefined8 *)(*(long *)(local_100 + 0x38) + uVar17 * 0x38);
        puVar20[1] = puStack_1f8;
        *puVar20 = local_200;
        puVar20[2] = local_208;
        puVar20[4] = uStack_218;
        puVar20[3] = local_220;
        puVar20[5] = local_228;
        *(undefined1 *)(puVar20 + 6) = uVar5;
        *(undefined1 *)((long)puVar20 + 0x31) = uVar4;
        *(undefined1 *)((long)puVar20 + 0x32) = uVar26;
        if (SCARRY8(*(long *)(local_100 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100682db0);
          (*pcVar8)();
        }
        *(long *)(local_100 + 0x10) = *(long *)(local_100 + 0x10) + 1;
      }
      else {
        puVar20 = (undefined8 *)(*(long *)(local_100 + 0x38) + uVar17 * 0x38);
        uStack_1b8 = puVar20[3];
        local_1c0 = puVar20[2];
        uStack_1b0 = puVar20[4];
        uVar3 = *(undefined4 *)((long)puVar20 + 0x2f);
        puStack_1c8 = (undefined *)puVar20[1];
        local_1d0 = (undefined *)*puVar20;
        uStack_1a0 = (undefined1)((uint)uVar3 >> 8);
        uStack_19f = (undefined1)((uint)uVar3 >> 0x10);
        uStack_19e = (undefined1)((uint)uVar3 >> 0x18);
        local_1a8 = (undefined7)puVar20[5];
        uStack_1a1 = (undefined1)((ulong)puVar20[5] >> 0x38);
        puVar20[1] = puStack_1f8;
        *puVar20 = local_200;
        puVar20[2] = local_208;
        puVar20[4] = uStack_218;
        puVar20[3] = local_220;
        puVar20[5] = local_228;
        *(undefined1 *)(puVar20 + 6) = uVar5;
        *(undefined1 *)((long)puVar20 + 0x31) = uVar4;
        *(undefined1 *)((long)puVar20 + 0x32) = uVar26;
        FUN_10068e548(&local_1d0);
        _swift_bridgeObjectRelease(uVar7);
      }
      *param_2 = uVar16;
      FUN_10003f094(auStack_c0);
      FUN_100040bb4(&local_a0,&DAT_100ab9ff8,&DAT_10084dd80);
    }
    bVar9 = SCARRY8(lVar25,1);
    lVar25 = lVar25 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100682da8);
      (*pcVar8)();
    }
    if ((long)(uVar21 + 0x3f >> 6) <= lVar25) break;
    uVar27 = puVar23[lVar25];
  }
  _swift_release(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

