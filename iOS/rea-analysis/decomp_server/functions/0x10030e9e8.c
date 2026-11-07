// rea decompile_all
// name: FUN_10030e9e8
// address: 0x10030e9e8
// body: available
// range: 0x10030e9e8-0x10030ed03 inclusive
// range: 0x10030ed44-0x10030f07f inclusive
// range: 0x10030f094-0x10030f1a7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_10030e9e8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) != 0) {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar11 = (ulong)uVar3 & 0xff;
    _swift_retain();
    return (long *)(lVar7 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  plVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar5 = (int)plVar6;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      lVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar7;
      _swift_bridgeObjectRetain();
      uVar10 = 0;
    }
    else {
      lVar7 = 0;
      __sSo25NSURLSessionWebSocketTaskC10FoundationE7MessageOMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
      uVar10 = 1;
    }
    goto LAB_10030f180;
  }
  if (iVar5 == 2) {
    *param_1 = *param_2;
    uVar11 = param_2[2];
    if (uVar11 >> 0x3c < 0xf) {
      lVar7 = param_2[1];
      FUN_100008184(lVar7,uVar11);
      param_1[1] = lVar7;
      param_1[2] = uVar11;
    }
    else {
      lVar7 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar7;
    }
    uVar10 = 2;
    goto LAB_10030f180;
  }
  lVar7 = 0;
  __s10Foundation10URLRequestVMa();
  lVar12 = *(long *)(lVar7 + -8);
  plVar6 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar7);
  if ((int)plVar6 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar7);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar7);
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
  plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x1c));
  param_2 = (long *)((long)param_2 + (long)*(int *)(lVar7 + 0x1c));
  lVar7 = 0;
  FUN_100277ad0();
  lVar12 = *(long *)(lVar7 + -8);
  plVar9 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar7);
  if ((int)plVar9 == 0) {
    plVar9 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar7);
    switch((ulong)plVar9 & 0xffffffff) {
    case 0:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      uVar10 = 0;
      break;
    case 1:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      uVar10 = 1;
      break;
    case 2:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      puVar8 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar5 = *(int *)(puVar8 + 0x30);
      lVar13 = 0;
      __s10Foundation3URLVMa();
      pcVar16 = *(code **)(*(long *)(lVar13 + -8) + 0x10);
      (*pcVar16)((long)plVar6 + (long)iVar5,(long)param_2 + (long)iVar5,lVar13);
      (*pcVar16)((long)plVar6 + (long)*(int *)(puVar8 + 0x40),
                 (long)param_2 + (long)*(int *)(puVar8 + 0x40),lVar13);
      uVar10 = 2;
      break;
    case 3:
      lVar13 = param_2[3];
      plVar6[4] = param_2[4];
      plVar6[3] = lVar13;
      (*(code *)**(undefined8 **)(lVar13 + -8))(plVar6,param_2);
      uVar10 = 3;
      break;
    case 4:
      uVar10 = 0;
      FUN_100278198(0);
      _swift_getEnumCaseMultiPayload(param_2,uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010030ed00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10030ed04 +
                (ulong)*(ushort *)(&DAT_100819560 + ((ulong)param_2 & 0xffffffff) * 2) * 4))();
      return param_2;
    case 5:
      lVar13 = *param_2;
      FUN_10027c0e0(lVar13);
      *plVar6 = lVar13;
      uVar10 = 5;
      break;
    case 6:
      lVar13 = *param_2;
      lVar14 = param_2[1];
      lVar1 = param_2[2];
      FUN_10027c0fc(lVar13,lVar14,(char)lVar1);
      *plVar6 = lVar13;
      plVar6[1] = lVar14;
      *(char *)(plVar6 + 2) = (char)lVar1;
      uVar10 = 6;
      break;
    case 7:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      uVar10 = 7;
      break;
    case 8:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      lVar13 = param_2[1];
      _swift_errorRetain(lVar13);
      plVar6[1] = lVar13;
      uVar10 = 8;
      break;
    case 9:
      lVar13 = 0;
      FUN_1002782c4();
      plVar9 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar13);
      iVar5 = (int)plVar9;
      if (iVar5 < 2) {
        if (iVar5 == 0) {
          lVar14 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar14 + -8) + 0x10))(plVar6,param_2,lVar14);
          uVar10 = 0;
          goto LAB_10030f06c;
        }
        if (iVar5 == 1) {
          *plVar6 = *param_2;
          _swift_bridgeObjectRetain();
          uVar10 = 1;
          goto LAB_10030f06c;
        }
