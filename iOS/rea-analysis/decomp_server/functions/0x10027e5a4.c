// rea decompile_all
// name: FUN_10027e5a4
// address: 0x10027e5a4
// body: available
// range: 0x10027e5a4-0x10027e8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10027e8b8 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10027e5a4(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  pvVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)pvVar4;
  if (iVar1 < 5) {
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        lVar2 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        uVar5 = 0;
      }
      else {
        if (iVar1 != 1) {
LAB_10027e89c:
          pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return pvVar4;
        }
        lVar2 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
        uVar5 = 1;
      }
    }
    else if (iVar1 == 2) {
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 2;
    }
    else if (iVar1 == 3) {
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a824b0;
      FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 3;
    }
    else {
      if (iVar1 != 4) goto LAB_10027e89c;
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 4;
    }
  }
  else if (iVar1 < 8) {
    if (iVar1 == 5) {
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 5;
    }
    else if (iVar1 == 6) {
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      puVar3 = &DAT_100a824b8;
      FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar3 + 0x30));
      uVar5 = 6;
    }
    else {
      if (iVar1 != 7) goto LAB_10027e89c;
      lVar2 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
      uVar5 = 7;
    }
  }
  else if (iVar1 == 8) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar5 = 8;
  }
  else if (iVar1 == 9) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar5 = 9;
  }
  else {
    if (iVar1 != 10) goto LAB_10027e89c;
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    uVar5 = 10;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar5);
  return param_1;
}

