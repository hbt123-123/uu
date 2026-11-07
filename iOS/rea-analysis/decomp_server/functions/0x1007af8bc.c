// rea decompile_all
// name: FUN_1007af8bc
// address: 0x1007af8bc
// body: available
// range: 0x1007af8bc-0x1007af96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1007af8bc(undefined8 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  
  if (((ulong)param_1 & 1) == 0) {
    puVar3 = (undefined *)*param_1;
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = (undefined *)((ulong)puVar3 & 0xffffffff8);
    }
    uVar4 = *(ulong *)((*(ulong *)(puVar3 + 0x20) & 0x7ffffffffff8) + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    ppuVar6 = &PTR_s___NSCFString_100abb6f0;
    if (PTR_s___NSCFString_100abb6f0 != (undefined *)0x0) {
      pcVar5 = *(char **)(uVar4 + 0x18);
      ppuVar6 = &PTR_s___NSCFString_100abb6f0;
      pcVar2 = PTR_s___NSCFString_100abb6f0;
      do {
        if (ppuVar6[5] == puVar3) break;
        if ((ppuVar6[5] == (undefined *)0x0) && (iVar1 = _strcmp(pcVar5,pcVar2), iVar1 == 0)) {
          ppuVar6[5] = puVar3;
          break;
        }
        ppuVar6 = ppuVar6 + 6;
        pcVar2 = *ppuVar6;
      } while (pcVar2 != (char *)0x0);
    }
  }
  else {
    ppuVar6 = &PTR_s_NSAtom_1009ea5e0 + ((ulong)param_1 >> 1 & 7) * 6;
  }
  return *(undefined4 *)(ppuVar6 + 1);
}

