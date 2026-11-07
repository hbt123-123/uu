// rea decompile_all
// name: FUN_100605474
// address: 0x100605474
// body: available
// range: 0x100605474-0x100605507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100605474(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_38 [24];
  
  if (DAT_100aafa58 != -1) {
    _swift_once(&DAT_100aafa58,FUN_100605508);
  }
  puVar1 = auStack_38;
  _swift_beginAccess(&DAT_100aafee8,puVar1,0x20,0);
  uVar2 = (uint)puVar1;
  if (*(long *)(DAT_100aafee8 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1003618e4(param_1);
  }
  _swift_endAccess(auStack_38);
  return uVar2 & 1;
}

