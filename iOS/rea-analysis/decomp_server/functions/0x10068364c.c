// rea decompile_all
// name: FUN_10068364c
// address: 0x10068364c
// body: available
// range: 0x10068364c-0x1006836d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10068364c(undefined8 param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  
  if (((long)param_2 < 0) || (1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) <= (long)param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006836cc);
    (*pcVar4)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 6) * 8 + 0x40) >> (param_2 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006836d0);
    (*pcVar4)();
  }
  if (*(int *)(param_5 + 0x24) == param_3) {
    pauVar1 = (undefined1 (*) [16])(*(long *)(param_5 + 0x30) + param_2 * 0x10);
    uVar2 = *(undefined8 *)(*pauVar1 + 8);
    auVar3 = *pauVar1;
    FUN_10003e8bc(*(long *)(param_5 + 0x38) + param_2 * 0x20,param_1);
    _swift_bridgeObjectRetain(uVar2);
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006836d4);
  (*pcVar4)();
}

