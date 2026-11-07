// rea decompile_all
// name: FUN_100060650
// address: 0x100060650
// body: available
// range: 0x100060650-0x1000606a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060650(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined4 *)(*(long *)(param_6 + 0x30) + param_1 * 4) = param_2;
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 0x18);
  *puVar3 = param_3;
  *(int *)(puVar3 + 1) = (int)param_4;
  *(int *)((long)puVar3 + 0xc) = (int)((ulong)param_4 >> 0x20);
  *(undefined4 *)(puVar3 + 2) = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000606a8);
  (*pcVar2)();
}

