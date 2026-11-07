// rea decompile_all
// name: FUN_100461a34
// address: 0x100461a34
// body: available
// range: 0x100461a34-0x100461a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100461a34(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  ulong in_x7;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = (uint)(in_x7 >> 0x3c) & 3;
  if (uVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100461a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(in_x6,in_x7 & 0xcfffffffffffffff);
    return;
  }
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100461a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(in_x4,in_x5);
    return;
  }
  return;
}

