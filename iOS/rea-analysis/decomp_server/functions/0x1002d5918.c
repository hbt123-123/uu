// rea decompile_all
// name: FUN_1002d5918
// address: 0x1002d5918
// body: available
// range: 0x1002d5918-0x1002d60ab inclusive
// range: 0x1002d60ec-0x1002d6467 inclusive
// range: 0x1002d64ac-0x1002d6813 inclusive
// range: 0x1002d6828-0x1002d6953 inclusive
// range: 0x1002d69d4-0x1002d6a63 inclusive
// range: 0x1002d6a78-0x1002d6b43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002d5918(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  plVar14 = param_1 + 1;
  plVar16 = param_2 + 1;
  lVar13 = *plVar16;
  if (*plVar14 == 0) {
    if (lVar13 == 0) {
      uVar4 = param_2[2];
      lVar13 = *plVar16;
      param_1[3] = param_2[3];
      param_1[2] = uVar4;
      *plVar14 = lVar13;
    }
    else {
      uVar4 = param_2[2];
      param_1[1] = lVar13;
      param_1[2] = uVar4;
      param_1[3] = param_2[3];
      _swift_retain();
    }
  }
  else if (lVar13 == 0) {
    FUN_100040bb4(plVar14,&DAT_100a84108,0x100818aa0);
    uVar4 = param_2[3];
    lVar13 = *plVar16;
    param_1[2] = param_2[2];
    *plVar14 = lVar13;
    param_1[3] = uVar4;
  }
  else {
    uVar4 = param_2[2];
    uVar15 = param_1[2];
    param_1[1] = lVar13;
    param_1[2] = uVar4;
    _swift_retain();
    _swift_release(uVar15);
    param_1[3] = param_2[3];
  }
  plVar14 = param_1 + 4;
  plVar16 = param_2 + 4;
  lVar13 = *plVar16;
  if (*plVar14 == 0) {
    if (lVar13 == 0) {
      uVar4 = param_2[5];
      lVar13 = *plVar16;
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      *plVar14 = lVar13;
    }
    else {
      uVar4 = param_2[5];
      param_1[4] = lVar13;
      param_1[5] = uVar4;
      param_1[6] = param_2[6];
      _swift_retain();
    }
  }
  else if (lVar13 == 0) {
    FUN_100040bb4(plVar14,&DAT_100a84108,0x100818aa0);
    uVar4 = param_2[6];
    lVar13 = *plVar16;
    param_1[5] = param_2[5];
    *plVar14 = lVar13;
    param_1[6] = uVar4;
  }
  else {
    uVar4 = param_2[5];
    uVar15 = param_1[5];
    param_1[4] = lVar13;
    param_1[5] = uVar4;
    _swift_retain();
    _swift_release(uVar15);
    param_1[6] = param_2[6];
  }
  lVar13 = param_2[10];
  if (param_1[10] == 0) {
    if (lVar13 == 0) goto LAB_1002d5af0;
    param_1[10] = lVar13;
    param_1[0xb] = param_2[0xb];
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 7,param_2 + 7);
  }
  else if (lVar13 == 0) {
    FUN_10003f094(param_1 + 7);
LAB_1002d5af0:
    uVar15 = param_2[8];
    uVar4 = param_2[7];
    uVar20 = param_2[10];
    uVar19 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar20;
    param_1[9] = uVar19;
    param_1[8] = uVar15;
    param_1[7] = uVar4;
  }
  else {
    FUN_100260848(param_1 + 7,param_2 + 7);
  }
  lVar13 = param_2[0xf];
  if (param_1[0xf] == 0) {
    if (lVar13 == 0) goto LAB_1002d5b54;
    param_1[0xf] = lVar13;
    param_1[0x10] = param_2[0x10];
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 0xc,param_2 + 0xc);
  }
  else if (lVar13 == 0) {
    FUN_10003f094(param_1 + 0xc);
LAB_1002d5b54:
    uVar15 = param_2[0xd];
    uVar4 = param_2[0xc];
    uVar20 = param_2[0xf];
    uVar19 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar15;
    param_1[0xc] = uVar4;
    param_1[0xf] = uVar20;
    param_1[0xe] = uVar19;
  }
  else {
    FUN_100260848(param_1 + 0xc,param_2 + 0xc);
  }
  plVar14 = param_1 + 0x11;
  plVar16 = param_2 + 0x11;
  lVar13 = *plVar16;
  if (*plVar14 == 0) {
    if (lVar13 == 0) {
      uVar4 = param_2[0x12];
      lVar13 = *plVar16;
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar4;
      *plVar14 = lVar13;
    }
    else {
      param_1[0x11] = lVar13;
      uVar4 = param_2[0x13];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = uVar4;
      _swift_retain(uVar4);
    }
  }
  else if (lVar13 == 0) {
    FUN_100040bb4(plVar14,&DAT_100a82be0,&DAT_1008171b8);
    uVar4 = param_2[0x13];
    lVar13 = *plVar16;
    param_1[0x12] = param_2[0x12];
    *plVar14 = lVar13;
    param_1[0x13] = uVar4;
  }
  else {
    param_1[0x11] = lVar13;
    uVar4 = param_2[0x13];
    uVar15 = param_1[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar4;
    _swift_retain();
    _swift_release(uVar15);
  }
  plVar14 = param_1 + 0x14;
  plVar16 = param_2 + 0x14;
  lVar13 = *plVar16;
  if (*plVar14 == 0) {
    if (lVar13 == 0) {
      uVar4 = param_2[0x15];
      lVar13 = *plVar16;
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      *plVar14 = lVar13;
    }
    else {
      param_1[0x14] = lVar13;
      uVar4 = param_2[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar4;
      _swift_retain(uVar4);
    }
  }
  else if (lVar13 == 0) {
    FUN_100040bb4(plVar14,&DAT_100a82be0,&DAT_1008171b8);
    uVar4 = param_2[0x16];
    lVar13 = *plVar16;
    param_1[0x15] = param_2[0x15];
    *plVar14 = lVar13;
    param_1[0x16] = uVar4;
  }
  else {
    param_1[0x14] = lVar13;
    uVar4 = param_2[0x16];
    uVar15 = param_1[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar4;
    _swift_retain();
    _swift_release(uVar15);
  }
  plVar14 = param_1 + 0x17;
  plVar16 = param_2 + 0x17;
  lVar13 = *plVar16;
  if (*plVar14 == 0) {
    if (lVar13 == 0) {
      uVar4 = param_2[0x18];
      lVar13 = *plVar16;
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar4;
      *plVar14 = lVar13;
    }
    else {
      param_1[0x17] = lVar13;
      uVar4 = param_2[0x19];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = uVar4;
      _swift_retain(uVar4);
    }
  }
  else if (lVar13 == 0) {
    FUN_100040bb4(plVar14,&DAT_100a82be0,&DAT_1008171b8);
    uVar4 = param_2[0x19];
    lVar13 = *plVar16;
    param_1[0x18] = param_2[0x18];
    *plVar14 = lVar13;
    param_1[0x19] = uVar4;
  }
  else {
    param_1[0x17] = lVar13;
    uVar4 = param_2[0x19];
    uVar15 = param_1[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar4;
    _swift_retain();
    _swift_release(uVar15);
  }
  uVar4 = param_1[0x1a];
  param_1[0x1a] = param_2[0x1a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  uVar4 = param_1[0x1c];
  param_1[0x1c] = param_2[0x1c];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  lVar13 = param_2[0x21];
  if (param_1[0x21] == 0) {
    if (lVar13 == 0) goto LAB_1002d5dd0;
    param_1[0x21] = lVar13;
    param_1[0x22] = param_2[0x22];
    (*(code *)**(undefined8 **)(lVar13 + -8))(param_1 + 0x1e,param_2 + 0x1e);
  }
  else if (lVar13 == 0) {
    FUN_10003f094(param_1 + 0x1e);
LAB_1002d5dd0:
    uVar15 = param_2[0x1f];
    uVar4 = param_2[0x1e];
    uVar20 = param_2[0x21];
    uVar19 = param_2[0x20];
    param_1[0x22] = param_2[0x22];
    param_1[0x1f] = uVar15;
    param_1[0x1e] = uVar4;
    param_1[0x21] = uVar20;
    param_1[0x20] = uVar19;
  }
  else {
    FUN_100260848(param_1 + 0x1e,param_2 + 0x1e);
  }
  puVar1 = param_1 + 0x23;
  puVar8 = param_2 + 0x23;
  lVar13 = param_2[0x26];
  if (param_1[0x26] == 0) {
    if (lVar13 == 0) {
      uVar15 = param_2[0x24];
      uVar4 = *puVar8;
      uVar20 = param_2[0x26];
      uVar19 = param_2[0x25];
      param_1[0x27] = param_2[0x27];
      param_1[0x24] = uVar15;
      *puVar1 = uVar4;
      param_1[0x26] = uVar20;
      param_1[0x25] = uVar19;
    }
    else {
      param_1[0x26] = lVar13;
      param_1[0x27] = param_2[0x27];
      (*(code *)**(undefined8 **)(lVar13 + -8))(puVar1,puVar8);
    }
  }
  else if (lVar13 == 0) {
    FUN_10003f094();
    uVar15 = param_2[0x24];
    uVar4 = *puVar8;
    uVar20 = param_2[0x26];
    uVar19 = param_2[0x25];
    param_1[0x27] = param_2[0x27];
    param_1[0x24] = uVar15;
    *puVar1 = uVar4;
    param_1[0x26] = uVar20;
    param_1[0x25] = uVar19;
  }
  else {
    FUN_100260848(puVar1,puVar8);
  }
  param_1[0x28] = param_2[0x28];
  uVar4 = param_1[0x29];
  param_1[0x29] = param_2[0x29];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x2a];
  param_1[0x2a] = param_2[0x2a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_1[0x2b];
  param_1[0x2b] = param_2[0x2b];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0x2c] = param_2[0x2c];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x5c));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x5c));
  lVar13 = 0;
  FUN_100277ad0();
  lVar18 = *(long *)(lVar13 + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar5 = puVar1;
  (*pcVar17)(puVar1,1,lVar13);
  puVar6 = puVar8;
  (*pcVar17)(puVar8,1,lVar13);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      FUN_1000d27dc(puVar1,FUN_100277ad0);
      goto LAB_1002d5f6c;
    }
    if (param_1 == param_2) goto LAB_1002d6908;
    FUN_1000d27dc(puVar1,FUN_100277ad0);
    puVar5 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar13);
    switch((ulong)puVar5 & 0xffffffff) {
    case 0:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,0);
      break;
    case 1:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,1);
      break;
    case 2:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      puVar9 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar3 = *(int *)(puVar9 + 0x30);
      lVar18 = 0;
      __s10Foundation3URLVMa();
      pcVar17 = *(code **)(*(long *)(lVar18 + -8) + 0x10);
      (*pcVar17)((long)puVar1 + (long)iVar3,(long)puVar8 + (long)iVar3,lVar18);
      (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
                 (long)puVar8 + (long)*(int *)(puVar9 + 0x40),lVar18);
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,2);
      break;
    case 3:
      lVar18 = puVar8[3];
      puVar1[3] = lVar18;
      puVar1[4] = puVar8[4];
      (*(code *)**(undefined8 **)(lVar18 + -8))(puVar1,puVar8);
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,3);
      break;
    case 4:
      uVar4 = 0;
      FUN_100278198(0);
      _swift_getEnumCaseMultiPayload(puVar8,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001002d6464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1002d6468 +
                (ulong)*(ushort *)(&DAT_100818878 + ((ulong)puVar8 & 0xffffffff) * 2) * 4))();
      return puVar8;
    case 5:
      uVar4 = *puVar8;
      FUN_10027c0e0(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,5);
      break;
    case 6:
      uVar4 = *puVar8;
      uVar15 = puVar8[1];
      uVar2 = *(undefined1 *)(puVar8 + 2);
      FUN_10027c0fc(uVar4,uVar15,uVar2);
      *puVar1 = uVar4;
      puVar1[1] = uVar15;
      *(undefined1 *)(puVar1 + 2) = uVar2;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,6);
      break;
    case 7:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,7);
      break;
    case 8:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      uVar4 = puVar8[1];
      _swift_errorRetain(uVar4);
      puVar1[1] = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,8);
      break;
    case 9:
      lVar18 = 0;
      FUN_1002782c4();
      puVar5 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar18);
      iVar3 = (int)puVar5;
      if (iVar3 < 2) {
        if (iVar3 == 0) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x10))(puVar1,puVar8,lVar7);
          uVar4 = 0;
          goto LAB_1002d6a4c;
        }
        if (iVar3 == 1) {
          *puVar1 = *puVar8;
          _swift_bridgeObjectRetain();
          uVar4 = 1;
          goto LAB_1002d6a4c;
        }
