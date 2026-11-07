// rea decompile_all
// name: FUN_1007889ec
// address: 0x1007889ec
// body: available
// range: 0x1007889ec-0x100788a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100788a60 to 0x100788a64 FUN_100788a64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007889ec(void)

{
  undefined8 uVar1;
  
  if (DAT_100b2e0f0 != '\0') {
    DAT_100b2e0c8 = 1;
    DAT_100b2e0b8 = 0;
    DAT_100b2e0c0 = 0;
    if (DAT_100b2e0cc == '\0') {
      DAT_100b2e0b0 = CONCAT44((int)((ulong)DAT_100b2e0b0 >> 0x20) + 1,(int)DAT_100b2e0b0 + 1);
    }
    else {
      DAT_100b2e0a0 = 0;
      DAT_100b2e0a8 = 0;
      DAT_100b2e0b0 = 0x100000001;
    }
    DAT_100b2e0d8 = 0;
    DAT_100b2e0e8._1_1_ = 1;
    uVar1 = DAT_100b2e098;
    FUN_100788a64(DAT_100b2e098);
    return uVar1;
  }
  return 0;
}

