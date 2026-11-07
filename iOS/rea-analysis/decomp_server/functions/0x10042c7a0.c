// rea decompile_all
// name: FUN_10042c7a0
// address: 0x10042c7a0
// body: available
// range: 0x10042c7a0-0x10042c867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10042c7a0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *param_1;
  dVar1 = param_1[1];
  dVar6 = param_1[2];
  dVar7 = param_1[3];
  if (((ulong)param_1[4] >> 0x3d & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x27) >> 5 & 1) != 0) {
      return 0;
    }
    dVar2 = param_2[2];
    dVar3 = param_2[3];
    if ((dVar5 != *param_2 || dVar1 != param_2[1]) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (dVar5,dVar1,*param_2,param_2[1],0), ((ulong)dVar5 & 1) == 0)) {
      return 0;
    }
    FUN_1000094a4(dVar6,dVar7,dVar2,dVar3);
  }
  else {
    if (((ulong)param_2[4] >> 0x3d & 1) == 0) {
      return 0;
    }
    bVar4 = false;
    if ((*param_2 == dVar5) && (bVar4 = false, !NAN(param_2[1]) && !NAN(dVar1))) {
      bVar4 = param_2[1] == dVar1;
    }
    if (!bVar4 || SUB84(dVar6,0) != *(int *)(param_2 + 2)) {
      return 0;
    }
    FUN_1000094a4(dVar7,(ulong)param_1[4] & 0xdfffffffffffffff,param_2[3],
                  (ulong)param_2[4] & 0xdfffffffffffffff);
    dVar6 = dVar7;
  }
  if (((ulong)dVar6 & 1) == 0) {
    return 0;
  }
  return 1;
}

