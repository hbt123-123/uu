// rea decompile_all
// name: FUN_10032fa00
// address: 0x10032fa00
// body: available
// range: 0x10032fa00-0x10032fd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10032fadc to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032fa00(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar9 = *(long *)(lVar3 + -8);
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50) + 0x18 &
           ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff);
  lVar11 = *(long *)(lVar9 + 0x40);
  lVar4 = 0;
  FUN_100277ad0();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar9 + 8))(unaff_x20 + uVar12,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar12 + lVar11 + uVar10 & (uVar10 ^ 0xffffffffffffffff)));
  puVar5 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar4);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_10032faa8_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar7 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar7 + 0x30);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 8);
    (*pcVar13)((long)puVar1 + (long)iVar2,lVar3);
    (*pcVar13)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),lVar3);
    break;
  case 3:
    FUN_10003f094(puVar1);
    break;
  case 4:
    uVar6 = 0;
    FUN_100278198(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar6);
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
switchD_10032fb98_caseD_0:
      lVar3 = 0;
      __s10Foundation3URLVMa();
LAB_10032fba4:
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      goto switchD_10032faa8_default;
    case 3:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      puVar7 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 8))(puVar1,lVar3);
      puVar7 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10032faa8_caseD_0;
    default:
      goto switchD_10032faa8_default;
    }
    FUN_100004bb4(puVar7,puVar8);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30));
    goto LAB_10032fab0;
  case 5:
    FUN_10027ba4c(*puVar1);
    break;
  case 6:
    FUN_100278f18(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar1);
    uVar6 = puVar1[1];
    goto LAB_10032fab0;
  case 9:
    uVar6 = 0;
    FUN_1002782c4(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar6);
    iVar2 = (int)puVar5;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_10032fb98_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_10032faa8_caseD_0;
  case 10:
    uVar6 = 0;
    FUN_100278368(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar6);
    iVar2 = (int)puVar5;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_10032fb98_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_10032faa8_caseD_0;
      }
      lVar3 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_10032fba4;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_10032faa8_caseD_0:
    uVar6 = *puVar1;
LAB_10032fab0:
    _swift_errorRelease(uVar6);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_10032faa8_default:
  _swift_deallocObject();
  return;
}

