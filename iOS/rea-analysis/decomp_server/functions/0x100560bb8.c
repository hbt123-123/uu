// rea decompile_all
// name: FUN_100560bb8
// address: 0x100560bb8
// body: available
// range: 0x100560bb8-0x100560c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100560bb8(void)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  long unaff_x20;
  
  pbVar4 = *(byte **)(unaff_x20 + 0x28);
  pbVar1 = *(byte **)(unaff_x20 + 0x30);
  do {
    if (pbVar4 == pbVar1) {
      return;
    }
    bVar2 = *pbVar4;
    if (0x23 < bVar2) {
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x23) {
        return;
      }
      pbVar3 = pbVar4 + 1;
      do {
        pbVar4 = pbVar1;
        if (pbVar3 == pbVar1) break;
        pbVar4 = pbVar3 + 1;
        bVar2 = *pbVar3;
        pbVar3 = pbVar4;
      } while (bVar2 != 10 && bVar2 != 0xd);
    }
    else {
      pbVar4 = pbVar4 + 1;
    }
    *(byte **)(unaff_x20 + 0x28) = pbVar4;
  } while( true );
}

