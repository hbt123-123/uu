// rea decompile_all
// name: FUN_100398898
// address: 0x100398898
// body: available
// range: 0x100398898-0x10039892f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039892c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100398898(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  code *pcVar6;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = *(void **)((long)pvVar5 + 0x18);
  pvVar3 = *(void **)((long)pvVar5 + 0x20);
  uVar2 = *(undefined8 *)((long)pvVar5 + 8);
  lVar4 = *(long *)((long)pvVar5 + 0x10);
  if ((param_2 & 1) == 0) {
    FUN_100398ca4(pvVar3);
    pcVar6 = *(code **)(lVar4 + 8);
  }
  else {
    (**(code **)(lVar4 + 0x10))(pvVar1,pvVar3,uVar2);
    FUN_100398ca4(pvVar1);
    pcVar6 = *(code **)(lVar4 + 8);
    (*pcVar6)(pvVar1,uVar2);
  }
  (*pcVar6)(pvVar3,uVar2);
  _free(pvVar3);
  _free(pvVar1);
  _free(pvVar5);
  return;
}

