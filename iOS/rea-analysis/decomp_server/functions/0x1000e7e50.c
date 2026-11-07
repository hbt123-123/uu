// rea decompile_all
// name: FUN_1000e7e50
// address: 0x1000e7e50
// body: available
// range: 0x1000e7e50-0x1000e7ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e7e50(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  FUN_1000e984c();
  lVar1 = *(long *)(lVar1 + -8);
  uVar3 = *param_1;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_10006f988();
  }
  uStack_38 = *(undefined8 *)(uVar3 + 0x10);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  local_40 = uVar3 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff));
  FUN_1000e8560(&local_40);
  *param_1 = uVar3;
  return;
}

