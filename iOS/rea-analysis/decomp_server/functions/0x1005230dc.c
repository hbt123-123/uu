// rea decompile_all
// name: FUN_1005230dc
// address: 0x1005230dc
// body: available
// range: 0x1005230dc-0x100523327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005230dc(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_60 [8];
  double local_58;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  puVar5 = auStack_60 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100523314);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100523318);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10052331c);
    (*pcVar1)();
  }
  dVar7 = (param_1 - (double)(long)param_1) * 1000000000.0;
  local_58 = dVar7;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_100995bd8)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_100995bd0)
       ) || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_100995be0)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_100995be8 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0)))) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_100995bc8) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    pcVar1 = *(code **)(lVar6 + 8);
    (*pcVar1)(param_2,lVar3);
    (*pcVar1)(puVar5,lVar3);
    dVar7 = local_58;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100523320);
    (*pcVar1)();
  }
  if (dVar7 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100523324);
    (*pcVar1)();
  }
  if (dVar7 < 2147483648.0) {
    FUN_100522c78((long)param_1,(int)dVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100523328);
  (*pcVar1)();
}