LAB_1002d69d4:
        _memcpy(puVar1,puVar8,*(size_t *)(*(long *)(lVar18 + -8) + 0x40));
      }
      else {
        if (iVar3 == 2) {
          *puVar1 = *puVar8;
          puVar1[1] = puVar8[1];
          uVar4 = puVar8[2];
          puVar1[2] = uVar4;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar4);
          uVar4 = 2;
        }
        else {
          if (iVar3 != 4) goto LAB_1002d69d4;
          uVar4 = *puVar8;
          _swift_errorRetain(uVar4);
          *puVar1 = uVar4;
          uVar4 = 4;
        }
LAB_1002d6a4c:
        _swift_storeEnumTagMultiPayload(puVar1,lVar18,uVar4);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,9);
      break;
    case 10:
      lVar18 = 0;
      FUN_100278368();
      puVar5 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar18);
      iVar3 = (int)puVar5;
      if (iVar3 < 3) {
        if (iVar3 == 0) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x10))(puVar1,puVar8,lVar7);
          uVar4 = 0;
          goto LAB_1002d6b2c;
        }
        if (iVar3 == 1) {
          lVar7 = 0;
          __sSS10FoundationE8EncodingVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x10))(puVar1,puVar8,lVar7);
          uVar4 = 1;
          goto LAB_1002d6b2c;
        }
        if (iVar3 == 2) {
          uVar4 = *puVar8;
          _swift_errorRetain(uVar4);
          *puVar1 = uVar4;
          uVar4 = 2;
          goto LAB_1002d6b2c;
        }
