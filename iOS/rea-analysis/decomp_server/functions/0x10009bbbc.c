// rea decompile_all
// name: FUN_10009bbbc
// address: 0x10009bbbc
// body: available
// range: 0x10009bbbc-0x10009be9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10009bbbc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_c0 [16];
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined *puStack_88;
  char *local_78;
  char *pcStack_70;
  undefined *local_68;
  
  lVar15 = *(long *)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyDictionarySingleton_100995ea8;
  if (lVar15 != 0) {
    local_78 = "known registry process: ";
    pcStack_70 = "rver11LogUploader";
    plVar12 = (long *)(param_1 + 0x38);
    do {
      uVar6 = plVar12[-3];
      uVar3 = plVar12[-2];
      uVar2 = plVar12[-1];
      puVar4 = (undefined *)*plVar12;
      lVar13 = *(long *)(puVar14 + 0x10);
      _swift_bridgeObjectRetain(uVar3);
      if (lVar13 == 0) {
        _swift_bridgeObjectRetain(puVar4);
      }
      else {
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(puVar4);
        _swift_bridgeObjectRetain(puVar14);
        uVar7 = uVar6;
        uVar8 = uVar3;
        FUN_1001a2c70();
        _swift_bridgeObjectRelease(uVar3);
        puVar9 = puVar14;
        if ((uVar8 & 1) != 0) {
          puVar1 = (ulong *)(*(long *)(puVar14 + 0x38) + uVar7 * 0x10);
          uVar7 = *puVar1;
          puVar9 = (undefined *)puVar1[1];
          _swift_bridgeObjectRetain(puVar9);
          _swift_bridgeObjectRelease(puVar14);
          if ((uVar7 != uVar2 || puVar9 != puVar4) &&
             (uVar8 = uVar7,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (uVar7,puVar9,uVar2,puVar4,0), (uVar8 & 1) == 0)) {
            uVar10 = 0;
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)(uVar10);
            local_b0 = uVar6;
            uStack_a8 = uVar3;
            local_a0 = uVar2;
            puStack_98 = puVar4;
            local_90 = uVar7;
            puStack_88 = puVar9;
            FUN_1003fb4bc(FUN_10009ffb4,auStack_c0,0xd000000000000093,
                          (ulong)pcStack_70 | 0x8000000000000000,&DAT_d000000000000013,
                          (ulong)local_78 | 0x8000000000000000,0xbe,0);
            _swift_bridgeObjectRelease(puVar9);
            goto LAB_10009bcf4;
          }
        }
        _swift_bridgeObjectRelease(puVar9);
      }
LAB_10009bcf4:
      puVar9 = puVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar6;
      uVar8 = uVar3;
      local_68 = puVar14;
      FUN_1001a2c70();
      uVar11 = (ulong)~(uint)uVar8 & 1;
      lVar13 = *(long *)(puVar14 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar14 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10009be8c);
        (*pcVar5)();
      }
      if (*(long *)(puVar14 + 0x18) < lVar13) {
        FUN_100067d74(lVar13,puVar9);
        uVar7 = uVar6;
        uVar11 = uVar3;
        FUN_1001a2c70();
        if (((uint)uVar8 & 1) != ((uint)uVar11 & 1)) {
          __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                    (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10009bea0);
          (*pcVar5)();
        }
LAB_10009bd70:
        if ((uVar8 & 1) == 0) goto LAB_10009bd74;
LAB_10009bc10:
        _swift_bridgeObjectRelease(uVar3);
        puVar14 = local_68;
        puVar1 = (ulong *)(*(long *)(local_68 + 0x38) + uVar7 * 0x10);
        uVar6 = puVar1[1];
        *puVar1 = uVar2;
        puVar1[1] = (ulong)puVar4;
        _swift_bridgeObjectRelease(uVar6);
      }
      else {
        if (((ulong)puVar9 & 1) != 0) goto LAB_10009bd70;
        FUN_100063aac();
        if ((uVar8 & 1) != 0) goto LAB_10009bc10;
LAB_10009bd74:
        *(ulong *)(local_68 + (uVar7 >> 6) * 8 + 0x40) =
             *(ulong *)(local_68 + (uVar7 >> 6) * 8 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar1 = (ulong *)(*(long *)(local_68 + 0x30) + uVar7 * 0x10);
        *puVar1 = uVar6;
        puVar1[1] = uVar3;
        puVar1 = (ulong *)(*(long *)(local_68 + 0x38) + uVar7 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = (ulong)puVar4;
        if (SCARRY8(*(long *)(local_68 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10009be90);
          (*pcVar5)();
        }
        *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + 1;
        puVar14 = local_68;
      }
      plVar12 = plVar12 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return puVar14;
}

