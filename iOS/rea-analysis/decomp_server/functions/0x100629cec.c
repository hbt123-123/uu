// rea decompile_all
// name: FUN_100629cec
// address: 0x100629cec
// body: available
// range: 0x100629cec-0x100629d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100629cec(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_100660be4();
  if (param_1 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  puVar2 = param_1;
  FUN_100629f38();
  if ((long)param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100629d94);
    (*pcVar1)();
  }
  puVar5 = puVar2;
  FUN_100660be4();
  if (puVar5 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      puVar3 = puVar5;
      FUN_10065fa88();
      puVar4 = puVar3;
      FUN_100660be4();
      if ((long)puVar4 <= (long)puVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100629d90);
        (*pcVar1)();
      }
      *(undefined **)(puVar2 + (long)puVar5 * 8 + 0x20) = puVar3;
      if (param_1 + -1 == puVar5) {
        return puVar2;
      }
      FUN_100660be4();
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100629d6c);
  (*pcVar1)();
}

