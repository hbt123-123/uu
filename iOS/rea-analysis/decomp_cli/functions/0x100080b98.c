// rea decompile_all
// name: FUN_100080b98
// address: 0x100080b98
// body: available
// range: 0x100080b98-0x100080f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100080b98(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  
  lVar21 = *(long *)(param_1 + 0x10);
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 != 0) && (param_1 != param_2)) {
      puVar22 = (ulong *)(param_1 + 0x30);
      puVar23 = (ulong *)(param_2 + 0x30);
      do {
        if (lVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100080f28);
          (*pcVar14)();
        }
        uVar15 = puVar22[-2];
        uVar7 = puVar22[-1];
        uVar2 = *puVar22;
        uVar16 = puVar22[1];
        uVar3 = puVar22[2];
        uVar8 = puVar22[3];
        uVar18 = puVar22[4];
        uVar13 = puVar22[5];
        uVar4 = puVar23[-2];
        uVar9 = puVar23[-1];
        uVar5 = *puVar23;
        uVar10 = puVar23[1];
        uVar6 = puVar23[2];
        uVar11 = puVar23[3];
        uVar19 = puVar23[4];
        bVar1 = (byte)puVar23[5];
        if ((uVar2 >> 0x3d & 3) == 0) {
          if ((uVar5 & 0x6000000000000000) != 0) goto LAB_100080ee4;
          uVar24 = (uint)uVar5;
          uVar20 = (uint)uVar2;
          if ((long)uVar2 < 0) {
            if (-1 < (long)uVar5) goto LAB_100080ee4;
            uVar12 = uVar20 >> 6 & 3;
            if (uVar12 == 0) {
              if (0x3f < (uVar24 & 0xff)) goto LAB_100080ee4;
LAB_100080dcc:
              if (((uVar15 != uVar4) || (uVar7 != uVar9)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar15 & 1) == 0)) goto LAB_100080ee4;
            }
            else {
              if (uVar12 != 1) {
                if ((uVar24 & 0xc0) == 0x80) goto LAB_100080dcc;
                goto LAB_100080ee4;
              }
              if ((uVar24 & 0xc0) != 0x40) goto LAB_100080ee4;
              if ((uVar15 == uVar4) && (uVar7 == uVar9)) {
                if (((uVar20 ^ uVar24) & 1) != 0) goto LAB_100080ee4;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                if ((uVar15 & 1) == 0) {
                  return 0;
                }
                if (((uVar20 ^ uVar24) & 1) != 0) {
                  return 0;
                }
              }
            }
            if ((uVar16 == uVar10) && (uVar3 == uVar6)) goto LAB_100080d48;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar16,uVar3,uVar10,uVar6,0);
            uVar15 = uVar16;
joined_r0x000100080ec4:
            if ((uVar15 & 1) == 0) {
              return 0;
            }
          }
          else {
            if ((long)uVar5 < 0) goto LAB_100080ee4;
            uVar12 = uVar20 >> 6 & 3;
            if (uVar12 == 0) {
              if ((uVar24 & 0xff) < 0x40) {
LAB_100080c48:
                if ((uVar15 == uVar4) && (uVar7 == uVar9)) goto LAB_100080d48;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                goto joined_r0x000100080ec4;
              }
              goto LAB_100080ee4;
            }
            if (uVar12 != 1) {
              if ((uVar24 & 0xc0) == 0x80) goto LAB_100080c48;
              goto LAB_100080ee4;
            }
            if ((uVar24 & 0xc0) != 0x40) goto LAB_100080ee4;
            if ((uVar15 == uVar4) && (uVar7 == uVar9)) {
              if (((uVar20 ^ uVar24) & 1) != 0) {
                return 0;
              }
              if (uVar8 != uVar11) {
                return 0;
              }
              goto LAB_100080d50;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            if ((uVar15 & 1) == 0) {
              return 0;
            }
            if (((uVar20 ^ uVar24) & 1) != 0) {
              return 0;
            }
          }
          if (uVar8 != uVar11) {
            return 0;
          }
        }
        else {
          if (((uint)(uVar2 >> 0x3d) & 3) == 1) {
            if ((uVar5 & 0x6000000000000000) == 0x2000000000000000) goto LAB_100080c48;
            goto LAB_100080ee4;
          }
          if ((((uVar5 & 0x6000000000000000) != 0x4000000000000000) || (uVar5 != 0x4000000000000000)
              ) || ((uVar9 != 0 || uVar4 != 0) || (uVar10 != 0 || uVar6 != 0))) {
            FUN_1000838ec(uVar15,uVar7,uVar2,uVar16);
            return 0;
          }
          FUN_1000838ec(uVar15,uVar7,uVar2,uVar16);
LAB_100080d48:
          if (uVar8 != uVar11) goto LAB_100080ee4;
        }
LAB_100080d50:
        if ((char)uVar13 == '\0') {
          if (uVar18 != uVar19) {
            bVar1 = 1;
          }
          if ((bVar1 & 1) != 0) goto LAB_100080ee4;
        }
        else if ((bVar1 & 1) == 0) goto LAB_100080ee4;
        puVar22 = puVar22 + 8;
        puVar23 = puVar23 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar17 = 1;
  }
  else {
LAB_100080ee4:
    uVar17 = 0;
  }
  return uVar17;
}

