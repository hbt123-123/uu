// rea decompile_all
// name: FUN_100333b20
// address: 0x100333b20
// body: available
// range: 0x100333b20-0x100333f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100333d08 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100333b20(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar4 = 0xff;
  FUN_100277ad0(0xff);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  FUN_1002d9e30(0,lVar13,uVar4,puVar5);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = unaff_x20 + (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff));
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar7 + -8);
  lVar8 = lVar1;
  (**(code **)(lVar15 + 0x30))(lVar1,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 8))(lVar1,lVar7);
  }
  iVar3 = *(int *)(lVar6 + 0x30);
  lVar7 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar7 + -8);
  lVar8 = lVar1 + iVar3;
  (**(code **)(lVar15 + 0x30))(lVar8,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 8))(lVar1 + iVar3,lVar7);
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x34));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*puVar2);
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x40));
  uVar9 = 0;
  __ss6ResultOMa(0,lVar13,uVar4,puVar5);
  puVar5 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar9);
  if ((int)puVar5 != 1) {
    pcVar12 = *(code **)(*(long *)(lVar13 + -8) + 8);
    lVar7 = lVar13;
LAB_100333cd8:
    (*pcVar12)(puVar2,lVar7);
    goto switchD_100333cb8_default;
  }
  puVar5 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar4);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_100333cb8_caseD_0;
  case 2:
    _swift_errorRelease(*puVar2);
    puVar10 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    pcVar12 = *(code **)(lVar15 + 8);
    (*pcVar12)((long)puVar2 + (long)*(int *)(puVar10 + 0x30),lVar7);
    (*pcVar12)((long)puVar2 + (long)*(int *)(puVar10 + 0x40),lVar7);
    break;
  case 3:
    FUN_10003f094(puVar2);
    break;
  case 4:
    uVar4 = 0;
    FUN_100278198(0);
    puVar5 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar4);
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
switchD_100333dc4_caseD_0:
      pcVar12 = *(code **)(lVar15 + 8);
      goto LAB_100333cd8;
    case 3:
      (**(code **)(lVar15 + 8))(puVar2,lVar7);
      puVar10 = &DAT_100a824b0;
      puVar11 = &DAT_100816d00;
      break;
    case 6:
      (**(code **)(lVar15 + 8))(puVar2,lVar7);
      puVar10 = &DAT_100a824b8;
      puVar11 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_100333cb8_caseD_0;
    default:
      goto switchD_100333cb8_default;
    }
    FUN_100004bb4(puVar10,puVar11);
    _swift_errorRelease(*(undefined8 *)((long)puVar2 + (long)*(int *)(puVar10 + 0x30)));
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
    uVar4 = 0;
    FUN_1002782c4(0);
    puVar5 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar4);
    iVar3 = (int)puVar5;
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          _swift_bridgeObjectRelease(*puVar2);
        }
        break;
      }
      goto switchD_100333dc4_caseD_0;
    }
    if (iVar3 == 2) {
      _swift_bridgeObjectRelease(*puVar2);
      _swift_bridgeObjectRelease(puVar2[2]);
      break;
    }
    if (iVar3 != 4) break;
    goto switchD_100333cb8_caseD_0;
  case 10:
    uVar4 = 0;
    FUN_100278368(0);
    puVar5 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar4);
    iVar3 = (int)puVar5;
    if (iVar3 < 3) {
      if (iVar3 == 0) goto switchD_100333dc4_caseD_0;
      if (iVar3 == 1) {
        lVar7 = 0;
        __sSS10FoundationE8EncodingVMa();
        pcVar12 = *(code **)(*(long *)(lVar7 + -8) + 8);
        goto LAB_100333cd8;
      }
      if (iVar3 != 2) break;
    }
    else if ((iVar3 != 3) && (iVar3 != 4)) {
      if (iVar3 == 5) {
        _swift_bridgeObjectRelease(puVar2[1]);
      }
      break;
    }
switchD_100333cb8_caseD_0:
    _swift_errorRelease(*puVar2);
    break;
  case 0xb:
    FUN_100278e14(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],*(undefined1 *)(puVar2 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar2,puVar2[1]);
  }
switchD_100333cb8_default:
  _swift_deallocObject();
  return;
}

