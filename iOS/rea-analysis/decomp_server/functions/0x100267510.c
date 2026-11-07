// rea decompile_all
// name: FUN_100267510
// address: 0x100267510
// body: available
// range: 0x100267510-0x1002675ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100267510(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(undefined2 *)(param_2 + 2);
  lVar1 = *(long *)(param_3 + 0x20);
  FUN_10003f030(param_3,*(undefined8 *)(param_3 + 0x18));
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_1000efc08(auStack_88);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  (**(code **)(lVar1 + 0x20))();
  FUN_10003f094(auStack_88);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(char *)(param_1 + 2) = (char)uVar4;
  *(byte *)((long)param_1 + 0x11) = (byte)((ushort)uVar4 >> 8) & 1;
  return;
}

