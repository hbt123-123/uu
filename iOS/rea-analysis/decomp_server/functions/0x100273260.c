// rea decompile_all
// name: FUN_100273260
// address: 0x100273260
// body: available
// range: 0x100273260-0x100273437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100273434 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100273260(ID *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ID IVar4;
  long *plVar5;
  undefined *self;
  ID IVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,*(undefined8 *)(unaff_x20 + 0x20));
  local_50 = 0;
  IVar4 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     uVar3,4,&local_50);
  if (IVar4 != 0) {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(param_1,IVar4);
    _swift_unknownObjectRelease(IVar4);
    goto LAB_100273400;
  }
  uVar3 = local_50;
  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_50);
  plVar5 = (long *)0x0;
  _swift_willThrow();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = (uint)(*(ulong *)(unaff_x20 + 0x20) >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar7 == 0) {
      if ((*(ulong *)(unaff_x20 + 0x20) & 0xff000000000000) == 0) {
LAB_10027336c:
        if ((param_2 & 1) == 0) {
          self = &_OBJC_CLASS___NSNull;
          _objc_allocWithZone();
          IVar4 = _objc_msgSend((ID)self,"init");
          IVar6 = 0;
          FUN_10004003c(0,&DAT_100a81868,&PTR__OBJC_CLASS___NSNull_100a659f8);
          param_1[3] = IVar6;
          _swift_errorRelease(uVar3);
          *param_1 = IVar4;
          goto LAB_100273400;
        }
      }
    }
    else if ((long)(int)lVar1 == lVar1 >> 0x20) goto LAB_10027336c;
  }
  else if ((uVar7 != 2) || (*(long *)(lVar1 + 0x10) == *(long *)(lVar1 + 0x18))) goto LAB_10027336c;
  FUN_100262084();
  _swift_allocError(&DAT_1009a8e98,plVar5,0,0);
  *plVar5 = unaff_x20;
  plVar5[1] = 0;
  *(undefined1 *)(plVar5 + 2) = 1;
  _swift_willThrow();
  _swift_retain();
  _swift_errorRelease(uVar3);
LAB_100273400:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