LAB_1002d6ac8:
        _memcpy(puVar1,puVar8,*(size_t *)(*(long *)(lVar18 + -8) + 0x40));
      }
      else {
        if (iVar3 == 3) {
          uVar4 = *puVar8;
          _swift_errorRetain(uVar4);
          *puVar1 = uVar4;
          uVar4 = 3;
        }
        else if (iVar3 == 4) {
          uVar4 = *puVar8;
          _swift_errorRetain(uVar4);
          *puVar1 = uVar4;
          uVar4 = 4;
        }
        else {
          if (iVar3 != 5) goto LAB_1002d6ac8;
          *puVar1 = *puVar8;
          puVar1[1] = puVar8[1];
          _swift_bridgeObjectRetain();
          uVar4 = 5;
        }
LAB_1002d6b2c:
        _swift_storeEnumTagMultiPayload(puVar1,lVar18,uVar4);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,10);
      break;
    case 0xb:
      uVar4 = *puVar8;
      uVar19 = puVar8[1];
      uVar15 = puVar8[2];
      uVar20 = puVar8[3];
      uVar12 = puVar8[4];
      uVar2 = *(undefined1 *)(puVar8 + 5);
      FUN_10027c10c(uVar4,uVar19,uVar15,uVar20,uVar12,uVar2);
      *puVar1 = uVar4;
      puVar1[1] = uVar19;
      puVar1[2] = uVar15;
      puVar1[3] = uVar20;
      puVar1[4] = uVar12;
      *(undefined1 *)(puVar1 + 5) = uVar2;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,0xb);
      break;
    case 0xc:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,0xc);
      break;
    case 0xd:
      uVar4 = *puVar8;
      _swift_errorRetain(uVar4);
      *puVar1 = uVar4;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,0xd);
      break;
    case 0xe:
      uVar4 = *puVar8;
      uVar15 = puVar8[1];
      FUN_100008184(uVar4,uVar15);
      *puVar1 = uVar4;
      puVar1[1] = uVar15;
      _swift_storeEnumTagMultiPayload(puVar1,lVar13,0xe);
      break;
    default:
      sVar11 = *(size_t *)(lVar18 + 0x40);
      goto LAB_1002d5f88;
    }
    goto LAB_1002d6908;
  }
  if ((int)puVar6 != 0) {
LAB_1002d5f6c:
    puVar9 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    sVar11 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
LAB_1002d5f88:
    _memcpy(puVar1,puVar8,sVar11);
    goto LAB_1002d6908;
  }
  puVar5 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar13);
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = 0;
    break;
  case 1:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = 1;
    break;
  case 2:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    puVar9 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar3 = *(int *)(puVar9 + 0x30);
    lVar7 = 0;
    __s10Foundation3URLVMa();
    pcVar17 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    (*pcVar17)((long)puVar1 + (long)iVar3,(long)puVar8 + (long)iVar3,lVar7);
    (*pcVar17)((long)puVar1 + (long)*(int *)(puVar9 + 0x40),
               (long)puVar8 + (long)*(int *)(puVar9 + 0x40),lVar7);
    uVar4 = 2;
    break;
  case 3:
    lVar7 = puVar8[3];
    puVar1[3] = lVar7;
    puVar1[4] = puVar8[4];
    (*(code *)**(undefined8 **)(lVar7 + -8))(puVar1,puVar8);
    uVar4 = 3;
    break;
  case 4:
    uVar4 = 0;
    FUN_100278198(0);
    _swift_getEnumCaseMultiPayload(puVar8,uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001002d60a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1002d60ac +
              (ulong)*(ushort *)(&DAT_100818840 + ((ulong)puVar8 & 0xffffffff) * 2) * 4))();
    return puVar8;
  case 5:
    uVar4 = *puVar8;
    FUN_10027c0e0(uVar4);
    *puVar1 = uVar4;
    uVar4 = 5;
    break;
  case 6:
    uVar4 = *puVar8;
    uVar15 = puVar8[1];
    uVar2 = *(undefined1 *)(puVar8 + 2);
    FUN_10027c0fc(uVar4,uVar15,uVar2);
    *puVar1 = uVar4;
    puVar1[1] = uVar15;
    *(undefined1 *)(puVar1 + 2) = uVar2;
    uVar4 = 6;
    break;
  case 7:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = 7;
    break;
  case 8:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = puVar8[1];
    _swift_errorRetain(uVar4);
    puVar1[1] = uVar4;
    uVar4 = 8;
    break;
  case 9:
    lVar7 = 0;
    FUN_1002782c4();
    puVar5 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar7);
    iVar3 = (int)puVar5;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        lVar10 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(puVar1,puVar8,lVar10);
        uVar4 = 0;
        goto LAB_1002d6794;
      }
      if (iVar3 == 1) {
        *puVar1 = *puVar8;
        _swift_bridgeObjectRetain();
        uVar4 = 1;
        goto LAB_1002d6794;
      }
