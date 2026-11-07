// rea decompile_all
// name: FUN_1006b4e7c
// address: 0x1006b4e7c
// body: available
// range: 0x1006b4e7c-0x1006b502b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b4e7c(ulong *param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (param_2 < 8) {
    return 0;
  }
  if (param_2 == 8) {
    return 0;
  }
  uVar14 = 0;
  puVar8 = (ulong *)((long)param_1 + (param_2 - 8));
  uVar12 = param_4 & 0xfffffffffffffffc;
  uVar11 = param_4 & 3;
  if (uVar11 < 2) {
    uVar15 = 0;
    if (uVar11 != 0) goto LAB_1006b4f00;
    uVar15 = 0;
    uVar14 = 0;
    puVar10 = param_1;
    if (uVar12 == 0) {
      uVar15 = 0;
      uVar14 = 0;
      goto LAB_1006b4fec;
    }
  }
  else {
    uVar15 = 0;
    if (uVar11 != 2) {
      puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar12 + 2) * 4);
      uVar15 = (ulong)*puVar1;
      uVar14 = (ulong)(byte)puVar1[1];
    }
    puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar12 + 1) * 4);
    uVar15 = (ulong)*puVar1 << (uVar14 & 0x3f) | uVar15;
    uVar14 = uVar14 + (byte)puVar1[1];
LAB_1006b4f00:
    puVar1 = (ushort *)(param_5 + (ulong)*(byte *)(param_3 + uVar12) * 4);
    uVar15 = (ulong)*puVar1 << (uVar14 & 0x3f) | uVar15;
    uVar14 = uVar14 + (byte)puVar1[1];
    uVar11 = uVar14 >> 3;
    *param_1 = uVar15;
    puVar7 = (ulong *)((long)param_1 + uVar11);
    puVar10 = puVar8;
    if (puVar7 <= puVar8) {
      puVar10 = puVar7;
    }
    uVar14 = uVar14 & 7;
    uVar15 = uVar15 >> ((uVar11 & 7) << 3);
    if (uVar12 == 0) goto LAB_1006b4fec;
  }
  lVar9 = -(param_4 & 0xfffffffffffffffc);
  pbVar13 = (byte *)(uVar12 + param_3 + -2);
  do {
    puVar1 = (ushort *)(param_5 + (ulong)pbVar13[1] * 4);
    puVar2 = (ushort *)(param_5 + (ulong)*pbVar13 * 4);
    uVar11 = uVar14 + (byte)puVar1[1];
    uVar12 = uVar11 + (byte)puVar2[1];
    puVar3 = (ushort *)(param_5 + (ulong)pbVar13[-1] * 4);
    puVar4 = (ushort *)(param_5 + (ulong)pbVar13[-2] * 4);
    uVar5 = uVar12 + (byte)puVar3[1];
    uVar6 = uVar5 + (byte)puVar4[1];
    uVar15 = (ulong)*puVar1 << uVar14 | uVar15 | (ulong)*puVar2 << (uVar11 & 0x3f) |
             (ulong)*puVar3 << (uVar12 & 0x3f) | (ulong)*puVar4 << (uVar5 & 0x3f);
    uVar11 = uVar6 >> 3;
    *puVar10 = uVar15;
    puVar7 = (ulong *)((long)puVar10 + uVar11);
    puVar10 = puVar8;
    if (puVar7 <= puVar8) {
      puVar10 = puVar7;
    }
    uVar14 = uVar6 & 7;
    uVar15 = uVar15 >> ((uVar11 & 7) << 3);
    pbVar13 = pbVar13 + -4;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0);
LAB_1006b4fec:
  *puVar10 = 1L << uVar14 | uVar15;
  puVar10 = (ulong *)((long)puVar10 + (uVar14 + 1 >> 3));
  puVar7 = puVar8;
  if (puVar10 <= puVar8) {
    puVar7 = puVar10;
  }
  if (puVar8 <= puVar7) {
    return 0;
  }
  lVar9 = (long)puVar7 - (long)param_1;
  if ((uVar14 + 1 & 7) != 0) {
    lVar9 = lVar9 + 1;
  }
  return lVar9;
}

