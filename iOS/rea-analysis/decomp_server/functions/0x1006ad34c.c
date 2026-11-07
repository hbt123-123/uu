// rea decompile_all
// name: FUN_1006ad34c
// address: 0x1006ad34c
// body: available
// range: 0x1006ad34c-0x1006ad3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1006ad34c(long param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar1 = (int)(char)((char)param_2 + -1);
  if (-2 < iVar1) {
    iVar1 = -1;
  }
  uVar3 = ((ulong)param_2 & 0xff) + 1;
  do {
    uVar6 = uVar3 - 2;
    uVar4 = (ulong)(iVar1 + 1);
    if (((uint)uVar6 >> 7 & 1) != 0) break;
    uVar4 = uVar3 - 1;
    uVar3 = uVar4;
  } while (*(long *)(param_1 + (uVar6 & 0x7f) * 8) == 0);
  if ((uVar4 & 0xff) == 0) {
    sVar2 = 0;
  }
  else {
    iVar1 = (char)uVar4 + -1;
    lVar5 = *(long *)(param_1 + (long)iVar1 * 8);
    sVar2 = 0;
    if (lVar5 != 0) {
      sVar2 = 0x40 - (short)LZCOUNT(lVar5);
    }
    sVar2 = sVar2 + (short)iVar1 * 0x40;
  }
  return (int)sVar2;
}

