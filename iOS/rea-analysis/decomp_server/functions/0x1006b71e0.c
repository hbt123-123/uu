// rea decompile_all
// name: FUN_1006b71e0
// address: 0x1006b71e0
// body: available
// range: 0x1006b71e0-0x1006b731f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006b71e0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (*(int *)(param_1 + 0x428) != 0) {
    return 0xffffffffffffffc4;
  }
  uStack_68 = *(undefined8 *)(param_1 + 0x1f8);
  local_70 = *(undefined8 *)(param_1 + 0x1f0);
  local_60 = *(undefined8 *)(param_1 + 0x200);
  FUN_1006b1828(*(undefined8 *)(param_1 + 0x430),&local_70);
  uVar4 = *(ulong *)(param_1 + 0x450);
  if (uVar4 != 0) {
    uVar7 = *(undefined8 *)(uVar4 + 0x1328);
    uVar6 = *(undefined8 *)(uVar4 + 0x1320);
    uVar2 = *(undefined8 *)(uVar4 + 0x1330);
    puVar3 = (ulong *)(uVar4 + 0x18);
    uVar1 = *puVar3;
    if (uVar4 < uVar1) {
      *(undefined8 *)(uVar4 + 0x40) = 0;
      *(undefined8 *)(uVar4 + 0x38) = 0;
      *(undefined8 *)(uVar4 + 0x50) = 0;
      *(undefined8 *)(uVar4 + 0x48) = 0;
      *(undefined8 *)(uVar4 + 0x20) = 0;
      *puVar3 = 0;
      *(undefined8 *)(uVar4 + 0x30) = 0;
      *(undefined8 *)(uVar4 + 0x28) = 0;
      uStack_68 = *(undefined8 *)(uVar4 + 0x1328);
      local_70 = *(undefined8 *)(uVar4 + 0x1320);
      local_60 = *(undefined8 *)(uVar4 + 0x1330);
      FUN_1006b1828(uVar1,&local_70);
    }
    else {
      uVar5 = *(ulong *)(uVar4 + 0x20);
      *(undefined8 *)(uVar4 + 0x40) = 0;
      *(undefined8 *)(uVar4 + 0x38) = 0;
      *(undefined8 *)(uVar4 + 0x50) = 0;
      *(undefined8 *)(uVar4 + 0x48) = 0;
      *(undefined8 *)(uVar4 + 0x20) = 0;
      *puVar3 = 0;
      *(undefined8 *)(uVar4 + 0x30) = 0;
      *(undefined8 *)(uVar4 + 0x28) = 0;
      uStack_68 = *(undefined8 *)(uVar4 + 0x1328);
      local_70 = *(undefined8 *)(uVar4 + 0x1320);
      local_60 = *(undefined8 *)(uVar4 + 0x1330);
      FUN_1006b1828(uVar1,&local_70);
      if (uVar4 <= uVar5) goto LAB_1006b72e0;
    }
    local_70 = uVar6;
    uStack_68 = uVar7;
    local_60 = uVar2;
    FUN_1006b1828(uVar4,&local_70);
  }
LAB_1006b72e0:
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = param_2;
  *(undefined8 *)(param_1 + 0x468) = param_3;
  *(undefined4 *)(param_1 + 0x470) = param_4;
  return 0;
}

