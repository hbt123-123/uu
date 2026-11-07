// rea decompile_all
// name: FUN_100641024
// address: 0x100641024
// body: available
// range: 0x100641024-0x10064113f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100641024(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar11 == (undefined *)0x0) {
    _swift_release();
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar3 = puVar11;
    FUN_100630840(puVar11,0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100641140);
      (*pcVar2)();
    }
    lVar6 = *(long *)(unaff_x20 + 0x10);
    puVar12 = *(undefined **)(lVar6 + 0x10);
    if (puVar12 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      puVar4 = puVar3 + 0x20;
      puVar10 = puVar12 + -1;
      if (puVar11 + -1 <= puVar12 + -1) {
        puVar10 = puVar11 + -1;
      }
      puVar10 = puVar10 + 1;
      puVar7 = (undefined *)0x1;
      if (((undefined *)0x20 < puVar10) && (0x1f < (ulong)((long)puVar3 - lVar6))) {
        uVar1 = 0x20;
        if (((ulong)puVar10 & 0x1f) != 0) {
          uVar1 = (ulong)puVar10 & 0x1f;
        }
        puVar5 = puVar10 + -uVar1;
        puVar7 = puVar5 + 1;
        puVar4 = puVar4 + (long)puVar5;
        puVar8 = (undefined8 *)(lVar6 + 0x30);
        puVar9 = (undefined8 *)(puVar3 + 0x30);
        puVar10 = puVar5;
        do {
          uVar13 = puVar8[-2];
          uVar15 = puVar8[1];
          uVar14 = *puVar8;
          puVar9[-1] = puVar8[-1];
          puVar9[-2] = uVar13;
          puVar9[1] = uVar15;
          *puVar9 = uVar14;
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 4;
          puVar10 = puVar10 + -0x20;
        } while (puVar10 != (undefined *)0x0);
      }
      do {
        *puVar4 = puVar5[lVar6 + 0x20];
        if (puVar11 == puVar7) {
          _swift_release();
          return puVar3;
        }
        puVar4 = puVar4 + 1;
        puVar10 = puVar7 + 1;
        puVar5 = puVar7;
        puVar7 = puVar10;
      } while (puVar12 + 1 != puVar10);
    }
    _swift_release();
    if (puVar12 != puVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064110c);
      (*pcVar2)();
    }
  }
  return puVar3;
}

