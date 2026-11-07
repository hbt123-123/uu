// rea decompile_all
// name: FUN_10056493c
// address: 0x10056493c
// body: available
// range: 0x10056493c-0x1005649af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056493c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(unaff_x20 + 8);
    uVar1 = (param_2 & 0x1fffffff) << 3 | 1;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar5 * 8);
      pbVar4 = pbVar3;
      uVar7 = uVar1;
      uVar8 = uVar1;
      if (0x7f < (param_2 & 0x1fffffff) << 3) {
        do {
          pbVar4 = pbVar3 + 1;
          *pbVar3 = (byte)uVar7 | 0x80;
          uVar8 = uVar7 >> 7;
          uVar9 = uVar7 >> 0xe;
          pbVar3 = pbVar4;
          uVar7 = uVar8;
        } while (uVar9 != 0);
      }
      lVar5 = lVar5 + 1;
      *pbVar4 = (byte)uVar8;
      *(undefined8 *)(pbVar4 + 1) = uVar6;
      pbVar3 = pbVar4 + 9;
    } while (lVar5 != lVar2);
    *(byte **)(unaff_x20 + 8) = pbVar3;
  }
  return;
}

