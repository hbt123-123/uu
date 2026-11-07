// rea decompile_all
// name: FUN_100191734
// address: 0x100191734
// body: available
// range: 0x100191734-0x100191baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100191bac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100191734(void)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ID self;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  ulong uVar16;
  long local_d0;
  undefined *local_c8;
  ID local_c0;
  undefined8 local_b8;
  long local_b0;
  ID local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar14 = (undefined *)(lVar11 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar14 - extraout_x12_00;
  self = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = 0x73656d756c6f562f;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar11,0x73656d756c6f562f,0xe800000000000000);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_88 = (undefined *)0x0;
  IVar5 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    (self,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",uVar4
                     ,0,0,&local_88);
  if (IVar5 == 0) {
    puVar14 = local_88;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_88);
    _swift_willThrow(0);
    _swift_errorRelease(puVar14);
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    puVar14 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar5,lVar3);
    local_a0 = *(ulong *)(IVar5 + 0x10);
    if (local_a0 == 0) {
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      uVar16 = 0;
      local_b8 = 0x8000000100886040;
      local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_c0 = IVar5;
      local_b0 = lVar11;
      local_a8 = self;
      do {
        puVar2 = PTR___sSSN_1009957f8;
        if (*(ulong *)(local_c0 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100191bac);
          (*pcVar15)();
        }
        uVar12 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
        lVar11 = *(long *)(lVar13 + 0x48);
        puVar9 = (undefined *)(local_c0 + uVar12 + lVar11 * uVar16);
        puVar6 = puVar14;
        (**(code **)(lVar13 + 0x10))(puVar14,puVar9,lVar3);
        __s10Foundation3URLV4pathSSvg();
        local_98 = 0xd000000000000014;
        local_90 = local_b8;
        local_88 = puVar6;
        puStack_80 = puVar9;
        FUN_10009ff0c();
        puVar7 = &local_98;
        puVar8 = puVar2;
        __sSy10FoundationE8containsySbqd__SyRd__lF(puVar7,puVar2,puVar2,puVar6,puVar6);
        _swift_bridgeObjectRelease();
        if (((ulong)puVar7 & 1) == 0) {
          __s10Foundation3URLV4pathSSvg();
          local_98 = 0x6163696c7070412f;
          local_90 = 0xed0000736e6f6974;
          puVar7 = &local_98;
          puVar10 = puVar2;
          local_88 = puVar9;
          puStack_80 = puVar8;
          __sSy10FoundationE8containsySbqd__SyRd__lF(puVar7,puVar2,puVar2,puVar6,puVar6);
          _swift_bridgeObjectRelease();
          if (((ulong)puVar7 & 1) != 0) goto LAB_1001918cc;
          __s10Foundation3URLV4pathSSvg();
          local_98 = 0x6f746e6963614d2f;
          local_90 = 0xed00004448206873;
          puVar7 = &local_98;
          local_88 = puVar8;
          puStack_80 = puVar10;
          __sSy10FoundationE8containsySbqd__SyRd__lF(puVar7,puVar2,puVar2,puVar6,puVar6);
          _swift_bridgeObjectRelease(puVar10);
          if (((ulong)puVar7 & 1) != 0) goto LAB_1001918cc;
          pcVar15 = *(code **)(lVar13 + 0x20);
          (*pcVar15)(local_d0,puVar14,lVar3);
          puVar2 = local_c8;
          puVar6 = local_c8;
          _swift_isUniquelyReferenced_nonNull_native();
          local_78 = puVar2;
          if (((ulong)puVar6 & 1) == 0) {
            FUN_10006fcb0(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_78 + 0x10);
          if (*(ulong *)(local_78 + 0x18) >> 1 <= uVar1) {
            FUN_10006fcb0(1 < *(ulong *)(local_78 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(local_78 + 0x10) = uVar1 + 1;
          local_c8 = local_78;
          (*pcVar15)(local_78 + uVar1 * lVar11 + uVar12,local_d0,lVar3);
        }
        else {
LAB_1001918cc:
          (**(code **)(lVar13 + 8))(puVar14,lVar3);
        }
        uVar16 = uVar16 + 1;
        lVar11 = local_b0;
      } while (local_a0 != uVar16);
    }
    _swift_bridgeObjectRelease();
    (**(code **)(lVar13 + 8))(lVar11,lVar3);
    puVar14 = local_c8;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar14);
}

