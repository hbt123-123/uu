// rea decompile_all
// name: FUN_1006aa75c
// address: 0x1006aa75c
// body: available
// range: 0x1006aa75c-0x1006aa823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006aa820 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aa75c(undefined8 param_1,void *param_2,size_t param_3,byte *param_4,undefined8 param_5,
                  byte param_6)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_100691c84(param_4,param_3 + 0x4a,1);
  pbVar1 = param_4;
  FUN_100691fa4(param_4,0);
  FUN_1006aa6ac(param_1,pbVar1,0,param_5);
  pbVar1 = param_4;
  FUN_100691fa4(param_4,0);
  iVar2 = 0;
  if (*pbVar1 - 6 < 8) {
    iVar2 = *(int *)(pbVar1 + 5);
  }
  *(int *)(pbVar1 + 5) = iVar2 + (int)param_3;
  pbVar1 = param_4;
  FUN_100691fa4(param_4,0);
  pbVar1[param_3 + 0x49] = param_6;
  FUN_100691fa4(param_4,0);
  _memcpy(param_4 + 0x49,param_2,param_3);
  return;
}

