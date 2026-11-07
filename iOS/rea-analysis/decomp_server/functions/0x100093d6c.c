// rea decompile_all
// name: FUN_100093d6c
// address: 0x100093d6c
// body: available
// range: 0x100093d6c-0x100093e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100093d6c(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_1 + 0x20);
  FUN_10003f030(plVar3,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar3;
  if (param_5 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100093e64);
      (*pcVar1)();
    }
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100093e68);
      (*pcVar1)();
    }
    if (param_4 == 0) {
      param_4 = 0;
    }
    else {
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (param_4,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
                 PTR___ss11AnyHashableVSHsWP_100995ad8);
    }
    plVar3 = *(long **)(*(long *)(lVar4 + 0x40) + 0x28);
    *plVar3 = param_2;
    plVar3[1] = param_3;
    plVar3[2] = param_4;
    _swift_continuation_throwingResume(lVar4);
  }
  else {
    puVar2 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    plVar3 = (long *)PTR___ss5ErrorWS_100995c48;
    _swift_allocError();
    *plVar3 = param_5;
    _swift_continuation_throwingResumeWithError(lVar4,puVar2);
  }
  return;
}

