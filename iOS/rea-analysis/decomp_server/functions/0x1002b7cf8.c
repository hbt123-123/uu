// rea decompile_all
// name: FUN_1002b7cf8
// address: 0x1002b7cf8
// body: available
// range: 0x1002b7cf8-0x1002b80eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b7ed4 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b7cf8(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  puVar3 = &DAT_100a838e0;
  FUN_100004bb4(&DAT_100a838e0,&DAT_100817e08);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
  uVar10 = uVar10 + 0x28 & (uVar10 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar8 = unaff_x20 + uVar10;
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar12 = *(long *)(lVar4 + -8);
  lVar5 = lVar8;
  (**(code **)(lVar12 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar12 + 8))(lVar8,lVar4);
  }
  iVar2 = *(int *)(puVar3 + 0x30);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar4 + -8);
  lVar5 = lVar8 + iVar2;
  (**(code **)(lVar12 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar12 + 8))(lVar8 + iVar2,lVar4);
  }
  if ((ulong)((undefined8 *)(lVar8 + *(int *)(puVar3 + 0x34)))[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(lVar8 + *(int *)(puVar3 + 0x34)));
  }
  puVar1 = (undefined8 *)(lVar8 + *(int *)(puVar3 + 0x40));
  puVar3 = &DAT_100a82c60;
  FUN_100004bb4(&DAT_100a82c60,&DAT_100817220);
  puVar6 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,puVar3);
  if ((int)puVar6 != 1) {
switchD_1002b7e64_caseD_e:
    FUN_100006cdc(*puVar1,puVar1[1]);
    goto switchD_1002b7e64_default;
  }
  uVar7 = 0;
  FUN_100277ad0(0);
  puVar6 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar7);
  switch((ulong)puVar6 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002b7e64_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar3 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    pcVar13 = *(code **)(lVar12 + 8);
    (*pcVar13)((long)puVar1 + (long)*(int *)(puVar3 + 0x30),lVar4);
    (*pcVar13)((long)puVar1 + (long)*(int *)(puVar3 + 0x40),lVar4);
    break;
  case 3:
    FUN_10003f094(puVar1);
    break;
  case 4:
    uVar7 = 0;
    FUN_100278198(0);
    puVar6 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar7);
    switch((ulong)puVar6 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_1002b7f84_caseD_0:
      (**(code **)(lVar12 + 8))(puVar1,lVar4);
      goto switchD_1002b7e64_default;
    case 3:
      (**(code **)(lVar12 + 8))(puVar1,lVar4);
      puVar3 = &DAT_100a824b0;
      puVar9 = &DAT_100816d00;
      break;
    case 6:
      (**(code **)(lVar12 + 8))(puVar1,lVar4);
      puVar3 = &DAT_100a824b8;
      puVar9 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002b7e64_caseD_0;
    default:
      goto switchD_1002b7e64_default;
    }
    FUN_100004bb4(puVar3,puVar9);
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
    uVar7 = 0;
    FUN_1002782c4(0);
    puVar6 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar7);
    iVar2 = (int)puVar6;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_1002b7f84_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_1002b7e64_caseD_0;
  case 10:
    uVar7 = 0;
    FUN_100278368(0);
    puVar6 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar7);
    iVar2 = (int)puVar6;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_1002b7f84_caseD_0;
      if (iVar2 == 1) {
        lVar8 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar8 + -8) + 8))(puVar1,lVar8);
        break;
      }
      if (iVar2 != 2) break;
    }
    else if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_1002b7e64_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    goto switchD_1002b7e64_caseD_e;
  }
switchD_1002b7e64_default:
  uVar10 = lVar11 + uVar10 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar10 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar10 + 0x20));
  _swift_deallocObject();
  return;
}

