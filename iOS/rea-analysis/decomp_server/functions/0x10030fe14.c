// rea decompile_all
// name: FUN_10030fe14
// address: 0x10030fe14
// body: available
// range: 0x10030fe14-0x100310123 inclusive
// range: 0x100310164-0x1003104b3 inclusive
// range: 0x1003104c8-0x1003105db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10030fe14(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_1000d27dc(param_1,FUN_10030da10);
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar5 = (int)puVar6;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      uVar12 = 0;
    }
    else {
      lVar7 = 0;
      __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar12 = 1;
    }
    goto LAB_1003105b4;
  }
  if (iVar5 == 2) {
    *param_1 = *param_2;
    uVar13 = param_2[2];
    if (uVar13 >> 0x3c < 0xf) {
      uVar12 = param_2[1];
      FUN_100008184(uVar12,uVar13);
      param_1[1] = uVar12;
      param_1[2] = uVar13;
    }
    else {
      uVar12 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar12;
    }
    uVar12 = 2;
    goto LAB_1003105b4;
  }
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar7 + -8);
  puVar6 = param_2;
  (**(code **)(lVar14 + 0x30))(param_2,1,lVar7);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar7);
    (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar7);
  }
  else {
    puVar8 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  lVar7 = 0;
  FUN_100300610();
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x18));
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
  lVar7 = 0;
  FUN_100277ad0();
  lVar14 = *(long *)(lVar7 + -8);
  puVar9 = param_2;
  (**(code **)(lVar14 + 0x30))(param_2,1,lVar7);
  if ((int)puVar9 == 0) {
    puVar9 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar7);
    switch((ulong)puVar9 & 0xffffffff) {
    case 0:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = 0;
      break;
    case 1:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = 1;
      break;
    case 2:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      puVar8 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar5 = *(int *)(puVar8 + 0x30);
      lVar10 = 0;
      __s10Foundation3URLVMa();
      pcVar16 = *(code **)(*(long *)(lVar10 + -8) + 0x10);
      (*pcVar16)((long)puVar6 + (long)iVar5,(long)param_2 + (long)iVar5,lVar10);
      (*pcVar16)((long)puVar6 + (long)*(int *)(puVar8 + 0x40),
                 (long)param_2 + (long)*(int *)(puVar8 + 0x40),lVar10);
      uVar12 = 2;
      break;
    case 3:
      lVar10 = param_2[3];
      puVar6[3] = lVar10;
      puVar6[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar10 + -8))(puVar6,param_2);
      uVar12 = 3;
      break;
    case 4:
      uVar12 = 0;
      FUN_100278198(0);
      _swift_getEnumCaseMultiPayload(param_2,uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100310120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_100310124 +
                (ulong)*(ushort *)(&DAT_1008195d0 + ((ulong)param_2 & 0xffffffff) * 2) * 4))();
      return param_2;
    case 5:
      uVar12 = *param_2;
      FUN_10027c0e0(uVar12);
      *puVar6 = uVar12;
      uVar12 = 5;
      break;
    case 6:
      uVar12 = *param_2;
      uVar1 = param_2[1];
      uVar4 = *(undefined1 *)(param_2 + 2);
      FUN_10027c0fc(uVar12,uVar1,uVar4);
      *puVar6 = uVar12;
      puVar6[1] = uVar1;
      *(undefined1 *)(puVar6 + 2) = uVar4;
      uVar12 = 6;
      break;
    case 7:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = 7;
      break;
    case 8:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = param_2[1];
      _swift_errorRetain(uVar12);
      puVar6[1] = uVar12;
      uVar12 = 8;
      break;
    case 9:
      lVar10 = 0;
      FUN_1002782c4();
      puVar9 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar10);
      iVar5 = (int)puVar9;
      if (iVar5 < 2) {
        if (iVar5 == 0) {
          lVar11 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x10))(puVar6,param_2,lVar11);
          uVar12 = 0;
          goto LAB_1003104a0;
        }
        if (iVar5 == 1) {
          *puVar6 = *param_2;
          _swift_bridgeObjectRetain();
          uVar12 = 1;
          goto LAB_1003104a0;
        }
