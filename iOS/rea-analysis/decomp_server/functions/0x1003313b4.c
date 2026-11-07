// rea decompile_all
// name: FUN_1003313b4
// address: 0x1003313b4
// body: available
// range: 0x1003313b4-0x10033179b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033155c to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003313b4(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  
  lVar13 = *(long *)(unaff_x20 + 0x10);
  uVar3 = 0xff;
  FUN_100277ad0(0xff);
  puVar4 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar5 = 0;
  FUN_1002d9bd8(0,lVar13,uVar3,puVar4);
  uVar14 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar9 = unaff_x20 + (uVar14 + 0x20 & (uVar14 ^ 0xffffffffffffffff));
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar6 + -8);
  lVar7 = lVar9;
  (**(code **)(lVar15 + 0x30))(lVar9,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar15 + 8))(lVar9,lVar6);
  }
  puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x30));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_100006cdc(*puVar1);
  }
  puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x3c));
  uVar8 = 0;
  __ss6ResultOMa(0,lVar13,uVar3,puVar4);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar8);
  if ((int)puVar4 != 1) {
    pcVar12 = *(code **)(*(long *)(lVar13 + -8) + 8);
LAB_10033152c:
    (*pcVar12)(puVar1,lVar13);
    goto switchD_10033150c_default;
  }
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar3);
  switch((ulong)puVar4 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_10033150c_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar10 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar2 = *(int *)(puVar10 + 0x30);
    lVar9 = 0;
    __s10Foundation3URLVMa();
    pcVar12 = *(code **)(*(long *)(lVar9 + -8) + 8);
    (*pcVar12)((long)puVar1 + (long)iVar2,lVar9);
    (*pcVar12)((long)puVar1 + (long)*(int *)(puVar10 + 0x40),lVar9);
    break;
  case 3:
    FUN_10003f094(puVar1);
    break;
  case 4:
    uVar3 = 0;
    FUN_100278198(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar3);
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
switchD_100331618_caseD_0:
      lVar13 = 0;
      __s10Foundation3URLVMa();
LAB_100331624:
      pcVar12 = *(code **)(*(long *)(lVar13 + -8) + 8);
      goto LAB_10033152c;
    case 3:
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 8))(puVar1,lVar9);
      puVar10 = &DAT_100a824b0;
      puVar11 = &DAT_100816d00;
      break;
    case 6:
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 8))(puVar1,lVar9);
      puVar10 = &DAT_100a824b8;
      puVar11 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10033150c_caseD_0;
    default:
      goto switchD_10033150c_default;
    }
    FUN_100004bb4(puVar10,puVar11);
    _swift_errorRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar10 + 0x30)));
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
    uVar3 = 0;
    FUN_1002782c4(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar3);
    iVar2 = (int)puVar4;
    if (iVar2 < 2) {
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_100331618_caseD_0;
    }
    if (iVar2 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar2 != 4) break;
    goto switchD_10033150c_caseD_0;
  case 10:
    uVar3 = 0;
    FUN_100278368(0);
    puVar4 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar3);
    iVar2 = (int)puVar4;
    if (iVar2 < 3) {
      if (iVar2 == 0) goto switchD_100331618_caseD_0;
      if (iVar2 != 1) {
        if (iVar2 != 2) break;
        goto switchD_10033150c_caseD_0;
      }
      lVar13 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_100331624;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      if (iVar2 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_10033150c_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_10033150c_default:
  _swift_deallocObject();
  return;
}

