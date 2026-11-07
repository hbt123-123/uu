// rea decompile_all
// name: FUN_100060710
// address: 0x100060710
// body: available
// range: 0x100060710-0x10006076f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100060710(ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined4 *)(*(long *)(param_7 + 0x30) + param_1 * 4) = param_2;
  puVar2 = (undefined8 *)(*(long *)(param_7 + 0x38) + param_1 * 0x20);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  *(byte *)(puVar2 + 2) = (byte)param_5 & 1;
  *(int *)((long)puVar2 + 0x14) = (int)((ulong)param_5 >> 0x20);
  *(byte *)(puVar2 + 3) = param_6 & 1;
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100060770);
  (*pcVar3)();
}

