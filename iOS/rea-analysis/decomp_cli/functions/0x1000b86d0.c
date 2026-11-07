// rea decompile_all
// name: FUN_1000b86d0
// address: 0x1000b86d0
// body: available
// range: 0x1000b86d0-0x1000b88cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000b86d0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      plVar16 = (long *)(param_1 + 0x30);
      plVar17 = (long *)(param_2 + 0x30);
      do {
        uVar14 = 0x74726f6873;
        if (lVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1000b88cc);
          (*pcVar10)();
        }
        uVar11 = plVar16[-1];
        lVar6 = *plVar16;
        cVar8 = (char)plVar16[-2];
        cVar9 = (char)plVar17[-2];
        uVar5 = plVar17[-1];
        lVar7 = *plVar17;
        uVar1 = uVar14;
        if (cVar8 != '\x01') {
          uVar1 = 0xd000000000000012;
        }
        lVar3 = -0x1b00000000000000;
        if (cVar8 != '\x01') {
          lVar3 = -0x7ffffffefff36370;
        }
        uVar12 = 0x676e6f6c;
        if (cVar8 != '\0') {
          uVar12 = uVar1;
        }
        lVar2 = -0x1c00000000000000;
        if (cVar8 != '\0') {
          lVar2 = lVar3;
        }
        if (cVar9 != '\x01') {
          uVar14 = 0xd000000000000012;
        }
        lVar3 = -0x1b00000000000000;
        if (cVar9 != '\x01') {
          lVar3 = -0x7ffffffefff36370;
        }
        uVar1 = 0x676e6f6c;
        if (cVar9 != '\0') {
          uVar1 = uVar14;
        }
        lVar4 = -0x1c00000000000000;
        if (cVar9 != '\0') {
          lVar4 = lVar3;
        }
        if ((uVar12 == uVar1) && (lVar2 == lVar4)) {
          _swift_bridgeObjectRetain(lVar6);
          _swift_bridgeObjectRetain(lVar7);
          _swift_bridgeObjectRelease(lVar2);
          _swift_bridgeObjectRelease(lVar4);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar12,lVar2,uVar1,lVar4,0);
          _swift_bridgeObjectRetain(lVar6);
          _swift_bridgeObjectRetain(lVar7);
          _swift_bridgeObjectRelease(lVar2);
          _swift_bridgeObjectRelease(lVar4);
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar6);
            _swift_bridgeObjectRelease(lVar7);
            goto LAB_1000b88a4;
          }
        }
        if ((uVar11 == uVar5) && (lVar6 == lVar7)) {
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(lVar7);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar11,lVar6,uVar5,lVar7,0);
          _swift_bridgeObjectRelease(lVar6);
          _swift_bridgeObjectRelease(lVar7);
          if ((uVar11 & 1) == 0) goto LAB_1000b88a4;
        }
        plVar16 = plVar16 + 3;
        plVar17 = plVar17 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_1000b88a4:
    uVar13 = 0;
  }
  return uVar13;
}

