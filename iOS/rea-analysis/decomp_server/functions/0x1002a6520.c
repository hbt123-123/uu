// rea decompile_all
// name: FUN_1002a6520
// address: 0x1002a6520
// body: available
// range: 0x1002a6520-0x1002a68af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002a6670 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a6520(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),0x1008f871c,
             &TargetProtocolRequirement_1008f8724);
  uVar3 = 0xff;
  FUN_100277ad0(0xff);
  puVar4 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  lVar5 = 0;
  __ss6ResultOMa(0,lVar2,uVar3,puVar4);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar10 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  puVar4 = (undefined8 *)(unaff_x20 + uVar10);
  puVar6 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar5);
  if ((int)puVar6 != 1) {
    pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 8);
LAB_1002a6610:
    (*pcVar9)(puVar4,lVar2);
    goto switchD_1002a65f0_default;
  }
  puVar6 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,uVar3);
  switch((ulong)puVar6 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1002a65f0_caseD_0;
  case 2:
    _swift_errorRelease(*puVar4);
    puVar7 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar7 + 0x30);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 8);
    (*pcVar9)((long)puVar4 + (long)iVar1,lVar2);
    (*pcVar9)((long)puVar4 + (long)*(int *)(puVar7 + 0x40),lVar2);
    break;
  case 3:
    FUN_10003f094(puVar4);
    break;
  case 4:
    uVar3 = 0;
    FUN_100278198(0);
    puVar6 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,uVar3);
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
switchD_1002a672c_caseD_0:
      lVar2 = 0;
      __s10Foundation3URLVMa();
LAB_1002a6738:
      pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 8);
      goto LAB_1002a6610;
    case 3:
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar4,lVar2);
      puVar7 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar4,lVar2);
      puVar7 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1002a65f0_caseD_0;
    default:
      goto switchD_1002a65f0_default;
    }
    FUN_100004bb4(puVar7,puVar8);
    _swift_errorRelease(*(undefined8 *)((long)puVar4 + (long)*(int *)(puVar7 + 0x30)));
    break;
  case 5:
    FUN_10027ba4c(*puVar4);
    break;
  case 6:
    FUN_100278f18(*puVar4,puVar4[1],*(undefined1 *)(puVar4 + 2));
    break;
  case 8:
    _swift_errorRelease(*puVar4);
    _swift_errorRelease(puVar4[1]);
    break;
  case 9:
    uVar3 = 0;
    FUN_1002782c4(0);
    puVar6 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,uVar3);
    iVar1 = (int)puVar6;
    if (iVar1 < 2) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          _swift_bridgeObjectRelease(*puVar4);
        }
        break;
      }
      goto switchD_1002a672c_caseD_0;
    }
    if (iVar1 == 2) {
      _swift_bridgeObjectRelease(*puVar4);
      _swift_bridgeObjectRelease(puVar4[2]);
      break;
    }
    if (iVar1 != 4) break;
    goto switchD_1002a65f0_caseD_0;
  case 10:
    uVar3 = 0;
    FUN_100278368(0);
    puVar6 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,uVar3);
    iVar1 = (int)puVar6;
    if (iVar1 < 3) {
      if (iVar1 == 0) goto switchD_1002a672c_caseD_0;
      if (iVar1 != 1) {
        if (iVar1 != 2) break;
        goto switchD_1002a65f0_caseD_0;
      }
      lVar2 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_1002a6738;
    }
    if ((iVar1 != 3) && (iVar1 != 4)) {
      if (iVar1 == 5) {
        _swift_bridgeObjectRelease(puVar4[1]);
      }
      break;
    }
switchD_1002a65f0_caseD_0:
    _swift_errorRelease(*puVar4);
    break;
  case 0xb:
    FUN_100278e14(*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],*(undefined1 *)(puVar4 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar4,puVar4[1]);
  }
switchD_1002a65f0_default:
  uVar10 = lVar11 + uVar10 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + uVar10 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar10 + 0x18));
  _swift_deallocObject();
  return;
}

