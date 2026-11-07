// rea decompile_all
// name: FUN_100274f78
// address: 0x100274f78
// body: available
// range: 0x100274f78-0x10027526f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027526c to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100274f78(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar2 = (int)puVar4;
  if (iVar2 < 5) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar5 = *param_2;
        uVar1 = param_2[1];
        FUN_100008184(uVar5,uVar1);
        *param_1 = uVar5;
        param_1[1] = uVar1;
        uVar5 = 0;
      }
      else {
        if (iVar2 != 1) {
LAB_10027524c:
          puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return puVar4;
        }
        lVar3 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar3;
        (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
        uVar5 = 1;
      }
    }
    else if (iVar2 == 2) {
      lVar3 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
      param_1[5] = param_2[5];
      _swift_retain();
      uVar5 = 2;
    }
    else if (iVar2 == 3) {
      *param_1 = *param_2;
      lVar3 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar3;
      pcVar6 = (code *)**(undefined8 **)(lVar3 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar6)(param_1 + 1,param_2 + 1,lVar3);
      uVar5 = 3;
    }
    else {
      if (iVar2 != 4) goto LAB_10027524c;
      uVar5 = *param_2;
      uVar1 = param_2[1];
      FUN_100008184(uVar5,uVar1);
      *param_1 = uVar5;
      param_1[1] = uVar1;
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      uVar5 = 4;
    }
  }
  else if (iVar2 < 8) {
    if (iVar2 == 5) {
      *param_1 = *param_2;
      lVar3 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar3;
      pcVar6 = (code *)**(undefined8 **)(lVar3 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar6)(param_1 + 1,param_2 + 1,lVar3);
      param_1[6] = param_2[6];
      _swift_bridgeObjectRetain();
      uVar5 = 5;
    }
    else if (iVar2 == 6) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar5 = 6;
    }
    else {
      if (iVar2 != 7) goto LAB_10027524c;
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      uVar5 = 7;
    }
  }
  else if (iVar2 == 8) {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    uVar5 = 8;
  }
  else if (iVar2 == 9) {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    _swift_retain();
    uVar5 = 9;
  }
  else {
    if (iVar2 != 10) goto LAB_10027524c;
    *param_1 = *param_2;
    lVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    pcVar6 = (code *)**(undefined8 **)(lVar3 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar6)(param_1 + 1,param_2 + 1,lVar3);
    uVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar5;
    _swift_retain();
    uVar5 = 10;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  return param_1;
}

