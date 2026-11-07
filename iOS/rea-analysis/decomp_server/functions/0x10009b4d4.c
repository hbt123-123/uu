// rea decompile_all
// name: FUN_10009b4d4
// address: 0x10009b4d4
// body: available
// range: 0x10009b4d4-0x10009bbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009bbb8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010009b798) */

undefined * FUN_10009b4d4(void)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 auStack_110 [16];
  ID aIStack_100 [2];
  ulong auStack_f0 [2];
  ID local_e0;
  ID local_d8;
  long local_d0;
  ulong local_c8;
  long local_c0;
  long lStack_b8;
  undefined *local_b0;
  char *local_a8;
  char *pcStack_a0;
  long local_98;
  code *local_90;
  long lStack_88;
  ID local_80;
  char *pcStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  local_c0 = *(long *)(lVar1 + -8);
  lStack_b8 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  uVar5 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_c8 = uVar5;
  __sSS10FoundationE8EncodingVMa();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar15 = uVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  lVar1 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar17 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar17 - extraout_x12;
  FUN_1003b2010();
  (**(code **)(lVar13 + 0x10))(lVar17,lVar1,lVar2);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar14,0x696765725f676f6c,0xec00000079727473);
  local_90 = *(code **)(lVar13 + 8);
  lStack_88 = lVar2;
  (*local_90)(lVar17,lVar2);
  pcVar11 = "defaultManager";
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  IVar4 = IVar3;
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(pcVar11);
  local_80 = 0;
  IVar4 = NSFileManager::contentsOfDirectoryAtPath_error_
                    (IVar3,"contentsOfDirectoryAtPath:error:",IVar4,&local_80);
  if (IVar4 == 0) {
    IVar4 = local_80;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_80);
    _swift_willThrow(0);
    _swift_errorRelease(IVar4);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar14 + -0x10) = lVar14;
    FUN_1003fb4bc(FUN_10009ffc4,lVar14 + -0x20,0xd000000000000093,0x800000010087fc10,
                  0xd000000000000011,0x80000001008803d0,0xa3,0);
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_d8 = IVar3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (IVar4,PTR___sSSN_1009957f8);
    lVar1 = *(long *)(IVar4 + 0x10);
    lVar2 = lVar14;
    local_e0 = IVar4;
    if (lVar1 == 0) {
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    else {
      local_a8 = "plicated registry ";
      pcStack_a0 = "rver11LogUploader";
      puVar16 = (undefined8 *)(IVar4 + 0x28);
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_d0 = lVar15;
      local_98 = lVar14;
      do {
        uVar5 = 0;
        IVar4 = puVar16[-1];
        pcVar11 = (char *)*puVar16;
        _swift_bridgeObjectRetain(pcVar11);
        __sSS9hasSuffixySbSSF(0x687461702e,0xe500000000000000,IVar4,pcVar11);
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar11);
        }
        else {
          IVar3 = IVar4;
          pcVar6 = pcVar11;
          __s10Foundation3URLV22appendingPathComponentyACSSF(lVar17);
          __s10Foundation3URLV4pathSSvg();
          (*local_90)(lVar17,lStack_88);
          __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar15);
          pcVar12 = pcVar6;
          __sSS10FoundationE14contentsOfFile8encodingS2Sh_SSAAE8EncodingVtKcfC(IVar3,pcVar6,lVar15);
          _swift_bridgeObjectRelease(pcVar6);
          uVar5 = local_c8;
          local_80 = IVar3;
          pcStack_78 = pcVar12;
          __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_c8);
          FUN_10009ff0c();
          uVar7 = uVar5;
          puVar10 = PTR___sSSN_1009957f8;
          __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
                    (uVar5,PTR___sSSN_1009957f8,pcVar6);
          (**(code **)(local_c0 + 8))(uVar5,lStack_b8);
          _swift_bridgeObjectRelease(pcVar12);
          uVar5 = uVar7 & 0xffffffffffff;
          if (((ulong)puVar10 & 0x2000000000000000) != 0) {
            uVar5 = (ulong)puVar10 >> 0x38 & 0xf;
          }
          if (uVar5 == 0) {
            _swift_bridgeObjectRelease(puVar10);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(ID *)(lVar14 + -0x10) = IVar4;
            *(char **)(lVar14 + -8) = pcVar11;
            FUN_1003fb48c(FUN_10009ffe0,lVar14 + -0x20,0xd000000000000093,
                          (ulong)pcStack_a0 | 0x8000000000000000,0xd000000000000011,
                          (ulong)local_a8 | 0x8000000000000000,0xaf,0);
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(IVar4,pcVar11);
            _swift_bridgeObjectRelease(pcVar11);
            pcVar11 = "stringByDeletingPathExtension";
            IVar4 = _objc_msgSend(IVar4,"stringByDeletingPathExtension");
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _swift_bridgeObjectRetain(pcVar11);
            _swift_bridgeObjectRetain(puVar10);
            puVar9 = local_b0;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar9 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_100034e40(0,*(long *)(local_b0 + 0x10) + 1,1);
              local_b0 = puVar9;
            }
            uVar5 = *(ulong *)(local_b0 + 0x10);
            if (*(ulong *)(local_b0 + 0x18) >> 1 <= uVar5) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_b0 + 0x18));
              FUN_100034e40(puVar9,uVar5 + 1,1,local_b0);
              local_b0 = puVar9;
            }
            *(ulong *)(local_b0 + 0x10) = uVar5 + 1;
            *(ID *)(local_b0 + uVar5 * 0x20 + 0x20) = IVar4;
            *(char **)(local_b0 + uVar5 * 0x20 + 0x28) = pcVar11;
            *(ulong *)(local_b0 + uVar5 * 0x20 + 0x30) = uVar7;
            *(undefined **)(local_b0 + uVar5 * 0x20 + 0x38) = puVar10;
            uVar8 = 0;
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
            *(ID *)(lVar14 + -0x20) = IVar4;
            *(char **)(lVar14 + -0x18) = pcVar11;
            *(ulong *)(lVar14 + -0x10) = uVar7;
            *(undefined **)(lVar14 + -8) = puVar10;
            FUN_1003fb48c(FUN_10009ffd4,lVar14 + -0x30,0xd000000000000093,
                          (ulong)pcStack_a0 | 0x8000000000000000,0xd000000000000011,
                          (ulong)local_a8 | 0x8000000000000000,0xb4,0);
            _swift_bridgeObjectRelease(puVar10);
          }
          _swift_bridgeObjectRelease(pcVar11);
          lVar2 = local_98;
          lVar15 = local_d0;
        }
        puVar16 = puVar16 + 2;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
    _swift_bridgeObjectRelease(local_e0);
    puVar9 = local_b0;
    puVar10 = local_b0;
    FUN_1000944ac(local_b0);
    _swift_bridgeObjectRelease(puVar9);
    lVar14 = lVar2;
  }
  (*local_90)(lVar14,lStack_88);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar10;
}

