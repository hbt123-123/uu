// rea decompile_all
// name: FUN_1006052b0
// address: 0x1006052b0
// body: available
// range: 0x1006052b0-0x10060536b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006052b0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    FUN_1003618e4();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_100605584();
      }
      _swift_release(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      FUN_100361914(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar2);
    lVar4 = *unaff_x20;
    FUN_100605948(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}

