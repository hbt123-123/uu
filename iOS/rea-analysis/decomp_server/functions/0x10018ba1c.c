// rea decompile_all
// name: FUN_10018ba1c
// address: 0x10018ba1c
// body: available
// range: 0x10018ba1c-0x10018bad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018ba1c(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    thunk_FUN_1001a2c34();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_100064fc0();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      FUN_10006cc48(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar2);
    lVar4 = *unaff_x20;
    FUN_10006208c(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}

