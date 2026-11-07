// rea decompile_all
// name: FUN_1001a7bfc
// address: 0x1001a7bfc
// body: available
// range: 0x1001a7bfc-0x1001a7ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001a7bfc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  FUN_10003f030(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001a7ca4);
      (*pcVar1)();
    }
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    _swift_continuation_throwingResume(lVar4);
  }
  else {
    puVar3 = &DAT_100a75b40;
    FUN_100004bb4(&DAT_100a75b40,&DAT_100809bd0);
    plVar2 = (long *)PTR___ss5ErrorWS_100995c48;
    _swift_allocError();
    *plVar2 = param_3;
    _swift_continuation_throwingResumeWithError(lVar4,puVar3);
  }
  return;
}