LAB_100310428:
        _memcpy(puVar6,param_2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
      }
      else {
        if (iVar5 == 2) {
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          uVar12 = param_2[2];
          puVar6[2] = uVar12;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar12);
          uVar12 = 2;
        }
        else {
          if (iVar5 != 4) goto LAB_100310428;
          uVar12 = *param_2;
          _swift_errorRetain(uVar12);
          *puVar6 = uVar12;
          uVar12 = 4;
        }
LAB_1003104a0:
        _swift_storeEnumTagMultiPayload(puVar6,lVar10,uVar12);
      }
      uVar12 = 9;
      break;
    case 10:
      lVar10 = 0;
      FUN_100278368();
      puVar9 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar10);
      iVar5 = (int)puVar9;
      if (iVar5 < 3) {
        if (iVar5 == 0) {
          lVar11 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x10))(puVar6,param_2,lVar11);
          uVar12 = 0;
          goto LAB_10031057c;
        }
        if (iVar5 == 1) {
          lVar11 = 0;
          __sSS10FoundationE8EncodingVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x10))(puVar6,param_2,lVar11);
          uVar12 = 1;
          goto LAB_10031057c;
        }
        if (iVar5 == 2) {
          uVar12 = *param_2;
          _swift_errorRetain(uVar12);
          *puVar6 = uVar12;
          uVar12 = 2;
          goto LAB_10031057c;
        }
LAB_100310518:
        _memcpy(puVar6,param_2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
      }
      else {
        if (iVar5 == 3) {
          uVar12 = *param_2;
          _swift_errorRetain(uVar12);
          *puVar6 = uVar12;
          uVar12 = 3;
        }
        else if (iVar5 == 4) {
          uVar12 = *param_2;
          _swift_errorRetain(uVar12);
          *puVar6 = uVar12;
          uVar12 = 4;
        }
        else {
          if (iVar5 != 5) goto LAB_100310518;
          *puVar6 = *param_2;
          puVar6[1] = param_2[1];
          _swift_bridgeObjectRetain();
          uVar12 = 5;
        }
LAB_10031057c:
        _swift_storeEnumTagMultiPayload(puVar6,lVar10,uVar12);
      }
      uVar12 = 10;
      break;
    case 0xb:
      uVar12 = *param_2;
      uVar2 = param_2[1];
      uVar1 = param_2[2];
      uVar3 = param_2[3];
      uVar15 = param_2[4];
      uVar4 = *(undefined1 *)(param_2 + 5);
      FUN_10027c10c(uVar12,uVar2,uVar1,uVar3,uVar15,uVar4);
      *puVar6 = uVar12;
      puVar6[1] = uVar2;
      puVar6[2] = uVar1;
      puVar6[3] = uVar3;
      puVar6[4] = uVar15;
      *(undefined1 *)(puVar6 + 5) = uVar4;
      uVar12 = 0xb;
      break;
    case 0xc:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = 0xc;
      break;
    case 0xd:
      uVar12 = *param_2;
      _swift_errorRetain(uVar12);
      *puVar6 = uVar12;
      uVar12 = 0xd;
      break;
    case 0xe:
      uVar12 = *param_2;
      uVar1 = param_2[1];
      FUN_100008184(uVar12,uVar1);
      *puVar6 = uVar12;
      puVar6[1] = uVar1;
      uVar12 = 0xe;
      break;
    default:
      _memcpy(puVar6,param_2,*(size_t *)(lVar14 + 0x40));
      goto LAB_100310590;
    }
    _swift_storeEnumTagMultiPayload(puVar6,lVar7,uVar12);
LAB_100310590:
    (**(code **)(lVar14 + 0x38))(puVar6,0,1,lVar7);
  }
  else {
    puVar8 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(puVar6,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  uVar12 = 3;
LAB_1003105b4:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar12);
  return param_1;
}

