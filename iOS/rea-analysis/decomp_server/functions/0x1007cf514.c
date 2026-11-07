// rea decompile_all
// name: FUN_1007cf514
// address: 0x1007cf514
// body: available
// range: 0x1007cf514-0x1007d025b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1007cf514(ID *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  char *pcVar14;
  ulong unaff_x21;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ID IVar18;
  ID local_d0;
  ulong local_c8;
  ID local_c0;
  ID local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  ID local_98;
  ulong local_90;
  ulong local_88;
  ID local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ID local_58;
  
  lVar2 = 0;
  local_70 = param_2;
  __s10Foundation4DateVMa();
  local_a8 = *(long *)(lVar2 + -8);
  local_b0 = (long)&local_d0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *param_1;
  lStack_a0 = lVar2;
  uVar3 = _objc_msgSend(local_80,"crashDiagnostics");
  if (uVar3 != 0) {
    uVar4 = 0;
    FUN_1007ba60c(0,&DAT_100abd330,&PTR__OBJC_CLASS___MXCrashDiagnostic_100a66328);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    if (uVar3 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRetain(uVar3);
      uVar9 = _TtC6Sentry15SentryMXManager::disableCrashDiagnostics;
    }
    else {
      uVar15 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar15 = uVar3;
      }
      _swift_bridgeObjectRetain(uVar3);
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      uVar9 = _TtC6Sentry15SentryMXManager::disableCrashDiagnostics;
    }
    _TtC6Sentry15SentryMXManager::disableCrashDiagnostics = uVar9;
    if (uVar15 != 0) {
      IVar18 = 0;
      local_c8 = local_70 + _TtC6Sentry15SentryMXManager::delegate;
      uVar17 = uVar3 & 0xc000000000000001;
      local_90 = uVar17;
      local_88 = uVar3;
      local_78 = uVar9;
      local_68 = uVar15;
      while( true ) {
        if (uVar17 == 0) {
          IVar10 = *(ID *)(uVar3 + IVar18 * 8 + 0x20);
        }
        else {
          IVar10 = IVar18;
          FUN_1007d0738(IVar18,uVar3,&PTR__OBJC_CLASS___MXCrashDiagnostic_100a66328,&DAT_100abd330);
        }
        if (SCARRY8(IVar18,1)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1007cf89c);
          (*pcVar16)();
        }
        if ((*(byte *)(local_70 + uVar9) & 1) == 0) {
          IVar5 = _objc_msgSend(IVar10,"callStackTree");
          pcVar14 = "JSONRepresentation";
          IVar5 = _objc_msgSend(IVar5,"JSONRepresentation");
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
          uVar6 = 0;
          __s10Foundation11JSONDecoderCMa();
          _swift_allocObject();
          __s10Foundation11JSONDecoderCACycfc();
          uVar7 = 0;
          FUN_1007bdee8(0);
          uVar4 = uVar7;
          FUN_1007d0948();
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (&local_58,uVar7,IVar5,pcVar14,uVar7,uVar4);
          if (unaff_x21 == 0) {
            _swift_release(uVar6);
            FUN_100006cdc(IVar5,pcVar14);
            IVar13 = local_58;
            uVar8 = local_c8;
            _swift_unknownObjectWeakLoadStrong();
            IVar5 = local_80;
            uVar17 = local_90;
            uVar3 = local_88;
            uVar9 = local_78;
            uVar15 = local_68;
            if (uVar8 != 0) {
              local_98 = uVar8;
              IVar12 = _objc_msgSend(local_80,"timeStampBegin");
              lVar2 = local_b0;
              local_b8 = IVar13;
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (local_b0,IVar12);
              IVar13 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
              lVar1 = lStack_a0;
              pcVar16 = *(code **)(local_a8 + 8);
              local_c0 = IVar13;
              (*pcVar16)(lVar2,lStack_a0);
              IVar5 = _objc_msgSend(IVar5,"timeStampEnd");
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (lVar2,IVar5);
              uVar4 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
              (*pcVar16)(lVar2,lVar1);
              IVar5 = local_98;
              _objc_msgSend(local_98,
                            "didReceiveCrashDiagnostic:callStackTree:timeStampBegin:timeStampEnd:",
                            IVar10,local_b8,local_c0,uVar4);
              _swift_unknownObjectRelease(IVar5);
              uVar17 = local_90;
              uVar3 = local_88;
              uVar9 = local_78;
              uVar15 = local_68;
            }
          }
          else {
            _swift_release(uVar6);
            _swift_errorRelease(unaff_x21);
            FUN_100006cdc(IVar5,pcVar14);
            unaff_x21 = 0;
            uVar17 = local_90;
            uVar3 = local_88;
            uVar9 = local_78;
            uVar15 = local_68;
          }
        }
        if (IVar18 + 1 == uVar15) break;
        IVar18 = IVar18 + 1;
      }
    }
    _swift_bridgeObjectRelease_n(uVar3,2);
  }
  uVar3 = _objc_msgSend(local_80,"diskWriteExceptionDiagnostics");
  if (uVar3 != 0) {
    uVar4 = 0;
    FUN_1007ba60c(0,&DAT_100abd328,&PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_100a66320);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    if (uVar3 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRetain(uVar3);
    }
    else {
      uVar15 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar15 = uVar3;
      }
      _swift_bridgeObjectRetain(uVar3);
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar15 != 0) {
      uVar9 = 0;
      FUN_1007bdee8();
      IVar18 = 0;
      local_c0 = local_70 + _TtC6Sentry15SentryMXManager::delegate;
      local_78 = uVar3 & 0xc000000000000001;
      local_c8 = uVar3;
      local_90 = uVar15;
      local_88 = uVar9;
      if (local_78 == 0) goto LAB_1007cf98c;
      do {
        IVar10 = IVar18;
        FUN_1007d0738(IVar18,uVar3,&PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_100a66320,
                      &DAT_100abd328);
        while( true ) {
          if (SCARRY8(IVar18,1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1007cfbb0);
            (*pcVar16)();
          }
          IVar5 = _objc_msgSend(IVar10,"callStackTree");
          pcVar14 = "JSONRepresentation";
          IVar5 = _objc_msgSend(IVar5,"JSONRepresentation");
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
          uVar6 = 0;
          __s10Foundation11JSONDecoderCMa();
          _swift_allocObject();
          __s10Foundation11JSONDecoderCACycfc();
          uVar4 = uVar6;
          FUN_1007d0948();
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (&local_58,local_88,IVar5,pcVar14,local_88,uVar4);
          if (unaff_x21 == 0) {
            _swift_release(uVar6);
            FUN_100006cdc(IVar5,pcVar14);
            IVar13 = local_58;
            IVar12 = local_c0;
            _swift_unknownObjectWeakLoadStrong();
            IVar5 = local_80;
            if (IVar12 != 0) {
              local_68 = unaff_x21;
              IVar11 = _objc_msgSend(local_80,"timeStampBegin");
              lVar2 = local_b0;
              local_98 = IVar13;
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (local_b0,IVar11);
              IVar13 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
              lVar1 = lStack_a0;
              pcVar16 = *(code **)(local_a8 + 8);
              local_b8 = IVar13;
              (*pcVar16)(lVar2,lStack_a0);
              IVar5 = _objc_msgSend(IVar5,"timeStampEnd");
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (lVar2,IVar5);
              uVar4 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
              uVar3 = local_c8;
              (*pcVar16)(lVar2,lVar1);
              _objc_msgSend(IVar12,
                            "didReceiveDiskWriteExceptionDiagnostic:callStackTree:timeStampBegin:timeStampEnd:"
                            ,IVar10,local_98,local_b8,uVar4);
              _swift_unknownObjectRelease(IVar12);
              unaff_x21 = local_68;
            }
          }
          else {
            _swift_release(uVar6);
            _swift_errorRelease(unaff_x21);
            FUN_100006cdc(IVar5,pcVar14);
            unaff_x21 = 0;
          }
          if (IVar18 + 1 == local_90) goto LAB_1007cfbd4;
          IVar18 = IVar18 + 1;
          if (local_78 != 0) break;
LAB_1007cf98c:
          IVar10 = *(ID *)(uVar3 + IVar18 * 8 + 0x20);
        }
      } while( true );
    }
