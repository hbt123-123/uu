// rea decompile_all
// name: FUN_1007a6644
// address: 0x1007a6644
// body: available
// range: 0x1007a6644-0x1007a671b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a6644(uint param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = (byte)param_1;
  if (param_1 < 0x80) {
    *(byte *)*param_2 = bVar1;
    lVar2 = 1;
  }
  else if (param_1 < 0x800) {
    *(byte *)*param_2 = (byte)(param_1 >> 6) | 0xc0;
    *(byte *)(*param_2 + 1) = bVar1 & 0x3f | 0x80;
    lVar2 = 2;
  }
  else if (param_1 >> 0x10 == 0) {
    *(byte *)*param_2 = (byte)(param_1 >> 0xc) | 0xe0;
    *(byte *)(*param_2 + 1) = (byte)(param_1 >> 6) & 0x3f | 0x80;
    *(byte *)(*param_2 + 2) = bVar1 & 0x3f | 0x80;
    lVar2 = 3;
  }
  else {
    *(byte *)*param_2 = (byte)(param_1 >> 0x12) | 0xf0;
    *(byte *)(*param_2 + 1) = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
    *(byte *)(*param_2 + 2) = (byte)(param_1 >> 6) & 0x3f | 0x80;
    *(byte *)(*param_2 + 3) = bVar1 & 0x3f | 0x80;
    lVar2 = 4;
  }
  *param_2 = *param_2 + lVar2;
  return;
}

