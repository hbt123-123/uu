// rea decompile_all
// name: FUN_100369438
// address: 0x100369438
// body: available
// range: 0x100369438-0x100369573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100369528 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100369438(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar3;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      uVar4 = 0;
      FUN_100365874(0);
      puVar3 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,uVar4);
      if (8 < (uint)puVar3) {
        if ((uint)puVar3 != 9) {
          return;
        }
        goto LAB_10036951c;
      }
    }
    else {
      if (iVar1 == 1) {
        uVar4 = 0;
        FUN_100365860(0);
        puVar3 = param_1;
        _swift_getEnumCaseMultiPayload(param_1,uVar4);
        uVar2 = (uint)puVar3;
        goto joined_r0x000100369564;
      }
      if (iVar1 != 2) {
        return;
      }
      uVar4 = 0;
      FUN_10036584c(0);
      puVar3 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,uVar4);
      if (0xb < (uint)puVar3) {
        return;
      }
    }
  }
  else if (iVar1 == 3) {
    uVar4 = 0;
    FUN_100365838(0);
    puVar3 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar4);
    if (2 < (uint)puVar3) {
      return;
    }
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 != 5) {
        return;
      }
      goto LAB_10036951c;
    }
    uVar4 = 0;
    FUN_100365824(0);
    puVar3 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar4);
    uVar2 = (uint)puVar3;
joined_r0x000100369564:
    if (5 < uVar2) {
      return;
    }
  }
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 8))(param_1,lVar5);
  puVar6 = &DAT_100a88a88;
  FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
LAB_10036951c:
  _swift_errorRelease(*param_1);
  return;
}

