// rea decompile_all
// name: FUN_1002d424c
// address: 0x1002d424c
// body: available
// range: 0x1002d424c-0x1002d469b inclusive
// range: 0x1002d46dc-0x1002d4a27 inclusive
// range: 0x1002d4a3c-0x1002d4b5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002d424c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar13 = *param_2;
    *param_1 = lVar13;
    uVar11 = (ulong)uVar3 & 0xff;
    _swift_retain();
    return (long *)(lVar13 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  *(char *)param_1 = (char)*param_2;
  lVar13 = param_2[1];
  if (lVar13 == 0) {
    lVar13 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar13;
    param_1[3] = param_2[3];
  }
  else {
    lVar12 = param_2[2];
    lVar17 = param_2[3];
    param_1[1] = lVar13;
    param_1[2] = lVar12;
    param_1[3] = lVar17;
    _swift_retain();
  }
  lVar13 = param_2[4];
  if (lVar13 == 0) {
    lVar13 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar13;
    param_1[6] = param_2[6];
    lVar13 = param_2[10];
    if (lVar13 == 0) goto LAB_1002d4370;
LAB_1002d4314:
    lVar12 = param_2[0xb];
    param_1[10] = lVar13;
    param_1[0xb] = lVar12;
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 7,param_2 + 7);
    lVar13 = param_2[0xf];
    if (lVar13 != 0) goto LAB_1002d4338;
LAB_1002d4390:
    lVar13 = param_2[0xc];
    lVar17 = param_2[0xf];
    lVar12 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar13;
    param_1[0xf] = lVar17;
    param_1[0xe] = lVar12;
    param_1[0x10] = param_2[0x10];
  }
  else {
    lVar12 = param_2[5];
    lVar17 = param_2[6];
    param_1[4] = lVar13;
    param_1[5] = lVar12;
    param_1[6] = lVar17;
    _swift_retain();
    lVar13 = param_2[10];
    if (lVar13 != 0) goto LAB_1002d4314;
LAB_1002d4370:
    lVar13 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar13;
    lVar13 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar13;
    param_1[0xb] = param_2[0xb];
    lVar13 = param_2[0xf];
    if (lVar13 == 0) goto LAB_1002d4390;
LAB_1002d4338:
    lVar12 = param_2[0x10];
    param_1[0xf] = lVar13;
    param_1[0x10] = lVar12;
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 0xc,param_2 + 0xc);
  }
  lVar13 = param_2[0x11];
  if (lVar13 == 0) {
    lVar13 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = lVar13;
    param_1[0x13] = param_2[0x13];
  }
  else {
    lVar12 = param_2[0x12];
    lVar17 = param_2[0x13];
    param_1[0x11] = lVar13;
    param_1[0x12] = lVar12;
    param_1[0x13] = lVar17;
    _swift_retain(lVar17);
  }
  lVar13 = param_2[0x14];
  if (lVar13 == 0) {
    lVar13 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar13;
    param_1[0x16] = param_2[0x16];
  }
  else {
    lVar12 = param_2[0x15];
    lVar17 = param_2[0x16];
    param_1[0x14] = lVar13;
    param_1[0x15] = lVar12;
    param_1[0x16] = lVar17;
    _swift_retain(lVar17);
  }
  lVar13 = param_2[0x17];
  if (lVar13 == 0) {
    lVar13 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = lVar13;
    param_1[0x19] = param_2[0x19];
  }
  else {
    lVar12 = param_2[0x18];
    lVar17 = param_2[0x19];
    param_1[0x17] = lVar13;
    param_1[0x18] = lVar12;
    param_1[0x19] = lVar17;
    _swift_retain(lVar17);
  }
  param_1[0x1a] = param_2[0x1a];
  *(char *)(param_1 + 0x1b) = (char)param_2[0x1b];
  lVar12 = param_2[0x1c];
  param_1[0x1c] = lVar12;
  *(char *)(param_1 + 0x1d) = (char)param_2[0x1d];
  lVar13 = param_2[0x21];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(lVar12);
  if (lVar13 == 0) {
    lVar13 = param_2[0x1e];
    lVar17 = param_2[0x21];
    lVar12 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = lVar13;
    param_1[0x21] = lVar17;
    param_1[0x20] = lVar12;
    param_1[0x22] = param_2[0x22];
  }
  else {
    lVar12 = param_2[0x22];
    param_1[0x21] = lVar13;
    param_1[0x22] = lVar12;
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 0x1e,param_2 + 0x1e,lVar13);
  }
  lVar13 = param_2[0x26];
  if (lVar13 == 0) {
    lVar13 = param_2[0x23];
    lVar17 = param_2[0x26];
    lVar12 = param_2[0x25];
    param_1[0x24] = param_2[0x24];
    param_1[0x23] = lVar13;
    param_1[0x26] = lVar17;
    param_1[0x25] = lVar12;
    param_1[0x27] = param_2[0x27];
  }
  else {
    lVar12 = param_2[0x27];
    param_1[0x26] = lVar13;
    param_1[0x27] = lVar12;
    (*(code *)**(undefined8 **)(lVar13 + -8))();
  }
  lVar12 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = lVar12;
  lVar13 = param_2[0x2a];
  lVar17 = param_2[0x2b];
  param_1[0x2a] = lVar13;
  param_1[0x2b] = lVar17;
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  plVar8 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  param_1[0x2c] = param_2[0x2c];
  lVar6 = 0;
  FUN_100277ad0();
  lVar15 = *(long *)(lVar6 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  _swift_bridgeObjectRetain(lVar12);
  _swift_bridgeObjectRetain(lVar13);
  _swift_bridgeObjectRetain(lVar17);
  plVar7 = plVar8;
  (*pcVar14)(plVar8,1,lVar6);
  if ((int)plVar7 != 0) {
    puVar9 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(plVar1,plVar8,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    goto LAB_1002d4b24;
  }
  plVar7 = plVar8;
  _swift_getEnumCaseMultiPayload(plVar8,lVar6);
  switch((ulong)plVar7 & 0xffffffff) {
  case 0:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    uVar10 = 0;
    break;
  case 1:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    uVar10 = 1;
    break;
  case 2:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    puVar9 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar5 = *(int *)(puVar9 + 0x30);
    lVar13 = 0;
    __s10Foundation3URLVMa();
    pcVar14 = *(code **)(*(long *)(lVar13 + -8) + 0x10);
    (*pcVar14)((long)plVar1 + (long)iVar5,(long)plVar8 + (long)iVar5,lVar13);
    (*pcVar14)((long)plVar1 + (long)*(int *)(puVar9 + 0x40),
               (long)plVar8 + (long)*(int *)(puVar9 + 0x40),lVar13);
    uVar10 = 2;
    break;
  case 3:
    lVar13 = plVar8[3];
    plVar1[4] = plVar8[4];
    plVar1[3] = lVar13;
    (*(code *)**(undefined8 **)(lVar13 + -8))(plVar1,plVar8);
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(plVar8,uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001002d4698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002d469c +
              (ulong)*(ushort *)(&DAT_1008187d0 + ((ulong)plVar8 & 0xffffffff) * 2) * 4))();
    return plVar8;
  case 5:
    lVar13 = *plVar8;
    FUN_10027c0e0(lVar13);
    *plVar1 = lVar13;
    uVar10 = 5;
    break;
  case 6:
    lVar13 = *plVar8;
    lVar12 = plVar8[1];
    lVar17 = plVar8[2];
    FUN_10027c0fc(lVar13,lVar12,(char)lVar17);
    *plVar1 = lVar13;
    plVar1[1] = lVar12;
    *(char *)(plVar1 + 2) = (char)lVar17;
    uVar10 = 6;
    break;
  case 7:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    uVar10 = 7;
    break;
  case 8:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    lVar13 = plVar8[1];
    _swift_errorRetain(lVar13);
    plVar1[1] = lVar13;
    uVar10 = 8;
    break;
  case 9:
    lVar13 = 0;
    FUN_1002782c4();
    plVar7 = plVar8;
    _swift_getEnumCaseMultiPayload(plVar8,lVar13);
    iVar5 = (int)plVar7;
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        lVar12 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x10))(plVar1,plVar8,lVar12);
        uVar10 = 0;
        goto LAB_1002d4a14;
      }
      if (iVar5 == 1) {
        *plVar1 = *plVar8;
        _swift_bridgeObjectRetain();
        uVar10 = 1;
        goto LAB_1002d4a14;
      }
