// rea decompile_all
// name: FUN_100143e98
// address: 0x100143e98
// body: available
// range: 0x100143e98-0x100144493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100144478 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100143e98(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar12;
  long unaff_x20;
  ulong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined1 auStack_120 [16];
  ulong auStack_110 [6];
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined1 *local_c8;
  undefined4 local_7c;
  undefined *local_78 [3];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_c8 = auStack_e0 + -extraout_x8;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar11 = lVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar18 = uVar11 - extraout_x12_00;
  local_d0 = _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData;
  uVar13 = *(ulong *)(unaff_x20 +
                     _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  uVar4 = uVar13;
  _swift_retain();
  FUN_1003e2d44();
  _swift_release(uVar13);
  uVar13 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar16 = *(ulong *)(uVar13 + 0x10);
  }
  else {
    uVar16 = uVar13;
    if ((long)uVar4 < 0) {
      uVar16 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar16 != 0) {
    uVar20 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar13 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100144430);
            (*pcVar17)();
          }
          uVar19 = *(ulong *)(uVar4 + uVar20 * 8 + 0x20);
          _swift_retain(uVar19);
        }
        else {
          uVar19 = uVar20;
          FUN_10016a704(uVar20,uVar4);
        }
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x10014442c);
          (*pcVar17)();
        }
        uVar21 = uVar20 + 1;
        lVar6 = *(long *)(uVar19 + 0x40);
        if ((lVar6 == 0) ||
           ((uVar5 = *(ulong *)(uVar19 + 0x38), uVar5 != param_1 || lVar6 != param_2 &&
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar5,lVar6,param_1,param_2,0), (uVar5 & 1) == 0)))) break;
        puVar9 = puVar2;
        _swift_isUniquelyReferenced_nonNull_native();
        local_78[0] = puVar2;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_10007003c(0,*(long *)(puVar2 + 0x10) + 1,1);
        }
        uVar20 = *(ulong *)(local_78[0] + 0x10);
        lVar6 = uVar20 + 1;
        if (*(ulong *)(local_78[0] + 0x18) >> 1 <= uVar20) {
          local_d8 = lVar6;
          FUN_10007003c(1 < *(ulong *)(local_78[0] + 0x18),lVar6,1);
          lVar6 = local_d8;
        }
        *(long *)(local_78[0] + 0x10) = lVar6;
        *(ulong *)(local_78[0] + uVar20 * 8 + 0x20) = uVar19;
        puVar2 = local_78[0];
        uVar20 = uVar21;
        if (uVar21 == uVar16) goto LAB_1001440f0;
      }
      _swift_release(uVar19);
      uVar20 = uVar20 + 1;
    } while (uVar21 != uVar16);
  }
LAB_1001440f0:
  _swift_bridgeObjectRelease(uVar4);
  if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
    puVar9 = puVar2;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  else {
    puVar9 = *(undefined **)(puVar2 + 0x10);
  }
  puVar22 = puVar2;
  if (puVar9 != (undefined *)0x0) {
    if (((ulong)puVar2 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100144494);
        (*pcVar17)();
      }
      puVar22 = *(undefined **)(puVar2 + 0x20);
      _swift_retain(puVar22);
    }
    else {
      puVar22 = (undefined *)0x0;
      FUN_10016a704(0,puVar2);
    }
    _swift_release(puVar2);
    lVar6 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userHasPaste;
    if ((puVar22[_TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userHasPaste] & 1) == 0) {
      uVar15 = param_3;
      uVar7 = param_4;
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar18,param_3,param_4);
      __s10Foundation3URLV25deletingLastPathComponentACyF(uVar11);
      _NSHomeDirectory();
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar10,uVar15,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      puVar2 = &DAT_100a77e68;
      FUN_100144654(&DAT_100a77e68,PTR___s10Foundation3URLVSQAAMc_1009961a8);
      uVar4 = uVar11;
      __sSQ2eeoiySbx_xtFZTj(uVar11,lVar10,lVar3,puVar2);
      pcVar17 = *(code **)(lVar8 + 8);
      (*pcVar17)(lVar10,lVar3);
      puVar1 = local_c8;
      if ((uVar4 & 1) == 0) {
        puVar22[lVar6] = 1;
        pcVar12 = *(code **)(lVar8 + 0x10);
        (*pcVar12)(local_c8,uVar11,lVar3);
        pcVar14 = *(code **)(lVar8 + 0x38);
        (*pcVar14)(puVar1,0,1,lVar3);
        lVar8 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteUrl;
        _swift_beginAccess(puVar22 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::
                                     userPasteUrl,local_78,0x21,0);
        FUN_100135ab0(puVar1,puVar22 + lVar8);
        _swift_endAccess(local_78);
        (*pcVar12)(puVar1,lVar18,lVar3);
        (*pcVar14)(puVar1,0,1,lVar3);
        lVar8 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::userPasteEmptyFileUrl;
        _swift_beginAccess(puVar22 + _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::
                                     userPasteEmptyFileUrl,local_78,0x21,0);
        FUN_100135ab0(puVar1,puVar22 + lVar8);
        _swift_endAccess(local_78);
        uVar15 = *(undefined8 *)(unaff_x20 + local_d0);
        local_7c = *(undefined4 *)(puVar22 + 0x28);
        local_78[0] = puVar22;
        _swift_retain(uVar15);
        _swift_retain(puVar22);
        FUN_1003e3634(local_78,&local_7c);
        _swift_release(uVar15);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(lVar18 + -0x30) = param_1;
        *(long *)(lVar18 + -0x28) = param_2;
        *(undefined8 *)(lVar18 + -0x20) = param_3;
        *(undefined8 *)(lVar18 + -0x18) = param_4;
        *(long *)(lVar18 + -0x10) = lVar18;
        *(ulong *)(lVar18 + -8) = uVar11;
        FUN_1003fb45c(FUN_100144634,lVar18 + -0x40,0xd0000000000000ad,0x8000000100890750,
                      0xd000000000000024,0x8000000100890800,0x2e7,7);
        lVar8 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar8 == 0) {
          _swift_release(puVar22);
        }
        else {
          FUN_1001646e8(*(undefined4 *)(puVar22 + 0x28),uVar11);
          _swift_release(puVar22);
          _swift_unknownObjectRelease(lVar8);
        }
        (*pcVar17)(uVar11,lVar3);
        (*pcVar17)(lVar18,lVar3);
      }
      else {
        _swift_release(puVar22);
        (*pcVar17)(uVar11,lVar3);
        (*pcVar17)(lVar18,lVar3);
      }
      return;
    }
  }
  _swift_release(puVar22);
  return;
}

