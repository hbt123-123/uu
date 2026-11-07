// rea decompile_all
// name: FUN_1002194ac
// address: 0x1002194ac
// body: available
// range: 0x1002194ac-0x100219b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100219b08 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002194ac(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  uint local_bc;
  code *local_b8;
  ID local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  ulong local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar4 = 0;
  local_bc = param_2;
  __s10Foundation3URLVMa();
  local_90 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_90 + 0x40));
  lVar11 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_e0 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (lVar11 - extraout_x12) - extraout_x12_00;
  local_88 = lVar13;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_c8 = &_OBJC_CLASS___NSFileManager;
  IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar6 = IVar5;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_78 = 0;
  IVar6 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    (IVar5,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                     IVar6,0,0,&local_78);
  if (IVar6 == 0) {
    uVar20 = local_78;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
    _swift_willThrow(0);
    _swift_errorRelease(uVar20);
    puVar7 = local_70;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar6,lVar4);
    local_a0 = *(ulong *)(IVar6 + 0x10);
    if (local_a0 == 0) {
      _swift_bridgeObjectRelease(IVar6);
      puVar7 = local_70;
      if ((local_bc & 1) == 0) {
        (**(code **)(local_90 + 0x10))(lVar13 - extraout_x12_02,param_1,lVar4);
        puVar10 = (undefined *)0x0;
        FUN_100033f0c(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
        uVar20 = *(ulong *)(puVar10 + 0x10);
        puVar7 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar20) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_100033f0c(puVar7,uVar20 + 1,1,puVar10);
        }
        *(ulong *)(puVar7 + 0x10) = uVar20 + 1;
        (**(code **)(local_90 + 0x20))
                  (puVar7 + *(long *)(local_90 + 0x48) * uVar20 +
                            ((ulong)*(byte *)(local_90 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(local_90 + 0x50) ^ 0xffffffffffffffff)),
                   lVar13 - extraout_x12_02,lVar4);
      }
    }
    else {
      uVar20 = 0;
      local_98 = (ulong)*(byte *)(local_90 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(local_90 + 0x50) ^ 0xffffffffffffffff);
      local_a8 = IVar6 + local_98;
      puVar7 = local_c8;
      local_d8 = lVar13;
      local_d0 = lVar11;
      local_b0 = IVar6;
      do {
        if (*(ulong *)(local_b0 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100219ae8);
          (*pcVar14)();
        }
        lVar18 = *(long *)(local_90 + 0x48);
        pcVar14 = *(code **)(local_90 + 0x10);
        (*pcVar14)(lVar13,local_a8 + lVar18 * uVar20,lVar4);
        local_78 = local_78 & 0xffffffffffffff00;
        pcVar12 = "defaultManager";
        IVar5 = _objc_msgSend((ID)puVar7,"defaultManager");
        IVar6 = IVar5;
        __s10Foundation3URLV4pathSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(pcVar12);
        IVar6 = _objc_msgSend(IVar5,"fileExistsAtPath:isDirectory:",IVar6,&local_78);
        if (((int)IVar6 == 0) || ((char)local_78 != '\x01')) {
          (*pcVar14)(lVar11,lVar13,lVar4);
          puVar10 = local_70;
          puVar8 = local_70;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar9 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100033f0c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar16 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar16) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_100033f0c(puVar10,uVar16 + 1,1,puVar9);
          }
          *(ulong *)(puVar10 + 0x10) = uVar16 + 1;
          puVar8 = puVar10 + uVar16 * lVar18 + local_98;
          pcVar14 = *(code **)(local_90 + 0x20);
          lVar17 = lVar11;
LAB_100219690:
          lVar18 = local_90;
          (*pcVar14)(puVar8,lVar11,lVar4);
          (**(code **)(lVar18 + 8))(lVar13,lVar4);
          local_70 = puVar10;
        }
        else {
          local_b8 = pcVar14;
          FUN_1002190b0(lVar13,local_bc & 1);
          uVar16 = *(ulong *)(lVar13 + 0x10);
          puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
          if (uVar16 != 0) {
            uVar15 = 0;
            puVar19 = (undefined8 *)(lVar13 + 0x28);
            do {
              if (*(ulong *)(lVar13 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100219ae4);
                (*pcVar14)();
              }
              uVar1 = puVar19[-1];
              uVar3 = *puVar19;
              _swift_bridgeObjectRetain(uVar3);
              __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_88,uVar1,uVar3);
              _swift_bridgeObjectRelease(uVar3);
              puVar10 = puVar7;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar8 = puVar7;
              if (((ulong)puVar10 & 1) == 0) {
                puVar8 = (undefined *)0x0;
                FUN_100033f0c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
              }
              uVar2 = *(ulong *)(puVar8 + 0x10);
              puVar7 = puVar8;
              if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                FUN_100033f0c(puVar7,uVar2 + 1,1,puVar8);
              }
              uVar15 = uVar15 + 1;
              *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
              (**(code **)(local_90 + 0x20))(puVar7 + uVar2 * lVar18 + local_98,local_88,lVar4);
              puVar19 = puVar19 + 2;
            } while (uVar16 != uVar15);
          }
          _swift_bridgeObjectRelease(lVar13);
          pcVar14 = local_b8;
          if (*(long *)(puVar7 + 0x10) == 0) {
            _swift_bridgeObjectRelease(puVar7);
            lVar13 = local_d8;
            if ((local_bc & 1) == 0) {
              (*pcVar14)(local_e0,local_d8,lVar4);
              puVar10 = local_70;
              puVar8 = local_70;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar7 = local_c8;
              lVar17 = local_d0;
              puVar9 = puVar10;
              if (((ulong)puVar8 & 1) == 0) {
                puVar9 = (undefined *)0x0;
                FUN_100033f0c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
              }
              uVar16 = *(ulong *)(puVar9 + 0x10);
              puVar10 = puVar9;
              if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar16) {
                puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
                FUN_100033f0c(puVar10,uVar16 + 1,1,puVar9);
              }
              *(ulong *)(puVar10 + 0x10) = uVar16 + 1;
              puVar8 = puVar10 + uVar16 * lVar18 + local_98;
              pcVar14 = *(code **)(local_90 + 0x20);
              lVar11 = local_e0;
              goto LAB_100219690;
            }
            pcVar14 = *(code **)(local_90 + 8);
          }
          else {
            FUN_10005f374(puVar7);
            pcVar14 = *(code **)(local_90 + 8);
          }
          lVar13 = local_d8;
          (*pcVar14)(local_d8,lVar4);
          lVar17 = local_d0;
          puVar7 = local_c8;
        }
        uVar20 = uVar20 + 1;
        lVar11 = lVar17;
      } while (uVar20 != local_a0);
      _swift_bridgeObjectRelease(local_b0);
      puVar7 = local_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar7);
  }
  return;
}

