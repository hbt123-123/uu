// rea decompile_all
// name: FUN_10009a3a0
// address: 0x10009a3a0
// body: available
// range: 0x10009a3a0-0x10009aaab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009aa94 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010009aa98) */

void FUN_10009a3a0(undefined8 param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_100 [16];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [8];
  code *local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  code *local_a0;
  undefined1 *local_98;
  ID local_90;
  ulong local_88;
  byte local_79 [9];
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  local_a0 = param_4;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  local_98 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar18 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = uVar18 - extraout_x12_00;
  IVar2 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = param_1;
  local_88 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  IVar4 = NSFileManager::fileExistsAtPath_(IVar2,"fileExistsAtPath:",uVar3);
  if ((int)IVar4 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    uVar18 = local_88;
    *(undefined8 *)(lVar13 + -0x10) = param_1;
    *(ulong *)(lVar13 + -8) = uVar18;
    FUN_1003fb48c(FUN_1000a0008,lVar13 + -0x20,0xd000000000000093,0x800000010087fc10,
                  0xd000000000000025,0x8000000100880500,0x152,0);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar3 = param_1;
    local_c0 = param_5;
    local_b8 = param_3;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar13,param_1,local_88);
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    puVar5 = &DAT_100a76708;
    FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 4;
    *(undefined8 *)(puVar5 + 0x10) = 2;
    uVar16 = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
    *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
    *(undefined8 *)(puVar5 + 0x28) = uVar16;
    uVar16 = 0;
    FUN_10000603c(0);
    puVar6 = puVar5;
    local_a8 = lVar13;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar5,uVar16);
    _swift_bridgeObjectRelease(puVar5);
    local_70 = (undefined *)0x0;
    IVar4 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                      (IVar2,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                       uVar3,puVar6,4,&local_70);
    if (IVar4 == 0) {
      puVar5 = local_70;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
      _swift_willThrow(0);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      uVar18 = local_88;
      *(undefined8 *)(lVar13 + -0x20) = param_1;
      *(ulong *)(lVar13 + -0x18) = uVar18;
      *(undefined **)(lVar13 + -0x10) = puVar5;
      FUN_1003fb4ec(FUN_1000a0010,lVar13 + -0x30,0xd000000000000093,0x800000010087fc10,
                    0xd000000000000025,0x8000000100880500,0x174,0);
      _swift_errorRelease(puVar5);
      (**(code **)(lVar15 + 8))(local_a8,lVar1);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_90 = IVar2;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar4,lVar1);
      local_88 = *(ulong *)(IVar4 + 0x10);
      if (local_88 == 0) {
        local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        uVar14 = 0;
        local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
        IVar2 = local_90;
        do {
          if (*(ulong *)(IVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x10009aa90);
            (*pcVar11)();
          }
          uVar12 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
          lVar17 = *(long *)(lVar15 + 0x48);
          lVar13 = IVar4 + uVar12 + lVar17 * uVar14;
          uVar8 = uVar18;
          (**(code **)(lVar15 + 0x10))(uVar18,lVar13,lVar1);
          local_79[0] = 0;
          __s10Foundation3URLV4pathSSvg();
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
          _swift_bridgeObjectRelease(lVar13);
          pcVar10 = "fileExistsAtPath:isDirectory:";
          IVar7 = _objc_msgSend(IVar2,"fileExistsAtPath:isDirectory:",uVar8,local_79);
          uVar8 = 0;
          if (((int)IVar7 == 0) || ((local_79[0] & 1) != 0)) {
LAB_10009a7bc:
            (**(code **)(lVar15 + 8))(uVar18,lVar1);
          }
          else {
            __s10Foundation3URLV13pathExtensionSSvg();
            pcVar9 = pcVar10;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(pcVar10);
            if ((uVar8 == 0x70697a) && (pcVar9 == (char *)0xe300000000000000)) {
              _swift_bridgeObjectRelease(0xe300000000000000);
              IVar2 = local_90;
              goto LAB_10009a7bc;
            }
            pcVar10 = pcVar9;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,pcVar9,0x70697a,0xe300000000000000,0);
            _swift_bridgeObjectRelease(pcVar9);
            IVar2 = local_90;
            if ((uVar8 & 1) != 0) goto LAB_10009a7bc;
            __s10Foundation3URLV17lastPathComponentSSvg();
            uVar8 = 0;
            __sSS9hasSuffixySbSSF(0x6d6d2e676f6c732e,0xea00000000007061,pcVar9,pcVar10);
            _swift_bridgeObjectRelease(pcVar10);
            if (((uVar8 & 1) != 0) ||
               ((local_a0 != (code *)0x0 && (uVar8 = uVar18, (*local_a0)(), (uVar8 & 1) == 0))))
            goto LAB_10009a7bc;
            local_c8 = *(code **)(lVar15 + 0x20);
            (*local_c8)(local_98,uVar18,lVar1);
            puVar5 = local_b0;
            puVar6 = local_b0;
            _swift_isUniquelyReferenced_nonNull_native();
            local_70 = puVar5;
            if (((ulong)puVar6 & 1) == 0) {
              FUN_10006fcb0(0,*(long *)(puVar5 + 0x10) + 1,1);
            }
            uVar8 = *(ulong *)(local_70 + 0x10);
            if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar8) {
              FUN_10006fcb0(1 < *(ulong *)(local_70 + 0x18),uVar8 + 1,1);
            }
            *(ulong *)(local_70 + 0x10) = uVar8 + 1;
            local_b0 = local_70;
            (*local_c8)(local_70 + uVar8 * lVar17 + uVar12,local_98,lVar1);
            IVar2 = local_90;
          }
          uVar14 = uVar14 + 1;
        } while (local_88 != uVar14);
      }
      _swift_bridgeObjectRelease(IVar4);
      puVar5 = local_b0;
      local_70 = local_b0;
      _swift_retain(local_b0);
      FUN_1000962d8(&local_70);
      _swift_release(puVar5);
      puVar6 = local_70;
      puVar5 = puVar6;
      if (*(long *)(local_70 + 0x10) < local_b8) {
        (**(code **)(lVar15 + 8))(local_a8,lVar1);
      }
      else {
        if (local_b8 < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10009aa94);
          (*pcVar11)();
        }
        if (*(long *)(local_70 + 0x10) == local_b8) {
          pcVar11 = *(code **)(lVar15 + 8);
          _swift_retain(local_70);
          (*pcVar11)(local_a8,lVar1);
          _swift_release(puVar6);
        }
        else {
          puVar5 = local_70;
          FUN_10007498c(local_70,local_70 +
                                 ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)),0,
                        local_b8 << 1 | 1);
          _swift_release(puVar6);
          (**(code **)(lVar15 + 8))(local_a8,lVar1);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar5);
}

