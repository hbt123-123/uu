// rea decompile_all
// name: FUN_10037ff10
// address: 0x10037ff10
// body: available
// range: 0x10037ff10-0x10037ffaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037ff10(void)

{
  void *pvVar1;
  long *plVar2;
  long local_38;
  
  if (DAT_100b366d8 == 0) {
    return;
  }
  local_38 = DAT_100b366d8;
  FUN_100392994();
  plVar2 = *(long **)((long)DAT_100b366d0 + 0x10);
  if (plVar2 != (long *)0x0) {
    do {
      pvVar1 = (void *)plVar2[5];
      FUN_10037ffc4(pvVar1,1);
      FUN_10037f730(pvVar1,0);
      if (pvVar1 != (void *)0x0) {
        FUN_10037f5f0();
        operator_delete(pvVar1);
      }
      plVar2[5] = 0;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
    if (DAT_100b366d0 == (void *)0x0) goto LAB_10037ff90;
  }
  pvVar1 = DAT_100b366d0;
  FUN_100385cf8();
  operator_delete(pvVar1);
LAB_10037ff90:
  DAT_100b366d0 = (void *)0x0;
  FUN_100385098(&local_38);
  return;
}

