// rea decompile_all
// name: FUN_1002bc0f0
// address: 0x1002bc0f0
// body: available
// range: 0x1002bc0f0-0x1002bc257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bc200 to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002bc0f0(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1 = (undefined8 *)*param_1;
  lVar5 = param_1[1];
  if ((param_2 & 1) == 0) {
    if (lVar5 == 0) {
      uVar6 = param_1[5];
      uVar2 = param_1[2];
      uVar1 = param_1[3];
      _swift_bridgeObjectRetain(uVar1);
      uVar3 = uVar1;
      FUN_1002bbc2c(uVar2,uVar1,uVar6);
      uVar4 = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_1002bc1ec;
      FUN_1002bbd3c(uVar2);
      _swift_bridgeObjectRelease(uVar4);
    }
    else {
      uVar2 = param_1[3];
      uVar6 = param_1[2];
      uVar7 = *param_1;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1002bba74(uVar6,uVar2,uVar7,lVar5);
      _swift_bridgeObjectRelease(lVar5);
      param_4 = param_1[3];
    }
  }
  else {
    if (lVar5 == 0) {
      uVar6 = param_1[5];
      uVar2 = param_1[2];
      uVar1 = param_1[3];
      _swift_bridgeObjectRetain(uVar1);
      uVar3 = uVar1;
      FUN_1002bbc2c(uVar2,uVar1,uVar6);
      uVar4 = uVar3;
      _swift_bridgeObjectRelease(uVar1);
      if ((uVar3 & 1) == 0) {
        FUN_1002bbd3c(uVar2);
        _swift_bridgeObjectRelease(uVar4);
        goto LAB_1002bc1e0;
      }
    }
    else {
      uVar2 = param_1[3];
      uVar6 = param_1[2];
      uVar7 = *param_1;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(lVar5);
      FUN_1002bba74(uVar6,uVar2,uVar7,lVar5);
      _swift_bridgeObjectRelease(lVar5);
      param_4 = param_1[3];
LAB_1002bc1e0:
      _swift_bridgeObjectRelease(param_4);
    }
    param_4 = param_1[1];
  }
  _swift_bridgeObjectRelease(param_4);
LAB_1002bc1ec:
  _free(param_1);
  return;
}

