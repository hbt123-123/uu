// rea decompile_all
// name: FUN_1000a3634
// address: 0x1000a3634
// body: available
// range: 0x1000a3634-0x1000a38e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a3634(long param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  lVar12 = *param_3;
  FUN_100065610(uVar1,uVar2,uVar3);
  uVar5 = uVar1;
  uVar6 = uVar2;
  FUN_100080fdc(uVar1,uVar2,uVar3);
  lVar8 = *(long *)(lVar12 + 0x10);
  uVar10 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar8 + uVar10;
  if (SCARRY8(lVar8,uVar10)) {
LAB_1000a38e0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a38e4);
    (*pcVar4)();
  }
  if (*(long *)(lVar12 + 0x18) < lVar13) {
    FUN_10009a4e0(lVar13,param_2 & 1);
    uVar5 = uVar1;
    uVar10 = uVar2;
    FUN_100080fdc(uVar1,uVar2,uVar3);
    if (((uint)uVar6 & 1) != ((uint)uVar10 & 1)) {
LAB_1000a36f4:
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_1000fa640);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3704);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_100099d54();
    lVar13 = *param_3;
    goto joined_r0x0001000a3754;
  }
  lVar13 = *param_3;
joined_r0x0001000a3754:
  if ((uVar6 & 1) == 0) {
    lVar8 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar9 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x18);
    *puVar9 = uVar1;
    puVar9[1] = uVar2;
    *(undefined1 *)(puVar9 + 2) = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar7;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_1000a38e4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a38e8);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    FUN_100065628(uVar1,uVar2,uVar3);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar7;
  }
  if (lVar11 != 1) {
    lVar11 = lVar11 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x58);
    do {
      uVar1 = puVar14[-3];
      uVar2 = puVar14[-2];
      uVar3 = *(undefined1 *)(puVar14 + -1);
      uVar7 = *puVar14;
      lVar12 = *param_3;
      FUN_100065610(uVar1,uVar2,uVar3);
      uVar5 = uVar1;
      uVar6 = uVar2;
      FUN_100080fdc(uVar1,uVar2,uVar3);
      lVar8 = *(long *)(lVar12 + 0x10);
      uVar10 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar8 + uVar10;
      if (SCARRY8(lVar8,uVar10)) goto LAB_1000a38e0;
      if (*(long *)(lVar12 + 0x18) < lVar13) {
        FUN_10009a4e0(lVar13,1);
        uVar5 = uVar1;
        uVar10 = uVar2;
        FUN_100080fdc(uVar1,uVar2,uVar3);
        if (((uint)uVar6 & 1) != ((uint)uVar10 & 1)) goto LAB_1000a36f4;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar8 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar9 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x18);
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        *(undefined1 *)(puVar9 + 2) = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar7;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_1000a38e4;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar7 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        FUN_100065628(uVar1,uVar2,uVar3);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar7;
      }
      puVar14 = puVar14 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

