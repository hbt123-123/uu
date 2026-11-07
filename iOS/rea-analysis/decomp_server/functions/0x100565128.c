// rea decompile_all
// name: FUN_100565128
// address: 0x100565128
// body: available
// range: 0x100565128-0x100565193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100565128(long param_1,ulong param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar6 = 0;
    pbVar4 = *(byte **)(unaff_x20 + 8);
    uVar2 = (param_2 & 0x1fffffff) << 3;
    do {
      bVar1 = *(byte *)(param_1 + 0x20 + lVar6);
      pbVar5 = pbVar4;
      uVar7 = uVar2;
      uVar8 = uVar2;
      if (0x7f < uVar2) {
        do {
          pbVar5 = pbVar4 + 1;
          *pbVar4 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar4 = pbVar5;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar6 = lVar6 + 1;
      *pbVar5 = (byte)uVar8;
      pbVar5[1] = bVar1;
      pbVar4 = pbVar5 + 2;
    } while (lVar6 != lVar3);
    *(byte **)(unaff_x20 + 8) = pbVar4;
  }
  return;
}

