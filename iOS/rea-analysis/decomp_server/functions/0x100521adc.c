// rea decompile_all
// name: FUN_100521adc
// address: 0x100521adc
// body: available
// range: 0x100521adc-0x100521d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100521adc(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  
  puVar16 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1005b915c();
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 != 0) {
    puVar24 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar5 = puVar24[-2];
      uVar10 = puVar24[-1];
      uVar6 = *puVar24;
      uVar11 = puVar24[1];
      uVar25 = puVar24[2];
      uVar14 = *(undefined1 *)(puVar24 + 3);
      uVar7 = puVar24[4];
      uVar12 = puVar24[5];
      _swift_bridgeObjectRetain(uVar10);
      FUN_10051fe90(uVar6,uVar11,uVar25,uVar14);
      FUN_100008184(uVar7,uVar12);
      FUN_10051fe90(uVar6,uVar11,uVar25,uVar14);
      FUN_100008184(uVar7,uVar12);
      puVar17 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar18 = uVar5;
      uVar19 = uVar10;
      FUN_1001a2c70();
      uVar23 = (ulong)~(uint)uVar19 & 1;
      lVar1 = *(long *)(puVar16 + 0x10) + uVar23;
      if (SCARRY8(*(long *)(puVar16 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100521d4c);
        (*pcVar15)();
      }
      if (*(long *)(puVar16 + 0x18) < lVar1) {
        FUN_10054bb5c(lVar1,puVar17);
        uVar18 = uVar5;
        uVar23 = uVar10;
        FUN_1001a2c70();
        if (((uint)uVar19 & 1) != ((uint)uVar23 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100521d60);
          (*pcVar15)();
        }
LAB_100521c80:
        if ((uVar19 & 1) != 0) goto LAB_100521b20;
LAB_100521c84:
        *(ulong *)(puVar16 + (uVar18 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar16 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar18 * 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar10;
        puVar22 = (undefined8 *)(*(long *)(puVar16 + 0x38) + uVar18 * 0x30);
        *puVar22 = uVar6;
        puVar22[1] = uVar11;
        puVar22[2] = uVar25;
        *(undefined1 *)(puVar22 + 3) = uVar14;
        puVar22[4] = uVar7;
        puVar22[5] = uVar12;
        FUN_10051ff3c(uVar6,uVar11,uVar25,uVar14);
        FUN_100006cdc(uVar7,uVar12);
        if (SCARRY8(*(long *)(puVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100521d50);
          (*pcVar15)();
        }
        *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar17 & 1) != 0) goto LAB_100521c80;
        FUN_10054ac68();
        if ((uVar19 & 1) == 0) goto LAB_100521c84;
LAB_100521b20:
        _swift_bridgeObjectRelease(uVar10);
        puVar22 = (undefined8 *)(*(long *)(puVar16 + 0x38) + uVar18 * 0x30);
        uVar3 = *puVar22;
        uVar8 = puVar22[1];
        uVar20 = puVar22[2];
        uVar4 = puVar22[4];
        uVar9 = puVar22[5];
        *puVar22 = uVar6;
        puVar22[1] = uVar11;
        puVar22[2] = uVar25;
        uVar13 = *(undefined1 *)(puVar22 + 3);
        *(undefined1 *)(puVar22 + 3) = uVar14;
        puVar22[4] = uVar7;
        puVar22[5] = uVar12;
        FUN_10051ff3c(uVar3,uVar8,uVar20,uVar13);
        FUN_100006cdc(uVar4,uVar9);
        FUN_10051ff3c(uVar6,uVar11,uVar25,uVar14);
        FUN_100006cdc(uVar7,uVar12);
      }
      puVar24 = puVar24 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return puVar16;
}

