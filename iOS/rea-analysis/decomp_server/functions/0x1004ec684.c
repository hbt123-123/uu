// rea decompile_all
// name: FUN_1004ec684
// address: 0x1004ec684
// body: available
// range: 0x1004ec684-0x1004ec6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ec684(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                  code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001004ec6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*unaff_x20,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],*param_1,
             *(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return;
}

