// rea decompile_all
// name: FUN_1000e3edc
// address: 0x1000e3edc
// body: available
// range: 0x1000e3edc-0x1000e408b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000e3edc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      lVar23 = 0;
      do {
        if (lVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1000e408c);
          (*pcVar15)();
        }
        lVar1 = param_1 + lVar23;
        lVar2 = param_2 + lVar23;
        if (*(int *)(lVar1 + 0x20) != *(int *)(lVar2 + 0x20)) goto LAB_1000e4064;
        uVar16 = *(ulong *)(lVar1 + 0x28);
        lVar3 = *(long *)(lVar1 + 0x38);
        lVar7 = *(long *)(lVar1 + 0x40);
        uVar17 = *(ulong *)(lVar1 + 0x48);
        lVar8 = *(long *)(lVar1 + 0x50);
        uVar18 = *(ulong *)(lVar1 + 0x58);
        lVar9 = *(long *)(lVar1 + 0x60);
        lVar21 = *(long *)(lVar1 + 0x68);
        bVar13 = *(byte *)(lVar1 + 0x70);
        lVar4 = *(long *)(lVar2 + 0x38);
        lVar10 = *(long *)(lVar2 + 0x40);
        uVar5 = *(ulong *)(lVar2 + 0x48);
        lVar11 = *(long *)(lVar2 + 0x50);
        uVar6 = *(ulong *)(lVar2 + 0x58);
        lVar12 = *(long *)(lVar2 + 0x60);
        lVar20 = *(long *)(lVar2 + 0x68);
        bVar14 = *(byte *)(lVar2 + 0x70);
        if (((uVar16 != *(ulong *)(lVar2 + 0x28)) ||
            (*(long *)(lVar1 + 0x30) != *(long *)(lVar2 + 0x30))) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar16 & 1) == 0)) {
          return 0;
        }
        if (lVar3 != lVar4) {
          return 0;
        }
        if (lVar7 != lVar10) {
          return 0;
        }
        if (((uVar17 != uVar5) || (lVar8 != lVar11)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar17,lVar8,uVar5,lVar11,0), (uVar17 & 1) == 0)) goto LAB_1000e4064;
        if (((uVar18 != uVar6) || (lVar9 != lVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar18 & 1) == 0)) {
          return 0;
        }
        if (lVar21 != lVar20) {
          return 0;
        }
        if (((bVar13 ^ bVar14) & 1) != 0) {
          return 0;
        }
        lVar23 = lVar23 + 0x58;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    uVar19 = 1;
  }
  else {
LAB_1000e4064:
    uVar19 = 0;
  }
  return uVar19;
}

