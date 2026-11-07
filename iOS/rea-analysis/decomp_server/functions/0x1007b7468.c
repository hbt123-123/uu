// rea decompile_all
// name: FUN_1007b7468
// address: 0x1007b7468
// body: available
// range: 0x1007b7468-0x1007b74cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1007b7468(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long local_18;
  
  if (param_1 == 1) {
    auVar2._8_8_ = 0xe600000000000000;
    auVar2._0_8_ = 0x6d6f74737563;
    return auVar2;
  }
  if (param_1 == 0) {
    auVar3._8_8_ = 0xe600000000000000;
    auVar3._0_8_ = 0x746567646977;
    return auVar3;
  }
  local_18 = param_1;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&DAT_1009eaec0,&local_18,&DAT_1009eaec0,PTR___sSiN_100995968);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b74cc);
  (*pcVar1)();
}

