// rea decompile_all
// name: FUN_1004f9834
// address: 0x1004f9834
// body: available
// range: 0x1004f9834-0x1004f9867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004f9864 to 0x1007df484 _swift_slowDealloc (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f9834(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1[3] + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return;
  }
  uVar2 = (ulong)uVar1 & 0xff;
  _swift_slowDealloc(*param_1,*(long *)(*(long *)(param_1[3] + -8) + 0x40) +
                              (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),uVar2 | 7);
  return;
}

