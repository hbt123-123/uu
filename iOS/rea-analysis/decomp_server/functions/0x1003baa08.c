// rea decompile_all
// name: FUN_1003baa08
// address: 0x1003baa08
// body: available
// range: 0x1003baa08-0x1003baa97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003baa08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  uVar3 = puVar4[1];
  puVar4[1] = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x18))
            (uVar2 + 0x10 + (long)puVar4 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 0x10 + (long)puVar5 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}