LAB_1002d671c:
      _memcpy(puVar1,puVar8,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
    }
    else {
      if (iVar3 == 2) {
        *puVar1 = *puVar8;
        puVar1[1] = puVar8[1];
        uVar4 = puVar8[2];
        puVar1[2] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        uVar4 = 2;
      }
      else {
        if (iVar3 != 4) goto LAB_1002d671c;
        uVar4 = *puVar8;
        _swift_errorRetain(uVar4);
        *puVar1 = uVar4;
        uVar4 = 4;
      }
LAB_1002d6794:
      _swift_storeEnumTagMultiPayload(puVar1,lVar7,uVar4);
    }
    uVar4 = 9;
    break;
  case 10:
    lVar7 = 0;
    FUN_100278368();
    puVar5 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar7);
    iVar3 = (int)puVar5;
    if (iVar3 < 3) {
      if (iVar3 == 0) {
        lVar10 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(puVar1,puVar8,lVar10);
        uVar4 = 0;
        goto LAB_1002d68dc;
      }
      if (iVar3 == 1) {
        lVar10 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar10 + -8) + 0x10))(puVar1,puVar8,lVar10);
        uVar4 = 1;
        goto LAB_1002d68dc;
      }
      if (iVar3 == 2) {
        uVar4 = *puVar8;
        _swift_errorRetain(uVar4);
        *puVar1 = uVar4;
        uVar4 = 2;
        goto LAB_1002d68dc;
      }
