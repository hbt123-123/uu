// rea decompile_all
// name: FUN_1003baa98
// address: 0x1003baa98
// body: available
// range: 0x1003baa98-0x1003baafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003baa98(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x20))
            (uVar4 + 0x10 + (long)puVar1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 0x10 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}