LAB_1002d49a4:
      _memcpy(plVar1,plVar8,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
    }
    else {
      if (iVar5 == 2) {
        lVar12 = plVar8[1];
        *plVar1 = *plVar8;
        plVar1[1] = lVar12;
        lVar12 = plVar8[2];
        plVar1[2] = lVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar12);
        uVar10 = 2;
      }
      else {
        if (iVar5 != 4) goto LAB_1002d49a4;
        lVar12 = *plVar8;
        _swift_errorRetain(lVar12);
        *plVar1 = lVar12;
        uVar10 = 4;
      }
LAB_1002d4a14:
      _swift_storeEnumTagMultiPayload(plVar1,lVar13,uVar10);
    }
    uVar10 = 9;
    break;
  case 10:
    lVar13 = 0;
    FUN_100278368();
    plVar7 = plVar8;
    _swift_getEnumCaseMultiPayload(plVar8,lVar13);
    iVar5 = (int)plVar7;
    if (iVar5 < 3) {
      if (iVar5 == 0) {
        lVar12 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x10))(plVar1,plVar8,lVar12);
        uVar10 = 0;
        goto LAB_1002d4af0;
      }
      if (iVar5 == 1) {
        lVar12 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar12 + -8) + 0x10))(plVar1,plVar8,lVar12);
        uVar10 = 1;
        goto LAB_1002d4af0;
      }
      if (iVar5 == 2) {
        lVar12 = *plVar8;
        _swift_errorRetain(lVar12);
        *plVar1 = lVar12;
        uVar10 = 2;
        goto LAB_1002d4af0;
      }
