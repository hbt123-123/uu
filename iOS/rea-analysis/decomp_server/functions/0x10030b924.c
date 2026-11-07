// rea decompile_all
// name: FUN_10030b924
// address: 0x10030b924
// body: available
// range: 0x10030b924-0x10030bc37 inclusive
// range: 0x10030bc78-0x10030bfeb inclusive
// range: 0x10030c030-0x10030c397 inclusive
// range: 0x10030c3ac-0x10030c4ab inclusive
// range: 0x10030c52c-0x10030c5bb inclusive
// range: 0x10030c5d0-0x10030c69b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10030b924(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  size_t sVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  
  lVar6 = 0;
  __s10Foundation10URLRequestVMa();
  lVar16 = *(long *)(lVar6 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar7 = param_1;
  (*pcVar17)(param_1,1,lVar6);
  puVar8 = param_2;
  (*pcVar17)(param_2,1,lVar6);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 != 0) {
      (**(code **)(lVar16 + 8))(param_1,lVar6);
      goto LAB_10030b9d0;
    }
    (**(code **)(lVar16 + 0x18))(param_1,param_2,lVar6);
  }
  else if ((int)puVar8 == 0) {
    (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar6);
  }
  else {
LAB_10030b9d0:
    puVar9 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar6 = 0;
  FUN_100277ad0();
  lVar16 = *(long *)(lVar6 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar10 = puVar7;
  (*pcVar17)(puVar7,1,lVar6);
  puVar11 = puVar8;
  (*pcVar17)(puVar8,1,lVar6);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 == param_2) {
        return param_1;
      }
      FUN_1000d27dc(puVar7,FUN_100277ad0);
      puVar10 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar6);
      switch((ulong)puVar10 & 0xffffffff) {
      case 0:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,0);
        return param_1;
      case 1:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,1);
        return param_1;
      case 2:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        puVar9 = &DAT_100a82468;
        FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
        iVar5 = *(int *)(puVar9 + 0x30);
        lVar16 = 0;
        __s10Foundation3URLVMa();
        pcVar17 = *(code **)(*(long *)(lVar16 + -8) + 0x10);
        (*pcVar17)((long)puVar7 + (long)iVar5,(long)puVar8 + (long)iVar5,lVar16);
        (*pcVar17)((long)puVar7 + (long)*(int *)(puVar9 + 0x40),
                   (long)puVar8 + (long)*(int *)(puVar9 + 0x40),lVar16);
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,2);
        return param_1;
      case 3:
        lVar16 = puVar8[3];
        puVar7[3] = lVar16;
        puVar7[4] = puVar8[4];
        (*(code *)**(undefined8 **)(lVar16 + -8))(puVar7,puVar8);
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,3);
        return param_1;
      case 4:
        uVar15 = 0;
        FUN_100278198(0);
        _swift_getEnumCaseMultiPayload(puVar8,uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010030bfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_10030bfec +
                  (ulong)*(ushort *)(&DAT_1008194e2 + ((ulong)puVar8 & 0xffffffff) * 2) * 4))();
        return puVar8;
      case 5:
        uVar15 = *puVar8;
        FUN_10027c0e0(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,5);
        return param_1;
      case 6:
        uVar15 = *puVar8;
        uVar1 = puVar8[1];
        uVar4 = *(undefined1 *)(puVar8 + 2);
        FUN_10027c0fc(uVar15,uVar1,uVar4);
        *puVar7 = uVar15;
        puVar7[1] = uVar1;
        *(undefined1 *)(puVar7 + 2) = uVar4;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,6);
        return param_1;
      case 7:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,7);
        return param_1;
      case 8:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        uVar15 = puVar8[1];
        _swift_errorRetain(uVar15);
        puVar7[1] = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,8);
        return param_1;
      case 9:
        goto switchD_10030bb68_caseD_9;
      case 10:
        lVar16 = 0;
        FUN_100278368();
        puVar10 = puVar8;
        _swift_getEnumCaseMultiPayload(puVar8,lVar16);
        iVar5 = (int)puVar10;
        if (iVar5 < 3) {
          if (iVar5 == 0) {
            lVar12 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar7,puVar8,lVar12);
            uVar15 = 0;
          }
          else if (iVar5 == 1) {
            lVar12 = 0;
            __sSS10FoundationE8EncodingVMa();
            (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar7,puVar8,lVar12);
            uVar15 = 1;
          }
          else {
            if (iVar5 != 2) {
LAB_10030c620:
              _memcpy(puVar7,puVar8,*(size_t *)(*(long *)(lVar16 + -8) + 0x40));
              goto LAB_10030c688;
            }
            uVar15 = *puVar8;
            _swift_errorRetain(uVar15);
            *puVar7 = uVar15;
            uVar15 = 2;
          }
        }
        else if (iVar5 == 3) {
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 3;
        }
        else if (iVar5 == 4) {
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 4;
        }
        else {
          if (iVar5 != 5) goto LAB_10030c620;
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
          _swift_bridgeObjectRetain();
          uVar15 = 5;
        }
        _swift_storeEnumTagMultiPayload(puVar7,lVar16,uVar15);
