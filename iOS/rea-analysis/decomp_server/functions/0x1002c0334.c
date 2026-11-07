// rea decompile_all
// name: FUN_1002c0334
// address: 0x1002c0334
// body: available
// range: 0x1002c0334-0x1002c04cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c0334(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    puVar9 = (ulong *)(lVar8 + param_3 * 0x20 + -0x20);
    param_1 = param_1 - param_3;
    do {
      puVar10 = (ulong *)(lVar8 + param_3 * 0x20);
      uVar4 = *puVar10;
      uVar12 = puVar10[1];
      uVar13 = puVar10[3];
      puVar10 = puVar9;
      lVar11 = param_1;
      do {
        uVar5 = *puVar10;
        uVar1 = puVar10[1];
        uVar6 = uVar12;
        __sSS10lowercasedSSyF();
        uVar7 = uVar1;
        __sSS10lowercasedSSyF();
        if (uVar4 == uVar5 && uVar6 == uVar7) {
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar13);
          _swift_bridgeObjectRetain(uVar1);
          _swift_bridgeObjectRelease(uVar13);
          _swift_bridgeObjectRelease(uVar12);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar6);
          _swift_bridgeObjectRelease(uVar7);
          break;
        }
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar6,uVar5,uVar7,1);
        _swift_bridgeObjectRetain(uVar12);
        _swift_bridgeObjectRetain(uVar13);
        _swift_bridgeObjectRetain(uVar1);
        _swift_bridgeObjectRelease(uVar13);
        _swift_bridgeObjectRelease(uVar12);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(uVar7);
        if ((uVar4 & 1) == 0) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002c04cc);
          (*pcVar2)();
        }
        uVar4 = puVar10[4];
        uVar12 = puVar10[5];
        uVar5 = puVar10[6];
        uVar13 = puVar10[7];
        puVar10[5] = puVar10[1];
        puVar10[4] = *puVar10;
        puVar10[7] = puVar10[3];
        puVar10[6] = puVar10[2];
        *puVar10 = uVar4;
        puVar10[1] = uVar12;
        puVar10[2] = uVar5;
        puVar10[3] = uVar13;
        puVar10 = puVar10 + -4;
        bVar3 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 4;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}

