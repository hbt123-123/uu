// rea decompile_all
// name: FUN_10060280c
// address: 0x10060280c
// body: available
// range: 0x10060280c-0x10060298b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100602988 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10060280c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  local_90[0] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  _swift_retain(param_6);
  uVar1 = param_2;
  FUN_100602aec(param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar2 = 0;
  FUN_100602d8c(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
  puVar4 = (undefined1 *)0x0;
  _FSEventStreamCreate(param_1,0,FUN_100602d74,local_90,uVar3,param_3,param_4 | 1);
  if (puVar4 == (undefined1 *)0x0) {
    FUN_100603214();
    _swift_allocError(&DAT_1009ddb58,puVar4,0,0);
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_willThrow();
    _swift_release(unaff_x20);
    _swift_release(param_6);
  }
  else {
    _swift_release(param_6);
    *(undefined1 **)(unaff_x20 + 0x10) = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

