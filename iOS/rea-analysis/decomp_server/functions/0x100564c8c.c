// rea decompile_all
// name: FUN_100564c8c
// address: 0x100564c8c
// body: available
// range: 0x100564c8c-0x100564d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100564c8c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar6 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = (param_2 & 0x1fffffff) << 3;
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar6 * 8);
      pbVar4 = pbVar3;
      uVar8 = uVar1;
      uVar9 = uVar1;
      if (0x7f < uVar1) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          uVar9 = uVar8 >> 7;
          uVar10 = uVar8 >> 0xe;
          pbVar3 = pbVar4;
          uVar8 = uVar9;
        } while (uVar10 != 0);
      }
      pbVar5 = pbVar4 + 1;
      *pbVar4 = (byte)uVar9;
      pbVar3 = pbVar5;
      uVar8 = uVar7;
      if (0x7f < uVar7) {
        do {
          pbVar5 = pbVar3 + 1;
          *pbVar3 = (byte)uVar8 | 0x80;
          uVar7 = uVar8 >> 7;
          uVar9 = uVar8 >> 0xe;
          pbVar3 = pbVar5;
          uVar8 = uVar7;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar3 = pbVar5 + 1;
      *pbVar5 = (byte)uVar7;
    } while (lVar6 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}

