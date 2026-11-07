// rea decompile_all
// name: FUN_1007ae524
// address: 0x1007ae524
// body: available
// range: 0x1007ae524-0x1007ae5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1007ae524(vm_address_t param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  kern_return_t kVar3;
  int iVar4;
  vm_size_t local_48;
  
  puVar2 = PTR__mach_task_self__1009954c8;
  do {
    iVar4 = param_2;
    if (iVar4 < 1) break;
    iVar1 = iVar4;
    if (0x27ff < iVar4) {
      iVar1 = 0x2800;
    }
    local_48 = 0;
    kVar3 = _vm_read_overwrite(*(vm_map_t *)puVar2,param_1,(long)iVar1,0x100b2e350,&local_48);
    if (kVar3 != 0) {
      local_48._0_4_ = 0;
    }
    param_2 = iVar4 - iVar1;
  } while ((int)local_48 == iVar1);
  return iVar4 == 0;
}

