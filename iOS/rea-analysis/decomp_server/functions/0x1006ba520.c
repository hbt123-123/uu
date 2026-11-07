// rea decompile_all
// name: FUN_1006ba520
// address: 0x1006ba520
// body: available
// range: 0x1006ba520-0x1006ba5bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1006ba520(long *param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if ((lVar1 == 0) == (lVar2 == 0)) {
    lVar4 = param_1[2];
    pvVar3 = (void *)0x478;
    local_48 = lVar1;
    lStack_40 = lVar2;
    local_38 = lVar4;
    FUN_1006b17b4(0x478,&local_48);
    if (pvVar3 != (void *)0x0) {
      _bzero(pvVar3,0x478);
      *(long *)((long)pvVar3 + 0x1f0) = lVar1;
      *(long *)((long)pvVar3 + 0x1f8) = lVar2;
      *(long *)((long)pvVar3 + 0x200) = lVar4;
      *(undefined4 *)((long)pvVar3 + 8) = 0;
      FUN_1006b7320(pvVar3,2);
      return pvVar3;
    }
  }
  return (void *)0x0;
}

