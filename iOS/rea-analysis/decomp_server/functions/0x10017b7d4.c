// rea decompile_all
// name: FUN_10017b7d4
// address: 0x10017b7d4
// body: available
// range: 0x10017b7d4-0x10017b8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017b7d4(void)

{
  uint uVar1;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  code *in_stack_00000080;
  code *in_stack_00000088;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (uint)(in_stack_00000060 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      in_stack_00000060 = in_stack_00000060 & 0xcfffffffffffffff;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    in_stack_00000060 = in_stack_00000060 & 0xcfffffffffffffff;
  }
  (*in_stack_00000080)();
  (*in_stack_00000088)(in_stack_00000058,in_stack_00000060);
                    /* WARNING: Could not recover jumptable at 0x00010017b89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000068,in_stack_00000070,in_stack_00000078);
  return;
}

