// rea decompile_all
// name: FUN_100387fd4
// address: 0x100387fd4
// body: available
// range: 0x100387fd4-0x100388047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100387fd4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_3a [26];
  
  plVar1 = *(long **)(param_2 + 0x10);
  if (plVar1 == (long *)0x0) {
    lVar2 = 4;
  }
  else {
    lVar2 = 4;
    do {
      lVar2 = lVar2 + (ulong)(*(int *)((long)plVar1 + 0x1c) + (uint)*(ushort *)(plVar1 + 3));
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  thunk_FUN_10037e7cc(auStack_3a,0);
  FUN_10037eac4(param_1,auStack_3a);
  *(long *)(param_1 + 0x20) = lVar2;
  thunk_FUN_10037edac(auStack_3a);
  return;
}

