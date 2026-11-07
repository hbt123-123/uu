// rea decompile_all
// name: FUN_10033d270
// address: 0x10033d270
// body: available
// range: 0x10033d270-0x10033d30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_10033d270(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (*param_1 == 0) {
    if (lVar2 != 0) {
      lVar1 = param_2[1];
      *param_1 = lVar2;
      param_1[1] = lVar1;
      _swift_retain();
      goto LAB_10033d2d8;
    }
  }
  else {
    if (lVar2 != 0) {
      lVar1 = param_2[1];
      lVar3 = param_1[1];
      *param_1 = lVar2;
      param_1[1] = lVar1;
      _swift_retain();
      _swift_release(lVar3);
      goto LAB_10033d2d8;
    }
    _swift_release(param_1[1]);
  }
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
LAB_10033d2d8:
  param_1[2] = param_2[2];
  *(char *)(param_1 + 3) = (char)param_2[3];
  return param_1;
}

