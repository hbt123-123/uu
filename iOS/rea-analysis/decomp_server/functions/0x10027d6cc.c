// rea decompile_all
// name: FUN_10027d6cc
// address: 0x10027d6cc
// body: available
// range: 0x10027d6cc-0x10027dc33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027d82c to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10027d6cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_1000d27dc(param_1,FUN_100277ad0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar4;
  if (8 < iVar1) {
    if (iVar1 == 9) {
      lVar2 = 0;
      FUN_1002782c4();
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar2);
      if ((int)puVar4 == 0) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        _swift_storeEnumTagMultiPayload(param_1,lVar2,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
      }
      uVar6 = 9;
    }
    else {
      if (iVar1 != 10) goto LAB_10027d808;
      lVar2 = 0;
      FUN_100278368();
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,lVar2);
      if ((int)puVar4 == 1) {
        lVar3 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        _swift_storeEnumTagMultiPayload(param_1,lVar2,1);
      }
      else if ((int)puVar4 == 0) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        _swift_storeEnumTagMultiPayload(param_1,lVar2,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
      }
      uVar6 = 10;
    }
    goto LAB_10027dc14;
  }
  if (iVar1 == 2) {
    *param_1 = *param_2;
    puVar5 = &DAT_100a82468;
    FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
    iVar1 = *(int *)(puVar5 + 0x30);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    pcVar7 = *(code **)(*(long *)(lVar2 + -8) + 0x20);
    (*pcVar7)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
    (*pcVar7)((long)param_1 + (long)*(int *)(puVar5 + 0x40),
              (long)param_2 + (long)*(int *)(puVar5 + 0x40),lVar2);
    uVar6 = 2;
    goto LAB_10027dc14;
  }
  if (iVar1 != 4) {
LAB_10027d808:
    puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar4;
  }
  lVar2 = 0;
  FUN_100278198();
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar2);
  iVar1 = (int)puVar4;
  if (iVar1 < 5) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        _swift_storeEnumTagMultiPayload(param_1,lVar2,0);
      }
      else if (iVar1 == 1) {
        lVar3 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
        _swift_storeEnumTagMultiPayload(param_1,lVar2,1);
      }
      else {
LAB_10027dbf4:
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
      }
    }
    else if (iVar1 == 2) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      _swift_storeEnumTagMultiPayload(param_1,lVar2,2);
    }
    else if (iVar1 == 3) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      puVar5 = &DAT_100a824b0;
      FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar2,3);
    }
    else {
      if (iVar1 != 4) goto LAB_10027dbf4;
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      _swift_storeEnumTagMultiPayload(param_1,lVar2,4);
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 5) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      _swift_storeEnumTagMultiPayload(param_1,lVar2,5);
    }
    else if (iVar1 == 6) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      puVar5 = &DAT_100a824b8;
      FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar2,6);
    }
    else {
      if (iVar1 != 7) goto LAB_10027dbf4;
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      _swift_storeEnumTagMultiPayload(param_1,lVar2,7);
    }
  }
  else if (iVar1 == 8) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,lVar2,8);
  }
  else if (iVar1 == 9) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,lVar2,9);
  }
  else {
    if (iVar1 != 10) goto LAB_10027dbf4;
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    _swift_storeEnumTagMultiPayload(param_1,lVar2,10);
  }
  uVar6 = 4;
LAB_10027dc14:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar6);
  return param_1;
}

