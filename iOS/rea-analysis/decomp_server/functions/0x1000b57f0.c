// rea decompile_all
// name: FUN_1000b57f0
// address: 0x1000b57f0
// body: available
// range: 0x1000b57f0-0x1000b5aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b5938 to 0x1007dbf50 _$sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000b5aa8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000b57f0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ID IVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  ID IVar10;
  long unaff_x22;
  long lVar11;
  code *pcVar12;
  ID IVar13;
  undefined8 uVar14;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = *(ulong *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
  __s10Foundation4DateVACycfC(uVar1);
  __s10Foundation4DateV18addingTimeIntervalyACSdF(uVar9,uVar14);
  pcVar12 = *(code **)(lVar4 + 8);
  *(code **)(unaff_x22 + 0x68) = pcVar12;
  (*pcVar12)(uVar1,uVar3);
  __s10Foundation4DateVACycfC(uVar1);
  uVar2 = uVar1;
  __s10Foundation4DateV1loiySbAC_ACtFZ(uVar1,uVar9);
  (*pcVar12)(uVar1,uVar3);
  if ((uVar2 & 1) == 0) {
LAB_1000b5a2c:
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(unaff_x22 + 0x68))(uVar3,*(undefined8 *)(unaff_x22 + 0x48));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001000b5a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))((uint)uVar2 & 1);
      return;
    }
    goto LAB_1000b5aa8;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  uVar3 = 0x65756c61565841;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65756c61565841,0xe700000000000000);
  _AXUIElementCopyAttributeValue(uVar9,uVar3,unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  if (((int)uVar9 == 0) && (lVar4 != 0)) {
    *(long *)(unaff_x22 + 0x28) = lVar4;
    _swift_unknownObjectRetain();
    lVar4 = unaff_x22 + 0x10;
    _swift_dynamicCast(lVar4,unaff_x22 + 0x28,PTR___syXlN_100995e80 + 8,PTR___sSSN_1009957f8,6);
    if ((int)lVar4 == 0) {
      IVar10 = *(ID *)(unaff_x22 + 0x20);
      if (IVar10 == 0) {
        lVar4 = 0;
      }
      else {
        _swift_unknownObjectRetain(IVar10);
        IVar6 = IVar10;
        _swift_dynamicCastObjCClass(IVar10,&_OBJC_CLASS___NSAttributedString);
        if (IVar6 != 0) {
          IVar13 = *(ID *)(unaff_x22 + 0x38);
          pcVar7 = "string";
          IVar6 = _objc_msgSend(IVar6,"string");
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          __sSS5countSivg(IVar6,pcVar7);
          _swift_bridgeObjectRelease(pcVar7);
          _swift_unknownObjectRelease(IVar10);
          _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x20));
          if (IVar6 == IVar13) goto LAB_1000b5a2c;
          goto LAB_1000b58d8;
        }
        _swift_unknownObjectRelease(IVar10);
        lVar4 = *(long *)(unaff_x22 + 0x20);
      }
      goto LAB_1000b58d4;
    }
    lVar11 = *(long *)(unaff_x22 + 0x38);
    lVar4 = *(long *)(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    __sSS5countSivg(lVar4,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x20));
    if (lVar4 == lVar11) goto LAB_1000b5a2c;
  }
  else {
LAB_1000b58d4:
    _swift_unknownObjectRelease(lVar4);
  }
LAB_1000b58d8:
  plVar5 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_100996068
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1000b5aac;
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lVar8) {
    __sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ(50000000);
    return;
  }
LAB_1000b5aa8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

