// rea decompile_all
// name: FUN_10028cb1c
// address: 0x10028cb1c
// body: available
// range: 0x10028cb1c-0x10028ce57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10028cc20 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10028cb1c(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  puVar3 = &DAT_100a82c60;
  FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
  uVar8 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  lVar9 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,puVar3);
  if ((int)puVar4 != 1) {
switchD_10028cbac_caseD_e:
    FUN_100006cdc(*puVar1,puVar1[1]);
    goto switchD_10028cbac_default;
  }
  uVar5 = 0;
  FUN_100277ad0(0);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar5);
  switch((ulong)puVar4 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_10028cbac_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar3 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar3 + 0x30);
    lVar6 = 0;
    __s10Foundation3URLVMa();
    pcVar10 = *(code **)(*(long *)(lVar6 + -8) + 8);
    (*pcVar10)((long)puVar1 + (long)iVar2,lVar6);
    (*pcVar10)((long)puVar1 + (long)*(int *)(puVar3 + 0x40),lVar6);
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
switchD_10028ccd0_caseD_0:
      lVar6 = 0;
      __s10Foundation3URLVMa();
LAB_10028ccdc:
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar1,lVar6);
      goto switchD_10028cbac_default;
    case 3:
      lVar6 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar1,lVar6);
      puVar3 = &DAT_100a824b0;
      puVar7 = &DAT_100816d00;
      break;
    case 6:
      lVar6 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 8))(puVar1,lVar6);
      puVar3 = &DAT_100a824b8;
      puVar7 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10028cbac_caseD_0;
    default:
      goto switchD_10028cbac_default;
    }
    FUN_100004bb4(puVar3,puVar7);
    _swift_errorRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x30)));
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
      goto switchD_10028ccd0_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_10028cbac_caseD_0;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar5);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_10028ccd0_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_10028cbac_caseD_0;
      }
      lVar6 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_10028ccdc;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_10028cbac_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    goto switchD_10028cbac_caseD_e;
  }
switchD_10028cbac_default:
  uVar8 = lVar9 + uVar8 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + uVar8 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar8 + 0x18));
  _swift_deallocObject();
  return;
}

