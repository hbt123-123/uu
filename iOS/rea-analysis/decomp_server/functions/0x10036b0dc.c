// rea decompile_all
// name: FUN_10036b0dc
// address: 0x10036b0dc
// body: available
// range: 0x10036b0dc-0x10036b493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10036b0dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 5) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar3 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar4 + 0x30);
        uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
        _swift_errorRetain(uVar5);
        *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
        uVar5 = 0;
      }
      else {
        lVar3 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar4 + 0x30);
        uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
        _swift_errorRetain(uVar5);
        *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
        uVar5 = 1;
      }
    }
    else if (iVar1 == 2) {
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar5);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
      uVar5 = 2;
    }
    else if (iVar1 == 3) {
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar5);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
      uVar5 = 3;
    }
    else {
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar5);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
      uVar5 = 4;
    }
  }
  else if (iVar1 < 7) {
    if (iVar1 == 5) {
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar5);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
      uVar5 = 5;
    }
    else {
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar5);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
      uVar5 = 6;
    }
  }
  else if (iVar1 == 7) {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    puVar4 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    iVar1 = *(int *)(puVar4 + 0x30);
    uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
    _swift_errorRetain(uVar5);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
    uVar5 = 7;
  }
  else if (iVar1 == 8) {
    lVar3 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    puVar4 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    iVar1 = *(int *)(puVar4 + 0x30);
    uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
    _swift_errorRetain(uVar5);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
    uVar5 = 8;
  }
  else {
    uVar5 = *param_2;
    _swift_errorRetain(uVar5);
    *param_1 = uVar5;
    uVar5 = 9;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  return param_1;
}

