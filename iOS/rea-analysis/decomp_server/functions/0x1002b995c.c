// rea decompile_all
// name: FUN_1002b995c
// address: 0x1002b995c
// body: available
// range: 0x1002b995c-0x1002b9d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002b9b68 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002b995c(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1008fab88,
             &TargetProtocolRequirement_1008fab90);
  uVar5 = 0xff;
  FUN_100277ad0(0xff);
  puVar6 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar7 = 0;
  FUN_1002d9e30(0,lVar4,uVar5,puVar6);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = unaff_x20 + (uVar14 + 0x38 & (uVar14 ^ 0xffffffffffffffff));
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar8 + -8);
  lVar9 = lVar1;
  (**(code **)(lVar15 + 0x30))(lVar1,1,lVar8);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar15 + 8))(lVar1,lVar8);
  }
  iVar3 = *(int *)(lVar7 + 0x30);
  lVar8 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar8 + -8);
  lVar9 = lVar1 + iVar3;
  (**(code **)(lVar15 + 0x30))(lVar9,1,lVar8);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar15 + 8))(lVar1 + iVar3,lVar8);
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar7 + 0x34));
  if ((ulong)puVar2[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*puVar2);
  }
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar7 + 0x40));
  uVar10 = 0;
  __ss6ResultOMa(0,lVar4,uVar5,puVar6);
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar10);
  if ((int)puVar6 != 1) {
    pcVar13 = *(code **)(*(long *)(lVar4 + -8) + 8);
    lVar8 = lVar4;
LAB_1002b9b38:
    (*pcVar13)(puVar2,lVar8);
    goto switchD_1002b9b18_default;
  }
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar5);
  switch((ulong)puVar6 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002b9b18_caseD_0;
  case 2:
    _swift_errorRelease(*puVar2);
    puVar11 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    pcVar13 = *(code **)(lVar15 + 8);
    (*pcVar13)((long)puVar2 + (long)*(int *)(puVar11 + 0x30),lVar8);
    (*pcVar13)((long)puVar2 + (long)*(int *)(puVar11 + 0x40),lVar8);
    break;
  case 3:
    FUN_10003f094(puVar2);
    break;
  case 4:
    uVar5 = 0;
    FUN_100278198(0);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar5);
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
switchD_1002b9c24_caseD_0:
      pcVar13 = *(code **)(lVar15 + 8);
      goto LAB_1002b9b38;
    case 3:
      (**(code **)(lVar15 + 8))(puVar2,lVar8);
      puVar11 = &DAT_100a824b0;
      puVar12 = &DAT_100816d00;
      break;
    case 6:
      (**(code **)(lVar15 + 8))(puVar2,lVar8);
      puVar11 = &DAT_100a824b8;
      puVar12 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002b9b18_caseD_0;
    default:
      goto switchD_1002b9b18_default;
    }
    FUN_100004bb4(puVar11,puVar12);
    _swift_errorRelease(*(undefined8 *)((long)puVar2 + (long)*(int *)(puVar11 + 0x30)));
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
    uVar5 = 0;
    FUN_1002782c4(0);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar5);
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          _swift_bridgeObjectRelease(*puVar2);
        }
        break;
      }
      goto switchD_1002b9c24_caseD_0;
    }
    if (iVar3 == 2) {
      _swift_bridgeObjectRelease(*puVar2);
      _swift_bridgeObjectRelease(puVar2[2]);
      break;
    }
    if (iVar3 != 4) break;
    goto switchD_1002b9b18_caseD_0;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar5);
    iVar3 = (int)puVar6;
    if (iVar3 < 3) {
      if (iVar3 == 0) goto switchD_1002b9c24_caseD_0;
      if (iVar3 == 1) {
        lVar8 = 0;
        __sSS10FoundationE8EncodingVMa();
        pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 8);
        goto LAB_1002b9b38;
      }
      if (iVar3 != 2) break;
    }
    else if ((iVar3 != 3) && (iVar3 != 4)) {
      if (iVar3 == 5) {
        _swift_bridgeObjectRelease(puVar2[1]);
      }
      break;
    }
switchD_1002b9b18_caseD_0:
    _swift_errorRelease(*puVar2);
    break;
  case 0xb:
    FUN_100278e14(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],*(undefined1 *)(puVar2 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar2,puVar2[1]);
  }
switchD_1002b9b18_default:
  _swift_deallocObject();
  return;
}

