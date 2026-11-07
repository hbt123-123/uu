// rea decompile_all
// name: thunk_FUN_100515e44
// address: 0x100515bd4
// body: available
// range: 0x100515bd4-0x100515bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_100515e44(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x20))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar3 = puVar1[4];
  uVar7 = *puVar1;
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  puVar2[1] = puVar1[1];
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[4] = uVar3;
  return param_1;
}

