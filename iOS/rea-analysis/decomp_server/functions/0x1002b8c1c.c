// rea decompile_all
// name: FUN_1002b8c1c
// address: 0x1002b8c1c
// body: available
// range: 0x1002b8c1c-0x1002b900b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b8ebc to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b8c1c(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar4 = &DAT_100a838f0;
  FUN_100004bb4(&DAT_100a838f0,&DAT_100817e18);
  uVar11 = (ulong)*(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar11 = uVar11 + 0x28 & (uVar11 ^ 0xffffffffffffffff);
  lVar12 = *(long *)(*(long *)(puVar4 + -8) + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + uVar11;
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar6 = lVar1;
  (**(code **)(lVar13 + 0x30))(lVar1,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 8))(lVar1,lVar5);
  }
  iVar3 = *(int *)(puVar4 + 0x30);
  lVar5 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar5 + -8);
  lVar6 = lVar1 + iVar3;
  (**(code **)(lVar13 + 0x30))(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 8))(lVar1 + iVar3,lVar5);
  }
  if ((ulong)((undefined8 *)(lVar1 + *(int *)(puVar4 + 0x34)))[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(lVar1 + *(int *)(puVar4 + 0x34)));
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(puVar4 + 0x40));
  puVar4 = &DAT_100a838c8;
  FUN_100004bb4(&DAT_100a838c8,&DAT_100819010);
  puVar7 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,puVar4);
  if ((int)puVar7 != 1) {
switchD_1002b8e50_caseD_0:
    pcVar10 = *(code **)(lVar13 + 8);
LAB_1002b8e60:
    (*pcVar10)(puVar2,lVar5);
    goto switchD_1002b8d88_default;
  }
  uVar8 = 0;
  FUN_100277ad0(0);
  puVar7 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar8);
  switch((ulong)puVar7 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002b8d88_caseD_0;
  case 2:
    _swift_errorRelease(*puVar2);
    puVar4 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    pcVar10 = *(code **)(lVar13 + 8);
    (*pcVar10)((long)puVar2 + (long)*(int *)(puVar4 + 0x30),lVar5);
    (*pcVar10)((long)puVar2 + (long)*(int *)(puVar4 + 0x40),lVar5);
    break;
  case 3:
    FUN_10003f094(puVar2);
    break;
  case 4:
    uVar8 = 0;
    FUN_100278198(0);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar8);
    switch((ulong)puVar7 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
      goto switchD_1002b8e50_caseD_0;
    case 3:
      (**(code **)(lVar13 + 8))(puVar2,lVar5);
      puVar4 = &DAT_100a824b0;
      puVar9 = &DAT_100816d00;
      break;
    case 6:
      (**(code **)(lVar13 + 8))(puVar2,lVar5);
      puVar4 = &DAT_100a824b8;
      puVar9 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002b8d88_caseD_0;
    default:
      goto switchD_1002b8d88_default;
    }
    FUN_100004bb4(puVar4,puVar9);
    _swift_errorRelease(*(undefined8 *)((long)puVar2 + (long)*(int *)(puVar4 + 0x30)));
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
    uVar8 = 0;
    FUN_1002782c4(0);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar8);
    iVar3 = (int)puVar7;
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          _swift_bridgeObjectRelease(*puVar2);
        }
        break;
      }
      goto switchD_1002b8e50_caseD_0;
    }
    if (iVar3 == 2) {
      _swift_bridgeObjectRelease(*puVar2);
      _swift_bridgeObjectRelease(puVar2[2]);
      break;
    }
    if (iVar3 != 4) break;
    goto switchD_1002b8d88_caseD_0;
  case 10:
    uVar8 = 0;
    FUN_100278368(0);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar8);
    iVar3 = (int)puVar7;
    if (iVar3 < 3) {
      if (iVar3 == 0) goto switchD_1002b8e50_caseD_0;
      if (iVar3 != 1) {
        if (iVar3 != 2) break;
        goto switchD_1002b8d88_caseD_0;
      }
      lVar5 = 0;
      __sSS10FoundationE8EncodingVMa();
      pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 8);
      goto LAB_1002b8e60;
    }
    if ((iVar3 != 3) && (iVar3 != 4)) {
      if (iVar3 == 5) {
        _swift_bridgeObjectRelease(puVar2[1]);
      }
      break;
    }
switchD_1002b8d88_caseD_0:
    _swift_errorRelease(*puVar2);
    break;
  case 0xb:
    FUN_100278e14(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],*(undefined1 *)(puVar2 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar2,puVar2[1]);
  }
switchD_1002b8d88_default:
  uVar11 = lVar12 + uVar11 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar11 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar11 + 0x20));
  _swift_deallocObject();
  return;
}

