// rea decompile_all
// name: FUN_100332430
// address: 0x100332430
// body: available
// range: 0x100332430-0x10033270f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003324d4 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100332430(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  ulong uVar8;
  code *pcVar9;
  
  lVar3 = 0;
  FUN_100277ad0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)));
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar3);
  switch((ulong)puVar4 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1003324a4_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar6 + 0x30);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*pcVar9)((long)puVar1 + (long)iVar2,lVar3);
    (*pcVar9)((long)puVar1 + (long)*(int *)(puVar6 + 0x40),lVar3);
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
switchD_100332590_caseD_0:
      lVar3 = 0;
      __s10Foundation3URLVMa();
LAB_10033259c:
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      goto switchD_1003324a4_default;
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
      goto switchD_1003324a4_caseD_0;
    default:
      goto switchD_1003324a4_default;
    }
    FUN_100004bb4(puVar6,puVar7);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30));
    goto LAB_1003324ac;
  case 5:
    FUN_10027ba4c(*puVar1);
    break;
  case 6:
    FUN_100278f18(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar1);
    uVar5 = puVar1[1];
    goto LAB_1003324ac;
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
      goto switchD_100332590_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_1003324a4_caseD_0;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar5);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_100332590_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_1003324a4_caseD_0;
      }
      lVar3 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_10033259c;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_1003324a4_caseD_0:
    uVar5 = *puVar1;
LAB_1003324ac:
    _swift_errorRelease(uVar5);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_1003324a4_default:
  _swift_deallocObject();
  return;
}

