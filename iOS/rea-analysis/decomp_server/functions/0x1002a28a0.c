// rea decompile_all
// name: FUN_1002a28a0
// address: 0x1002a28a0
// body: available
// range: 0x1002a28a0-0x1002a2c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a2994 to 0x1007df22c _swift_errorRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a29ac to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a2a2c to 0x100278f18 FUN_100278f18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a2b14 to 0x100278e14 FUN_100278e14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a2b2c to 0x10003f094 FUN_10003f094 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a2b54 to 0x10027ba4c FUN_10027ba4c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002a2ba8 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a28a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = param_1;
  (**(code **)(lVar9 + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar9 + 8))(param_1,lVar2);
  }
  puVar6 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x1c));
  lVar3 = 0;
  FUN_100277ad0();
  puVar4 = puVar6;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar6,1,lVar3);
  if ((int)puVar4 != 0) {
switchD_1002a297c_default:
    return;
  }
  puVar4 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar3);
  switch((ulong)puVar4 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    break;
  case 2:
    _swift_errorRelease(*puVar6);
    puVar7 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar7 + 0x30);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*UNRECOVERED_JUMPTABLE)((long)puVar6 + (long)iVar1,lVar3);
    puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(puVar7 + 0x40));
    goto LAB_1002a2ae0;
  case 3:
    FUN_10003f094(puVar6);
    return;
  case 4:
    uVar5 = 0;
    FUN_100278198(0);
    puVar4 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,uVar5);
    switch((ulong)puVar4 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_1002a2a64_caseD_0:
      lVar3 = 0;
      __s10Foundation3URLVMa();
LAB_1002a2a70:
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 8);
LAB_1002a2ae0:
                    /* WARNING: Could not recover jumptable at 0x0001002a2af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar6,lVar3);
      return;
    case 3:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar6,lVar3);
      puVar7 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar6,lVar3);
      puVar7 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002a297c_caseD_0;
    default:
      goto switchD_1002a297c_default;
    }
    FUN_100004bb4(puVar7,puVar8);
    uVar5 = *(undefined8 *)((long)puVar6 + (long)*(int *)(puVar7 + 0x30));
    goto LAB_1002a2984;
  case 5:
    FUN_10027ba4c(*puVar6);
    return;
  case 6:
    FUN_100278f18(*puVar6,puVar6[1],*(undefined1 *)(puVar6 + 2));
    return;
  case 8:
    _swift_errorRelease(*puVar6);
    uVar5 = puVar6[1];
    goto LAB_1002a2984;
  case 9:
    uVar5 = 0;
    FUN_1002782c4(0);
    puVar4 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,uVar5);
    iVar1 = (int)puVar4;
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        uVar5 = *puVar6;
        goto LAB_1002a2b98;
      }
      goto switchD_1002a2a64_caseD_0;
    }
    if (iVar1 == 2) {
      _swift_bridgeObjectRelease(*puVar6);
      uVar5 = puVar6[2];
LAB_1002a2b98:
      _swift_bridgeObjectRelease(uVar5);
      return;
    }
    if (iVar1 != 4) {
      return;
    }
    break;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar4 = puVar6;
    _swift_getEnumCaseMultiPayload(puVar6,uVar5);
    iVar1 = (int)puVar4;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_1002a2a64_caseD_0;
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return;
        }
        break;
      }
      lVar3 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_1002a2a70;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 != 5) {
        return;
      }
      uVar5 = puVar6[1];
      goto LAB_1002a2b98;
    }
    break;
  case 0xb:
    FUN_100278e14(*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],*(undefined1 *)(puVar6 + 5));
    return;
  case 0xe:
    FUN_100006cdc(*puVar6,puVar6[1]);
    return;
  default:
    goto switchD_1002a297c_default;
  }
switchD_1002a297c_caseD_0:
  uVar5 = *puVar6;
LAB_1002a2984:
  _swift_errorRelease(uVar5);
  return;
}

