// rea decompile_all
// name: FUN_1007c9ae4
// address: 0x1007c9ae4
// body: available
// range: 0x1007c9ae4-0x1007c9b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007c9ae4(ulong param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  ulong local_18;
  
  if (param_1 < 3) {
    auVar2._0_8_ = *(undefined8 *)(&DAT_100853008 + param_1 * 8);
    auVar2._8_8_ = *(undefined8 *)(&DAT_100853020 + param_1 * 8);
    return auVar2;
  }
  local_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&DAT_1009ebe10,&local_18,&DAT_1009ebe10,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c9b44);
  (*pcVar1)();
}

