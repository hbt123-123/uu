// rea decompile_all
// name: FUN_10030daac
// address: 0x10030daac
// body: available
// range: 0x10030daac-0x10030de9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030de0c to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030daac(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  
  puVar3 = &DAT_100a85418;
  FUN_100004bb4(&DAT_100a85418,&DAT_100819868);
  bVar1 = *(byte *)(*(long *)(puVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar5 = unaff_x20 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
  _swift_weakDestroy(lVar5);
  puVar9 = (undefined8 *)(lVar5 + *(int *)(puVar3 + 0x2c));
  puVar3 = &DAT_100a85420;
  FUN_100004bb4(&DAT_100a85420,&DAT_100819870);
  puVar4 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,puVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
LAB_10030dde0:
      uVar6 = puVar9[1];
      goto LAB_10030dde4;
    }
    if (iVar2 != 1) goto switchD_10030dc2c_default;
    lVar5 = 0;
    __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
LAB_10030db4c:
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar9,lVar5);
    goto switchD_10030dc2c_default;
  }
  if (iVar2 == 3) {
    uVar7 = puVar9[2];
    if (0xe < uVar7 >> 0x3c) goto switchD_10030dc2c_default;
    uVar6 = puVar9[1];
LAB_10030dc50:
    FUN_100006cdc(uVar6,uVar7);
    goto switchD_10030dc2c_default;
  }
  if (iVar2 != 4) goto switchD_10030dc2c_default;
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar5 + -8);
  puVar4 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar5);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar10 + 8))(puVar9,lVar5);
  }
  lVar5 = 0;
  FUN_100300610();
  puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar5 + 0x1c));
  lVar5 = 0;
  FUN_100277ad0();
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar9,1,lVar5);
  if ((int)puVar4 != 0) goto switchD_10030dc2c_default;
  puVar4 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar5);
  switch((ulong)puVar4 & 0xffffffff) {
  case 2:
    _swift_errorRelease(*puVar9);
    puVar3 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar3 + 0x30);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    pcVar11 = *(code **)(*(long *)(lVar5 + -8) + 8);
    (*pcVar11)((long)puVar9 + (long)iVar2,lVar5);
    (*pcVar11)((long)puVar9 + (long)*(int *)(puVar3 + 0x40),lVar5);
    break;
  case 3:
    FUN_10003f094(puVar9);
    break;
  case 4:
    uVar6 = 0;
    FUN_100278198(0);
    puVar4 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar6);
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
switchD_10030dd08_caseD_0:
      lVar5 = 0;
      __s10Foundation3URLVMa();
      goto LAB_10030db4c;
    case 3:
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar9,lVar5);
      puVar3 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar9,lVar5);
      puVar3 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10030dc2c_caseD_0;
    default:
      goto switchD_10030dc2c_default;
    }
    FUN_100004bb4(puVar3,puVar8);
    _swift_errorRelease(*(undefined8 *)((long)puVar9 + (long)*(int *)(puVar3 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar9);
    break;
  case 6:
    FUN_100278f18(*puVar9,puVar9[1],*(undefined1 *)(puVar9 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar9);
    _swift_errorRelease(puVar9[1]);
    break;
  case 9:
    uVar6 = 0;
    FUN_1002782c4(0);
    puVar4 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar6);
    iVar2 = (int)puVar4;
    if (iVar2 < 2) {
      if (iVar2 == 0) goto switchD_10030dd08_caseD_0;
      if (iVar2 != 1) break;
      uVar6 = *puVar9;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 != 4) break;
        goto switchD_10030dc2c_caseD_0;
      }
      _swift_bridgeObjectRelease(*puVar9);
      uVar6 = puVar9[2];
    }
LAB_10030dde4:
    _swift_bridgeObjectRelease(uVar6);
    break;
  case 10:
    uVar6 = 0;
    FUN_100278368(0);
    puVar4 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar6);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_10030dd08_caseD_0;
      if (iVar2 == 1) {
        lVar5 = 0;
        __sSS10FoundationE8EncodingVMa();
        goto LAB_10030db4c;
      }
      if (iVar2 != 2) break;
    }
    else if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 != 5) break;
      goto LAB_10030dde0;
    }
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_10030dc2c_caseD_0:
    _swift_errorRelease(*puVar9);
    break;
  case 0xb:
    FUN_100278e14(*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],*(undefined1 *)(puVar9 + 5));
    break;
  case 0xe:
    uVar6 = *puVar9;
    uVar7 = puVar9[1];
    goto LAB_10030dc50;
  }
switchD_10030dc2c_default:
  _swift_deallocObject();
  return;
}

