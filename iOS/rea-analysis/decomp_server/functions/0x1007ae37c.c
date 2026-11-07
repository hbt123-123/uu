// rea decompile_all
// name: FUN_1007ae37c
// address: 0x1007ae37c
// body: available
// range: 0x1007ae37c-0x1007ae523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1007ae37c(vm_address_t param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  kern_return_t kVar3;
  long lVar4;
  undefined *data;
  int iVar5;
  ulong size;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  vm_size_t local_68;
  
  puVar2 = PTR__mach_task_self__1009954c8;
  iVar8 = param_2;
  iVar7 = param_2;
  if (0x2800 < param_2) {
    do {
      iVar6 = 0x2800;
      while (iVar7 = iVar8, 0 < iVar6) {
        iVar5 = iVar6;
        if (0x27ff < iVar6) {
          iVar5 = 0x2800;
        }
        local_68 = 0;
        kVar3 = _vm_read_overwrite(*(vm_map_t *)puVar2,param_1,(long)iVar5,0x100b2e350,&local_68);
        if (kVar3 != 0) {
          local_68._0_4_ = 0;
        }
        iVar6 = iVar6 - iVar5;
        if ((uint)local_68 != iVar5) goto LAB_1007ae440;
      }
      if (iVar6 != 0) break;
      param_1 = param_1 + 0x2800;
      iVar7 = iVar8 + -0x2800;
      bVar1 = 0x5000 < iVar8;
      iVar8 = iVar7;
    } while (bVar1);
  }
LAB_1007ae440:
  local_68 = 0;
  kVar3 = _vm_read_overwrite(*(vm_map_t *)puVar2,param_1,1,0x100b2e350,&local_68);
  iVar8 = 0;
  if (kVar3 == 0 && (uint)local_68 == 1) {
    uVar12 = 0x2800;
    lVar10 = param_1 + 0x2800;
    data = &DAT_100b2e350;
    lVar4 = lVar10;
    do {
      local_68 = 0;
      size = uVar12 & 0xffffffff;
      kVar3 = _vm_read_overwrite(*(vm_map_t *)puVar2,param_1,size,(vm_address_t)data,&local_68);
      if (kVar3 != 0) {
        local_68._0_4_ = 0;
      }
      uVar11 = (uint)uVar12;
      if ((uint)local_68 == uVar11) {
        iVar8 = iVar8 + uVar11;
        data = data + size;
        param_1 = param_1 + size;
        lVar4 = lVar10 - param_1;
        if (lVar4 < 0) {
          lVar4 = lVar4 + 1;
        }
        lVar9 = param_1 + (lVar4 >> 1);
      }
      else {
        if (uVar11 < 2) break;
        lVar9 = param_1 + (uVar12 >> 1 & 0x7fffffff);
        lVar10 = lVar4;
      }
      uVar12 = lVar9 - param_1;
      lVar4 = lVar9;
    } while (0 < (int)uVar12);
  }
  return (param_2 - iVar7) + iVar8;
}

