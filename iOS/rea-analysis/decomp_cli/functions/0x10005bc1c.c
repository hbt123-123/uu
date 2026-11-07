// rea decompile_all
// name: FUN_10005bc1c
// address: 0x10005bc1c
// body: available
// range: 0x10005bc1c-0x10005bcb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005bcb0 to 0x1000c2840 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005bc1c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[4];
  pvVar4 = (void *)param_1[5];
  if ((param_2 & 1) == 0) {
    FUN_10005bae8(pvVar4,*param_1);
  }
  else {
    uVar2 = param_1[2];
    lVar5 = param_1[3];
    uVar3 = *param_1;
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_10005bae8(pvVar1,uVar3);
    (**(code **)(lVar5 + 8))(pvVar4,uVar2);
  }
  _free(pvVar4);
  _free(pvVar1);
  _free(param_1);
  return;
}

