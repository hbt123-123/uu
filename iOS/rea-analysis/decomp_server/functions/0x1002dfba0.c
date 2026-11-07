// rea decompile_all
// name: FUN_1002dfba0
// address: 0x1002dfba0
// body: available
// range: 0x1002dfba0-0x1002dfc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002dfba0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long local_30;
  undefined8 local_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar2 = param_2;
      _swift_bridgeObjectRetain(param_2);
      FUN_100280258();
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        _swift_retain(uVar1);
        _swift_bridgeObjectRelease(param_2);
        return uVar1;
      }
      _swift_bridgeObjectRelease(param_2);
    }
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar2 = param_2;
    }
    __ss17__CocoaDictionaryV6lookupyyXlSgyXlF(param_1,uVar2);
    if (param_1 != 0) {
      uVar1 = 0;
      local_30 = param_1;
      FUN_1002d4054(0);
      _swift_dynamicCast(&local_28,&local_30,PTR___syXlN_100995e80 + 8,uVar1,7);
      return local_28;
    }
  }
  return 0;
}

