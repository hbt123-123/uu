// rea decompile_all
// name: FUN_1007ae5bc
// address: 0x1007ae5bc
// body: available
// range: 0x1007ae5bc-0x1007ae6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007ae5bc(vm_address_t param_1,vm_address_t param_2,ulong param_3)

{
  undefined *puVar1;
  kern_return_t kVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  vm_size_t local_68;
  
  puVar1 = PTR__mach_task_self__1009954c8;
  local_68 = 0;
  kVar2 = _vm_read_overwrite(*(vm_map_t *)PTR__mach_task_self__1009954c8,param_1,1,param_2,&local_68
                            );
  if (kVar2 == 0 && (uint)local_68 == 1) {
    if (1 < (int)param_3) {
      lVar8 = param_1 + (param_3 & 0xffffffff);
      uVar6 = 0;
      uVar5 = param_3;
      lVar3 = lVar8;
      uVar9 = param_3 & 0xffffffff;
      do {
        param_3 = uVar6;
        local_68 = 0;
        uVar6 = uVar9 & 0xffffffff;
        kVar2 = _vm_read_overwrite(*(vm_map_t *)puVar1,param_1,uVar6,param_2,&local_68);
        if (kVar2 != 0) {
          local_68._0_4_ = 0;
        }
        uVar4 = (uint)uVar5;
        if ((uint)local_68 == uVar4) {
          param_3 = (ulong)((int)param_3 + uVar4);
          param_2 = param_2 + uVar6;
          param_1 = param_1 + uVar6;
          lVar3 = lVar8 - param_1;
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          lVar7 = param_1 + (lVar3 >> 1);
        }
        else {
          if (uVar4 < 2) {
            return param_3;
          }
          lVar7 = param_1 + (uVar9 >> 1 & 0x7fffffff);
          lVar8 = lVar3;
        }
        uVar5 = lVar7 - param_1;
        uVar6 = param_3;
        lVar3 = lVar7;
        uVar9 = uVar5;
      } while (0 < (int)uVar5);
    }
  }
  else {
    param_3 = 0;
  }
  return param_3;
}