LAB_10030effc:
        _memcpy(plVar6,param_2,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
      }
      else {
        if (iVar5 == 2) {
          lVar14 = param_2[1];
          *plVar6 = *param_2;
          plVar6[1] = lVar14;
          lVar14 = param_2[2];
          plVar6[2] = lVar14;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(lVar14);
          uVar10 = 2;
        }
        else {
          if (iVar5 != 4) goto LAB_10030effc;
          lVar14 = *param_2;
          _swift_errorRetain(lVar14);
          *plVar6 = lVar14;
          uVar10 = 4;
        }
LAB_10030f06c:
        _swift_storeEnumTagMultiPayload(plVar6,lVar13,uVar10);
      }
      uVar10 = 9;
      break;
    case 10:
      lVar13 = 0;
      FUN_100278368();
      plVar9 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar13);
      iVar5 = (int)plVar9;
      if (iVar5 < 3) {
        if (iVar5 == 0) {
          lVar14 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar14 + -8) + 0x10))(plVar6,param_2,lVar14);
          uVar10 = 0;
          goto LAB_10030f148;
        }
        if (iVar5 == 1) {
          lVar14 = 0;
          __sSS10FoundationE8EncodingVMa();
          (**(code **)(*(long *)(lVar14 + -8) + 0x10))(plVar6,param_2,lVar14);
          uVar10 = 1;
          goto LAB_10030f148;
        }
        if (iVar5 == 2) {
          lVar14 = *param_2;
          _swift_errorRetain(lVar14);
          *plVar6 = lVar14;
          uVar10 = 2;
          goto LAB_10030f148;
        }
LAB_10030f0e4:
        _memcpy(plVar6,param_2,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
      }
      else {
        if (iVar5 == 3) {
          lVar14 = *param_2;
          _swift_errorRetain(lVar14);
          *plVar6 = lVar14;
          uVar10 = 3;
        }
        else if (iVar5 == 4) {
          lVar14 = *param_2;
          _swift_errorRetain(lVar14);
          *plVar6 = lVar14;
          uVar10 = 4;
        }
        else {
          if (iVar5 != 5) goto LAB_10030f0e4;
          lVar14 = param_2[1];
          *plVar6 = *param_2;
          plVar6[1] = lVar14;
          _swift_bridgeObjectRetain();
          uVar10 = 5;
        }
LAB_10030f148:
        _swift_storeEnumTagMultiPayload(plVar6,lVar13,uVar10);
      }
      uVar10 = 10;
      break;
    case 0xb:
      lVar13 = *param_2;
      lVar1 = param_2[1];
      lVar14 = param_2[2];
      lVar2 = param_2[3];
      lVar15 = param_2[4];
      lVar4 = param_2[5];
      FUN_10027c10c(lVar13,lVar1,lVar14,lVar2,lVar15,(char)lVar4);
      *plVar6 = lVar13;
      plVar6[1] = lVar1;
      plVar6[2] = lVar14;
      plVar6[3] = lVar2;
      plVar6[4] = lVar15;
      *(char *)(plVar6 + 5) = (char)lVar4;
      uVar10 = 0xb;
      break;
    case 0xc:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      uVar10 = 0xc;
      break;
    case 0xd:
      lVar13 = *param_2;
      _swift_errorRetain(lVar13);
      *plVar6 = lVar13;
      uVar10 = 0xd;
      break;
    case 0xe:
      lVar13 = *param_2;
      lVar14 = param_2[1];
      FUN_100008184(lVar13,lVar14);
      *plVar6 = lVar13;
      plVar6[1] = lVar14;
      uVar10 = 0xe;
      break;
    default:
      _memcpy(plVar6,param_2,*(size_t *)(lVar12 + 0x40));
      goto LAB_10030f15c;
    }
    _swift_storeEnumTagMultiPayload(plVar6,lVar7,uVar10);
LAB_10030f15c:
    (**(code **)(lVar12 + 0x38))(plVar6,0,1,lVar7);
  }
  else {
    puVar8 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(plVar6,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  uVar10 = 3;
LAB_10030f180:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}

