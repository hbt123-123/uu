// rea decompile_all
// name: FUN_1002a2c24
// address: 0x1002a2c24
// body: available
// range: 0x1002a2c24-0x1002a2e47 inclusive
// range: 0x1002a2e88-0x1002a31c3 inclusive
// range: 0x1002a31d8-0x1002a32d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002a2c24(undefined8 *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar7 + -8);
  pvVar8 = param_2;
  (**(code **)(lVar15 + 0x30))(param_2,1,lVar7);
  if ((int)pvVar8 == 0) {
    (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar7);
    (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar7);
  }
  else {
    puVar9 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar11 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar7 = 0;
  FUN_100277ad0();
  lVar15 = *(long *)(lVar7 + -8);
  puVar10 = puVar11;
  (**(code **)(lVar15 + 0x30))(puVar11,1,lVar7);
  if ((int)puVar10 != 0) {
    puVar9 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(puVar1,puVar11,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    return param_1;
  }
  puVar10 = puVar11;
  _swift_getEnumCaseMultiPayload(puVar11,lVar7);
  switch((ulong)puVar10 & 0xffffffff) {
  case 0:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 0;
    break;
  case 1:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 1;
    break;
  case 2:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    puVar9 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar6 = *(int *)(puVar9 + 0x30);
    lVar12 = 0;
    __s10Foundation3URLVMa();
    pcVar16 = *(code **)(*(long *)(lVar12 + -8) + 0x10);
    (*pcVar16)((long)puVar1 + (long)iVar6,(long)puVar11 + (long)iVar6,lVar12);
    (*pcVar16)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
               (long)puVar11 + (long)*(int *)(puVar9 + 0x40),lVar12);
    uVar14 = 2;
    break;
  case 3:
    lVar12 = puVar11[3];
    puVar1[4] = puVar11[4];
    puVar1[3] = lVar12;
    (*(code *)**(undefined8 **)(lVar12 + -8))(puVar1,puVar11);
    uVar14 = 3;
    break;
  case 4:
    uVar14 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(puVar11,uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001002a2e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002a2e48 +
              (ulong)*(ushort *)(&DAT_100817500 + ((ulong)puVar11 & 0xffffffff) * 2) * 4))();
    return puVar11;
  case 5:
    uVar14 = *puVar11;
    FUN_10027c0e0(uVar14);
    *puVar1 = uVar14;
    uVar14 = 5;
    break;
  case 6:
    uVar14 = *puVar11;
    uVar2 = puVar11[1];
    uVar5 = *(undefined1 *)(puVar11 + 2);
    FUN_10027c0fc(uVar14,uVar2,uVar5);
    *puVar1 = uVar14;
    puVar1[1] = uVar2;
    *(undefined1 *)(puVar1 + 2) = uVar5;
    uVar14 = 6;
    break;
  case 7:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 7;
    break;
  case 8:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = puVar11[1];
    _swift_errorRetain(uVar14);
    puVar1[1] = uVar14;
    uVar14 = 8;
    break;
  case 9:
    lVar12 = 0;
    FUN_1002782c4();
    puVar10 = puVar11;
    _swift_getEnumCaseMultiPayload(puVar11,lVar12);
    iVar6 = (int)puVar10;
    if (iVar6 < 2) {
      if (iVar6 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar1,puVar11,lVar13);
        uVar14 = 0;
        goto LAB_1002a31b0;
      }
      if (iVar6 == 1) {
        *puVar1 = *puVar11;
        _swift_bridgeObjectRetain();
        uVar14 = 1;
        goto LAB_1002a31b0;
      }
LAB_1002a3140:
      _memcpy(puVar1,puVar11,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
    }
    else {
      if (iVar6 == 2) {
        uVar14 = puVar11[1];
        *puVar1 = *puVar11;
        puVar1[1] = uVar14;
        uVar14 = puVar11[2];
        puVar1[2] = uVar14;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar14);
        uVar14 = 2;
      }
      else {
        if (iVar6 != 4) goto LAB_1002a3140;
        uVar14 = *puVar11;
        _swift_errorRetain(uVar14);
        *puVar1 = uVar14;
        uVar14 = 4;
      }
LAB_1002a31b0:
      _swift_storeEnumTagMultiPayload(puVar1,lVar12,uVar14);
    }
    uVar14 = 9;
    break;
  case 10:
    lVar12 = 0;
    FUN_100278368();
    puVar10 = puVar11;
    _swift_getEnumCaseMultiPayload(puVar11,lVar12);
    iVar6 = (int)puVar10;
    if (iVar6 < 3) {
      if (iVar6 == 0) {
        lVar13 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar1,puVar11,lVar13);
        uVar14 = 0;
        goto LAB_1002a328c;
      }
      if (iVar6 == 1) {
        lVar13 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar1,puVar11,lVar13);
        uVar14 = 1;
        goto LAB_1002a328c;
      }
      if (iVar6 == 2) {
        uVar14 = *puVar11;
        _swift_errorRetain(uVar14);
        *puVar1 = uVar14;
        uVar14 = 2;
        goto LAB_1002a328c;
      }
LAB_1002a3228:
      _memcpy(puVar1,puVar11,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
    }
    else {
      if (iVar6 == 3) {
        uVar14 = *puVar11;
        _swift_errorRetain(uVar14);
        *puVar1 = uVar14;
        uVar14 = 3;
      }
      else if (iVar6 == 4) {
        uVar14 = *puVar11;
        _swift_errorRetain(uVar14);
        *puVar1 = uVar14;
        uVar14 = 4;
      }
      else {
        if (iVar6 != 5) goto LAB_1002a3228;
        uVar14 = puVar11[1];
        *puVar1 = *puVar11;
        puVar1[1] = uVar14;
        _swift_bridgeObjectRetain();
        uVar14 = 5;
      }
LAB_1002a328c:
      _swift_storeEnumTagMultiPayload(puVar1,lVar12,uVar14);
    }
    uVar14 = 10;
    break;
  case 0xb:
    uVar14 = *puVar11;
    uVar3 = puVar11[1];
    uVar2 = puVar11[2];
    uVar4 = puVar11[3];
    uVar17 = puVar11[4];
    uVar5 = *(undefined1 *)(puVar11 + 5);
    FUN_10027c10c(uVar14,uVar3,uVar2,uVar4,uVar17,uVar5);
    *puVar1 = uVar14;
    puVar1[1] = uVar3;
    puVar1[2] = uVar2;
    puVar1[3] = uVar4;
    puVar1[4] = uVar17;
    *(undefined1 *)(puVar1 + 5) = uVar5;
    uVar14 = 0xb;
    break;
  case 0xc:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 0xc;
    break;
  case 0xd:
    uVar14 = *puVar11;
    _swift_errorRetain(uVar14);
    *puVar1 = uVar14;
    uVar14 = 0xd;
    break;
  case 0xe:
    uVar14 = *puVar11;
    uVar2 = puVar11[1];
    FUN_100008184(uVar14,uVar2);
    *puVar1 = uVar14;
    puVar1[1] = uVar2;
    uVar14 = 0xe;
    break;
  default:
    _memcpy(puVar1,puVar11,*(size_t *)(lVar15 + 0x40));
    goto LAB_1002a32a0;
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar7,uVar14);
LAB_1002a32a0:
  (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar7);
  return param_1;
}

