// rea decompile_all
// name: FUN_10027e088
// address: 0x10027e088
// body: available
// range: 0x10027e088-0x10027e16b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027e168 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027e088(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch((ulong)puVar1 & 0xffffffff) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
    lVar2 = 0;
    __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x00010027e0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  case 3:
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    puVar4 = &DAT_100a824b0;
    puVar5 = &DAT_100816d00;
    break;
  case 6:
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    puVar4 = &DAT_100a824b8;
    puVar5 = &DAT_1008176b0;
    break;
  case 0xb:
  case 0xc:
    uVar3 = *param_1;
    goto LAB_10027e160;
  default:
    return;
  }
  FUN_100004bb4(puVar4,puVar5);
  uVar3 = *(undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x30));
LAB_10027e160:
  _swift_errorRelease(uVar3);
  return;
}

