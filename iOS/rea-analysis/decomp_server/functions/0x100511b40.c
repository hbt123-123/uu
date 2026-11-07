// rea decompile_all
// name: FUN_100511b40
// address: 0x100511b40
// body: available
// range: 0x100511b40-0x100511c0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100511b40(char *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  long unaff_x20;
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) & 1) !=
      0) {
    do {
      plVar8 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x28);
      pcVar7 = (char *)*plVar8;
      pcVar2 = (char *)plVar8[1];
      lVar1 = 0;
      if (pcVar7 != (char *)0x0) {
        lVar1 = (long)pcVar2 - (long)pcVar7;
      }
      pcVar9 = param_1;
      if (param_1 == (char *)0x0) {
        if (lVar1 == 0) goto LAB_100511bcc;
      }
      else if (lVar1 == (long)param_2 - (long)param_1) {
LAB_100511bcc:
        do {
          bVar5 = pcVar9 == (char *)0x0 || pcVar9 == param_2;
          if ((pcVar7 == (char *)0x0) || (pcVar7 == pcVar2)) {
            if (bVar5) {
              return;
            }
            break;
          }
          if (bVar5) break;
          cVar3 = *pcVar7;
          cVar4 = *pcVar9;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 == cVar4);
      }
      param_3 = param_3 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f)
             & 1) != 0);
  }
  return;
}

