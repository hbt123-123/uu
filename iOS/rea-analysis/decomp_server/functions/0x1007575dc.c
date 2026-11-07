// rea decompile_all
// name: SentryCrashReportFilterPassthrough::filterReports:onCompletion:
// address: 0x1007575dc
// body: available
// range: 0x1007575dc-0x1007575fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterPassthrough::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007575f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    return;
  }
  return;
}

