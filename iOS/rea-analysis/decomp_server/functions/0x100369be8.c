// rea decompile_all
// name: FUN_100369be8
// address: 0x100369be8
// body: available
// range: 0x100369be8-0x100369f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100369e18 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100369be8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    FUN_1000d27dc(param_1,FUN_100365888);
    puVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar1 = (int)puVar5;
    if (iVar1 < 3) {
      if (iVar1 == 0) {
        uVar2 = 0;
        FUN_100365874(0);
        puVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar2);
        puVar7 = param_1;
        if ((uint)puVar5 < 9) {
          lVar3 = 0;
          __s10Foundation10URLRequestVMa();
          (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
          puVar4 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar4 + 0x30));
          puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x30));
        }
        uVar6 = *param_2;
        _swift_errorRetain(uVar6);
        *puVar7 = uVar6;
        _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar5);
        uVar2 = 0;
      }
      else if (iVar1 == 1) {
        uVar2 = 0;
        FUN_100365860(0);
        puVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar2);
        lVar3 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar4 + 0x30);
        uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
        _swift_errorRetain(uVar6);
        *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
        _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar5);
        uVar2 = 1;
      }
      else {
        if (iVar1 != 2) {
LAB_100369df8:
          puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return puVar5;
        }
        uVar2 = 0;
        FUN_10036584c(0);
        puVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar2);
        lVar3 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar1 = *(int *)(puVar4 + 0x30);
        uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
        _swift_errorRetain(uVar6);
        *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
        _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar5);
        uVar2 = 2;
      }
    }
    else if (iVar1 == 3) {
      uVar2 = 0;
      FUN_100365838(0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar2);
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar6);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
      _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar5);
      uVar2 = 3;
    }
    else if (iVar1 == 4) {
      uVar2 = 0;
      FUN_100365824(0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar2);
      lVar3 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar1 = *(int *)(puVar4 + 0x30);
      uVar6 = *(undefined8 *)((long)param_2 + (long)iVar1);
      _swift_errorRetain(uVar6);
      *(undefined8 *)((long)param_1 + (long)iVar1) = uVar6;
      _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar5);
      uVar2 = 4;
    }
    else {
      if (iVar1 != 5) goto LAB_100369df8;
      uVar2 = *param_2;
      _swift_errorRetain(uVar2);
      *param_1 = uVar2;
      param_1[1] = param_2[1];
      uVar2 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar2);
  }
  return param_1;
}

