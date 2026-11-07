// rea decompile_all
// name: FUN_100385204
// address: 0x100385204
// body: available
// range: 0x100385204-0x10038540b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038521c to 0x10038540c FUN_10038540c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100385230 to 0x1003855b0 FUN_1003855b0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100385234 to 0x100385504 FUN_100385504 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100385204(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      FUN_1003855b0(param_2,param_3);
      return param_2;
    }
    lVar1 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar15 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar2 = *(long *)((long)param_2 + (param_3 - 8));
    uVar7 = lVar1 + lVar15;
    lVar9 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar4 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar8 = (uVar4 ^ lVar9 + param_3) * -0x622015f714c7d297;
    uVar8 = (uVar4 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar14 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar8 = lVar3 + lVar12 + uVar14;
    uVar11 = lVar12 + lVar1 + lVar9;
    uVar10 = uVar11 + lVar3;
    uVar8 = (uVar11 >> 0x2c | uVar11 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    lVar12 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar11 = lVar12 + lVar3 + lVar2;
    uVar4 = lVar12 + uVar4 + lVar15;
    uVar13 = uVar4 + lVar2;
    uVar11 = (uVar4 >> 0x2c | uVar4 * 0x100000) + lVar12 + (uVar11 >> 0x15 | uVar11 << 0x2b);
    plVar6 = param_2 + 4;
    lVar15 = *param_2 + lVar3 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar4 = lVar15 + uVar10 + uVar7 + plVar6[-3];
      uVar7 = uVar7 + uVar8 + plVar6[2];
      uVar5 = (uVar4 >> 0x25 | uVar4 * 0x8000000) * -0x4b6d499041670d8d ^ uVar11;
      uVar7 = plVar6[1] + uVar10 + (uVar7 >> 0x2a | uVar7 * 0x400000) * -0x4b6d499041670d8d;
      lVar15 = (uVar14 + uVar13 >> 0x21 | (uVar14 + uVar13) * 0x80000000) * -0x4b6d499041670d8d;
      lVar9 = plVar6[-4] + uVar8 * -0x4b6d499041670d8d;
      uVar8 = lVar9 + uVar13 + plVar6[-1] + uVar5;
      uVar4 = lVar9 + plVar6[-3] + plVar6[-2];
      uVar10 = uVar4 + plVar6[-1];
      uVar8 = (uVar4 >> 0x2c | uVar4 * 0x100000) + lVar9 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      lVar9 = lVar15 + uVar11 + *plVar6;
      uVar11 = uVar7 + plVar6[-2] + lVar9 + plVar6[3];
      uVar4 = lVar9 + plVar6[1] + plVar6[2];
      uVar13 = uVar4 + plVar6[3];
      uVar11 = (uVar4 >> 0x2c | uVar4 * 0x100000) + lVar9 + (uVar11 >> 0x15 | uVar11 << 0x2b);
      plVar6 = plVar6 + 8;
      lVar12 = lVar12 + 0x40;
      uVar14 = uVar5;
    } while (lVar12 != 0);
    uVar10 = (uVar13 ^ uVar10) * -0x622015f714c7d297;
    uVar10 = (uVar13 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar8 = (uVar11 ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar11 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
    uVar8 = lVar15 + (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar5 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    return (long *)((uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297);
  }
  if (param_3 < 0x11) {
    FUN_10038540c();
    return param_2;
  }
  FUN_100385504(param_2,param_3);
  return param_2;
}

