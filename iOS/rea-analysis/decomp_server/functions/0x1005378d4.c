// rea decompile_all
// name: FUN_1005378d4
// address: 0x1005378d4
// body: available
// range: 0x1005378d4-0x10053792f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005378d4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 local_40 [8];
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  if (param_1 != 0) {
    local_40[0] = *(undefined1 *)(unaff_x20 + 0x30);
    local_38 = param_1;
    lStack_30 = param_1;
    local_28 = param_2;
    (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x48))
              (local_40,&DAT_1009ce770,&PTR_PTR_1009ce788,*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100537930);
  (*pcVar1)();
}

