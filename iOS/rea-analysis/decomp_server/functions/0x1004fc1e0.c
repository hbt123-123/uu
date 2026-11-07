// rea decompile_all
// name: FUN_1004fc1e0
// address: 0x1004fc1e0
// body: available
// range: 0x1004fc1e0-0x1004fc26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1004fc1e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x20))();
  lVar1 = *(long *)(lVar5 + 0x40);
  lVar5 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar5 + 7U & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  uVar6 = puVar4[1];
  uVar3 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  puVar2[4] = puVar4[4];
  puVar2[1] = uVar6;
  *puVar2 = uVar3;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar4 = (undefined8 *)(lVar5 + 0x37U & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + 0x37U & 0xfffffffffffffff8);
  uVar3 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar4 = uVar3;
  return param_1;
}

