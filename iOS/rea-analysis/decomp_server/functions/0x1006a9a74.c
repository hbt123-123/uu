// rea decompile_all
// name: FUN_1006a9a74
// address: 0x1006a9a74
// body: available
// range: 0x1006a9a74-0x1006a9adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1006a9a74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  puVar1 = (void *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar1 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar2 = (void *)*param_3;
  uVar6 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar2 = param_3;
    uVar6 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  sVar3 = uVar6;
  if (uVar5 <= uVar6) {
    sVar3 = uVar5;
  }
  iVar7 = _memcmp(puVar1,puVar2,sVar3);
  bVar4 = uVar5 < uVar6;
  if (iVar7 != 0) {
    bVar4 = iVar7 < 0;
  }
  return bVar4;
}

