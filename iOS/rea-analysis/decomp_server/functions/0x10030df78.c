// rea decompile_all
// name: FUN_10030df78
// address: 0x10030df78
// body: available
// range: 0x10030df78-0x10030e337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030e2a8 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030df78(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  lVar2 = 0;
  FUN_10030da10();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  puVar7 = (undefined8 *)(unaff_x20 + (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)));
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
LAB_10030e27c:
      uVar4 = puVar7[1];
      goto LAB_10030e280;
    }
    if (iVar1 != 1) goto switchD_10030e0c8_default;
    lVar2 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
LAB_10030dfe8:
    (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar7,lVar2);
    goto switchD_10030e0c8_default;
  }
  if (iVar1 == 2) {
    uVar9 = puVar7[2];
    if (0xe < uVar9 >> 0x3c) goto switchD_10030e0c8_default;
    uVar4 = puVar7[1];
LAB_10030e0ec:
    FUN_100006cdc(uVar4,uVar9);
    goto switchD_10030e0c8_default;
  }
  if (iVar1 != 3) goto switchD_10030e0c8_default;
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 == 0) {
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
  }
  lVar2 = 0;
  FUN_100300610();
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(lVar2 + 0x1c));
  lVar2 = 0;
  FUN_100277ad0();
  puVar3 = puVar7;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 != 0) goto switchD_10030e0c8_default;
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar2);
  switch((ulong)puVar3 & 0xffffffff) {
  case 2:
    _swift_errorRelease(*puVar7);
    puVar5 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar5 + 0x30);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    pcVar10 = *(code **)(*(long *)(lVar2 + -8) + 8);
    (*pcVar10)((long)puVar7 + (long)iVar1,lVar2);
    (*pcVar10)((long)puVar7 + (long)*(int *)(puVar5 + 0x40),lVar2);
    break;
  case 3:
    FUN_10003f094(puVar7);
    break;
  case 4:
    uVar4 = 0;
    FUN_100278198(0);
    puVar3 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,uVar4);
    switch((ulong)puVar3 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_10030e1a4_caseD_0:
      lVar2 = 0;
      __s10Foundation3URLVMa();
      goto LAB_10030dfe8;
    case 3:
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar7,lVar2);
      puVar5 = &DAT_100a824b0;
      puVar6 = &DAT_100816d00;
      break;
    case 6:
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar7,lVar2);
      puVar5 = &DAT_100a824b8;
      puVar6 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10030e0c8_caseD_0;
    default:
      goto switchD_10030e0c8_default;
    }
    FUN_100004bb4(puVar5,puVar6);
    _swift_errorRelease(*(undefined8 *)((long)puVar7 + (long)*(int *)(puVar5 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar7);
    break;
  case 6:
    FUN_100278f18(*puVar7,puVar7[1],*(undefined1 *)(puVar7 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar7);
    _swift_errorRelease(puVar7[1]);
    break;
  case 9:
    uVar4 = 0;
    FUN_1002782c4(0);
    puVar3 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,uVar4);
    iVar1 = (int)puVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) goto switchD_10030e1a4_caseD_0;
      if (iVar1 != 1) break;
      uVar4 = *puVar7;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 4) break;
        goto switchD_10030e0c8_caseD_0;
      }
      _swift_bridgeObjectRelease(*puVar7);
      uVar4 = puVar7[2];
    }
LAB_10030e280:
    _swift_bridgeObjectRelease(uVar4);
    break;
  case 10:
    uVar4 = 0;
    FUN_100278368(0);
    puVar3 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,uVar4);
    iVar1 = (int)puVar3;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_10030e1a4_caseD_0;
      if (iVar1 == 1) {
        lVar2 = 0;
        __sSS10FoundationE8EncodingVMa();
        goto LAB_10030dfe8;
      }
      if (iVar1 != 2) break;
    }
    else if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 != 5) break;
      goto LAB_10030e27c;
    }
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_10030e0c8_caseD_0:
    _swift_errorRelease(*puVar7);
    break;
  case 0xb:
    FUN_100278e14(*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],*(undefined1 *)(puVar7 + 5));
    break;
  case 0xe:
    uVar4 = *puVar7;
    uVar9 = puVar7[1];
    goto LAB_10030e0ec;
  }
switchD_10030e0c8_default:
  _swift_deallocObject();
  return;
}

