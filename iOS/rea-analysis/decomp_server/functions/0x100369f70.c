// rea decompile_all
// name: FUN_100369f70
// address: 0x100369f70
// body: available
// range: 0x100369f70-0x10036a57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036a26c to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100369f70(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined *puVar6;
  
  pvVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)pvVar5;
  if (1 < iVar1) {
    if (iVar1 == 2) {
      uVar2 = 0;
      FUN_10036584c(0);
      pvVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar2);
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,uVar2,pvVar5);
      uVar2 = 2;
    }
    else if (iVar1 == 3) {
      uVar2 = 0;
      FUN_100365838(0);
      pvVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar2);
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,uVar2,pvVar5);
      uVar2 = 3;
    }
    else {
      if (iVar1 != 4) goto LAB_10036a24c;
      uVar2 = 0;
      FUN_100365824(0);
      pvVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar2);
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,uVar2,pvVar5);
      uVar2 = 4;
    }
    goto LAB_10036a564;
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
LAB_10036a24c:
      pvVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar5;
    }
    uVar2 = 0;
    FUN_100365860(0);
    pvVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar2);
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    puVar6 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,uVar2,pvVar5);
    uVar2 = 1;
    goto LAB_10036a564;
  }
  lVar3 = 0;
  FUN_100365874();
  pvVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  iVar1 = (int)pvVar5;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
        _swift_storeEnumTagMultiPayload(param_1,lVar3,0);
      }
      else if (iVar1 == 1) {
        lVar4 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
        puVar6 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
        _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
      }
      else {
LAB_10036a544:
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar3 + -8) + 0x40));
      }
    }
    else if (iVar1 == 2) {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar3,2);
    }
    else {
      if (iVar1 != 3) goto LAB_10036a544;
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar3,3);
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar3,4);
    }
    else {
      if (iVar1 != 5) goto LAB_10036a544;
      lVar4 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      puVar6 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_storeEnumTagMultiPayload(param_1,lVar3,5);
    }
  }
  else if (iVar1 == 6) {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar6 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,lVar3,6);
  }
  else if (iVar1 == 7) {
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar6 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,lVar3,7);
  }
  else {
    if (iVar1 != 8) goto LAB_10036a544;
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar6 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,lVar3,8);
  }
  uVar2 = 0;
LAB_10036a564:
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar2);
  return param_1;
}

