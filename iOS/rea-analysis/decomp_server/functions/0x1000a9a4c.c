// rea decompile_all
// name: FUN_1000a9a4c
// address: 0x1000a9a4c
// body: available
// range: 0x1000a9a4c-0x1000a9e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000a9a4c(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a9dc0);
    (*pcVar2)();
  }
  uVar11 = param_4 >> 0x38 & 0xf;
  uVar1 = (uint)(param_4 >> 0x20);
  if (param_1 != 0) {
    uVar12 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      uVar11 = 0xb;
      if ((uVar1 >> 0x1c & (uint)((param_3 & 0x800000000000000) == 0)) == 0) {
        uVar11 = 7;
      }
      uVar11 = uVar11 | uVar12 << 0x10;
      uVar12 = uVar12 * 4;
      uVar14 = 0xf;
      puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_1000a9acc:
      uVar13 = uVar14 >> 0xe;
      uVar5 = uVar14;
      if (uVar13 != uVar12) {
        do {
          uVar3 = uVar14;
          uVar10 = param_3;
          __sSSySJSS5IndexVcig(uVar14,param_3,param_4);
          uVar4 = uVar3;
          __sSJ8isNumberSbvg();
          if (((uVar4 & 1) == 0) && ((uVar3 != 0x2e || (uVar10 != 0xe100000000000000)))) {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar3,uVar10,0x2e,0xe100000000000000,0);
            _swift_bridgeObjectRelease(uVar10);
            if ((uVar3 & 1) != 0) goto LAB_1000a9af0;
            if ((uVar5 >> 0xe != uVar13) || ((param_2 & 1) == 0)) goto LAB_1000a9ba4;
            __sSS5index5afterSS5IndexVAD_tF(uVar14,param_3,param_4);
            uVar5 = uVar14;
          }
          else {
            _swift_bridgeObjectRelease(uVar10);
LAB_1000a9af0:
            __sSS5index5afterSS5IndexVAD_tF(uVar14,param_3,param_4);
          }
          uVar13 = uVar14 >> 0xe;
          if (uVar13 == uVar12) break;
        } while( true );
      }
      goto LAB_1000a9c98;
    }
  }
  uVar12 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar11;
  }
  if ((uVar12 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_4);
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  uVar11 = 0xb;
  if ((uVar1 >> 0x1c & (uint)((param_3 & 0x800000000000000) == 0)) == 0) {
    uVar11 = 7;
  }
  uVar11 = uVar11 | uVar12 << 0x10;
  uVar6 = 0xf;
  uVar14 = param_4;
  __sSSySsSnySS5IndexVGcig();
  puVar7 = (undefined *)0x0;
  FUN_100033d08(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar12 = *(ulong *)(puVar7 + 0x10);
  puVar9 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar12) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_100033d08(puVar9,uVar12 + 1,1,puVar7);
  }
  *(ulong *)(puVar9 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puVar9 + uVar12 * 0x20 + 0x20) = uVar6;
  *(ulong *)(puVar9 + uVar12 * 0x20 + 0x28) = uVar11;
  *(ulong *)(puVar9 + uVar12 * 0x20 + 0x30) = param_3;
  *(ulong *)(puVar9 + uVar12 * 0x20 + 0x38) = uVar14;
LAB_1000a9d8c:
  _swift_bridgeObjectRelease(param_4);
  return puVar9;
LAB_1000a9ba4:
  if (uVar13 < uVar5 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a9e28);
    (*pcVar2)();
  }
  uVar13 = uVar14;
  uVar3 = param_3;
  uVar4 = param_4;
  __sSSySsSnySS5IndexVGcig();
  puVar7 = puVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar8 = puVar9;
  if (((ulong)puVar7 & 1) == 0) {
    puVar8 = (undefined *)0x0;
    FUN_100033d08(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
  }
  uVar10 = *(ulong *)(puVar8 + 0x10);
  puVar9 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    FUN_100033d08(puVar9,uVar10 + 1,1,puVar8);
  }
  *(ulong *)(puVar9 + 0x10) = uVar10 + 1;
  *(ulong *)(puVar9 + uVar10 * 0x20 + 0x20) = uVar5;
  *(ulong *)(puVar9 + uVar10 * 0x20 + 0x28) = uVar13;
  *(ulong *)(puVar9 + uVar10 * 0x20 + 0x30) = uVar3;
  *(ulong *)(puVar9 + uVar10 * 0x20 + 0x38) = uVar4;
  __sSS5index5afterSS5IndexVAD_tF(uVar14,param_3,param_4);
  uVar5 = uVar14;
  if (*(long *)(puVar9 + 0x10) == param_1) goto LAB_1000a9c98;
  goto LAB_1000a9acc;
LAB_1000a9c98:
  if ((uVar5 >> 0xe != uVar12) || ((param_2 & 1) == 0)) {
    if (uVar5 >> 0xe <= uVar12) {
      uVar12 = param_4;
      __sSSySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_4);
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100033d08(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar14 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100033d08(puVar9,uVar14 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar9 + uVar14 * 0x20 + 0x20) = uVar5;
      *(ulong *)(puVar9 + uVar14 * 0x20 + 0x28) = uVar11;
      *(ulong *)(puVar9 + uVar14 * 0x20 + 0x30) = param_3;
      *(ulong *)(puVar9 + uVar14 * 0x20 + 0x38) = uVar12;
      return puVar9;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a9de4);
    (*pcVar2)();
  }
  goto LAB_1000a9d8c;
}

