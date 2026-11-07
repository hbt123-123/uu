// rea decompile_all
// name: FUN_100693568
// address: 0x100693568
// body: available
// range: 0x100693568-0x100693707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_100693568(uint *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar2 = PTR___DefaultRuneLocale_100995488;
  uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
  uVar1 = *(ulong *)(param_1 + 2);
  puVar6 = *(uint **)param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = uVar4;
    puVar6 = param_1;
  }
  if (uVar1 != 0) {
    do {
      uVar3 = *puVar6;
      if (uVar3 < 0x80) {
        uVar3 = *(uint *)(puVar2 + (ulong)uVar3 * 4 + 0x3c) & 0x4000;
      }
      else {
        uVar3 = ___maskrune(uVar3,0x4000);
        uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar3 == 0) break;
      puVar6 = puVar6 + 1;
      uVar1 = *(ulong *)(param_1 + 2);
      puVar5 = *(uint **)param_1;
      if (-1 < (char)uVar4) {
        uVar1 = uVar4;
        puVar5 = param_1;
      }
    } while (puVar6 != puVar5 + uVar1);
  }
  if ((uint)uVar4 >> 7 == 0) {
    if (puVar6 != param_1 + uVar4) {
LAB_100693624:
      std::wstring::erase((ulong)param_1,0);
      uVar1 = *(ulong *)(param_1 + 2);
      puVar6 = *(uint **)param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar6 = param_1;
      }
      puVar6 = puVar6 + uVar1;
      puVar7 = puVar6;
      do {
        puVar7 = puVar7 + -1;
        uVar3 = *puVar7;
        if (uVar3 < 0x80) {
          uVar3 = *(uint *)(puVar2 + (ulong)uVar3 * 4 + 0x3c) & 0x4000;
        }
        else {
          uVar3 = ___maskrune(uVar3,0x4000);
        }
        if (uVar3 == 0) {
          puVar5 = *(uint **)param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            puVar5 = param_1;
          }
          std::wstring::erase((ulong)param_1,(long)puVar6 - (long)puVar5 >> 2);
          return param_1;
        }
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          puVar5 = *(uint **)param_1;
          if (puVar7 == puVar5) goto LAB_1006936ec;
        }
        else if (puVar7 == param_1) break;
        puVar6 = puVar6 + -1;
      } while( true );
    }
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  else {
    puVar5 = *(uint **)param_1;
    if (puVar6 != puVar5 + *(long *)(param_1 + 2)) goto LAB_100693624;
LAB_1006936ec:
    *puVar5 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

