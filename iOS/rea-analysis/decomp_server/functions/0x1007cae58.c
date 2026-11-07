// rea decompile_all
// name: FUN_1007cae58
// address: 0x1007cae58
// body: available
// range: 0x1007cae58-0x1007cbb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1007cae58(uint param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ID unaff_x20;
  ID IVar19;
  long lVar20;
  ID IVar21;
  uint uVar22;
  undefined1 auStack_130 [8];
  undefined *local_128;
  code *local_120;
  ID local_118;
  undefined1 *local_110;
  long local_108;
  undefined8 uStack_100;
  ulong local_f8 [4];
  undefined *local_d8 [4];
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  
  lVar4 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  local_120 = *(code **)(lVar4 + -8);
  uVar18 = *(long *)((long)local_120 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110 = auStack_130 + -uVar18;
  lVar20 = (long)local_110 - uVar18;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar22 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cafac:
    FUN_1000c776c(&local_a0);
LAB_1007cafb4:
    param_1 = 0;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1007caf84;
LAB_1007cafc0:
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x6d6153726f727265;
    uVar18 = 0;
    FUN_1001a2c70(0x6d6153726f727265);
    if ((uVar18 & 1) == 0) {
      uVar22 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb090;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cb098;
    _objc_msgSend((ID)local_d8[0],"floatValue");
    uVar3 = uVar22;
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_1007cb0a4;
LAB_1007cb084:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb170:
    FUN_1000c776c(&local_a0);
LAB_1007cb178:
    IVar8 = 1;
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_1007cb184;
LAB_1007cb164:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb254:
    FUN_1000c776c(&local_a0);
LAB_1007cb25c:
    IVar21 = 1;
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_1007cb268;
LAB_1007cb248:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb32c:
    FUN_1000c776c(&local_a0);
LAB_1007cb334:
    IVar9 = 0;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1007cb320;
LAB_1007cb340:
    _swift_bridgeObjectRetain(param_2);
    lVar5 = -0x2fffffffffffffe9;
    uVar18 = 0;
    FUN_1001a2c70(0xd000000000000017);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb3f4;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cb3fc;
    IVar19 = _objc_msgSend((ID)local_d8[0],"boolValue");
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar18 = 0;
    lVar5 = -0x2fffffffffffffef;
    FUN_1001a2c70(0xd000000000000011);
    if ((uVar18 & 1) == 0) {
      uVar22 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
      _swift_bridgeObjectRelease(param_2);
      goto LAB_1007cafac;
    }
    FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_2);
    uVar22 = param_1;
    if (local_88 == 0) goto LAB_1007cafac;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    uVar22 = param_1;
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cafb4;
    _objc_msgSend((ID)local_d8[0],"floatValue");
    uVar22 = param_1;
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_1007cafc0;
LAB_1007caf84:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb090:
    FUN_1000c776c(&local_a0);
LAB_1007cb098:
    uVar22 = 0;
    uVar3 = 0;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1007cb084;
LAB_1007cb0a4:
    uVar22 = uVar3;
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x546c6c416b73616d;
    uVar18 = 0xeb00000000747865;
    FUN_1001a2c70(0x546c6c416b73616d);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb170;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cb178;
    IVar8 = _objc_msgSend((ID)local_d8[0],"boolValue");
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1007cb164;
LAB_1007cb184:
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x496c6c416b73616d;
    uVar18 = 0xed0000736567616d;
    FUN_1001a2c70(0x496c6c416b73616d);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb254;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cb25c;
    IVar21 = _objc_msgSend((ID)local_d8[0],"boolValue");
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_1007cb248;
LAB_1007cb268:
    _swift_bridgeObjectRetain(param_2);
    lVar5 = -0x2fffffffffffffe2;
    uVar18 = 0;
    FUN_1001a2c70(0xd00000000000001e);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb32c;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_1007cb334;
    IVar9 = _objc_msgSend((ID)local_d8[0],"boolValue");
    if (*(long *)(param_2 + 0x10) != 0) goto LAB_1007cb340;
LAB_1007cb320:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb3f4:
    FUN_1000c776c(&local_a0);
LAB_1007cb3fc:
    IVar19 = 0;
  }
  IVar8 = _objc_msgSend(unaff_x20,
                        "initWithSessionSampleRate:onErrorSampleRate:maskAllText:maskAllImages:enableExperimentalViewRenderer:enableFastViewRendering:"
                        ,(ulong)param_1,uVar22,IVar8,IVar21,IVar9,IVar19);
  if (*(long *)(param_2 + 0x10) == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb4ec:
    FUN_1000c776c(&local_a0);
LAB_1007cb4f4:
    FUN_1007ba60c(0,&DAT_100abd150,&PTR__OBJC_CLASS___NSArray_100a657b0);
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
    __sSo7NSArrayC10FoundationE12arrayLiteralABypd_tcfC();
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar18 = 0;
    lVar5 = -0x2fffffffffffffef;
    FUN_1001a2c70(0xd000000000000011);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb4ec;
    uVar6 = 0;
    FUN_1007ba60c(0,&DAT_100abd150,&PTR__OBJC_CLASS___NSArray_100a657b0);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar6,6);
    puVar10 = local_d8[0];
    if ((int)ppuVar7 == 0) goto LAB_1007cb4f4;
  }
  local_118 = IVar8;
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(lVar20);
  uVar6 = 0;
  local_128 = puVar10;
  FUN_1007cc210(0);
  __sSt4next7ElementQzSgyFTj(&local_a0,lVar4,uVar6);
  puVar10 = PTR___sSSN_1009957f8;
  puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (local_88 != 0) {
    puVar1 = PTR___sypN_100995e88 + 8;
    do {
      FUN_10007f3d4(&local_a0,local_d8);
      FUN_10003e8bc(local_d8,local_f8);
      plVar11 = &local_b8;
      _swift_dynamicCast(plVar11,local_f8,puVar1,puVar10,6);
      lVar5 = local_b8;
      uVar13 = uStack_b0;
      if ((int)plVar11 == 0) {
        lVar5 = 0;
        uVar13 = 0xe000000000000000;
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      _NSClassFromString();
      if (lVar5 == 0) {
        FUN_10003f094(local_d8);
      }
      else {
        FUN_10003f094(local_d8);
        puVar12 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = puVar16;
        if (((ulong)puVar12 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_1007d1ee4(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar18 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007d1ee4(puVar16,uVar18 + 1,1,puVar15);
        }
        _swift_getObjCClassMetadata();
        *(ulong *)(puVar16 + 0x10) = uVar18 + 1;
        *(long *)(puVar16 + uVar18 * 8 + 0x20) = lVar5;
      }
      __sSt4next7ElementQzSgyFTj(&local_a0,lVar4,uVar6);
    } while (local_88 != 0);
  }
  local_120 = *(code **)((long)local_120 + 8);
  (*local_120)(lVar20,lVar4);
  puVar2 = (undefined8 *)(local_118 + _TtC6Sentry19SentryReplayOptions::maskedViewClasses);
  _swift_beginAccess(puVar2,&local_b8,1,0);
  uVar13 = *puVar2;
  *puVar2 = puVar16;
  _swift_bridgeObjectRelease(uVar13);
  if (*(long *)(param_2 + 0x10) == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cb7b0:
    FUN_1000c776c(&local_a0);
LAB_1007cb7b8:
    FUN_1007ba60c(0,&DAT_100abd150,&PTR__OBJC_CLASS___NSArray_100a657b0);
    __sSo7NSArrayC10FoundationE12arrayLiteralABypd_tcfC(PTR___swiftEmptyArrayStorage_100995ea0);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    puVar14 = &DAT_d000000000000013;
    uVar18 = 0;
    FUN_1001a2c70(&DAT_d000000000000013);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + (long)puVar14 * 0x20,&local_a0);
    }
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cb7b0;
    uVar13 = 0;
    FUN_1007ba60c(0,&DAT_100abd150,&PTR__OBJC_CLASS___NSArray_100a657b0);
    ppuVar7 = local_d8;
    _swift_dynamicCast(ppuVar7,&local_a0,PTR___sypN_100995e88 + 8,uVar13,6);
    if ((int)ppuVar7 == 0) goto LAB_1007cb7b8;
  }
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF(local_110);
  __sSt4next7ElementQzSgyFTj(&local_a0,lVar4,uVar6);
  puVar10 = PTR___sSSN_1009957f8;
  puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (local_88 != 0) {
    puVar1 = PTR___sypN_100995e88 + 8;
    do {
      FUN_10007f3d4(&local_a0,local_d8);
      FUN_10003e8bc(local_d8,local_f8);
      plVar11 = &local_108;
      _swift_dynamicCast(plVar11,local_f8,puVar1,puVar10,6);
      lVar20 = local_108;
      uVar13 = uStack_100;
      if ((int)plVar11 == 0) {
        lVar20 = 0;
        uVar13 = 0xe000000000000000;
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar20,uVar13);
      _swift_bridgeObjectRelease(uVar13);
      _NSClassFromString();
      if (lVar20 == 0) {
        FUN_10003f094(local_d8);
      }
      else {
        FUN_10003f094(local_d8);
        puVar12 = puVar16;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = puVar16;
        if (((ulong)puVar12 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_1007d1ee4(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
        }
        uVar18 = *(ulong *)(puVar15 + 0x10);
        puVar16 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar18) {
          puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_1007d1ee4(puVar16,uVar18 + 1,1,puVar15);
        }
        _swift_getObjCClassMetadata();
        *(ulong *)(puVar16 + 0x10) = uVar18 + 1;
        *(long *)(puVar16 + uVar18 * 8 + 0x20) = lVar20;
      }
      __sSt4next7ElementQzSgyFTj(&local_a0,lVar4,uVar6);
    } while (local_88 != 0);
  }
  (*local_120)(local_110,lVar4);
  IVar8 = local_118;
  puVar2 = (undefined8 *)(local_118 + _TtC6Sentry19SentryReplayOptions::unmaskedViewClasses);
  _swift_beginAccess(puVar2,local_d8,1,0);
  uVar6 = *puVar2;
  *puVar2 = puVar16;
  _swift_bridgeObjectRelease(uVar6);
  if (*(long *)(param_2 + 0x10) == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
LAB_1007cba68:
    FUN_1000c776c(&local_a0);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar4 = 0x7974696c617571;
    uVar18 = 0;
    FUN_1001a2c70(0x7974696c617571);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
      _swift_bridgeObjectRelease(param_2);
      goto LAB_1007cba68;
    }
    FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar4 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_2);
    if (local_88 == 0) goto LAB_1007cba68;
    puVar17 = local_f8;
    _swift_dynamicCast(puVar17,&local_a0,PTR___sypN_100995e88 + 8,PTR___sSiN_100995968,6);
    if ((((ulong)puVar17 & 1) != 0) && (local_f8[0] < 3)) {
      puVar17 = (ulong *)(IVar8 + _TtC6Sentry19SentryReplayOptions::quality);
      _swift_beginAccess(puVar17,local_f8,1,0);
      *puVar17 = local_f8[0];
    }
  }
  if (*(long *)(param_2 + 0x10) == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar4 = 0x6f666e496b6473;
    uVar18 = 0;
    FUN_1001a2c70(0x6f666e496b6473);
    if ((uVar18 & 1) == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
      _swift_bridgeObjectRelease_n(param_2,2);
    }
    else {
      FUN_10003e8bc(*(long *)(param_2 + 0x38) + lVar4 * 0x20,&local_a0);
      _swift_bridgeObjectRelease_n(param_2,2);
      if (local_88 != 0) {
        puVar10 = &DAT_100abc780;
        FUN_1007b4550(&DAT_100abc780);
        plVar11 = &local_108;
        _swift_dynamicCast(plVar11,&local_a0,PTR___sypN_100995e88 + 8,puVar10,6);
        if ((int)plVar11 == 0) {
          local_108 = 0;
        }
        goto LAB_1007cbb4c;
      }
    }
  }
  FUN_1000c776c(&local_a0);
  local_108 = 0;
LAB_1007cbb4c:
  uVar6 = *(undefined8 *)(IVar8 + _TtC6Sentry19SentryReplayOptions::sdkInfo);
  *(long *)(IVar8 + _TtC6Sentry19SentryReplayOptions::sdkInfo) = local_108;
  _swift_bridgeObjectRelease(uVar6);
  return IVar8;
}

