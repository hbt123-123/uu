// rea decompile_all
// name: FUN_10030e378
// address: 0x10030e378
// body: available
// range: 0x10030e378-0x10030e7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10030e72c to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030e378(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  code *pcVar10;
  ulong uVar11;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1008f95fc,
             &TargetProtocolRequirement_1008f960c);
  puVar3 = &DAT_100a82488;
  FUN_100004c48(&DAT_100a82488,&DAT_100816c20);
  puVar8 = PTR___ss5ErrorWS_100995c48;
  lVar4 = 0;
  FUN_10030528c(0,lVar2,puVar3,PTR___ss5ErrorWS_100995c48);
  uVar11 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  lVar7 = unaff_x20 + (uVar11 + 0x30 & (uVar11 ^ 0xffffffffffffffff));
  _swift_weakDestroy(lVar7);
  puVar9 = (undefined8 *)(lVar7 + *(int *)(lVar4 + 0x2c));
  uVar5 = 0;
  FUN_1002fa4fc(0,lVar2,puVar3,puVar8);
  puVar6 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,uVar5);
  iVar1 = (int)puVar6;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar9,lVar2);
      }
      goto switchD_10030e514_default;
    }
LAB_10030e700:
    uVar5 = puVar9[1];
    goto LAB_10030e704;
  }
  if (iVar1 == 2) goto switchD_10030e514_caseD_0;
  if (iVar1 == 3) {
    uVar11 = puVar9[2];
    if (0xe < uVar11 >> 0x3c) goto switchD_10030e514_default;
    uVar5 = puVar9[1];
LAB_10030e55c:
    FUN_100006cdc(uVar5,uVar11);
    goto switchD_10030e514_default;
  }
  if (iVar1 != 4) goto switchD_10030e514_default;
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar2 = *(long *)(lVar7 + -8);
  puVar6 = puVar9;
  (**(code **)(lVar2 + 0x30))(puVar9,1,lVar7);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar2 + 8))(puVar9,lVar7);
  }
  lVar7 = 0;
  FUN_100300610();
  puVar9 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar7 + 0x1c));
  lVar7 = 0;
  FUN_100277ad0();
  puVar6 = puVar9;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(puVar9,1,lVar7);
  if ((int)puVar6 != 0) goto switchD_10030e514_default;
  puVar6 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar7);
  switch((ulong)puVar6 & 0xffffffff) {
  case 2:
    _swift_errorRelease(*puVar9);
    puVar3 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar3 + 0x30);
    lVar7 = 0;
    __s10Foundation3URLVMa();
    pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 8);
    (*pcVar10)((long)puVar9 + (long)iVar1,lVar7);
    (*pcVar10)((long)puVar9 + (long)*(int *)(puVar3 + 0x40),lVar7);
    break;
  case 3:
    FUN_10003f094(puVar9);
    break;
  case 4:
    uVar5 = 0;
    FUN_100278198(0);
    puVar6 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar5);
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
switchD_10030e614_caseD_0:
      lVar7 = 0;
      __s10Foundation3URLVMa();
LAB_10030e620:
      (**(code **)(*(long *)(lVar7 + -8) + 8))(puVar9,lVar7);
      goto switchD_10030e514_default;
    case 3:
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 8))(puVar9,lVar7);
      puVar3 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar7 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 8))(puVar9,lVar7);
      puVar3 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_10030e514_caseD_0;
    default:
      goto switchD_10030e514_default;
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
    uVar5 = 0;
    FUN_1002782c4(0);
    puVar6 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar5);
    iVar1 = (int)puVar6;
    if (iVar1 < 2) {
      if (iVar1 == 0) goto switchD_10030e614_caseD_0;
      if (iVar1 != 1) break;
      uVar5 = *puVar9;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 4) break;
        goto switchD_10030e514_caseD_0;
      }
      _swift_bridgeObjectRelease(*puVar9);
      uVar5 = puVar9[2];
    }
LAB_10030e704:
    _swift_bridgeObjectRelease(uVar5);
    break;
  case 10:
    uVar5 = 0;
    FUN_100278368(0);
    puVar6 = puVar9;
    _swift_getEnumCaseMultiPayload(puVar9,uVar5);
    iVar1 = (int)puVar6;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_10030e614_caseD_0;
      if (iVar1 == 1) {
        lVar7 = 0;
        __sSS10FoundationE8EncodingVMa();
        goto LAB_10030e620;
      }
      if (iVar1 != 2) break;
    }
    else if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 != 5) break;
      goto LAB_10030e700;
    }
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
switchD_10030e514_caseD_0:
    _swift_errorRelease(*puVar9);
    break;
  case 0xb:
    FUN_100278e14(*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],*(undefined1 *)(puVar9 + 5));
    break;
  case 0xe:
    uVar5 = *puVar9;
    uVar11 = puVar9[1];
    goto LAB_10030e55c;
  }
switchD_10030e514_default:
  _swift_deallocObject();
  return;
}

