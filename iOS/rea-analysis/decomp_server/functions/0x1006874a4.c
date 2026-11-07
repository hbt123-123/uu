// rea decompile_all
// name: FUN_1006874a4
// address: 0x1006874a4
// body: available
// range: 0x1006874a4-0x10068752f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068752c to 0x10068e120 FUN_10068e120 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006874a4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined *local_38;
  
  if (*(char *)(unaff_x20 + 0x31) == '\x04') {
    lVar2 = *(long *)(unaff_x20 + 8);
    puVar1 = *(undefined **)(lVar2 + 0x10);
    __sSD15minimumCapacitySDyxq_GSi_tcfC
              (puVar1,PTR___sSSN_1009957f8,&DAT_1009e6360,PTR___sSSSHsWP_100995808);
    local_38 = puVar1;
    FUN_1006826a0(lVar2,&local_38);
    return local_38;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_10068e120(PTR___swiftEmptyArrayStorage_100995ea0);
  return puVar1;
}

