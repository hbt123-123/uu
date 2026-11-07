// rea decompile_all
// name: FUN_1003d23e4
// address: 0x1003d23e4
// body: available
// range: 0x1003d23e4-0x1003d25d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d23e4(undefined1 *param_1,double param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  double *pdVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  
  puVar7 = (ulong *)(param_3 + 0x38);
  uVar8 = *puVar7;
  uVar2 = *(ulong *)(uVar8 + 0x10);
  uVar3 = uVar2;
  if (uVar2 != 0) {
    uVar9 = 0;
    dVar12 = param_2 - *(double *)(param_3 + 0x10);
    lVar10 = -0x28;
    do {
      if (*(double *)(uVar8 + uVar9 * 8 + 0x20) <= dVar12) {
        uVar3 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d25c4);
          (*pcVar1)();
        }
        uVar2 = uVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar7 = uVar8;
        if ((uVar2 & 1) == 0) {
          FUN_10040a4a4();
        }
        uVar5 = *(ulong *)(uVar8 + 0x10);
        uVar2 = uVar9;
        if (uVar3 != uVar5) {
          pdVar6 = (double *)(uVar8 - lVar10);
          do {
            if (uVar5 <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d257c);
              (*pcVar1)();
            }
            if (dVar12 < *pdVar6) {
              if (uVar3 != uVar2) {
                if (uVar5 <= uVar2) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d2578);
                  (*pcVar1)();
                }
                dVar11 = *(double *)(uVar8 + 0x20 + uVar2 * 8);
                *(double *)(uVar8 + 0x20 + uVar2 * 8) = *pdVar6;
                *pdVar6 = dVar11;
                uVar5 = *(ulong *)(uVar8 + 0x10);
              }
              uVar2 = uVar2 + 1;
            }
            uVar3 = uVar3 + 1;
            pdVar6 = pdVar6 + 1;
          } while (uVar3 != uVar5);
        }
        *puVar7 = uVar8;
        uVar3 = *(ulong *)(uVar8 + 0x10);
        if ((long)*(ulong *)(uVar8 + 0x10) < (long)uVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d2580);
          (*pcVar1)();
        }
        break;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (uVar2 != uVar9);
  }
  FUN_100082518(uVar2,uVar3,FUN_10039ea84,FUN_1003d2e64);
  uVar2 = *(ulong *)(param_3 + 0x38);
  lVar10 = *(long *)(uVar2 + 0x10);
  if (lVar10 < *(long *)(param_3 + 0x18)) {
    uVar3 = uVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    *puVar7 = uVar2;
    uVar8 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar8 = 0;
      FUN_10039ea84(0,lVar10 + 1,1,uVar2);
      *puVar7 = uVar8;
    }
    uVar2 = *(ulong *)(uVar8 + 0x10);
    uVar3 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_10039ea84(uVar3,uVar2 + 1,1,uVar8);
    }
    *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
    *(double *)(uVar3 + uVar2 * 8 + 0x20) = param_2;
    *(ulong *)(param_3 + 0x38) = uVar3;
    FUN_1003d25d4();
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *param_1 = uVar4;
  return;
}

