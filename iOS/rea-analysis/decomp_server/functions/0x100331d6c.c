// rea decompile_all
// name: FUN_100331d6c
// address: 0x100331d6c
// body: available
// range: 0x100331d6c-0x1003320b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100331e74 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100331d6c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0xff;
  FUN_100277ad0(0xff);
  puVar3 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar4 = 0;
  __ss6ResultOMa(0,lVar9,uVar2,puVar3);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  puVar3 = (undefined8 *)(unaff_x20 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)));
  puVar5 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,lVar4);
  if ((int)puVar5 != 1) {
    pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 8);
LAB_100331e4c:
    (*pcVar8)(puVar3,lVar9);
    goto switchD_100331e2c_default;
  }
  puVar5 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,uVar2);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_100331e2c_caseD_0;
  case 2:
    _swift_errorRelease(*puVar3);
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar6 + 0x30);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    pcVar8 = *(code **)(*(long *)(lVar4 + -8) + 8);
    (*pcVar8)((long)puVar3 + (long)iVar1,lVar4);
    (*pcVar8)((long)puVar3 + (long)*(int *)(puVar6 + 0x40),lVar4);
    break;
  case 3:
    FUN_10003f094(puVar3);
    break;
  case 4:
    uVar2 = 0;
    FUN_100278198(0);
    puVar5 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar2);
    switch((ulong)puVar5 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_100331f30_caseD_0:
      lVar9 = 0;
      __s10Foundation3URLVMa();
LAB_100331f3c:
      pcVar8 = *(code **)(*(long *)(lVar9 + -8) + 8);
      goto LAB_100331e4c;
    case 3:
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(puVar3,lVar4);
      puVar6 = &DAT_100a824b0;
      puVar7 = &DAT_100816d00;
      break;
    case 6:
      lVar4 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 8))(puVar3,lVar4);
      puVar6 = &DAT_100a824b8;
      puVar7 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_100331e2c_caseD_0;
    default:
      goto switchD_100331e2c_default;
    }
    FUN_100004bb4(puVar6,puVar7);
    _swift_errorRelease(*(undefined8 *)((long)puVar3 + (long)*(int *)(puVar6 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar3);
    break;
  case 6:
    FUN_100278f18(*puVar3,puVar3[1],*(undefined1 *)(puVar3 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar3);
    _swift_errorRelease(puVar3[1]);
    break;
  case 9:
    uVar2 = 0;
    FUN_1002782c4(0);
    puVar5 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar2);
    iVar1 = (int)puVar5;
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          _swift_bridgeObjectRelease(*puVar3);
        }
        break;
      }
      goto switchD_100331f30_caseD_0;
    }
    if (iVar1 == 2) {
      _swift_bridgeObjectRelease(*puVar3);
      _swift_bridgeObjectRelease(puVar3[2]);
      break;
    }
    if (iVar1 != 4) break;
    goto switchD_100331e2c_caseD_0;
  case 10:
    uVar2 = 0;
    FUN_100278368(0);
    puVar5 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,uVar2);
    iVar1 = (int)puVar5;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_100331f30_caseD_0;
      if (iVar1 != 1) {
        if (iVar1 != 2) break;
        goto switchD_100331e2c_caseD_0;
      }
      lVar9 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_100331f3c;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 == 5) {
        _swift_bridgeObjectRelease(puVar3[1]);
      }
      break;
    }
switchD_100331e2c_caseD_0:
    _swift_errorRelease(*puVar3);
    break;
  case 0xb:
    FUN_100278e14(*puVar3,puVar3[1],puVar3[2],puVar3[3],puVar3[4],*(undefined1 *)(puVar3 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar3,puVar3[1]);
  }
switchD_100331e2c_default:
  _swift_deallocObject();
  return;
}