LAB_10030c688:
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,10);
        return param_1;
      case 0xb:
        uVar15 = *puVar8;
        uVar2 = puVar8[1];
        uVar1 = puVar8[2];
        uVar3 = puVar8[3];
        uVar18 = puVar8[4];
        uVar4 = *(undefined1 *)(puVar8 + 5);
        FUN_10027c10c(uVar15,uVar2,uVar1,uVar3,uVar18,uVar4);
        *puVar7 = uVar15;
        puVar7[1] = uVar2;
        puVar7[2] = uVar1;
        puVar7[3] = uVar3;
        puVar7[4] = uVar18;
        *(undefined1 *)(puVar7 + 5) = uVar4;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,0xb);
        return param_1;
      case 0xc:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,0xc);
        return param_1;
      case 0xd:
        uVar15 = *puVar8;
        _swift_errorRetain(uVar15);
        *puVar7 = uVar15;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,0xd);
        return param_1;
      case 0xe:
        uVar15 = *puVar8;
        uVar1 = puVar8[1];
        FUN_100008184(uVar15,uVar1);
        *puVar7 = uVar15;
        puVar7[1] = uVar1;
        _swift_storeEnumTagMultiPayload(puVar7,lVar6,0xe);
        return param_1;
      default:
        sVar14 = *(size_t *)(lVar16 + 0x40);
        goto LAB_10030bafc;
      }
    }
    FUN_1000d27dc(puVar7,FUN_100277ad0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar6);
    switch((ulong)puVar10 & 0xffffffff) {
    case 0:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = 0;
      break;
    case 1:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = 1;
      break;
    case 2:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      puVar9 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar5 = *(int *)(puVar9 + 0x30);
      lVar12 = 0;
      __s10Foundation3URLVMa();
      pcVar17 = *(code **)(*(long *)(lVar12 + -8) + 0x10);
      (*pcVar17)((long)puVar7 + (long)iVar5,(long)puVar8 + (long)iVar5,lVar12);
      (*pcVar17)((long)puVar7 + (long)*(int *)(puVar9 + 0x40),
                 (long)puVar8 + (long)*(int *)(puVar9 + 0x40),lVar12);
      uVar15 = 2;
      break;
    case 3:
      lVar12 = puVar8[3];
      puVar7[3] = lVar12;
      puVar7[4] = puVar8[4];
      (*(code *)**(undefined8 **)(lVar12 + -8))(puVar7,puVar8);
      uVar15 = 3;
      break;
    case 4:
      uVar15 = 0;
      FUN_100278198(0);
      _swift_getEnumCaseMultiPayload(puVar8,uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010030bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10030bc38 +
                (ulong)*(ushort *)(&DAT_1008194aa + ((ulong)puVar8 & 0xffffffff) * 2) * 4))();
      return puVar8;
    case 5:
      uVar15 = *puVar8;
      FUN_10027c0e0(uVar15);
      *puVar7 = uVar15;
      uVar15 = 5;
      break;
    case 6:
      uVar15 = *puVar8;
      uVar1 = puVar8[1];
      uVar4 = *(undefined1 *)(puVar8 + 2);
      FUN_10027c0fc(uVar15,uVar1,uVar4);
      *puVar7 = uVar15;
      puVar7[1] = uVar1;
      *(undefined1 *)(puVar7 + 2) = uVar4;
      uVar15 = 6;
      break;
    case 7:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = 7;
      break;
    case 8:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = puVar8[1];
      _swift_errorRetain(uVar15);
      puVar7[1] = uVar15;
      uVar15 = 8;
      break;
    case 9:
      lVar12 = 0;
      FUN_1002782c4();
      puVar10 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar12);
      iVar5 = (int)puVar10;
      if (iVar5 < 2) {
        if (iVar5 == 0) {
          lVar13 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar7,puVar8,lVar13);
          uVar15 = 0;
          goto LAB_10030c318;
        }
        if (iVar5 == 1) {
          *puVar7 = *puVar8;
          _swift_bridgeObjectRetain();
          uVar15 = 1;
          goto LAB_10030c318;
        }
LAB_10030c2a0:
        _memcpy(puVar7,puVar8,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
      }
      else {
        if (iVar5 == 2) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
          uVar15 = puVar8[2];
          puVar7[2] = uVar15;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar15);
          uVar15 = 2;
        }
        else {
          if (iVar5 != 4) goto LAB_10030c2a0;
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 4;
        }
