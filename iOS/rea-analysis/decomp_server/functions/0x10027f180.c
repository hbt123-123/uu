// rea decompile_all
// name: FUN_10027f180
// address: 0x10027f180
// body: available
// range: 0x10027f180-0x10027f297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027f224 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10027f180(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar4 = 0;
    }
    else {
      if (iVar1 != 1) {
LAB_10027f208:
        puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar2;
      }
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    uVar4 = param_2[2];
    param_1[2] = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    uVar4 = 2;
  }
  else {
    if (iVar1 != 4) goto LAB_10027f208;
    uVar4 = *param_2;
    _swift_errorRetain(uVar4);
    *param_1 = uVar4;
    uVar4 = 4;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  return param_1;
}

