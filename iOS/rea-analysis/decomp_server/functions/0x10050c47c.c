// rea decompile_all
// name: FUN_10050c47c
// address: 0x10050c47c
// body: available
// range: 0x10050c47c-0x10050c59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050c47c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
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
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      if ((int)uVar2 < 0) {
        lVar11 = 10;
      }
      else if (uVar2 < 0x80) {
        lVar11 = 1;
      }
      else if (uVar2 < 0x4000) {
        lVar11 = 2;
      }
      else {
        lVar1 = 4;
        if (uVar2 >> 0x1c != 0) {
          lVar1 = 5;
        }
        lVar11 = 3;
        if (0x1fffff < uVar2) {
          lVar11 = lVar1;
        }
      }
      bVar4 = SCARRY8(lVar5,lVar11);
      lVar5 = lVar5 + lVar11;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10050c5a0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + 1;
    } while (lVar13 != lVar6);
    thunk_FUN_100507c64();
    lVar6 = 0;
    pbVar8 = *(byte **)(unaff_x20 + 8);
    do {
      uVar2 = *(uint *)(param_1 + 0x20 + lVar6 * 4);
      uVar9 = (ulong)(int)uVar2;
      pbVar7 = pbVar8;
      uVar10 = uVar9;
      if (0x7f < uVar2) {
        do {
          pbVar8 = pbVar7 + 1;
          *pbVar7 = (byte)uVar10 | 0x80;
          uVar9 = uVar10 >> 7;
          uVar12 = uVar10 >> 0xe;
          pbVar7 = pbVar8;
          uVar10 = uVar9;
        } while (uVar12 != 0);
      }
      lVar6 = lVar6 + 1;
      pbVar7 = pbVar8 + 1;
      *pbVar8 = (byte)uVar9;
      pbVar8 = pbVar7;
    } while (lVar6 != lVar13);
    *(byte **)(unaff_x20 + 8) = pbVar7;
  }
  return;
}

