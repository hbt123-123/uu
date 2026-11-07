// rea decompile_all
// name: FUN_10027ba94
// address: 0x10027ba94
// body: available
// range: 0x10027ba94-0x10027bbdb inclusive
// range: 0x10027bc1c-0x10027bf67 inclusive
// range: 0x10027bf7c-0x10027c05f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027bd18 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10027ba94(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  lVar11 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar11 + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar9 = (ulong)uVar3 & 0xff;
    _swift_retain();
    return (long *)(lVar11 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
  }
  plVar7 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  switch((ulong)plVar7 & 0xffffffff) {
  case 0:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    uVar8 = 0;
    break;
  case 1:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    uVar8 = 1;
    break;
  case 2:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar5 = *(int *)(puVar6 + 0x30);
    lVar11 = 0;
    __s10Foundation3URLVMa();
    pcVar12 = *(code **)(*(long *)(lVar11 + -8) + 0x10);
    (*pcVar12)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar11);
    (*pcVar12)((long)param_1 + (long)*(int *)(puVar6 + 0x40),
               (long)param_2 + (long)*(int *)(puVar6 + 0x40),lVar11);
    uVar8 = 2;
    break;
  case 3:
    lVar11 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar11;
    (*(code *)**(undefined8 **)(lVar11 + -8))(param_1,param_2);
    uVar8 = 3;
    break;
  case 4:
    uVar8 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(param_2,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010027bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10027bbdc +
              (ulong)*(ushort *)(&DAT_100816b3a + ((ulong)param_2 & 0xffffffff) * 2) * 4))();
    return param_2;
  case 5:
    lVar11 = *param_2;
    FUN_10027c0e0(lVar11);
    *param_1 = lVar11;
    uVar8 = 5;
    break;
  case 6:
    lVar11 = *param_2;
    lVar10 = param_2[1];
    lVar1 = param_2[2];
    FUN_10027c0fc(lVar11,lVar10,(char)lVar1);
    *param_1 = lVar11;
    param_1[1] = lVar10;
    *(char *)(param_1 + 2) = (char)lVar1;
    uVar8 = 6;
    break;
  case 7:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    uVar8 = 7;
    break;
  case 8:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    lVar11 = param_2[1];
    _swift_errorRetain(lVar11);
    param_1[1] = lVar11;
    uVar8 = 8;
    break;
  case 9:
    lVar11 = 0;
    FUN_1002782c4();
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar11);
    iVar5 = (int)plVar7;
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        lVar10 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
        uVar8 = 0;
        goto LAB_10027bf54;
      }
      if (iVar5 == 1) {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        uVar8 = 1;
        goto LAB_10027bf54;
      }
LAB_10027bee4:
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
    else {
      if (iVar5 == 2) {
        lVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar10;
        lVar10 = param_2[2];
        param_1[2] = lVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar10);
        uVar8 = 2;
      }
      else {
        if (iVar5 != 4) goto LAB_10027bee4;
        lVar10 = *param_2;
        _swift_errorRetain(lVar10);
        *param_1 = lVar10;
        uVar8 = 4;
      }
LAB_10027bf54:
      _swift_storeEnumTagMultiPayload(param_1,lVar11,uVar8);
    }
    uVar8 = 9;
    break;
  case 10:
    lVar11 = 0;
    FUN_100278368();
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar11);
    iVar5 = (int)plVar7;
    if (iVar5 < 3) {
      if (iVar5 == 0) {
        lVar10 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
        uVar8 = 0;
        goto LAB_10027c030;
      }
      if (iVar5 == 1) {
        lVar10 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(param_1,param_2,lVar10);
        uVar8 = 1;
        goto LAB_10027c030;
      }
      if (iVar5 == 2) {
        lVar10 = *param_2;
        _swift_errorRetain(lVar10);
        *param_1 = lVar10;
        uVar8 = 2;
        goto LAB_10027c030;
      }
LAB_10027bfcc:
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar11 + -8) + 0x40));
    }
    else {
      if (iVar5 == 3) {
        lVar10 = *param_2;
        _swift_errorRetain(lVar10);
        *param_1 = lVar10;
        uVar8 = 3;
      }
      else if (iVar5 == 4) {
        lVar10 = *param_2;
        _swift_errorRetain(lVar10);
        *param_1 = lVar10;
        uVar8 = 4;
      }
      else {
        if (iVar5 != 5) goto LAB_10027bfcc;
        lVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar10;
        _swift_bridgeObjectRetain();
        uVar8 = 5;
      }
LAB_10027c030:
      _swift_storeEnumTagMultiPayload(param_1,lVar11,uVar8);
    }
    uVar8 = 10;
    break;
  case 0xb:
    lVar11 = *param_2;
    lVar1 = param_2[1];
    lVar10 = param_2[2];
    lVar2 = param_2[3];
    lVar13 = param_2[4];
    lVar4 = param_2[5];
    FUN_10027c10c(lVar11,lVar1,lVar10,lVar2,lVar13,(char)lVar4);
    *param_1 = lVar11;
    param_1[1] = lVar1;
    param_1[2] = lVar10;
    param_1[3] = lVar2;
    param_1[4] = lVar13;
    *(char *)(param_1 + 5) = (char)lVar4;
    uVar8 = 0xb;
    break;
  case 0xc:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    uVar8 = 0xc;
    break;
  case 0xd:
    lVar11 = *param_2;
    _swift_errorRetain(lVar11);
    *param_1 = lVar11;
    uVar8 = 0xd;
    break;
  case 0xe:
    lVar11 = *param_2;
    lVar10 = param_2[1];
    FUN_100008184(lVar11,lVar10);
    *param_1 = lVar11;
    param_1[1] = lVar10;
    uVar8 = 0xe;
    break;
  default:
    plVar7 = _memcpy(param_1,param_2,*(size_t *)(lVar11 + 0x40));
    return plVar7;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar8);
  return param_1;
}

