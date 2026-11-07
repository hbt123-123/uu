// rea decompile_all
// name: FUN_10039f4e4
// address: 0x10039f4e4
// body: available
// range: 0x10039f4e4-0x10039f59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039f59c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039f4e4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    pvVar5 = (void *)param_1[4];
    pvVar4 = (void *)param_1[5];
    uVar2 = param_1[2];
    lVar1 = param_1[3];
    FUN_10039fa10(pvVar4,*param_1);
    (**(code **)(lVar1 + 8))(pvVar4,uVar2);
  }
  else {
    pvVar4 = (void *)param_1[5];
    lVar1 = param_1[3];
    pvVar5 = (void *)param_1[4];
    uVar2 = param_1[2];
    uVar6 = *param_1;
    (*(code *)param_1[6])(pvVar5,pvVar4,uVar2);
    FUN_10039fa10(pvVar5,uVar6);
    pcVar3 = *(code **)(lVar1 + 8);
    (*pcVar3)(pvVar5,uVar2);
    (*pcVar3)(pvVar4,uVar2);
  }
  _free(pvVar4);
  _free(pvVar5);
  _free(param_1);
  return;
}

