// rea decompile_all
// name: FUN_1006be260
// address: 0x1006be260
// body: available
// range: 0x1006be260-0x1006be593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006be260(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulong)uVar1;
  uVar7 = param_2 - 8;
  uVar4 = lVar14 + uVar6 + 2;
  if (uVar4 <= uVar7) {
    lVar8 = *(long *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 200);
    lVar9 = *(long *)(param_1 + 0x40);
    uVar11 = (ulong)(0x40 - *(int *)(param_1 + 0xbc));
    uVar2 = 0x20 - *(int *)(param_1 + 0xbc);
    uVar10 = (ulong)(0x40 - *(int *)(param_1 + 0xc0));
    if (param_3 != 0) {
      iVar12 = 0;
LAB_1006be328:
      do {
        if (iVar5 < 7) {
          if (iVar5 == 5) {
            lVar3 = *(long *)(lVar14 + uVar6);
            uVar4 = lVar3 * -0x30e4432345000000;
            goto LAB_1006be390;
          }
          if (iVar5 == 6) {
            lVar3 = *(long *)(lVar14 + uVar6);
            uVar4 = lVar3 * -0x30e4432340650000;
            goto LAB_1006be390;
          }
LAB_1006be368:
          uVar4 = (ulong)((uint)(*(int *)(lVar14 + uVar6) * -0x61c8864f) >> (ulong)(uVar2 & 0x1f));
          lVar3 = *(long *)(lVar14 + uVar6);
        }
        else {
          if (iVar5 == 7) {
            lVar3 = *(long *)(lVar14 + uVar6);
            uVar4 = lVar3 * -0x30e44323405a9d00;
          }
          else {
            if (iVar5 != 8) goto LAB_1006be368;
            lVar3 = *(long *)(lVar14 + uVar6);
            uVar4 = lVar3 * -0x30e44323485a9b9d;
          }
LAB_1006be390:
          uVar4 = uVar4 >> (uVar11 & 0x3f);
        }
        *(uint *)(lVar9 + uVar4 * 4) = uVar1 + iVar12;
        *(uint *)(lVar8 + ((ulong)(lVar3 * -0x30e44323485a9b9d) >> (uVar10 & 0x3f)) * 4) =
             uVar1 + iVar12;
        lVar3 = lVar14 + uVar6;
        uVar4 = (ulong)(*(long *)(lVar3 + 1) * -0x30e44323485a9b9d) >> (uVar10 & 0x3f);
        if (*(int *)(lVar8 + uVar4 * 4) == 0) {
          *(uint *)(lVar8 + uVar4 * 4) = uVar1 + iVar12 + 1;
          uVar4 = (ulong)(*(long *)(lVar3 + 2) * -0x30e44323485a9b9d) >> (uVar10 & 0x3f);
          if (*(int *)(lVar8 + uVar4 * 4) == 0) goto LAB_1006be3d4;
LAB_1006be310:
          lVar14 = lVar14 + 3;
          iVar12 = iVar12 + 3;
          if (uVar7 < lVar14 + uVar6 + 2) {
            return;
          }
          goto LAB_1006be328;
        }
        uVar4 = (ulong)(*(long *)(lVar3 + 2) * -0x30e44323485a9b9d) >> (uVar10 & 0x3f);
        if (*(int *)(lVar8 + uVar4 * 4) != 0) goto LAB_1006be310;
LAB_1006be3d4:
        *(uint *)(lVar8 + uVar4 * 4) = uVar1 + iVar12 + 2;
        lVar14 = lVar14 + 3;
        iVar12 = iVar12 + 3;
        if (uVar7 < lVar14 + uVar6 + 2) {
          return;
        }
      } while( true );
    }
    if (iVar5 < 7) {
      if (iVar5 == 5) {
        do {
          lVar14 = *(long *)(uVar4 - 2);
          iVar5 = (int)uVar6;
          *(int *)(lVar9 + ((ulong)(lVar14 * -0x30e4432345000000) >> (uVar11 & 0x3f)) * 4) = iVar5;
          *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar10 & 0x3f)) * 4) = iVar5;
          uVar4 = uVar4 + 3;
          uVar6 = (ulong)(iVar5 + 3);
        } while (uVar4 <= uVar7);
        return;
      }
      if (iVar5 == 6) {
        do {
          lVar14 = *(long *)(uVar4 - 2);
          iVar5 = (int)uVar6;
          *(int *)(lVar9 + ((ulong)(lVar14 * -0x30e4432340650000) >> (uVar11 & 0x3f)) * 4) = iVar5;
          *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar10 & 0x3f)) * 4) = iVar5;
          uVar4 = uVar4 + 3;
          uVar6 = (ulong)(iVar5 + 3);
        } while (uVar4 <= uVar7);
        return;
      }
    }
    else {
      if (iVar5 == 8) {
        do {
          uVar13 = *(long *)(uVar4 - 2) * -0x30e44323485a9b9d;
          iVar5 = (int)uVar6;
          *(int *)(lVar9 + (uVar13 >> (uVar11 & 0x3f)) * 4) = iVar5;
          *(int *)(lVar8 + (uVar13 >> (uVar10 & 0x3f)) * 4) = iVar5;
          uVar4 = uVar4 + 3;
          uVar6 = (ulong)(iVar5 + 3);
        } while (uVar4 <= uVar7);
        return;
      }
      if (iVar5 == 7) {
        do {
          lVar14 = *(long *)(uVar4 - 2);
          iVar5 = (int)uVar6;
          *(int *)(lVar9 + ((ulong)(lVar14 * -0x30e44323405a9d00) >> (uVar11 & 0x3f)) * 4) = iVar5;
          *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar10 & 0x3f)) * 4) = iVar5;
          uVar4 = uVar4 + 3;
          uVar6 = (ulong)(iVar5 + 3);
        } while (uVar4 <= uVar7);
        return;
      }
    }
    do {
      lVar14 = *(long *)(uVar4 - 2);
      iVar5 = (int)uVar6;
      *(int *)(lVar9 + (ulong)((uint)(*(int *)(uVar4 - 2) * -0x61c8864f) >> (ulong)(uVar2 & 0x1f)) *
                       4) = iVar5;
      *(int *)(lVar8 + ((ulong)(lVar14 * -0x30e44323485a9b9d) >> (uVar10 & 0x3f)) * 4) = iVar5;
      uVar4 = uVar4 + 3;
      uVar6 = (ulong)(iVar5 + 3);
    } while (uVar4 <= uVar7);
  }
  return;
}

