// rea decompile_all
// name: FUN_100605074
// address: 0x100605074
// body: available
// range: 0x100605074-0x1006052af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006052a8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100605074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  FUN_1006032a4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  local_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = lVar2;
  _swift_retain(param_4);
  FUN_100602aec(param_1);
  uVar3 = 0;
  FUN_100602d8c(0);
  uVar4 = param_1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar3);
  _swift_bridgeObjectRelease(param_1);
  puVar5 = (undefined1 *)0x0;
  _FSEventStreamCreate(0,0,FUN_100602d74,&local_80,uVar4,0xffffffff,0x13);
  if (puVar5 == (undefined1 *)0x0) {
    FUN_100603214();
    _swift_allocError(&DAT_1009ddb58,puVar5,0,0);
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    _swift_willThrow();
  }
  else {
    *(undefined1 **)(lVar2 + 0x10) = puVar5;
    _FSEventStreamSetDispatchQueue(puVar5,param_5);
    puVar5 = *(undefined1 **)(lVar2 + 0x10);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006052b0);
      (*pcVar1)();
    }
    _FSEventStreamStart();
    if ((int)puVar5 == 0) {
      FUN_100603214();
      _swift_allocError(&DAT_1009ddb58,puVar5,0,0);
      *puVar5 = 1;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 0;
      _swift_willThrow();
    }
    else {
      if (DAT_100aafa58 != -1) {
        _swift_once(&DAT_100aafa58,FUN_100605508);
      }
      _swift_beginAccess(&DAT_100aafee8,&local_80,0x21,0);
      _swift_retain(lVar2);
      uVar3 = DAT_100aafee8;
      _swift_isUniquelyReferenced_nonNull_native(DAT_100aafee8);
      uVar4 = DAT_100aafee8;
      DAT_100aafee8 = 0x8000000000000000;
      FUN_100605948(lVar2,param_2,uVar3);
      DAT_100aafee8 = uVar4;
      _swift_endAccess(&local_80);
    }
  }
  _swift_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

