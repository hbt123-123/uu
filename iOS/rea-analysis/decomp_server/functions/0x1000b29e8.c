// rea decompile_all
// name: FUN_1000b29e8
// address: 0x1000b29e8
// body: available
// range: 0x1000b29e8-0x1000b2adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b2a98 to 0x1000b2eb4 FUN_1000b2eb4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b29e8(void)

{
  long *plVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    FUN_1003fb45c(FUN_1000b2be0,0,0xd000000000000099,0x8000000100881de0,&DAT_d000000000000013,
                  0x8000000100882250,0x12d,0);
    plVar1 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1000b2ae0;
    FUN_1000b2eb4(0x401c000000000000,0x3ff0000000000000);
    return;
  }
  FUN_1003fb4ec(FUN_1000b2bb4,0,0xd000000000000099,0x8000000100881de0,&DAT_d000000000000013,
                0x8000000100882250,0x129,0);
                    /* WARNING: Could not recover jumptable at 0x0001000b2adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(4);
  return;
}

