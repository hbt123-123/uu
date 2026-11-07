// rea decompile_all
// name: FUN_10079ec28
// address: 0x10079ec28
// body: available
// range: 0x10079ec28-0x10079ecef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10079ec28(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  if (0 < param_3) {
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) {
        return (long)param_2 <= (long)pbVar3 - (long)param_1;
      }
      if ((char)bVar1 < '\0') {
        if (((bVar1 ^ 0xff) & 0xc0) != 0) {
          return false;
        }
        if (((bVar1 ^ 0xff) & 0x3e) == 0) {
          return false;
        }
        iVar2 = *(int *)(&DAT_100850320 + ((ulong)bVar1 & 0x3f) * 4);
        if (param_1 + param_3 <= pbVar3 + iVar2) {
          return false;
        }
        if ((bVar1 | 0xffffffc0) < 0xfffffffe) {
          if (iVar2 < 2) {
            iVar2 = 1;
          }
          do {
            pbVar3 = pbVar3 + 1;
            if ((*pbVar3 & 0xc0) != 0x80) {
              return false;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else if ((bVar1 < 0x20) && (*(int *)(&DAT_100850820 + (ulong)bVar1 * 4) == 0)) {
        return false;
      }
      pbVar3 = pbVar3 + 1;
    } while (pbVar3 < param_1 + param_3);
  }
  return false;
}

