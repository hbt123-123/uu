// rea decompile_all
// name: FUN_100385670
// address: 0x100385670
// body: available
// range: 0x100385670-0x1003856df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100385670(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  bVar5 = *(byte *)((long)param_2 + 0x17);
  sVar1 = param_2[1];
  if (-1 < (char)bVar5) {
    sVar1 = (ulong)bVar5;
  }
  bVar6 = *(byte *)((long)param_3 + 0x17);
  sVar2 = param_3[1];
  if (-1 < (char)bVar6) {
    sVar2 = (ulong)bVar6;
  }
  if (sVar1 == sVar2) {
    puVar3 = (void *)*param_2;
    if (-1 < (char)bVar5) {
      puVar3 = param_2;
    }
    puVar4 = (void *)*param_3;
    if (-1 < (char)bVar6) {
      puVar4 = param_3;
    }
    iVar7 = _memcmp(puVar3,puVar4,sVar1);
    return iVar7 == 0;
  }
  return false;
}

