// rea decompile_all
// name: FUN_1006a28e0
// address: 0x1006a28e0
// body: available
// range: 0x1006a28e0-0x1006a290f inclusive
// range: 0x1006a2944-0x1006a294b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1006a28e0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  bVar5 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar5) {
    uVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar2 = (ulong)bVar6;
  }
  if (uVar1 == uVar2) {
    puVar3 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar3 = param_2;
    }
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar5) {
      puVar4 = param_1;
    }
    uVar7 = _memcmp(puVar3,puVar4,uVar1);
    return uVar7 >> 0x1f;
  }
  return (uint)(uVar2 < uVar1);
}

