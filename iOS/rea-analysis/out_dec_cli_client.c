
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000201c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  char *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_f8 [17];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1000f0280;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  FUN_10000ecd8(uVar8,uVar11,uVar10,uVar12,uVar13);
  lVar4 = *(long *)PTR__kCFAllocatorDefault_1000f0290;
  if (DAT_1001012d0 != -1) {
    _swift_once(&DAT_1001012d0,FUN_100020194);
  }
  _CFMessagePortCreateRemote(lVar4,DAT_100102ad8);
  if (lVar4 == 0) {
    pcVar9 = "Unable to connect to the UU Remote application";
    pcVar1 = "Start the main application and try again";
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x18) = 0xd00000000000002e;
    *(undefined8 *)(unaff_x20 + 0x10) = 0x66;
    uVar15 = 0xd000000000000028;
LAB_10002051c:
    *(ulong *)(unaff_x20 + 0x20) = (ulong)(pcVar9 + -0x20) | 0x8000000000000000;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar15;
    *(ulong *)(unaff_x20 + 0x30) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  }
  else {
    puVar5 = &DAT_100102ba0;
    FUN_10000eb08(&DAT_100102ba0,&DAT_1000d0710);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    *(undefined8 *)(puVar5 + 0x20) = 0x646f6874656d;
    puVar2 = PTR___sSSN_1000f02f8;
    *(undefined8 *)(puVar5 + 0x28) = 0xe600000000000000;
    *(undefined8 *)(puVar5 + 0x30) = param_1;
    *(undefined8 *)(puVar5 + 0x38) = param_2;
    *(undefined **)(puVar5 + 0x48) = puVar2;
    *(undefined8 *)(puVar5 + 0x50) = 0x736d61726170;
    *(undefined8 *)(puVar5 + 0x58) = 0xe600000000000000;
    puVar7 = &DAT_100102ba8;
    FUN_10000eb08(&DAT_100102ba8,&DAT_1000cf5f0);
    *(undefined **)(puVar5 + 0x78) = puVar7;
    *(undefined8 *)(puVar5 + 0x60) = param_3;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    puVar6 = puVar5;
    FUN_100020900(puVar5);
    _swift_setDeallocating(puVar5);
    puVar7 = &DAT_100102bb0;
    FUN_10000eb08(&DAT_100102bb0,&DAT_1000d26e0);
    _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
    puVar7 = &_OBJC_CLASS___NSJSONSerialization;
    puVar5 = puVar6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar6,puVar2,PTR___sypN_1000f0728 + 8,PTR___sSSSHsWP_1000f0308);
    local_110 = 0;
    pcVar9 = "dataWithJSONObject:options:error:";
    _objc_msgSend(&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",puVar5,0,
                  &local_110);
    uVar8 = local_110;
    if (puVar7 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar6);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar8);
      _swift_willThrow(0);
      _swift_errorRelease(uVar8);
      pcVar9 = "Failed to serialize the request parameters";
      pcVar1 = "Check --help and pass valid arguments";
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x18) = 0xd00000000000002a;
      *(undefined8 *)(unaff_x20 + 0x10) = 0x68;
      uVar15 = 0xd000000000000025;
      goto LAB_10002051c;
    }
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(puVar7);
    local_f8[0] = 0;
    puVar5 = puVar7;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar7,pcVar9);
    lVar17 = *(long *)PTR__kCFRunLoopDefaultMode_1000f0298;
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100020734);
      (*pcVar3)();
    }
    _swift_bridgeObjectRelease(puVar6);
    uVar8 = 0x4024000000000000;
    if ((param_5 & 1) == 0) {
      uVar8 = param_4;
    }
    uVar10 = 0;
    _CFMessagePortSendRequest(uVar8,uVar8,lVar4,0,puVar5,lVar17,local_f8);
    iVar14 = (int)lVar4;
    if (iVar14 < -2) {
      if ((iVar14 == -5) || (iVar14 == -3)) {
        uVar15 = 0x80000001000c50f0;
        uVar16 = 0xd00000000000004b;
      }
      else {
LAB_1000205a8:
        local_110 = 0;
        uStack_108 = 0xe000000000000000;
        __ss11_StringGutsV4growyySiF(0x3a);
        __sSS6appendyySSF(0xd000000000000037,0x80000001000c50b0);
        puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_1000f0660;
        __ss23CustomStringConvertibleP11descriptionSSvgTj
                  (PTR___ss5Int32VN_1000f0648,PTR___ss5Int32Vs23CustomStringConvertiblesWP_1000f0660
                  );
        __sSS6appendyySSF();
        _swift_bridgeObjectRelease(puVar5);
        __sSS6appendyySSF(0x29,0xe100000000000000);
        uVar15 = uStack_108;
        uVar16 = local_110;
      }
LAB_10002062c:
      FUN_100020a0c(puVar7,pcVar9);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x10) = 0x66;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar16;
      *(undefined8 *)(unaff_x20 + 0x20) = uVar15;
      *(undefined8 *)(unaff_x20 + 0x28) = 0xd000000000000028;
      *(undefined8 *)(unaff_x20 + 0x30) = 0x80000001000c45b0;
    }
    else {
      if (iVar14 + 2U < 2) {
        uVar15 = 0x80000001000c5140;
        uVar16 = 0xd00000000000004a;
        goto LAB_10002062c;
      }
      if (iVar14 != 0) goto LAB_1000205a8;
      if (local_f8[0] != 0) {
        lVar4 = local_f8[0];
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(local_f8[0]);
        FUN_100020a0c(puVar7,pcVar9);
        goto LAB_100020678;
      }
      FUN_100020a0c(puVar7,pcVar9);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x18) = 0xd000000000000025;
      *(undefined8 *)(unaff_x20 + 0x10) = 0x66;
      *(undefined8 *)(unaff_x20 + 0x20) = 0x80000001000c5190;
      *(undefined8 *)(unaff_x20 + 0x28) = 0xd000000000000028;
      *(undefined8 *)(unaff_x20 + 0x30) = 0x80000001000c45b0;
    }
  }
  FUN_10000ecd8(uVar8,uVar11,uVar10,uVar12,uVar13);
  lVar4 = 0;
  uVar10 = 0xf000000000000000;
LAB_100020678:
  if (*(long *)PTR____stack_chk_guard_1000f0280 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar4,uVar10);
}


