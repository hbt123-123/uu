// rea decompile_all
// name: FUN_10027c508
// address: 0x10027c508
// body: available
// range: 0x10027c508-0x10027c623 inclusive
// range: 0x10027c664-0x10027c9b3 inclusive
// range: 0x10027c9c8-0x10027caab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027c764 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10027c508(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  puVar7 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  switch((ulong)puVar7 & 0xffffffff) {
  case 0:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = 0;
    break;
  case 1:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = 1;
    break;
  case 2:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    puVar6 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar5 = *(int *)(puVar6 + 0x30);
    lVar8 = 0;
    __s10Foundation3URLVMa();
    pcVar11 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    (*pcVar11)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar8);
    (*pcVar11)((long)param_1 + (long)*(int *)(puVar6 + 0x40),
               (long)param_2 + (long)*(int *)(puVar6 + 0x40),lVar8);
    uVar10 = 2;
    break;
  case 3:
    lVar8 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar8;
    (*(code *)**(undefined8 **)(lVar8 + -8))(param_1,param_2);
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(param_2,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010027c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_10027c624 +
              (ulong)*(ushort *)(&DAT_100816b80 + ((ulong)param_2 & 0xffffffff) * 2) * 4))();
    return param_2;
  case 5:
    uVar10 = *param_2;
    FUN_10027c0e0(uVar10);
    *param_1 = uVar10;
    uVar10 = 5;
    break;
  case 6:
    uVar10 = *param_2;
    uVar1 = param_2[1];
    uVar4 = *(undefined1 *)(param_2 + 2);
    FUN_10027c0fc(uVar10,uVar1,uVar4);
    *param_1 = uVar10;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 2) = uVar4;
    uVar10 = 6;
    break;
  case 7:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = 7;
    break;
  case 8:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = param_2[1];
    _swift_errorRetain(uVar10);
    param_1[1] = uVar10;
    uVar10 = 8;
    break;
  case 9:
    lVar8 = 0;
    FUN_1002782c4();
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar8);
    iVar5 = (int)puVar7;
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
        uVar10 = 0;
        goto LAB_10027c9a0;
      }
      if (iVar5 == 1) {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        uVar10 = 1;
        goto LAB_10027c9a0;
      }
LAB_10027c930:
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    else {
      if (iVar5 == 2) {
        uVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar10;
        uVar10 = param_2[2];
        param_1[2] = uVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        uVar10 = 2;
      }
      else {
        if (iVar5 != 4) goto LAB_10027c930;
        uVar10 = *param_2;
        _swift_errorRetain(uVar10);
        *param_1 = uVar10;
        uVar10 = 4;
      }
LAB_10027c9a0:
      _swift_storeEnumTagMultiPayload(param_1,lVar8,uVar10);
    }
    uVar10 = 9;
    break;
  case 10:
    lVar8 = 0;
    FUN_100278368();
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar8);
    iVar5 = (int)puVar7;
    if (iVar5 < 3) {
      if (iVar5 == 0) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
        uVar10 = 0;
        goto LAB_10027ca7c;
      }
      if (iVar5 == 1) {
        lVar9 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
        uVar10 = 1;
        goto LAB_10027ca7c;
      }
      if (iVar5 == 2) {
        uVar10 = *param_2;
        _swift_errorRetain(uVar10);
        *param_1 = uVar10;
        uVar10 = 2;
        goto LAB_10027ca7c;
      }
LAB_10027ca18:
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    else {
      if (iVar5 == 3) {
        uVar10 = *param_2;
        _swift_errorRetain(uVar10);
        *param_1 = uVar10;
        uVar10 = 3;
      }
      else if (iVar5 == 4) {
        uVar10 = *param_2;
        _swift_errorRetain(uVar10);
        *param_1 = uVar10;
        uVar10 = 4;
      }
      else {
        if (iVar5 != 5) goto LAB_10027ca18;
        uVar10 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar10;
        _swift_bridgeObjectRetain();
        uVar10 = 5;
      }
LAB_10027ca7c:
      _swift_storeEnumTagMultiPayload(param_1,lVar8,uVar10);
    }
    uVar10 = 10;
    break;
  case 0xb:
    uVar10 = *param_2;
    uVar2 = param_2[1];
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    uVar12 = param_2[4];
    uVar4 = *(undefined1 *)(param_2 + 5);
    FUN_10027c10c(uVar10,uVar2,uVar1,uVar3,uVar12,uVar4);
    *param_1 = uVar10;
    param_1[1] = uVar2;
    param_1[2] = uVar1;
    param_1[3] = uVar3;
    param_1[4] = uVar12;
    *(undefined1 *)(param_1 + 5) = uVar4;
    uVar10 = 0xb;
    break;
  case 0xc:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = 0xc;
    break;
  case 0xd:
    uVar10 = *param_2;
    _swift_errorRetain(uVar10);
    *param_1 = uVar10;
    uVar10 = 0xd;
    break;
  case 0xe:
    uVar10 = *param_2;
    uVar1 = param_2[1];
    FUN_100008184(uVar10,uVar1);
    *param_1 = uVar10;
    param_1[1] = uVar1;
    uVar10 = 0xe;
    break;
  default:
    puVar7 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar7;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}

