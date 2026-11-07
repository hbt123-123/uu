// rea decompile_all
// name: FUN_10050cac8
// address: 0x10050cac8
// body: available
// range: 0x10050cac8-0x10050cc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050cac8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined7 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar14;
  ulong uVar13;
  ulong uVar15;
  
  FUN_100507c1c(param_2,2);
  uVar11 = *(ulong *)(param_1 + 0x10);
  thunk_FUN_100507c64(uVar11);
  if (uVar11 == 0) {
    return;
  }
  puVar6 = *(ulong **)(unaff_x20 + 8);
  if ((uVar11 < 0x20) || ((undefined1 *)((long)puVar6 + (-0x20 - param_1)) < (undefined1 *)0x20)) {
    uVar8 = 0;
    puVar5 = puVar6;
  }
  else {
    uVar8 = uVar11 & 0x7fffffffffffffe0;
    puVar5 = (ulong *)((long)puVar6 + uVar8);
    puVar9 = (undefined1 *)(param_1 + 0x3f);
    uVar10 = uVar8;
    do {
      uVar3 = *(ulong *)(puVar9 + -0xf);
      uVar2 = *(undefined7 *)(puVar9 + -7);
      uVar4 = *(ulong *)(puVar9 + -0x1f);
      puVar1 = (undefined8 *)(puVar9 + -0x17);
      uVar13 = CONCAT71((int7)((ulong)*puVar1 >> 8),(char)*(undefined6 *)puVar1) &
               0xffffffffffffff01;
      uVar12 = CONCAT62((int6)(uVar13 >> 0x10),
                        CONCAT11((char)((uint7)*(undefined7 *)puVar1 >> 8),(char)uVar13)) &
               0xffffffffffff01ff;
      uVar13 = CONCAT53((int5)(uVar12 >> 0x18),CONCAT12((char)(uVar13 >> 0x10),(short)uVar12)) &
               0xffffffffff01ffff;
      uVar12 = CONCAT44((int)(uVar13 >> 0x20),CONCAT13((char)(uVar12 >> 0x18),(int3)uVar13)) &
               0xffffffff01ffffff;
      uVar14 = CONCAT35((int3)(uVar12 >> 0x28),CONCAT14((char)(uVar13 >> 0x20),(int)uVar12)) &
               0xffffff01ffffffff;
      uVar15 = CONCAT26((short)(uVar14 >> 0x30),CONCAT15((char)(uVar12 >> 0x28),(int5)uVar14)) &
               0xffff01ffffffffff;
      uVar12 = CONCAT71((int7)(CONCAT17(*puVar9,uVar2) >> 8),(char)*(undefined6 *)(puVar9 + -7)) &
               0xffffffffffffff01;
      uVar13 = CONCAT62((int6)(uVar12 >> 0x10),CONCAT11((char)((uint7)uVar2 >> 8),(char)uVar12)) &
               0xffffffffffff01ff;
      uVar12 = CONCAT53((int5)(uVar13 >> 0x18),CONCAT12((char)(uVar12 >> 0x10),(short)uVar13)) &
               0xffffffffff01ffff;
      uVar13 = CONCAT44((int)(uVar12 >> 0x20),CONCAT13((char)(uVar13 >> 0x18),(int3)uVar12)) &
               0xffffffff01ffffff;
      uVar12 = CONCAT35((int3)(uVar13 >> 0x28),CONCAT14((char)(uVar12 >> 0x20),(int)uVar13)) &
               0xffffff01ffffffff;
      uVar13 = CONCAT26((short)(uVar12 >> 0x30),CONCAT15((char)(uVar13 >> 0x28),(int5)uVar12)) &
               0xffff01ffffffffff;
      puVar6[1] = CONCAT17((char)(uVar15 >> 0x38),CONCAT16((char)(uVar14 >> 0x30),(int6)uVar15)) &
                  0x101ffffffffffff;
      *puVar6 = uVar4 & 0x101010101010101;
      puVar6[3] = CONCAT17((char)(uVar13 >> 0x38),CONCAT16((char)(uVar12 >> 0x30),(int6)uVar13)) &
                  0x101ffffffffffff;
      puVar6[2] = uVar3 & 0x101010101010101;
      puVar9 = puVar9 + 0x20;
      uVar10 = uVar10 - 0x20;
      puVar6 = puVar6 + 4;
    } while (uVar10 != 0);
    if (uVar11 == uVar8) goto LAB_10050cb4c;
  }
  lVar7 = uVar11 - uVar8;
  puVar6 = puVar5;
  puVar9 = (undefined1 *)(uVar8 + param_1 + 0x20);
  do {
    puVar5 = (ulong *)((long)puVar6 + 1);
    *(undefined1 *)puVar6 = *puVar9;
    lVar7 = lVar7 + -1;
    puVar6 = puVar5;
    puVar9 = puVar9 + 1;
  } while (lVar7 != 0);
LAB_10050cb4c:
  *(ulong **)(unaff_x20 + 8) = puVar5;
  return;
}

