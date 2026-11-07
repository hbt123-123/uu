// rea decompile_all
// name: FUN_10050c5b4
// address: 0x10050c5b4
// body: available
// range: 0x10050c5b4-0x10050c6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050c5b4(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  
  FUN_100507c1c(param_2,2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    thunk_FUN_100507c64(0);
  }
  else {
    lVar6 = 0;
    lVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar1 = iVar2 << 1 ^ iVar2 >> 0x1f;
      if (uVar1 < 0x80) {
        lVar9 = 1;
      }
      else if (uVar1 >> 0xe == 0) {
        lVar9 = 2;
      }
      else if (uVar1 < 0x200000) {
        lVar9 = 3;
      }
      else {
        lVar9 = 4;
        if (uVar1 >> 0x1c != 0) {
          lVar9 = 5;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar9);
      lVar5 = lVar5 + lVar9;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c6e0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    thunk_FUN_100507c64();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      lVar5 = (long)*(int *)(param_1 + 0x20 + lVar6 * 4);
      uVar10 = lVar5 << 1 ^ lVar5 >> 0x3f;
      pbVar7 = pbVar8;
      uVar11 = uVar10;
      if (0x7f < uVar10) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar11 | 0x80;
          uVar10 = uVar11 >> 7;
          uVar12 = uVar11 >> 0xe;
          pbVar7 = pbVar8;
          uVar11 = uVar10;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar10;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}

