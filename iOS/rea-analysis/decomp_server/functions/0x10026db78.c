// rea decompile_all
// name: FUN_10026db78
// address: 0x10026db78
// body: available
// range: 0x10026db78-0x10026dc1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10026dc1c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10026db78(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar2 = 0;
  FUN_10026d874(0);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
    }
    else if (iVar1 == 0) {
      FUN_100006cdc(*param_1,param_1[1]);
    }
  }
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x1c) + 8));
  return;
}

