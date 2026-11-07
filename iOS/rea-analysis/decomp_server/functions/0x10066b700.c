// rea decompile_all
// name: FUN_10066b700
// address: 0x10066b700
// body: available
// range: 0x10066b700-0x10066b883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066b700(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar12 = *param_1;
  puVar5 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(uVar12);
  FUN_10066b1f4(param_1,puVar5);
  uVar13 = *param_1;
  if (*(ulong *)(uVar13 + 0x10) < 0x11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10066b870);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar12 + 0x10) < 0x11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10066b874);
    (*pcVar4)();
  }
  uVar3 = *(uint *)(uVar13 + 0x60);
  uVar6 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_1006541cc();
  }
  uVar3 = -(uVar3 >> 7);
  uVar7 = *(ulong *)(uVar13 + 0x10);
  uVar6 = uVar7;
  if (0xf < uVar7) {
    uVar6 = 0x10;
  }
  if (7 < uVar7) {
    uVar1 = uVar7;
    if (0xf < uVar7) {
      uVar1 = 0x10;
    }
    lVar8 = uVar1 * 4 + 0x24;
    if (uVar12 + lVar8 <= uVar13 + 0x20 || uVar13 + lVar8 <= uVar12 + 0x20) {
      uVar1 = uVar6 + 1 & 7;
      uVar2 = 8;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      lVar8 = (uVar6 + 1) - uVar2;
      pauVar9 = (undefined1 (*) [16])(uVar12 + 0x30);
      pauVar10 = (undefined1 (*) [16])(uVar13 + 0x30);
      lVar11 = lVar8;
      do {
        auVar14._4_4_ = uVar3;
        auVar14._0_4_ = uVar3;
        auVar14._8_4_ = uVar3;
        auVar14._12_4_ = uVar3;
        auVar14 = pauVar9[-1] ^ (pauVar9[-1] ^ pauVar10[-1]) & ~auVar14;
        auVar15._4_4_ = uVar3;
        auVar15._0_4_ = uVar3;
        auVar15._8_4_ = uVar3;
        auVar15._12_4_ = uVar3;
        auVar15 = *pauVar9 ^ (*pauVar9 ^ *pauVar10) & ~auVar15;
        *(long *)(pauVar10[-1] + 8) = auVar14._8_8_;
        *(long *)pauVar10[-1] = auVar14._0_8_;
        *(long *)(*pauVar10 + 8) = auVar15._8_8_;
        *(long *)*pauVar10 = auVar15._0_8_;
        pauVar9 = pauVar9 + 2;
        pauVar10 = pauVar10 + 2;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      goto LAB_10066b818;
    }
  }
  lVar8 = 0;
LAB_10066b818:
  lVar8 = lVar8 + 8;
  do {
    if (uVar7 <= lVar8 - 8U) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10066b86c);
      (*pcVar4)();
    }
    *(uint *)(uVar13 + lVar8 * 4) =
         *(uint *)(uVar12 + lVar8 * 4) & uVar3 |
         *(uint *)(uVar13 + lVar8 * 4) & (uVar3 ^ 0xffffffff);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x19);
  _swift_bridgeObjectRelease(uVar12);
  *param_1 = uVar13;
  return;
}

