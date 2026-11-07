// rea decompile_all
// name: FUN_100391108
// address: 0x100391108
// body: available
// range: 0x100391108-0x1003911d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100391108(undefined8 *param_1,char *param_2,long param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = operator_new(0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  param_1[5] = puVar1;
  *param_1 = param_2;
  if (param_3 == 0) {
    pvVar2 = operator_new(0x18);
    if (*param_2 == '\0') {
      pcVar3 = param_2 + 2;
      uVar4 = (ulong)(byte)param_2[1];
    }
    else {
      pcVar3 = *(char **)(param_2 + 10);
      uVar4 = *(ulong *)(param_2 + 2);
    }
    FUN_10037c13c(pvVar2,pcVar3,uVar4);
    lVar5 = 8;
  }
  else {
    pvVar2 = operator_new(0x50);
    if (*param_2 == '\0') {
      pcVar3 = param_2 + 2;
      uVar4 = (ulong)(byte)param_2[1];
    }
    else {
      pcVar3 = *(char **)(param_2 + 10);
      uVar4 = *(ulong *)(param_2 + 2);
    }
    thunk_FUN_10037c8d8(pvVar2,pcVar3,uVar4,param_3);
    lVar5 = 0x10;
  }
  *(void **)((long)param_1 + lVar5) = pvVar2;
  return param_1;
}

