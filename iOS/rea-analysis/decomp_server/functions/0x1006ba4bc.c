// rea decompile_all
// name: FUN_1006ba4bc
// address: 0x1006ba4bc
// body: available
// range: 0x1006ba4bc-0x1006ba51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006ba4bc(void)

{
  void *pvVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  pvVar1 = (void *)0x478;
  FUN_1006b17b4(0x478,&local_38);
  if (pvVar1 != (void *)0x0) {
    _bzero(pvVar1,0x478);
    *(undefined4 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x1f8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x200) = 0;
    *(undefined8 *)((long)pvVar1 + 0x1f0) = 0;
    FUN_1006b7320(pvVar1,2);
  }
  return pvVar1;
}

