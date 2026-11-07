// rea decompile_all
// name: FUN_1002c1034
// address: 0x1002c1034
// body: available
// range: 0x1002c1034-0x1002c12cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c1034(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar14 = *param_3;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  uVar8 = uVar3;
  uVar10 = uVar5;
  FUN_1001a2c70();
  lVar11 = *(long *)(lVar14 + 0x10);
  uVar12 = (ulong)~(uint)uVar10 & 1;
  lVar15 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_1002c12c4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1002c12c8);
    (*pcVar7)();
  }
  if (*(long *)(lVar14 + 0x18) < lVar15) {
    FUN_1002ebc78(lVar15,param_2 & 1);
    uVar8 = uVar3;
    uVar12 = uVar5;
    FUN_1001a2c70();
    if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) {
LAB_1002c10e8:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002c10f8);
      (*pcVar7)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_1002eb564();
    lVar15 = *param_3;
    goto joined_r0x0001002c1148;
  }
  lVar15 = *param_3;
joined_r0x0001002c1148:
  if ((uVar10 & 1) == 0) {
    lVar11 = lVar15 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
LAB_1002c12c8:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1002c12cc);
      (*pcVar7)();
    }
    *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
  }
  else {
    _swift_bridgeObjectRelease(uVar5);
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    uVar9 = puVar16[1];
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    _swift_bridgeObjectRelease(uVar9);
  }
  if (lVar13 != 1) {
    lVar13 = lVar13 + -1;
    puVar16 = (undefined8 *)(param_1 + 0x58);
    do {
      uVar3 = puVar16[-3];
      uVar5 = puVar16[-2];
      uVar4 = puVar16[-1];
      uVar6 = *puVar16;
      lVar14 = *param_3;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar8 = uVar3;
      uVar10 = uVar5;
      FUN_1001a2c70();
      lVar11 = *(long *)(lVar14 + 0x10);
      uVar12 = (ulong)~(uint)uVar10 & 1;
      lVar15 = lVar11 + uVar12;
      if (SCARRY8(lVar11,uVar12)) goto LAB_1002c12c4;
      if (*(long *)(lVar14 + 0x18) < lVar15) {
        FUN_1002ebc78(lVar15,1);
        uVar8 = uVar3;
        uVar12 = uVar5;
        FUN_1001a2c70();
        if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) goto LAB_1002c10e8;
      }
      lVar15 = *param_3;
      if ((uVar10 & 1) == 0) {
        lVar11 = lVar15 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_1002c12c8;
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        _swift_bridgeObjectRelease(uVar9);
      }
      puVar16 = puVar16 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

