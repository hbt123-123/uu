// rea decompile_all
// name: FUN_100312ba4
// address: 0x100312ba4
// body: available
// range: 0x100312ba4-0x100312cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100312cc0 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100312ba4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  code *pcVar6;
  void *pvVar7;
  void *pvVar8;
  
  pvVar4 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    pvVar8 = *(void **)((long)pvVar4 + 0x68);
    pvVar7 = *(void **)((long)pvVar4 + 0x70);
    uVar1 = *(undefined8 *)((long)pvVar4 + 0x58);
    lVar2 = *(long *)((long)pvVar4 + 0x60);
    lVar3 = **(long **)((long)pvVar4 + 0x28);
    *(undefined8 *)((long)pvVar4 + 0x40) = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x58);
    *(void **)((long)pvVar4 + 0x50) = pvVar7;
    FUN_1002c6c70(FUN_100317088,(long)pvVar4 + 0x30,PTR___sytN_100995e90 + 8);
    (**(code **)(lVar2 + 8))(pvVar7,uVar1);
  }
  else {
    pvVar8 = *(void **)((long)pvVar4 + 0x68);
    pvVar7 = *(void **)((long)pvVar4 + 0x70);
    uVar1 = *(undefined8 *)((long)pvVar4 + 0x58);
    lVar2 = *(long *)((long)pvVar4 + 0x60);
    plVar5 = *(long **)((long)pvVar4 + 0x28);
    (**(code **)(lVar2 + 0x10))(pvVar8,pvVar7,uVar1);
    lVar3 = *plVar5;
    *(undefined8 *)((long)pvVar4 + 0x10) = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x18) = *(undefined8 *)(lVar3 + 0x58);
    *(void **)((long)pvVar4 + 0x20) = pvVar8;
    FUN_1002c6c70(FUN_100317088,pvVar4,PTR___sytN_100995e90 + 8);
    pcVar6 = *(code **)(lVar2 + 8);
    (*pcVar6)(pvVar8,uVar1);
    (*pcVar6)(pvVar7,uVar1);
  }
  _free(pvVar7);
  _free(pvVar8);
  _free(pvVar4);
  return;
}

