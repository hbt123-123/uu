// rea decompile_all
// name: FUN_100564a24
// address: 0x100564a24
// body: available
// range: 0x100564a24-0x100564ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100564a24(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar7 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar2 = (param_2 & 0x1fffffff) << 3;
    do {
      uVar1 = *(uint *)(param_1 + 0x20 + lVar7 * 4);
      uVar8 = (ulong)(int)uVar1;
      pbVar5 = pbVar4;
      uVar9 = uVar2;
      uVar10 = uVar2;
      if (0x7f < uVar2) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar11 = uVar10 >> 0xe;
          pbVar4 = pbVar5;
          uVar10 = uVar9;
        } while (uVar11 != 0);
      }
      pbVar6 = pbVar5 + 1;
      *pbVar5 = (byte)uVar9;
      pbVar4 = pbVar6;
      uVar9 = uVar8;
      if (0x7f < uVar1) {
        do {
          pbVar6 = pbVar4 + 1;
          *pbVar4 = (byte)uVar9 | 0x80;
          uVar8 = uVar9 >> 7;
          uVar10 = uVar9 >> 0xe;
          pbVar4 = pbVar6;
          uVar9 = uVar8;
        } while (uVar10 != 0);
      }
      lVar7 = lVar7 + 1;
      pbVar4 = pbVar6 + 1;
      *pbVar6 = (byte)uVar8;
    } while (lVar7 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}

