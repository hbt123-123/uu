// rea decompile_all
// name: FUN_1005d7858
// address: 0x1005d7858
// body: available
// range: 0x1005d7858-0x1005d80ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d80fc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1005d7858(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ID IVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ID IVar9;
  ID *pIVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x20;
  ulong uVar18;
  ID local_d0;
  uint local_c8 [6];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_70 = 0;
  _SecCodeCopySigningInformation(param_1,8,&local_70);
  IVar9 = local_70;
  if ((int)param_1 == 0) {
    if (local_70 == 0) {
      uVar17 = 0;
      goto LAB_1005d8064;
    }
    uVar17 = 0x7367616c66;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7367616c66,0xe500000000000000);
    IVar6 = _objc_msgSend(IVar9,"objectForKey:",uVar17);
    if (IVar6 == 0) {
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = (undefined *)0x0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0,IVar6);
      _swift_unknownObjectRelease(IVar6);
    }
    puVar5 = PTR___sypN_100995e88;
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    local_78 = local_98;
    uStack_80 = uStack_a0;
    if (local_98 == (undefined *)0x0) {
      FUN_100040bb4(&local_90,&DAT_100aae020,&DAT_10083f4a8);
      uVar17 = 0;
      goto LAB_1005d8064;
    }
    puVar7 = local_c8;
    _swift_dynamicCast(puVar7,&local_90,PTR___sypN_100995e88 + 8,PTR___ss6UInt32VN_100995dc0,6);
    if (((ulong)puVar7 & 1) != 0) {
      if ((local_c8[0] >> 0x10 & 1) == 0) {
        _swift_beginAccess(&DAT_100b3a708,&local_b0,0,0);
        uVar17 = DAT_100b3a710;
        pcVar3 = DAT_100b3a708;
        if (DAT_100b3a708 != (code *)0x0) {
          local_78 = PTR___sSSN_1009957f8;
          local_90 = 0xd00000000000002a;
          uStack_88 = 0x80000001008be2e0;
          _swift_retain(DAT_100b3a710);
          puVar8 = &local_90;
          puVar5 = puVar5 + 8;
          __sSS10describingSSx_tclufC(puVar8,puVar5);
          (*pcVar3)(3,puVar8,puVar5,
                    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                    ,0xb7,2,"verifyHardenedRuntimeAndEntitlements(secStaticCode:)",0x34,2);
          FUN_10007ed2c(pcVar3,uVar17);
          goto LAB_1005d7960;
        }
      }
      else {
        _swift_beginAccess(&DAT_100b3a708,local_c8,0,0);
        uVar17 = DAT_100b3a710;
        pcVar3 = DAT_100b3a708;
        if (DAT_100b3a708 != (code *)0x0) {
          local_78 = PTR___sSSN_1009957f8;
          local_90 = 0xd000000000000026;
          uStack_88 = 0x80000001008be310;
          _swift_retain(DAT_100b3a710);
          puVar8 = &local_90;
          puVar13 = puVar5 + 8;
          __sSS10describingSSx_tclufC(puVar8,puVar13);
          (*pcVar3)(1,puVar8,puVar13,
                    "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                    ,0xb7,2,"verifyHardenedRuntimeAndEntitlements(secStaticCode:)",0x34,2);
          FUN_10007ed2c(pcVar3,uVar17);
          _swift_bridgeObjectRelease(puVar13);
        }
        uVar17 = 0xd000000000000011;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000001008be340)
        ;
        IVar9 = _objc_msgSend(IVar9,"objectForKey:",uVar17);
        if (IVar9 == 0) {
          uStack_a8 = 0;
          local_b0 = 0;
          local_98 = (undefined *)0x0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_b0,IVar9);
          _swift_unknownObjectRelease(IVar9);
        }
        uStack_88 = uStack_a8;
        local_90 = local_b0;
        local_78 = local_98;
        uStack_80 = uStack_a0;
        if (local_98 == (undefined *)0x0) {
          FUN_100040bb4(&local_90,&DAT_100aae020,&DAT_10083f4a8);
        }
        else {
          uVar17 = 0;
          FUN_10004003c(0,&DAT_100aae028,&PTR__OBJC_CLASS___NSDictionary_100a65898);
          pIVar10 = &local_d0;
          _swift_dynamicCast(pIVar10,&local_90,puVar5 + 8,uVar17,6);
          IVar9 = local_d0;
          uVar17 = DAT_100b3a710;
          pcVar3 = DAT_100b3a708;
          if (((ulong)pIVar10 & 1) != 0) {
            if (DAT_100b3a708 != (code *)0x0) {
              local_90 = 0;
              uStack_88 = 0xe000000000000000;
              _swift_retain(DAT_100b3a710);
              __ss11_StringGutsV4growyySiF(0x13);
              _swift_bridgeObjectRelease(uStack_88);
              local_90 = 0xd000000000000011;
              uStack_88 = 0x80000001008be360;
              pcVar14 = "description";
              IVar6 = _objc_msgSend(IVar9,"description");
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar6);
              __sSS6appendyySSF(IVar6,pcVar14);
              _swift_bridgeObjectRelease(pcVar14);
              local_78 = PTR___sSSN_1009957f8;
              puVar8 = &local_90;
              puVar5 = PTR___sypN_100995e88 + 8;
              __sSS10describingSSx_tclufC(puVar8,puVar5);
              (*pcVar3)(0,puVar8,puVar5,
                        "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                        ,0xb7,2,"verifyHardenedRuntimeAndEntitlements(secStaticCode:)",0x34,2);
              FUN_10007ed2c(pcVar3,uVar17);
              _swift_bridgeObjectRelease(puVar5);
            }
            lVar11 = *(long *)(unaff_x20 + 0x18);
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            uVar18 = 0xffffffffffffffff;
            if ((long)uVar16 < 0x40) {
              uVar18 = ~(-1L << (uVar16 & 0x3f));
            }
            uVar18 = uVar18 & *(ulong *)(lVar11 + 0x38);
            _swift_bridgeObjectRetain();
            lVar15 = 0;
            while( true ) {
              while (uVar18 != 0) {
                uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
                uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
                uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                uVar18 = uVar18 - 1 & uVar18;
                puVar8 = (undefined8 *)
                         (*(long *)(lVar11 + 0x30) +
                         (lVar15 << 10 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 4));
                uVar17 = *puVar8;
                uVar1 = puVar8[1];
                _swift_bridgeObjectRetain(uVar1);
                uVar12 = uVar17;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar17,uVar1);
                IVar6 = _objc_msgSend(IVar9,"objectForKey:",uVar12);
                if (IVar6 != 0) {
                  __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_90,IVar6);
                  _swift_unknownObjectRelease(IVar6);
                  FUN_10003e8bc(&local_90,&local_b0);
                  uVar12 = 0;
                  FUN_10004003c(0,&DAT_100aae030,&PTR__OBJC_CLASS___NSNumber_100a65780);
                  pIVar10 = &local_d0;
                  _swift_dynamicCast(pIVar10,&local_b0,PTR___sypN_100995e88 + 8,uVar12,6);
                  if ((((ulong)pIVar10 & 1) != 0) &&
                     (IVar6 = _objc_msgSend(local_d0,"integerValue"), uVar12 = DAT_100b3a710,
                     pcVar3 = DAT_100b3a708, IVar6 == 1)) {
                    if (DAT_100b3a708 == (code *)0x0) {
                      _swift_release(lVar11);
                      _swift_bridgeObjectRelease(uVar1);
                    }
                    else {
                      local_b0 = 0;
                      uStack_a8 = 0xe000000000000000;
                      _swift_retain(DAT_100b3a710);
                      __ss11_StringGutsV4growyySiF(0x1e);
                      _swift_bridgeObjectRelease(uStack_a8);
                      local_b0 = 0xd00000000000001c;
                      uStack_a8 = 0x80000001008be380;
                      __sSS6appendyySSF(uVar17,uVar1);
                      _swift_bridgeObjectRelease(uVar1);
                      local_98 = PTR___sSSN_1009957f8;
                      puVar8 = &local_b0;
                      puVar5 = PTR___sypN_100995e88 + 8;
                      __sSS10describingSSx_tclufC(puVar8,puVar5);
                      (*pcVar3)(3,puVar8,puVar5,
                                "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
                                ,0xb7,2,"verifyHardenedRuntimeAndEntitlements(secStaticCode:)",0x34,
                                2);
                      _swift_release(lVar11);
                      FUN_10007ed2c(pcVar3,uVar12);
                      _swift_bridgeObjectRelease(puVar5);
                    }
                    FUN_10003f094(&local_90);
                    uVar17 = 0;
                    goto LAB_1005d8064;
                  }
                  FUN_10003f094(&local_90);
                }
                _swift_bridgeObjectRelease(uVar1);
              }
              bVar4 = SCARRY8(lVar15,1);
              lVar15 = lVar15 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1005d80cc);
                (*pcVar3)();
              }
              if ((long)(uVar16 + 0x3f >> 6) <= lVar15) break;
              uVar18 = ((ulong *)(lVar11 + 0x38))[lVar15];
            }
            _swift_release(lVar11);
            uVar17 = 1;
            goto LAB_1005d8064;
          }
        }
      }
    }
    uVar17 = 0;
  }
  else {
    _swift_beginAccess(&DAT_100b3a708,&local_b0,0,0);
    uVar1 = DAT_100b3a710;
    pcVar3 = DAT_100b3a708;
    uVar17 = 0;
    if (DAT_100b3a708 == (code *)0x0) goto LAB_1005d8064;
    local_78 = PTR___sSSN_1009957f8;
    local_90 = 0xd000000000000023;
    uStack_88 = 0x80000001008be2b0;
    _swift_retain(DAT_100b3a710);
    puVar8 = &local_90;
    puVar5 = PTR___sypN_100995e88 + 8;
    __sSS10describingSSx_tclufC(puVar8,puVar5);
    (*pcVar3)(3,puVar8,puVar5,
              "/Users/game-netease/Library/Developer/Xcode/DerivedData/nrd-mac-server-bmdigyyhsonjagbeixjtsekhneee/SourcePackages/checkouts/nrd-mac-uuxpc/Sources/Security/XPCConnectionVerifier.swift"
              ,0xb7,2,"verifyHardenedRuntimeAndEntitlements(secStaticCode:)",0x34,2);
    FUN_10007ed2c(pcVar3,uVar1);
LAB_1005d7960:
    _swift_bridgeObjectRelease(puVar5);
    uVar17 = 0;
  }
LAB_1005d8064:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return uVar17;
}

