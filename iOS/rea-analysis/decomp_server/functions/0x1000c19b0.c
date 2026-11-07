// rea decompile_all
// name: FUN_1000c19b0
// address: 0x1000c19b0
// body: available
// range: 0x1000c19b0-0x1000c1c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000c19b0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    puVar17 = (ulong *)(param_1 + 0x40);
    do {
      uVar6 = puVar17[-4];
      uVar2 = puVar17[-3];
      uVar4 = puVar17[-2];
      uVar3 = puVar17[-1];
      uVar5 = *puVar17;
      uVar9 = uVar3;
      if (uVar5 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = uVar5;
        __sSS10lowercasedSSyF();
      }
      _swift_bridgeObjectRetain_n(uVar4,2);
      _swift_bridgeObjectRetain(uVar5);
      uVar10 = uVar2;
      uVar15 = uVar4;
      FUN_1001a2f80(uVar2,uVar4,uVar9,uVar12);
      uVar14 = (ulong)~(uint)uVar15 & 1;
      lVar16 = *(long *)(puVar7 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1000c1c30);
        (*pcVar8)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar16) {
        FUN_100068668(lVar16,1);
        uVar10 = uVar2;
        uVar14 = uVar4;
        FUN_1001a2f80(uVar2,uVar4,uVar9,uVar12);
        if (((uint)uVar15 & 1) != ((uint)uVar14 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(&DAT_10099b378);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1000c1c44);
          (*pcVar8)();
        }
      }
      if ((uVar15 & 1) == 0) {
        puVar11 = &DAT_100a75b18;
        FUN_100004bb4(&DAT_100a75b18,&DAT_10080ac70);
        _swift_allocObject();
        *(undefined8 *)(puVar11 + 0x18) = 2;
        *(undefined8 *)(puVar11 + 0x10) = 1;
        puVar11[0x20] = (char)uVar6;
        *(ulong *)(puVar11 + 0x28) = uVar2;
        *(ulong *)(puVar11 + 0x30) = uVar4;
        *(ulong *)(puVar11 + 0x38) = uVar3;
        *(ulong *)(puVar11 + 0x40) = uVar5;
        *(ulong *)(puVar7 + (uVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar10 * 0x20);
        *puVar1 = uVar2;
        puVar1[1] = uVar4;
        puVar1[2] = uVar9;
        puVar1[3] = uVar12;
        *(undefined **)(*(long *)(puVar7 + 0x38) + uVar10 * 8) = puVar11;
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1000c1c34);
          (*pcVar8)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar12);
        lVar16 = *(long *)(puVar7 + 0x38);
        uVar15 = *(ulong *)(lVar16 + uVar10 * 8);
        uVar9 = uVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(lVar16 + uVar10 * 8) = uVar15;
        uVar12 = uVar15;
        if ((uVar9 & 1) == 0) {
          uVar12 = 0;
          FUN_1000356d4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          *(ulong *)(lVar16 + uVar10 * 8) = uVar12;
        }
        uVar9 = *(ulong *)(uVar12 + 0x10);
        uVar15 = uVar12;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar9) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_1000356d4(uVar15,uVar9 + 1,1,uVar12);
          *(ulong *)(lVar16 + uVar10 * 8) = uVar15;
        }
        *(ulong *)(uVar15 + 0x10) = uVar9 + 1;
        lVar16 = uVar15 + uVar9 * 0x28;
        *(char *)(lVar16 + 0x20) = (char)uVar6;
        *(ulong *)(lVar16 + 0x28) = uVar2;
        *(ulong *)(lVar16 + 0x30) = uVar4;
        *(ulong *)(lVar16 + 0x38) = uVar3;
        *(ulong *)(lVar16 + 0x40) = uVar5;
      }
      puVar17 = puVar17 + 5;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return puVar7;
}

