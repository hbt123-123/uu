// rea decompile_all
// name: FUN_1000f8d5c
// address: 0x1000f8d5c
// body: available
// range: 0x1000f8d5c-0x1000f8dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000f8dd8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f8d5c(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  puVar2 = *(ulong **)(DAT_100b360a8 + 0x50);
  if (*(char *)((long)puVar2 + 0x11) == '\x01') {
    *(undefined1 *)((long)puVar2 + 0x11) = 0;
    puVar1 = puVar2;
    _swift_retain();
    FUN_1003b2720();
    uVar3 = *puVar1;
    _swift_retain(uVar3);
    FUN_10039a3a8(0);
    _swift_release();
    FUN_10000e0f4();
    if ((uVar3 & 1) != 0) {
      FUN_10000df74(0);
    }
    _swift_release(puVar2);
    return;
  }
  return;
}

