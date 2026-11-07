// rea decompile_all
// name: FUN_1002bac4c
// address: 0x1002bac4c
// body: available
// range: 0x1002bac4c-0x1002bb01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bae10 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002bac4c(void)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  
  puVar5 = &DAT_100a83900;
  FUN_100004bb4(&DAT_100a83900,&DAT_100817e30);
  bVar3 = *(byte *)(*(long *)(puVar5 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar6 + -8);
  lVar7 = lVar1;
  (**(code **)(lVar11 + 0x30))(lVar1,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 8))(lVar1,lVar6);
  }
  iVar4 = *(int *)(puVar5 + 0x30);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar6 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar7 = lVar1 + iVar4;
  (*pcVar12)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 8))(lVar1 + iVar4,lVar6);
  }
  if ((ulong)((undefined8 *)(lVar1 + *(int *)(puVar5 + 0x34)))[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(lVar1 + *(int *)(puVar5 + 0x34)));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(puVar5 + 0x40));
  puVar5 = &DAT_100a838f8;
  FUN_100004bb4(&DAT_100a838f8,&DAT_100817e28);
  puVar8 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,puVar5);
  if ((int)puVar8 != 1) {
    puVar8 = puVar2;
    (*pcVar12)(puVar2,1,lVar6);
    if ((int)puVar8 != 0) goto switchD_1002badb8_default;
switchD_1002baecc_caseD_0:
    pcVar12 = *(code **)(lVar11 + 8);
LAB_1002bade8:
    (*pcVar12)(puVar2,lVar6);
    goto switchD_1002badb8_default;
  }
  uVar9 = 0;
  FUN_100277ad0(0);
  puVar8 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar9);
  switch((ulong)puVar8 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002badb8_caseD_0;
  case 2:
    _swift_errorRelease(*puVar2);
    puVar5 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    pcVar12 = *(code **)(lVar11 + 8);
    (*pcVar12)((long)puVar2 + (long)*(int *)(puVar5 + 0x30),lVar6);
    (*pcVar12)((long)puVar2 + (long)*(int *)(puVar5 + 0x40),lVar6);
    break;
  case 3:
    FUN_10003f094(puVar2);
    break;
  case 4:
    uVar9 = 0;
    FUN_100278198(0);
    puVar8 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar9);
    switch((ulong)puVar8 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
      goto switchD_1002baecc_caseD_0;
    case 3:
      (**(code **)(lVar11 + 8))(puVar2,lVar6);
      puVar5 = &DAT_100a824b0;
      puVar10 = &DAT_100816d00;
      break;
    case 6:
      (**(code **)(lVar11 + 8))(puVar2,lVar6);
      puVar5 = &DAT_100a824b8;
      puVar10 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002badb8_caseD_0;
    default:
      goto switchD_1002badb8_default;
    }
    FUN_100004bb4(puVar5,puVar10);
    _swift_errorRelease(*(undefined8 *)((long)puVar2 + (long)*(int *)(puVar5 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar2);
    break;
  case 6:
    FUN_100278f18(*puVar2,puVar2[1],*(undefined1 *)(puVar2 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar2);
    _swift_errorRelease(puVar2[1]);
    break;
  case 9:
    uVar9 = 0;
    FUN_1002782c4(0);
    puVar8 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar9);
    iVar4 = (int)puVar8;
    if (iVar4 < 2) {
      if (iVar4 != 0) {
        if (iVar4 == 1) {
          _swift_bridgeObjectRelease(*puVar2);
        }
        break;
      }
      goto switchD_1002baecc_caseD_0;
    }
    if (iVar4 == 2) {
      _swift_bridgeObjectRelease(*puVar2);
      _swift_bridgeObjectRelease(puVar2[2]);
      break;
    }
    if (iVar4 != 4) break;
    goto switchD_1002badb8_caseD_0;
  case 10:
    uVar9 = 0;
    FUN_100278368(0);
    puVar8 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar9);
    iVar4 = (int)puVar8;
    if (iVar4 < 3) {
      if (iVar4 == 0) goto switchD_1002baecc_caseD_0;
      if (iVar4 != 1) {
        if (iVar4 != 2) break;
        goto switchD_1002badb8_caseD_0;
      }
      lVar6 = 0;
      __sSS10FoundationE8EncodingVMa();
      pcVar12 = *(code **)(*(long *)(lVar6 + -8) + 8);
      goto LAB_1002bade8;
    }
    if ((iVar4 != 3) && (iVar4 != 4)) {
      if (iVar4 == 5) {
        _swift_bridgeObjectRelease(puVar2[1]);
      }
      break;
    }
switchD_1002badb8_caseD_0:
    _swift_errorRelease(*puVar2);
    break;
  case 0xb:
    FUN_100278e14(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],*(undefined1 *)(puVar2 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar2,puVar2[1]);
  }
switchD_1002badb8_default:
  _swift_deallocObject();
  return;
}