LAB_1002d6878:
      _memcpy(puVar1,puVar8,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
    }
    else {
      if (iVar3 == 3) {
        uVar4 = *puVar8;
        _swift_errorRetain(uVar4);
        *puVar1 = uVar4;
        uVar4 = 3;
      }
      else if (iVar3 == 4) {
        uVar4 = *puVar8;
        _swift_errorRetain(uVar4);
        *puVar1 = uVar4;
        uVar4 = 4;
      }
      else {
        if (iVar3 != 5) goto LAB_1002d6878;
        *puVar1 = *puVar8;
        puVar1[1] = puVar8[1];
        _swift_bridgeObjectRetain();
        uVar4 = 5;
      }
LAB_1002d68dc:
      _swift_storeEnumTagMultiPayload(puVar1,lVar7,uVar4);
    }
    uVar4 = 10;
    break;
  case 0xb:
    uVar4 = *puVar8;
    uVar19 = puVar8[1];
    uVar15 = puVar8[2];
    uVar20 = puVar8[3];
    uVar12 = puVar8[4];
    uVar2 = *(undefined1 *)(puVar8 + 5);
    FUN_10027c10c(uVar4,uVar19,uVar15,uVar20,uVar12,uVar2);
    *puVar1 = uVar4;
    puVar1[1] = uVar19;
    puVar1[2] = uVar15;
    puVar1[3] = uVar20;
    puVar1[4] = uVar12;
    *(undefined1 *)(puVar1 + 5) = uVar2;
    uVar4 = 0xb;
    break;
  case 0xc:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = 0xc;
    break;
  case 0xd:
    uVar4 = *puVar8;
    _swift_errorRetain(uVar4);
    *puVar1 = uVar4;
    uVar4 = 0xd;
    break;
  case 0xe:
    uVar4 = *puVar8;
    uVar15 = puVar8[1];
    FUN_100008184(uVar4,uVar15);
    *puVar1 = uVar4;
    puVar1[1] = uVar15;
    uVar4 = 0xe;
    break;
  default:
    _memcpy(puVar1,puVar8,*(size_t *)(lVar18 + 0x40));
    goto LAB_1002d68f0;
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar13,uVar4);
LAB_1002d68f0:
  (**(code **)(lVar18 + 0x38))(puVar1,0,1,lVar13);
LAB_1002d6908:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x60)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x60));
  lVar13 = (long)*(int *)(param_3 + 100);
  uVar4 = *(undefined8 *)((long)param_1 + lVar13);
  *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}

