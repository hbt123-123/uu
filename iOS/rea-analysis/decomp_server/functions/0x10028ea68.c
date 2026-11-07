// rea decompile_all
// name: thunk_FUN_10028ea70
// address: 0x10028ea68
// body: available
// range: 0x10028ea68-0x10028ea6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_10028ea70(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  long unaff_x20;
  ulong uVar14;
  long lVar15;
  
  lVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1008fab60,
             &TargetProtocolRequirement_1008fab68);
  uVar4 = 0xff;
  FUN_100277ad0(0xff);
  puVar5 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar6 = 0;
  FUN_1002d9bd8(0,lVar3,uVar4,puVar5);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  lVar10 = unaff_x20 + (uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff));
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar7 + -8);
  lVar8 = lVar10;
  (**(code **)(lVar15 + 0x30))(lVar10,1,lVar7);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 8))(lVar10,lVar7);
  }
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x30));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*puVar1);
  }
  puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar6 + 0x3c));
  uVar9 = 0;
  __ss6ResultOMa(0,lVar3,uVar4,puVar5);
  puVar5 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar9);
  if ((int)puVar5 != 1) {
    pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 8);
LAB_10028ec04:
    (*pcVar13)(puVar1,lVar3);
    goto switchD_10028ebe4_default;
  }
  puVar5 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar4);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_10028ebe4_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar11 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar11 + 0x30);
    lVar10 = 0;
    __s10Foundation3URLVMa();
    pcVar13 = *(code **)(*(long *)(lVar10 + -8) + 8);
    (*pcVar13)((long)puVar1 + (long)iVar2,lVar10);
    (*pcVar13)((long)puVar1 + (long)*(int *)(puVar11 + 0x40),lVar10);
    break;
  case 3:
    FUN_10003f094(puVar1);
    break;
  case 4:
    uVar4 = 0;
    FUN_100278198(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar4);
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
switchD_10028ecf0_caseD_0:
      lVar3 = 0;
      __s10Foundation3URLVMa();
LAB_10028ecfc:
      pcVar13 = *(code **)(*(long *)(lVar3 + -8) + 8);
      goto LAB_10028ec04;
    case 3:
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar1,lVar10);
      puVar11 = &DAT_100a824b0;
      puVar12 = &DAT_100816d00;
      break;
    case 6:
      lVar10 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar10 + -8) + 8))(puVar1,lVar10);
      puVar11 = &DAT_100a824b8;
      puVar12 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10028ebe4_caseD_0;
    default:
      goto switchD_10028ebe4_default;
    }
    FUN_100004bb4(puVar11,puVar12);
    _swift_errorRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar11 + 0x30)));
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
    uVar4 = 0;
    FUN_1002782c4(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar4);
    iVar2 = (int)puVar5;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_10028ecf0_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_10028ebe4_caseD_0;
  case 10:
    uVar4 = 0;
    FUN_100278368(0);
    puVar5 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar4);
    iVar2 = (int)puVar5;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_10028ecf0_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_10028ebe4_caseD_0;
      }
      lVar3 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_10028ecfc;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_10028ebe4_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_10028ebe4_default:
  _swift_deallocObject();
  return;
}