LAB_1007cfbd4:
    _swift_bridgeObjectRelease_n(uVar3,2);
  }
  uVar3 = _objc_msgSend(local_80,"cpuExceptionDiagnostics");
  if (uVar3 != 0) {
    uVar4 = 0;
    FUN_1007ba60c(0,&DAT_100abd320,&PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_100a66318);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    local_78 = uVar3;
    if (uVar3 >> 0x3e == 0) {
      IVar18 = *(ID *)((uVar3 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRetain();
    }
    else {
      IVar18 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        IVar18 = uVar3;
      }
      _swift_bridgeObjectRetain();
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (IVar18 != 0) {
      uVar3 = 0;
      FUN_1007bdee8();
      IVar10 = 0;
      local_d0 = local_70 + _TtC6Sentry15SentryMXManager::delegate;
      local_88 = local_78 & 0xc000000000000001;
      local_98 = IVar18;
      local_90 = uVar3;
      if (local_88 == 0) goto LAB_1007cfca8;
      do {
        IVar18 = IVar10;
        FUN_1007d0738(IVar10,local_78,&PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_100a66318,
                      &DAT_100abd320);
        while( true ) {
          if (SCARRY8(IVar10,1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1007cfedc);
            (*pcVar16)();
          }
          IVar5 = _objc_msgSend(IVar18,"callStackTree");
          pcVar14 = "JSONRepresentation";
          IVar5 = _objc_msgSend(IVar5,"JSONRepresentation");
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
          uVar6 = 0;
          __s10Foundation11JSONDecoderCMa();
          _swift_allocObject();
          __s10Foundation11JSONDecoderCACycfc();
          uVar4 = uVar6;
          FUN_1007d0948();
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (&local_58,local_90,IVar5,pcVar14,local_90,uVar4);
          if (unaff_x21 == 0) {
            _swift_release(uVar6);
            FUN_100006cdc(IVar5,pcVar14);
            IVar13 = local_58;
            IVar12 = local_d0;
            _swift_unknownObjectWeakLoadStrong();
            IVar5 = local_80;
            if (IVar12 != 0) {
              local_b8 = IVar12;
              IVar12 = _objc_msgSend(local_80,"timeStampBegin");
              lVar2 = local_b0;
              local_c0 = IVar13;
              local_68 = unaff_x21;
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (local_b0,IVar12);
              uVar3 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
              lVar1 = lStack_a0;
              pcVar16 = *(code **)(local_a8 + 8);
              local_c8 = uVar3;
              (*pcVar16)(lVar2,lStack_a0);
              IVar5 = _objc_msgSend(IVar5,"timeStampEnd");
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (lVar2,IVar5);
              uVar4 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
              unaff_x21 = local_68;
              (*pcVar16)(lVar2,lVar1);
              IVar5 = local_b8;
              _objc_msgSend(local_b8,
                            "didReceiveCpuExceptionDiagnostic:callStackTree:timeStampBegin:timeStampEnd:"
                            ,IVar18,local_c0,local_c8,uVar4);
              _swift_unknownObjectRelease(IVar5);
            }
          }
          else {
            _swift_release(uVar6);
            _swift_errorRelease(unaff_x21);
            FUN_100006cdc(IVar5,pcVar14);
            unaff_x21 = 0;
          }
          if (IVar10 + 1 == local_98) goto LAB_1007cff00;
          IVar10 = IVar10 + 1;
          if (local_88 != 0) break;
LAB_1007cfca8:
          IVar18 = *(ID *)(local_78 + IVar10 * 8 + 0x20);
        }
      } while( true );
    }
LAB_1007cff00:
    _swift_bridgeObjectRelease_n(local_78,2);
  }
  uVar3 = _objc_msgSend(local_80,"hangDiagnostics");
  if (uVar3 != 0) {
    uVar4 = 0;
    FUN_1007ba60c(0,&DAT_100abd318,&PTR__OBJC_CLASS___MXHangDiagnostic_100a66310);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
    local_78 = uVar3;
    if (uVar3 >> 0x3e == 0) {
      uVar15 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      _swift_bridgeObjectRetain();
    }
    else {
      uVar15 = uVar3 & 0xffffffffffffff8;
      if ((long)uVar3 < 0) {
        uVar15 = uVar3;
      }
      _swift_bridgeObjectRetain();
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar15 != 0) {
      uVar3 = 0;
      FUN_1007bdee8();
      IVar18 = 0;
      local_c8 = local_70 + _TtC6Sentry15SentryMXManager::delegate;
      local_70 = local_78 & 0xc000000000000001;
      local_90 = uVar15;
      local_88 = uVar3;
      if (local_70 == 0) goto LAB_1007cffd4;
      do {
        IVar10 = IVar18;
        FUN_1007d0738(IVar18,local_78,&PTR__OBJC_CLASS___MXHangDiagnostic_100a66310,&DAT_100abd318);
        while( true ) {
          if (SCARRY8(IVar18,1)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1007d0208);
            (*pcVar16)();
          }
          IVar5 = _objc_msgSend(IVar10,"callStackTree");
          pcVar14 = "JSONRepresentation";
          IVar5 = _objc_msgSend(IVar5,"JSONRepresentation");
          __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar5);
          uVar6 = 0;
          __s10Foundation11JSONDecoderCMa();
          _swift_allocObject();
          __s10Foundation11JSONDecoderCACycfc();
          uVar4 = uVar6;
          FUN_1007d0948();
          __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                    (&local_58,local_88,IVar5,pcVar14,local_88,uVar4);
          if (unaff_x21 == 0) {
            _swift_release(uVar6);
            FUN_100006cdc(IVar5,pcVar14);
            IVar13 = local_58;
            uVar3 = local_c8;
            _swift_unknownObjectWeakLoadStrong();
            IVar5 = local_80;
            if (uVar3 != 0) {
              local_98 = uVar3;
              IVar12 = _objc_msgSend(local_80,"timeStampBegin");
              lVar2 = local_b0;
              local_b8 = IVar13;
              local_68 = unaff_x21;
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (local_b0,IVar12);
              IVar13 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
              lVar1 = lStack_a0;
              pcVar16 = *(code **)(local_a8 + 8);
              local_c0 = IVar13;
              (*pcVar16)(lVar2,lStack_a0);
              IVar5 = _objc_msgSend(IVar5,"timeStampEnd");
              __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ
                        (lVar2,IVar5);
              uVar4 = 0;
              __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
              unaff_x21 = local_68;
              (*pcVar16)(lVar2,lVar1);
              IVar5 = local_98;
              _objc_msgSend(local_98,
                            "didReceiveHangDiagnostic:callStackTree:timeStampBegin:timeStampEnd:",
                            IVar10,local_b8,local_c0,uVar4);
              _swift_unknownObjectRelease(IVar5);
            }
          }
          else {
            _swift_release(uVar6);
            _swift_errorRelease(unaff_x21);
            FUN_100006cdc(IVar5,pcVar14);
            unaff_x21 = 0;
          }
          if (IVar18 + 1 == local_90) goto LAB_1007d022c;
          IVar18 = IVar18 + 1;
          if (local_70 != 0) break;
LAB_1007cffd4:
          IVar10 = *(ID *)(local_78 + IVar18 * 8 + 0x20);
        }
      } while( true );
    }
LAB_1007d022c:
    _swift_bridgeObjectRelease_n(local_78,2);
  }
  return;
}

