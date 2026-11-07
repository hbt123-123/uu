// rea decompile_all
// name: FUN_10033040c
// address: 0x10033040c
// body: available
// range: 0x10033040c-0x10033072f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003304b0 to 0x1007df1a8 _swift_deallocObject (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033040c(void)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  
  puVar4 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  bVar2 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)));
  lVar5 = 0;
  FUN_100277ad0();
  puVar6 = puVar1;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar1,1,lVar5);
  if ((int)puVar6 != 0) goto switchD_1003304e0_default;
  puVar6 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar5);
  switch((ulong)puVar6 & 0xffffffff) {
  case 0:
  case 1:
  case 7:
  case 0xc:
  case 0xd:
    goto switchD_1003304e0_caseD_0;
  case 2:
    _swift_errorRelease(*puVar1);
    puVar4 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar3 = *(int *)(puVar4 + 0x30);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    pcVar9 = *(code **)(*(long *)(lVar5 + -8) + 8);
    (*pcVar9)((long)puVar1 + (long)iVar3,lVar5);
    (*pcVar9)((long)puVar1 + (long)*(int *)(puVar4 + 0x40),lVar5);
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
switchD_1003305a8_caseD_0:
      lVar5 = 0;
      __s10Foundation3URLVMa();
LAB_1003305b4:
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
      goto switchD_1003304e0_default;
    case 3:
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
      puVar4 = &DAT_100a824b0;
      puVar8 = &DAT_100816d00;
      break;
    case 6:
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
      puVar4 = &DAT_100a824b8;
      puVar8 = &DAT_1008176b0;
      break;
    case 0xb:
    case 0xc:
      goto switchD_1003304e0_caseD_0;
    default:
      goto switchD_1003304e0_default;
    }
    FUN_100004bb4(puVar4,puVar8);
    _swift_errorRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar4 + 0x30)));
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
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          _swift_bridgeObjectRelease(*puVar1);
        }
        break;
      }
      goto switchD_1003305a8_caseD_0;
    }
    if (iVar3 == 2) {
      _swift_bridgeObjectRelease(*puVar1);
      _swift_bridgeObjectRelease(puVar1[2]);
      break;
    }
    if (iVar3 != 4) break;
    goto switchD_1003304e0_caseD_0;
  case 10:
    uVar7 = 0;
    FUN_100278368(0);
    puVar6 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar7);
    iVar3 = (int)puVar6;
    if (iVar3 < 3) {
      if (iVar3 == 0) goto switchD_1003305a8_caseD_0;
      if (iVar3 != 1) {
        if (iVar3 != 2) break;
        goto switchD_1003304e0_caseD_0;
      }
      lVar5 = 0;
      __sSS10FoundationE8EncodingVMa();
      goto LAB_1003305b4;
    }
    if ((iVar3 != 3) && (iVar3 != 4)) {
      if (iVar3 == 5) {
        _swift_bridgeObjectRelease(puVar1[1]);
      }
      break;
    }
switchD_1003304e0_caseD_0:
    _swift_errorRelease(*puVar1);
    break;
  case 0xb:
    FUN_100278e14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],*(undefined1 *)(puVar1 + 5));
    break;
  case 0xe:
    FUN_100006cdc(*puVar1,puVar1[1]);
  }
switchD_1003304e0_default:
  _swift_deallocObject();
  return;
}

