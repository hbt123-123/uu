// rea decompile_all
// name: FUN_100687430
// address: 0x100687430
// body: available
// range: 0x100687430-0x1006874a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100687430(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 local_38;
  
  local_38 = 0;
  if (*(char *)(unaff_x20 + 0x31) == '\x04') {
    lVar2 = *(long *)(unaff_x20 + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    __sSD15minimumCapacitySDyxq_GSi_tcfC
              (uVar1,PTR___sSSN_1009957f8,&DAT_1009e6360,PTR___sSSSHsWP_100995808);
    local_38 = uVar1;
    FUN_1006826a0(lVar2,&local_38);
  }
  return local_38;
}

