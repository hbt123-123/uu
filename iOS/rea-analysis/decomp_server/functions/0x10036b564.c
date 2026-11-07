// rea decompile_all
// name: FUN_10036b564
// address: 0x10036b564
// body: available
// range: 0x10036b564-0x10036b8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10036b8e8 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10036b564(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  pvVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)pvVar4;
  if (iVar1 < 4) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar2 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
        uVar5 = 0;
      }
      else {
        if (iVar1 != 1) {
LAB_10036b8cc:
          pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return pvVar4;
        }
        lVar2 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        puVar3 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
             *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
        uVar5 = 1;
      }
    }
    else if (iVar1 == 2) {
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 2;
    }
    else {
      if (iVar1 != 3) goto LAB_10036b8cc;
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 3;
    }
  }
  else if (iVar1 < 6) {
    if (iVar1 == 4) {
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 4;
    }
    else {
      if (iVar1 != 5) goto LAB_10036b8cc;
      lVar2 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 5;
    }
  }
  else if (iVar1 == 6) {
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    puVar3 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
    uVar5 = 6;
  }
  else if (iVar1 == 7) {
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    puVar3 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
    uVar5 = 7;
  }
  else {
    if (iVar1 != 8) goto LAB_10036b8cc;
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    puVar3 = &DAT_100a88a88;
    FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
    uVar5 = 8;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  return param_1;
}