LAB_10030c318:
        _swift_storeEnumTagMultiPayload(puVar7,lVar12,uVar15);
      }
      uVar15 = 9;
      break;
    case 10:
      lVar12 = 0;
      FUN_100278368();
      puVar10 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar12);
      iVar5 = (int)puVar10;
      if (iVar5 < 3) {
        if (iVar5 == 0) {
          lVar13 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar7,puVar8,lVar13);
          uVar15 = 0;
          goto LAB_10030c460;
        }
        if (iVar5 == 1) {
          lVar13 = 0;
          __sSS10FoundationE8EncodingVMa();
          (**(code **)(*(long *)(lVar13 + -8) + 0x10))(puVar7,puVar8,lVar13);
          uVar15 = 1;
          goto LAB_10030c460;
        }
        if (iVar5 == 2) {
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 2;
          goto LAB_10030c460;
        }
LAB_10030c3fc:
        _memcpy(puVar7,puVar8,*(size_t *)(*(long *)(lVar12 + -8) + 0x40));
      }
      else {
        if (iVar5 == 3) {
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 3;
        }
        else if (iVar5 == 4) {
          uVar15 = *puVar8;
          _swift_errorRetain(uVar15);
          *puVar7 = uVar15;
          uVar15 = 4;
        }
        else {
          if (iVar5 != 5) goto LAB_10030c3fc;
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
          _swift_bridgeObjectRetain();
          uVar15 = 5;
        }
LAB_10030c460:
        _swift_storeEnumTagMultiPayload(puVar7,lVar12,uVar15);
      }
      uVar15 = 10;
      break;
    case 0xb:
      uVar15 = *puVar8;
      uVar2 = puVar8[1];
      uVar1 = puVar8[2];
      uVar3 = puVar8[3];
      uVar18 = puVar8[4];
      uVar4 = *(undefined1 *)(puVar8 + 5);
      FUN_10027c10c(uVar15,uVar2,uVar1,uVar3,uVar18,uVar4);
      *puVar7 = uVar15;
      puVar7[1] = uVar2;
      puVar7[2] = uVar1;
      puVar7[3] = uVar3;
      puVar7[4] = uVar18;
      *(undefined1 *)(puVar7 + 5) = uVar4;
      uVar15 = 0xb;
      break;
    case 0xc:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = 0xc;
      break;
    case 0xd:
      uVar15 = *puVar8;
      _swift_errorRetain(uVar15);
      *puVar7 = uVar15;
      uVar15 = 0xd;
      break;
    case 0xe:
      uVar15 = *puVar8;
      uVar1 = puVar8[1];
      FUN_100008184(uVar15,uVar1);
      *puVar7 = uVar15;
      puVar7[1] = uVar1;
      uVar15 = 0xe;
      break;
    default:
      _memcpy(puVar7,puVar8,*(size_t *)(lVar16 + 0x40));
      goto LAB_10030c474;
    }
    _swift_storeEnumTagMultiPayload(puVar7,lVar6,uVar15);
LAB_10030c474:
    (**(code **)(lVar16 + 0x38))(puVar7,0,1,lVar6);
    return param_1;
  }
  puVar9 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  sVar14 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
LAB_10030bafc:
  _memcpy(puVar7,puVar8,sVar14);
  return param_1;
switchD_10030bb68_caseD_9:
  lVar16 = 0;
  FUN_1002782c4();
  puVar10 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar16);
  iVar5 = (int)puVar10;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      lVar12 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar12 + -8) + 0x10))(puVar7,puVar8,lVar12);
      uVar15 = 0;
    }
    else {
      if (iVar5 != 1) {
LAB_10030c52c:
        _memcpy(puVar7,puVar8,*(size_t *)(*(long *)(lVar16 + -8) + 0x40));
        goto LAB_10030c5a8;
      }
      *puVar7 = *puVar8;
      _swift_bridgeObjectRetain();
      uVar15 = 1;
    }
  }
  else if (iVar5 == 2) {
    *puVar7 = *puVar8;
    puVar7[1] = puVar8[1];
    uVar15 = puVar8[2];
    puVar7[2] = uVar15;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar15);
    uVar15 = 2;
  }
  else {
    if (iVar5 != 4) goto LAB_10030c52c;
    uVar15 = *puVar8;
    _swift_errorRetain(uVar15);
    *puVar7 = uVar15;
    uVar15 = 4;
  }
  _swift_storeEnumTagMultiPayload(puVar7,lVar16,uVar15);
LAB_10030c5a8:
  _swift_storeEnumTagMultiPayload(puVar7,lVar6,9);
  return param_1;
}

