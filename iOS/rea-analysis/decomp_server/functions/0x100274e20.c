// rea decompile_all
// name: FUN_100274e20
// address: 0x100274e20
// body: available
// range: 0x100274e20-0x100274f77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100274ee8 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100274f00 to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100274f44 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100274f74 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100274e20(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (4 < iVar1) {
    if (iVar1 < 8) {
      if (iVar1 == 5) {
        _swift_bridgeObjectRelease(*param_1);
        FUN_10003f094(param_1 + 1);
        uVar3 = param_1[6];
      }
      else {
        if (iVar1 == 6) {
          lVar4 = 0;
          __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x000100274f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
          return;
        }
        if (iVar1 != 7) {
          return;
        }
        uVar3 = *param_1;
      }
    }
    else {
      if (iVar1 != 8) {
        if (iVar1 == 9) {
          uVar3 = param_1[1];
        }
        else {
          if (iVar1 != 10) {
            return;
          }
          _swift_bridgeObjectRelease(*param_1);
          FUN_10003f094(param_1 + 1);
          uVar3 = param_1[7];
        }
        goto LAB_100274f3c;
      }
      _swift_bridgeObjectRelease(*param_1);
      uVar3 = param_1[1];
    }
LAB_100274f6c:
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      FUN_100006cdc(*param_1,param_1[1]);
      return;
    }
    if (iVar1 == 1) {
LAB_100274ef4:
      FUN_10003f094(param_1);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      FUN_10003f094(param_1);
      uVar3 = param_1[5];
LAB_100274f3c:
      _swift_release(uVar3);
      return;
    }
    if (iVar1 == 3) {
      _swift_bridgeObjectRelease(*param_1);
      param_1 = param_1 + 1;
      goto LAB_100274ef4;
    }
    if (iVar1 == 4) {
      FUN_100006cdc(*param_1,param_1[1]);
      uVar3 = param_1[2];
      goto LAB_100274f6c;
    }
  }
  return;
}

