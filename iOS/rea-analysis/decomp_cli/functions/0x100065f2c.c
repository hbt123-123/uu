// rea decompile_all
// name: FUN_100065f2c
// address: 0x100065f2c
// body: available
// range: 0x100065f2c-0x100066493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100065f2c(undefined *param_1,undefined *param_2,ulong param_3,undefined *param_4,
                  undefined *param_5,ulong param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  byte *pbVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  long lVar18;
  
  uVar17 = *(ulong *)(param_4 + 0x10);
  uVar2 = (ulong)param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar2 = param_6 >> 0x38 & 0xf;
  }
  if (uVar17 == 0) {
    return;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_1000f0740;
  puVar13 = param_4;
  uVar7 = 0;
LAB_100065fa4:
  pbVar14 = param_4 + uVar7 * 0x18 + 0x30;
  do {
    if (uVar17 <= uVar7) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000663fc);
      (*pcVar4)();
    }
    uVar1 = uVar7 + 1;
    if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100066400);
      (*pcVar4)();
    }
    puVar9 = *(undefined **)(pbVar14 + -0x10);
    puVar10 = *(undefined **)(pbVar14 + -8);
    bVar3 = *pbVar14;
    if (bVar3 >> 6 == 1) {
      if ((param_3 & 1) != 0) {
        bVar16 = bVar3 & 1 | 0x40;
        FUN_100066dec(puVar9,puVar10,bVar3);
        puVar5 = puVar9;
        puVar12 = puVar10;
        goto LAB_100066350;
      }
    }
    else {
      if (bVar3 >> 6 != 2) {
        _swift_bridgeObjectRetain(puVar10);
        puVar5 = param_1;
        puVar12 = param_2;
        puVar13 = puVar10;
        FUN_1000665c4(param_1,param_2,puVar9,puVar10);
        FUN_100066dfc(puVar9,puVar10,bVar3);
        bVar16 = 0x80;
        if ((bVar3 & 1) == 0) {
          bVar16 = 0;
        }
        goto LAB_100066350;
      }
      if ((puVar10 == (undefined *)0x0 && puVar9 == (undefined *)0x0) && (bVar3 == 0x80)) {
        _swift_bridgeObjectRetain(param_6);
        if (uVar2 == 0) {
          _swift_bridgeObjectRetain(param_2);
        }
        else {
          _swift_bridgeObjectRetain(param_6);
          uVar6 = 0xf;
          puVar9 = param_5;
          __sSSySJSS5IndexVcig(0xf,param_5,param_6);
          _swift_bridgeObjectRetain(param_2);
          puVar10 = puVar9;
          __sSJ10uppercasedSSyF(uVar6,puVar9);
          _swift_bridgeObjectRelease(puVar9);
          __sSS6appendyySSF(uVar6,puVar10);
          _swift_bridgeObjectRelease(puVar10);
          uVar6 = 1;
          puVar9 = param_5;
          uVar7 = param_6;
          FUN_100096c3c(1,param_5,param_6);
          _swift_bridgeObjectRelease(param_6);
          puVar10 = puVar13;
          __sSS14_fromSubstringySSSshFZ(uVar6,puVar9,uVar7,puVar13);
          _swift_bridgeObjectRelease(puVar13);
          __sSS6appendyySSF(uVar6,puVar9);
          _swift_bridgeObjectRelease(puVar9);
          puVar13 = puVar10;
        }
        uVar7 = (ulong)param_1 & 0xffffffffffff;
        if (((ulong)param_2 & 0x2000000000000000) != 0) {
          uVar7 = (ulong)param_2 >> 0x38 & 0xf;
        }
        puVar9 = param_2;
        puVar10 = param_1;
        if (uVar7 != 0) {
          uVar7 = 0xf;
          puVar5 = param_1;
          __sSSySJSS5IndexVcig(0xf,param_1,param_2);
          if ((uVar7 == 0x5f) && (puVar5 == (undefined *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            puVar13 = (undefined *)0xe100000000000000;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease(puVar5);
            if ((uVar7 & 1) == 0) goto LAB_100066258;
          }
          puVar10 = (undefined *)0x1;
          puVar9 = param_1;
          puVar5 = param_2;
          FUN_100096c3c(1,param_1,param_2);
          _swift_bridgeObjectRelease(param_2);
          __sSS14_fromSubstringySSSshFZ(puVar10,puVar9,puVar5,puVar13);
          _swift_bridgeObjectRelease(puVar13);
        }
LAB_100066258:
        puVar13 = &DAT_100103f18;
        FUN_10000eb08(&DAT_100103f18,&DAT_1000d4cc0);
        _swift_initStackObject();
        *(undefined8 *)(puVar13 + 0x18) = 2;
        *(undefined8 *)(puVar13 + 0x10) = 1;
        *(undefined **)(puVar13 + 0x20) = param_5;
        *(ulong *)(puVar13 + 0x28) = param_6;
        uVar7 = *(ulong *)(param_7 + 0x10);
        lVar8 = param_7;
        _swift_bridgeObjectRetain();
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)lVar8 == 0) ||
           (uVar15 = *(ulong *)(param_7 + 0x18) >> 1, lVar18 = param_7, uVar15 <= uVar7)) {
          FUN_10006e610();
          uVar15 = *(ulong *)(lVar8 + 0x18) >> 1;
          lVar18 = lVar8;
        }
        if (uVar15 <= *(ulong *)(lVar18 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100066404);
          (*pcVar4)();
        }
        _swift_arrayInitWithCopy
                  (lVar18 + *(ulong *)(lVar18 + 0x10) * 0x10 + 0x20,puVar13 + 0x20,1,
                   PTR___sSSN_1000f02f8);
        _swift_bridgeObjectRelease(puVar13);
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
        puVar5 = (undefined *)0x2d;
        puVar12 = (undefined *)0xe100000000000000;
        puVar13 = puVar9;
        FUN_100078034(0x2d,0xe100000000000000,puVar10);
        _swift_bridgeObjectRelease(lVar18);
        _swift_bridgeObjectRelease(puVar9);
        bVar16 = 0;
        goto LAB_100066350;
      }
      if ((param_3 & 1) != 0) break;
    }
    uVar7 = uVar7 + 1;
    pbVar14 = pbVar14 + 0x18;
    if (uVar1 == uVar17) {
      return;
    }
  } while( true );
  if (uVar2 == 0) {
    __ss11_StringGutsV4growyySiF(0x36);
    __sSS6appendyySSF(0x272079654b,0xe500000000000000);
    __sSS6appendyySSF(param_5,param_6);
    __sSS6appendyySSF(0xd00000000000002f,0x80000001000ca5d0);
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0,0xe000000000000000,"ArgumentParser/NameSpecification.swift",
               0x26,2,0xa4,0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100066494);
    (*pcVar4)();
  }
  puVar5 = (undefined *)0xf;
  puVar12 = param_5;
  __sSSySJSS5IndexVcig(0xf,param_5,param_6);
  bVar16 = 0x40;
LAB_100066350:
  puVar9 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = puVar11;
  if (((ulong)puVar9 & 1) == 0) {
    puVar10 = (undefined *)0x0;
    FUN_10006edd4(0,*(long *)(puVar11 + 0x10) + 1,1);
    puVar13 = puVar11;
  }
  uVar7 = *(ulong *)(puVar10 + 0x10);
  puVar11 = puVar10;
  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar7) {
    puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
    FUN_10006edd4(puVar11,uVar7 + 1,1);
    puVar13 = puVar10;
  }
  *(ulong *)(puVar11 + 0x10) = uVar7 + 1;
  *(undefined **)(puVar11 + uVar7 * 0x18 + 0x20) = puVar5;
  *(undefined **)(puVar11 + uVar7 * 0x18 + 0x28) = puVar12;
  puVar11[uVar7 * 0x18 + 0x30] = bVar16;
  uVar7 = uVar1;
  if (uVar1 == uVar17) {
    return;
  }
  goto LAB_100065fa4;
}

