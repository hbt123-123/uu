// rea decompile_all
// name: FUN_10027c210
// address: 0x10027c210
// body: available
// range: 0x10027c210-0x10027c507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027c264 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c27c to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c2fc to 0x100278f18 FUN_100278f18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c3e4 to 0x100278e14 FUN_100278e14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c3fc to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c424 to 0x10027ba4c FUN_10027ba4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10027c48c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027c210(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  switch((ulong)puVar2 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    break;
  case 2:
    _swift_errorRelease(*param_1);
    puVar5 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar5 + 0x30);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 8);
    (*UNRECOVERED_JUMPTABLE)((long)param_1 + (long)iVar1,lVar4);
    param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x40));
    goto LAB_10027c3b0;
  case 3:
    FUN_10003f094(param_1);
    return;
  case 4:
    uVar3 = 0;
    FUN_100278198(0);
    puVar2 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar3);
    switch((ulong)puVar2 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_10027c334_caseD_0:
      lVar4 = 0;
      __s10Foundation3URLVMa();
LAB_10027c340:
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 8);
LAB_10027c3b0:
                    /* WARNING: Could not recover jumptable at 0x00010027c3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar4);
      return;
    case 3:
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
      puVar5 = &DAT_100a824b0;
      puVar6 = &DAT_100816d00;
      break;
    case 6:
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
      puVar5 = &DAT_100a824b8;
      puVar6 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10027c24c_caseD_0;
    default:
      goto switchD_10027c24c_default;
    }
    FUN_100004bb4(puVar5,puVar6);
    uVar3 = *(undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30));
    goto LAB_10027c254;
  case 5:
    FUN_10027ba4c(*param_1);
    return;
  case 6:
    FUN_100278f18(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
    return;
  case 8:
    _swift_errorRelease(*param_1);
    uVar3 = param_1[1];
    goto LAB_10027c254;
  case 9:
    uVar3 = 0;
    FUN_1002782c4(0);
    puVar2 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar3);
    iVar1 = (int)puVar2;
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        uVar3 = *param_1;
        goto LAB_10027c47c;
      }
      goto switchD_10027c334_caseD_0;
    }
    if (iVar1 == 2) {
      _swift_bridgeObjectRelease(*param_1);
      uVar3 = param_1[2];
LAB_10027c47c:
      _swift_bridgeObjectRelease(uVar3);
      return;
    }
    if (iVar1 != 4) {
      return;
    }
    break;
  case 10:
    uVar3 = 0;
    FUN_100278368(0);
    puVar2 = param_1;
    _swift_getEnumCaseMultiPayload(param_1,uVar3);
    iVar1 = (int)puVar2;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_10027c334_caseD_0;
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return;
        }
        break;
      }
      lVar4 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_10027c340;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 != 5) {
        return;
      }
      uVar3 = param_1[1];
      goto LAB_10027c47c;
    }
    break;
  case 0xb:
    FUN_100278e14(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],*(undefined1 *)(param_1 + 5))
    ;
    return;
  case 0xe:
    FUN_100006cdc(*param_1,param_1[1]);
    return;
  default:
switchD_10027c24c_default:
    return;
  }
switchD_10027c24c_caseD_0:
  uVar3 = *param_1;
LAB_10027c254:
  _swift_errorRelease(uVar3);
  return;
}

