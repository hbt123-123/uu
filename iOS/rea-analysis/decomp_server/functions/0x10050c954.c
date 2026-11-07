// rea decompile_all
// name: FUN_10050c954
// address: 0x10050c954
// body: available
// range: 0x10050c954-0x10050ca9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050c954(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  FUN_100507c1c(param_2,2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    thunk_FUN_100507c64(0);
  }
  else {
    lVar4 = 0;
    lVar3 = 0;
    do {
      uVar7 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      if (uVar7 < 0x80) {
        lVar8 = 1;
      }
      else if ((long)uVar7 < 0) {
        lVar8 = 10;
      }
      else if (uVar7 >> 0x23 == 0) {
        if (uVar7 < 0x200000) {
          lVar8 = 2;
          if (uVar7 < 0x4000) goto LAB_10050ca0c;
        }
        else {
          lVar8 = 4;
LAB_10050ca00:
          if (uVar7 >> 0x1c == 0) goto LAB_10050ca0c;
        }
LAB_10050ca08:
        lVar8 = lVar8 + 1;
      }
      else {
        if (uVar7 >> 0x31 != 0) {
          uVar7 = uVar7 >> 0x1c;
          lVar8 = 8;
          goto LAB_10050ca00;
        }
        lVar8 = 6;
        if (uVar7 >> 0x2a != 0) goto LAB_10050ca08;
      }
LAB_10050ca0c:
      bVar2 = SCARRY8(lVar3,lVar8);
      lVar3 = lVar3 + lVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10050caa0);
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (lVar11 != lVar4);
    thunk_FUN_100507c64();
    lVar4 = 0;
    pbVar6 = *(byte **)(unaff_x20 + 8);
    do {
      uVar9 = *(ulong *)(param_1 + 0x20 + lVar4 * 8);
      pbVar5 = pbVar6;
      uVar7 = uVar9;
      if (0x7f < uVar9) {
        do {
          pbVar6 = pbVar5 + 1;
          *pbVar5 = (byte)uVar7 | 0x80;
          uVar9 = uVar7 >> 7;
          uVar10 = uVar7 >> 0xe;
          pbVar5 = pbVar6;
          uVar7 = uVar9;
        } while (uVar10 != 0);
      }
      lVar4 = lVar4 + 1;
      pbVar5 = pbVar6 + 1;
      *pbVar6 = (byte)uVar9;
      pbVar6 = pbVar5;
    } while (lVar4 != lVar11);
    *(byte **)(unaff_x20 + 8) = pbVar5;
  }
  return;
}

