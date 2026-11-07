// rea decompile_all
// name: FUN_1003e3c20
// address: 0x1003e3c20
// body: available
// range: 0x1003e3c20-0x1003e3cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e3cf8 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e3c20(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *pvVar8;
  code *pcVar9;
  
  pvVar8 = (void *)*param_1;
  lVar1 = *(long *)((long)pvVar8 + 0x30);
  pvVar4 = *(void **)((long)pvVar8 + 0x38);
  pvVar2 = *(void **)((long)pvVar8 + 0x20);
  uVar5 = *(undefined8 *)((long)pvVar8 + 0x28);
  lVar3 = *(long *)((long)pvVar8 + 0x10);
  pvVar6 = *(void **)((long)pvVar8 + 0x18);
  uVar7 = *(undefined8 *)((long)pvVar8 + 8);
  if ((param_2 & 1) == 0) {
    FUN_1003e3e24(pvVar2,pvVar4);
    (**(code **)(lVar1 + 8))(pvVar4,uVar5);
    pcVar9 = *(code **)(lVar3 + 8);
  }
  else {
    (**(code **)(lVar3 + 0x10))(pvVar6,pvVar2,uVar7);
    FUN_1003e3e24(pvVar6,pvVar4);
    (**(code **)(lVar1 + 8))(pvVar4,uVar5);
    pcVar9 = *(code **)(lVar3 + 8);
    (*pcVar9)(pvVar6,uVar7);
  }
  (*pcVar9)(pvVar2,uVar7);
  _free(pvVar4);
  _free(pvVar2);
  _free(pvVar6);
  _free(pvVar8);
  return;
}

