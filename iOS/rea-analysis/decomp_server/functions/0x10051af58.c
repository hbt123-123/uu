// rea decompile_all
// name: FUN_10051af58
// address: 0x10051af58
// body: available
// range: 0x10051af58-0x10051b1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051af58(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double local_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar7 = *(long *)(lVar3 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_1;
  __ss8DurationV10componentss5Int64V7seconds_AE11attosecondstvg(param_1,param_2);
  __ss8DurationV10componentss5Int64V7seconds_AE11attosecondstvg(param_1);
  dVar8 = (double)(param_2 % 1000000000) / 1000000000.0;
  local_68 = dVar8;
  (**(code **)(lVar7 + 0x10))(puVar6,param_3,lVar3);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x58))(puVar6,lVar3);
  iVar2 = (int)puVar5;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_100995bd8)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_100995bd0)
       ) || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_100995be0)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_100995be8 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0)))) {
    (**(code **)(lVar7 + 8))(param_3,lVar3);
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_100995bc8) {
    (**(code **)(lVar7 + 8))(param_3,lVar3);
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_3);
    pcVar1 = *(code **)(lVar7 + 8);
    (*pcVar1)(param_3,lVar3);
    (*pcVar1)(puVar6,lVar3);
    dVar8 = local_68;
  }
  if (param_2 < -0x1dcd65003b9ac9ff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1d4);
    (*pcVar1)();
  }
  if (0x1dcd64ffffffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1d8);
    (*pcVar1)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1dc);
    (*pcVar1)();
  }
  if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1e0);
    (*pcVar1)();
  }
  if (dVar8 < 2147483648.0) {
    iVar2 = (int)(param_2 / 1000000000);
    if (!SCARRY4(iVar2,(int)dVar8)) {
      FUN_10051ac80(uVar4,iVar2 + (int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1e8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051b1e4);
  (*pcVar1)();
}

