// rea decompile_all
// name: FUN_1006930f8
// address: 0x1006930f8
// body: available
// range: 0x1006930f8-0x1006931e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_1006930f8(uint *param_1)

{
  ulong uVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  
  puVar3 = PTR___DefaultRuneLocale_100995488;
  uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
  uVar1 = *(ulong *)(param_1 + 2);
  puVar6 = *(uint **)param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = uVar5;
    puVar6 = param_1;
  }
  if (uVar1 != 0) {
    do {
      uVar4 = *puVar6;
      if (uVar4 < 0x80) {
        uVar4 = *(uint *)(puVar3 + (ulong)uVar4 * 4 + 0x3c) & 0x4000;
      }
      else {
        uVar4 = ___maskrune(uVar4,0x4000);
        uVar5 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar4 == 0) break;
      puVar6 = puVar6 + 1;
      uVar1 = *(ulong *)(param_1 + 2);
      puVar2 = *(uint **)param_1;
      if (-1 < (char)uVar5) {
        uVar1 = uVar5;
        puVar2 = param_1;
      }
    } while (puVar6 != puVar2 + uVar1);
  }
  if ((uint)uVar5 >> 7 == 0) {
    if (puVar6 == param_1 + uVar5) {
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      return param_1;
    }
  }
  else if (puVar6 == *(undefined4 **)param_1 + *(long *)(param_1 + 2)) {
    **(undefined4 **)param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  std::wstring::erase((ulong)param_1,0);
  return param_1;
}

