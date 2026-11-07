// rea decompile_all
// name: FUN_100515ea8
// address: 0x100515ea8
// body: available
// range: 0x100515ea8-0x100515f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100515ea8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar2 + 0x28))();
  lVar2 = *(long *)(lVar2 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar2 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar2 + param_2 & 0xfffffffffffffff8);
  FUN_10003f094(puVar3);
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  uVar7 = puVar1[3];
  uVar6 = puVar1[2];
  puVar3[4] = puVar1[4];
  puVar3[1] = uVar5;
  *puVar3 = uVar4;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  return param_1;
}