LAB_1002d4a8c:
      _memcpy(plVar1,plVar8,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
    }
    else {
      if (iVar5 == 3) {
        lVar12 = *plVar8;
        _swift_errorRetain(lVar12);
        *plVar1 = lVar12;
        uVar10 = 3;
      }
      else if (iVar5 == 4) {
        lVar12 = *plVar8;
        _swift_errorRetain(lVar12);
        *plVar1 = lVar12;
        uVar10 = 4;
      }
      else {
        if (iVar5 != 5) goto LAB_1002d4a8c;
        lVar12 = plVar8[1];
        *plVar1 = *plVar8;
        plVar1[1] = lVar12;
        _swift_bridgeObjectRetain();
        uVar10 = 5;
      }
LAB_1002d4af0:
      _swift_storeEnumTagMultiPayload(plVar1,lVar13,uVar10);
    }
    uVar10 = 10;
    break;
  case 0xb:
    lVar13 = *plVar8;
    lVar17 = plVar8[1];
    lVar16 = plVar8[2];
    lVar12 = plVar8[3];
    lVar2 = plVar8[4];
    lVar4 = plVar8[5];
    FUN_10027c10c(lVar13,lVar17,lVar16,lVar12,lVar2,(char)lVar4);
    *plVar1 = lVar13;
    plVar1[1] = lVar17;
    plVar1[2] = lVar16;
    plVar1[3] = lVar12;
    plVar1[4] = lVar2;
    *(char *)(plVar1 + 5) = (char)lVar4;
    uVar10 = 0xb;
    break;
  case 0xc:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    uVar10 = 0xc;
    break;
  case 0xd:
    lVar13 = *plVar8;
    _swift_errorRetain(lVar13);
    *plVar1 = lVar13;
    uVar10 = 0xd;
    break;
  case 0xe:
    lVar13 = *plVar8;
    lVar12 = plVar8[1];
    FUN_100008184(lVar13,lVar12);
    *plVar1 = lVar13;
    plVar1[1] = lVar12;
    uVar10 = 0xe;
    break;
  default:
    _memcpy(plVar1,plVar8,*(size_t *)(lVar15 + 0x40));
    goto LAB_1002d4b0c;
  }
  _swift_storeEnumTagMultiPayload(plVar1,lVar6,uVar10);
LAB_1002d4b0c:
  (**(code **)(lVar15 + 0x38))(plVar1,0,1,lVar6);
LAB_1002d4b24:
  iVar5 = *(int *)(param_3 + 100);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  _swift_bridgeObjectRetain();
  return param_1;
}

