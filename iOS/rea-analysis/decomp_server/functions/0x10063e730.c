// rea decompile_all
// name: FUN_10063e730
// address: 0x10063e730
// body: available
// range: 0x10063e730-0x10063e7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10063e730(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  puVar1 = param_1;
  FUN_10063d9ac();
  if (*(long *)(lVar3 + 0x80) == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    puVar2 = puVar1;
    FUN_100572fcc();
    _swift_bridgeObjectRelease();
    if (((ulong)puVar2 & 1) != 0) {
      _swift_unknownObjectRetain(param_1);
      return param_1;
    }
  }
  FUN_10063d688();
  _swift_allocError(&DAT_1009e2e18,puVar1,0,0);
  *puVar1 = 1;
  _swift_willThrow();
  return param_1;
}

