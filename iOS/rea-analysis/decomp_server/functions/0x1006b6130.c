// rea decompile_all
// name: FUN_1006b6130
// address: 0x1006b6130
// body: available
// range: 0x1006b6130-0x1006b61d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006b6130(long *param_1)

{
  void *pvVar1;
  long local_40;
  long lStack_38;
  long local_30;
  
  if ((*param_1 == 0) != (param_1[1] == 0)) {
    return (void *)0x0;
  }
  lStack_38 = param_1[1];
  local_40 = *param_1;
  local_30 = param_1[2];
  pvVar1 = (void *)0x478;
  FUN_1006b17b4(0x478,&local_40);
  if (pvVar1 != (void *)0x0) {
    lStack_38 = param_1[1];
    local_40 = *param_1;
    local_30 = param_1[2];
    _bzero(pvVar1,0x478);
    *(long *)((long)pvVar1 + 0x1f8) = lStack_38;
    *(long *)((long)pvVar1 + 0x1f0) = local_40;
    *(long *)((long)pvVar1 + 0x200) = local_30;
    *(undefined4 *)((long)pvVar1 + 8) = 0;
    FUN_1006b7320(pvVar1,2);
  }
  return pvVar1;
}

