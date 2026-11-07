// rea decompile_all
// name: FUN_1002d4be4
// address: 0x1002d4be4
// body: available
// range: 0x1002d4be4-0x1002d4fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002d4d2c to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d4be4(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  
  if (*(long *)(param_1 + 8) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10003f094(param_1 + 0x38);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10003f094(param_1 + 0x60);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 200));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xd0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xe0));
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_10003f094(param_1 + 0xf0);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_10003f094(param_1 + 0x118);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x148));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x150));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x158));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x5c));
  lVar3 = 0;
  FUN_100277ad0();
  puVar4 = puVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar1,1,lVar3);
  if ((int)puVar4 != 0) goto switchD_1002d4d5c_default;
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar3);
  switch((ulong)puVar4 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002d4d5c_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar6 + 0x30);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*pcVar8)((long)puVar1 + (long)iVar2,lVar3);
    (*pcVar8)((long)puVar1 + (long)*(int *)(puVar6 + 0x40),lVar3);
    break;
  case 3:
    FUN_10003f094(puVar1);
    break;
  case 4:
    uVar5 = 0;
    FUN_100278198(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar5);
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
switchD_1002d4e24_caseD_0:
      lVar3 = 0;
      __s10Foundation3URLVMa();
LAB_1002d4e30:
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      goto switchD_1002d4d5c_default;
    case 3:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      puVar6 = &DAT_100a824b0;
      puVar7 = &DAT_100816d00;
      break;
    case 6:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      puVar6 = &DAT_100a824b8;
      puVar7 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002d4d5c_caseD_0;
    default:
      goto switchD_1002d4d5c_default;
    }
    FUN_100004bb4(puVar6,puVar7);
    _swift_errorRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar1);
    break;
  case 6:
    FUN_100278f18(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar1);
    _swift_errorRelease(puVar1[1]);
    break;
  case 9:
    uVar5 = 0;
    FUN_1002782c4(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar5);
    iVar2 = (int)puVar4;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_1002d4e24_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_1002d4d5c_caseD_0;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar5);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_1002d4e24_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_1002d4d5c_caseD_0;
      }
      lVar3 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_1002d4e30;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_1002d4d5c_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_1002d4d5c_default:
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 100)));
  return;
}

