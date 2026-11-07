// rea decompile_all
// name: FUN_1006b6ec4
// address: 0x1006b6ec4
// body: available
// range: 0x1006b6ec4-0x1006b7093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b6ec4(long param_1,void *param_2,void *param_3,int param_4,undefined4 param_5)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (*(int *)(param_1 + 0x428) != 0) {
    return 0xffffffffffffffc4;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    return 0xffffffffffffffc0;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x1f8);
  local_70 = *(undefined8 *)(param_1 + 0x1f0);
  local_60 = *(undefined8 *)(param_1 + 0x200);
  FUN_1006b1828(*(undefined8 *)(param_1 + 0x430),&local_70);
  uVar5 = *(ulong *)(param_1 + 0x450);
  if (uVar5 != 0) {
    uVar8 = *(undefined8 *)(uVar5 + 0x1328);
    uVar7 = *(undefined8 *)(uVar5 + 0x1320);
    uVar3 = *(undefined8 *)(uVar5 + 0x1330);
    puVar4 = (ulong *)(uVar5 + 0x18);
    uVar1 = *puVar4;
    if (uVar5 < uVar1) {
      *(undefined8 *)(uVar5 + 0x40) = 0;
      *(undefined8 *)(uVar5 + 0x38) = 0;
      *(undefined8 *)(uVar5 + 0x50) = 0;
      *(undefined8 *)(uVar5 + 0x48) = 0;
      *(undefined8 *)(uVar5 + 0x20) = 0;
      *puVar4 = 0;
      *(undefined8 *)(uVar5 + 0x30) = 0;
      *(undefined8 *)(uVar5 + 0x28) = 0;
      uStack_68 = *(undefined8 *)(uVar5 + 0x1328);
      local_70 = *(undefined8 *)(uVar5 + 0x1320);
      local_60 = *(undefined8 *)(uVar5 + 0x1330);
      FUN_1006b1828(uVar1,&local_70);
    }
    else {
      uVar6 = *(ulong *)(uVar5 + 0x20);
      *(undefined8 *)(uVar5 + 0x40) = 0;
      *(undefined8 *)(uVar5 + 0x38) = 0;
      *(undefined8 *)(uVar5 + 0x50) = 0;
      *(undefined8 *)(uVar5 + 0x48) = 0;
      *(undefined8 *)(uVar5 + 0x20) = 0;
      *puVar4 = 0;
      *(undefined8 *)(uVar5 + 0x30) = 0;
      *(undefined8 *)(uVar5 + 0x28) = 0;
      uStack_68 = *(undefined8 *)(uVar5 + 0x1328);
      local_70 = *(undefined8 *)(uVar5 + 0x1320);
      local_60 = *(undefined8 *)(uVar5 + 0x1330);
      FUN_1006b1828(uVar1,&local_70);
      if (uVar5 <= uVar6) goto LAB_1006b6fe4;
    }
    local_70 = uVar7;
    uStack_68 = uVar8;
    local_60 = uVar3;
    FUN_1006b1828(uVar5,&local_70);
  }
LAB_1006b6fe4:
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  if ((param_2 != (void *)0x0) && (param_3 != (void *)0x0)) {
    if (param_4 != 1) {
      uStack_68 = *(undefined8 *)(param_1 + 0x1f8);
      local_70 = *(undefined8 *)(param_1 + 0x1f0);
      local_60 = *(undefined8 *)(param_1 + 0x200);
      pvVar2 = param_3;
      FUN_1006b17b4(param_3,&local_70);
      if (pvVar2 == (void *)0x0) {
        return 0xffffffffffffffc0;
      }
      _memcpy(pvVar2,param_2,(size_t)param_3);
      *(undefined8 *)(param_1 + 0x430) = pvVar2;
      param_2 = pvVar2;
    }
    *(void **)(param_1 + 0x438) = param_2;
    *(void **)(param_1 + 0x440) = param_3;
    *(undefined4 *)(param_1 + 0x448) = param_5;
  }
  return 0;
}

