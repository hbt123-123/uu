// rea decompile_all
// name: FUN_1003ba984
// address: 0x1003ba984
// body: available
// range: 0x1003ba984-0x1003baa07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003ba984(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  lVar4 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar4 + -8);
  uVar5 = (ulong)*(byte *)(lVar3 + 0x50);
  pcVar6 = *(code **)(lVar3 + 0x10);
  _swift_bridgeObjectRetain();
  (*pcVar6)(uVar5 + 0x10 + (long)puVar1 & (uVar5 ^ 0xffffffffffffffff),
            uVar5 + 0x10 + (long)puVar2 & (uVar5 ^ 0xffffffffffffffff),lVar4);
  return param_1;
}

