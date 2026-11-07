// rea decompile_all
// name: FUN_1002a2140
// address: 0x1002a2140
// body: available
// range: 0x1002a2140-0x1002a238f inclusive
// range: 0x1002a23d0-0x1002a270b inclusive
// range: 0x1002a2720-0x1002a281f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002a2140(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar11 = (ulong)uVar3 & 0xff;
    _swift_retain();
    return (long *)(lVar6 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar6 + -8);
  plVar7 = param_2;
  (**(code **)(lVar14 + 0x30))(param_2,1,lVar6);
  if ((int)plVar7 == 0) {
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar6);
  }
  else {
    puVar8 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  plVar7 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar6 = 0;
  FUN_100277ad0();
  lVar14 = *(long *)(lVar6 + -8);
  plVar9 = param_2;
  (**(code **)(lVar14 + 0x30))(param_2,1,lVar6);
  if ((int)plVar9 != 0) {
    puVar8 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(plVar7,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    return param_1;
  }
  plVar9 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar6);
  switch((ulong)plVar9 & 0xffffffff) {
  case 0:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    uVar10 = 0;
    break;
  case 1:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    uVar10 = 1;
    break;
  case 2:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    puVar8 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar5 = *(int *)(puVar8 + 0x30);
    lVar12 = 0;
    __s10Foundation3URLVMa();
    pcVar15 = *(code **)(*(long *)(lVar12 + -8) + 0x10);
    (*pcVar15)((long)plVar7 + (long)iVar5,(long)param_2 + (long)iVar5,lVar12);
    (*pcVar15)((long)plVar7 + (long)*(int *)(puVar8 + 0x40),
               (long)param_2 + (long)*(int *)(puVar8 + 0x40),lVar12);
    uVar10 = 2;
    break;
  case 3:
    lVar12 = param_2[3];
    plVar7[4] = param_2[4];
    plVar7[3] = lVar12;
    (*(code *)**(undefined8 **)(lVar12 + -8))(plVar7,param_2);
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(param_2,uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001002a238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002a2390 +
              (ulong)*(ushort *)(&DAT_1008174ba + ((ulong)param_2 & 0xffffffff) * 2) * 4))();
    return param_2;
  case 5:
    lVar12 = *param_2;
    FUN_10027c0e0(lVar12);
    *plVar7 = lVar12;
    uVar10 = 5;
    break;
  case 6:
    lVar12 = *param_2;
    lVar13 = param_2[1];
    lVar1 = param_2[2];
    FUN_10027c0fc(lVar12,lVar13,(char)lVar1);
    *plVar7 = lVar12;
    plVar7[1] = lVar13;
    *(char *)(plVar7 + 2) = (char)lVar1;
    uVar10 = 6;
    break;
  case 7:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    uVar10 = 7;
    break;
  case 8:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    lVar12 = param_2[1];
    _swift_errorRetain(lVar12);
    plVar7[1] = lVar12;
    uVar10 = 8;
    break;
  case 9:
    lVar12 = 0;
    FUN_1002782c4();
    plVar9 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar12);
    iVar5 = (int)plVar9;
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(plVar7,param_2,lVar13);
        uVar10 = 0;
        goto LAB_1002a26f8;
      }
      if (iVar5 == 1) {
        *plVar7 = *param_2;
        _swift_bridgeObjectRetain();
        uVar10 = 1;
        goto LAB_1002a26f8;
      }
LAB_1002a2688:
      _memcpy(plVar7,param_2,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
    }
    else {
      if (iVar5 == 2) {
        lVar13 = param_2[1];
        *plVar7 = *param_2;
        plVar7[1] = lVar13;
        lVar13 = param_2[2];
        plVar7[2] = lVar13;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar13);
        uVar10 = 2;
      }
      else {
        if (iVar5 != 4) goto LAB_1002a2688;
        lVar13 = *param_2;
        _swift_errorRetain(lVar13);
        *plVar7 = lVar13;
        uVar10 = 4;
      }
LAB_1002a26f8:
      _swift_storeEnumTagMultiPayload(plVar7,lVar12,uVar10);
    }
    uVar10 = 9;
    break;
  case 10:
    lVar12 = 0;
    FUN_100278368();
    plVar9 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar12);
    iVar5 = (int)plVar9;
    if (iVar5 < 3) {
      if (iVar5 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(plVar7,param_2,lVar13);
        uVar10 = 0;
        goto LAB_1002a27d4;
      }
      if (iVar5 == 1) {
        lVar13 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(plVar7,param_2,lVar13);
        uVar10 = 1;
        goto LAB_1002a27d4;
      }
      if (iVar5 == 2) {
        lVar13 = *param_2;
        _swift_errorRetain(lVar13);
        *plVar7 = lVar13;
        uVar10 = 2;
        goto LAB_1002a27d4;
      }
LAB_1002a2770:
      _memcpy(plVar7,param_2,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
    }
    else {
      if (iVar5 == 3) {
        lVar13 = *param_2;
        _swift_errorRetain(lVar13);
        *plVar7 = lVar13;
        uVar10 = 3;
      }
      else if (iVar5 == 4) {
        lVar13 = *param_2;
        _swift_errorRetain(lVar13);
        *plVar7 = lVar13;
        uVar10 = 4;
      }
      else {
        if (iVar5 != 5) goto LAB_1002a2770;
        lVar13 = param_2[1];
        *plVar7 = *param_2;
        plVar7[1] = lVar13;
        _swift_bridgeObjectRetain();
        uVar10 = 5;
      }
LAB_1002a27d4:
      _swift_storeEnumTagMultiPayload(plVar7,lVar12,uVar10);
    }
    uVar10 = 10;
    break;
  case 0xb:
    lVar12 = *param_2;
    lVar1 = param_2[1];
    lVar13 = param_2[2];
    lVar2 = param_2[3];
    lVar16 = param_2[4];
    lVar4 = param_2[5];
    FUN_10027c10c(lVar12,lVar1,lVar13,lVar2,lVar16,(char)lVar4);
    *plVar7 = lVar12;
    plVar7[1] = lVar1;
    plVar7[2] = lVar13;
    plVar7[3] = lVar2;
    plVar7[4] = lVar16;
    *(char *)(plVar7 + 5) = (char)lVar4;
    uVar10 = 0xb;
    break;
  case 0xc:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    uVar10 = 0xc;
    break;
  case 0xd:
    lVar12 = *param_2;
    _swift_errorRetain(lVar12);
    *plVar7 = lVar12;
    uVar10 = 0xd;
    break;
  case 0xe:
    lVar12 = *param_2;
    lVar13 = param_2[1];
    FUN_100008184(lVar12,lVar13);
    *plVar7 = lVar12;
    plVar7[1] = lVar13;
    uVar10 = 0xe;
    break;
  default:
    _memcpy(plVar7,param_2,*(size_t *)(lVar14 + 0x40));
    goto LAB_1002a27e8;
  }
  _swift_storeEnumTagMultiPayload(plVar7,lVar6,uVar10);
LAB_1002a27e8:
  (**(code **)(lVar14 + 0x38))(plVar7,0,1,lVar6);
  return param_1;
}

