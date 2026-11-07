// rea decompile_all
// name: FUN_1006790d8
// address: 0x1006790d8
// body: available
// range: 0x1006790d8-0x10067911b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1006790d8(undefined1 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = *param_2;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100679118);
    (*pcVar1)();
  }
  if (uVar2 < *(ulong *)(*(long *)(*unaff_x20 + 0x10) + 0x10)) {
    *param_1 = *(undefined1 *)(*(long *)(*unaff_x20 + 0x10) + uVar2 + 0x20);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = FUN_100008290;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067911c);
  (*pcVar1)();
}

