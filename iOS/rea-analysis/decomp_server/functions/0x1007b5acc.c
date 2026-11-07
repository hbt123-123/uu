// rea decompile_all
// name: FUN_1007b5acc
// address: 0x1007b5acc
// body: available
// range: 0x1007b5acc-0x1007b5df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1007b5acc(undefined *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong *puVar18;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  ulong uStack_68;
  
  uVar5 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar5 = param_2 >> 0x38 & 0xf;
  }
  local_88 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1007c7e14();
  if (uVar5 != 0) {
    local_80 = 0x2c;
    uStack_78 = 0xe100000000000000;
    puVar8 = local_88;
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_10009ff0c();
    puVar9 = &local_80;
    __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
              (puVar9,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8,puVar8,puVar8);
    lVar17 = puVar9[2];
    if (lVar17 != 0) {
      _swift_bridgeObjectRetain(puVar9);
      puVar18 = puVar9 + 5;
      puVar11 = PTR___sSSN_1009957f8;
      do {
        local_70 = (undefined *)puVar18[-1];
        uVar5 = *puVar18;
        local_80 = 0x3d;
        uStack_78 = 0xe100000000000000;
        uStack_68 = uVar5;
        _swift_bridgeObjectRetain(uVar5);
        puVar10 = &local_80;
        __sSy10FoundationE10components11separatedBySaySSGqd___tSyRd__lF
                  (puVar10,puVar11,puVar11,puVar8,puVar8);
        if (puVar10[2] == 2) {
          uVar4 = puVar10[4];
          uVar6 = puVar10[5];
          local_70 = (undefined *)puVar10[6];
          uVar13 = puVar10[7];
          uStack_68 = uVar13;
          _swift_bridgeObjectRetain(uVar6);
          _swift_bridgeObjectRetain(uVar13);
          puVar14 = puVar8;
          __sSy10FoundationE23removingPercentEncodingSSSgvg();
          _swift_bridgeObjectRelease(uVar13);
          if (puVar14 == (undefined *)0x0) {
            _swift_bridgeObjectRelease(uVar5);
            _swift_bridgeObjectRelease(puVar10);
            _swift_bridgeObjectRelease(uVar6);
            puVar11 = PTR___sSSN_1009957f8;
          }
          else {
            puVar12 = local_88;
            _swift_isUniquelyReferenced_nonNull_native();
            local_70 = local_88;
            uVar13 = uVar4;
            uVar15 = uVar6;
            FUN_1001a2c70();
            uVar16 = (ulong)~(uint)uVar15 & 1;
            lVar1 = *(long *)(local_88 + 0x10) + uVar16;
            if (SCARRY8(*(long *)(local_88 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5de0);
              (*pcVar7)();
            }
            if (*(long *)(local_88 + 0x18) < lVar1) {
              FUN_100067d74(lVar1,puVar12);
              uVar13 = uVar4;
              uVar16 = uVar6;
              FUN_1001a2c70();
              if (((uint)uVar15 & 1) != ((uint)uVar16 & 1)) {
                __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                          (PTR___sSSN_1009957f8);
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5df4);
                (*pcVar7)();
              }
            }
            else if (((ulong)puVar12 & 1) == 0) {
              FUN_100063aac();
            }
            local_88 = local_70;
            if ((uVar15 & 1) == 0) {
              uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
              *(ulong *)(local_70 + uVar15 + 0x40) =
                   *(ulong *)(local_70 + uVar15 + 0x40) | 1L << (uVar13 & 0x3f);
              puVar3 = (ulong *)(*(long *)(local_70 + 0x30) + uVar13 * 0x10);
              *puVar3 = uVar4;
              puVar3[1] = uVar6;
              puVar2 = (undefined8 *)(*(long *)(local_70 + 0x38) + uVar13 * 0x10);
              *puVar2 = puVar11;
              puVar2[1] = puVar14;
              if (SCARRY8(*(long *)(local_70 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b5de4);
                (*pcVar7)();
              }
              *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
              _swift_bridgeObjectRetain(uVar6);
            }
            else {
              puVar2 = (undefined8 *)(*(long *)(local_70 + 0x38) + uVar13 * 0x10);
              _swift_bridgeObjectRelease(puVar2[1]);
              *puVar2 = puVar11;
              puVar2[1] = puVar14;
            }
            _swift_bridgeObjectRelease(uVar5);
            _swift_bridgeObjectRelease(puVar10);
            _swift_bridgeObjectRelease(uVar6);
            _swift_bridgeObjectRelease(0x8000000000000000);
            puVar11 = PTR___sSSN_1009957f8;
          }
        }
        else {
          _swift_bridgeObjectRelease(uVar5);
          _swift_bridgeObjectRelease(puVar10);
        }
        puVar18 = puVar18 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      _swift_bridgeObjectRelease(puVar9);
    }
    _swift_bridgeObjectRelease(puVar9);
  }
  return local_88;
}

