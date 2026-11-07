// rea decompile_all
// name: FUN_10059655c
// address: 0x10059655c
// body: available
// range: 0x10059655c-0x100596627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059655c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    (*in_x3)(0);
    _swift_allocObject();
    (*in_x5)(uVar3,uVar2);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  }
  _swift_retain(uVar3);
  (*in_x6)();
  _swift_release(uVar3);
  return;
}

