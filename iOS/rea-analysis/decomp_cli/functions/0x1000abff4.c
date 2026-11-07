// rea decompile_all
// name: FUN_1000abff4
// address: 0x1000abff4
// body: available
// range: 0x1000abff4-0x1000ac033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000abff4(undefined8 *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ac030);
    (*pcVar3)();
  }
  if (uVar4 < *(ulong *)(*param_3 + 0x10)) {
    lVar1 = *param_3 + uVar4 * 0x10;
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = *(undefined8 *)(lVar1 + 0x20);
    param_1[1] = uVar2;
    _swift_bridgeObjectRetain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000ac034);
  (*pcVar3)();
}

