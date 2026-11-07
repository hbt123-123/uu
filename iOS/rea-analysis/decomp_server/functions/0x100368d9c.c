// rea decompile_all
// name: FUN_100368d9c
// address: 0x100368d9c
// body: available
// range: 0x100368d9c-0x100369437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100369000 to 0x1007de824 _memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100368d9c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar8 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar5;
    if (iVar2 < 3) {
      if (iVar2 == 0) {
        uVar3 = 0;
        FUN_100365874(0);
        plVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar3);
        iVar2 = (int)plVar5;
        if (iVar2 < 5) {
          if (iVar2 < 2) {
            if (iVar2 == 0) {
              lVar8 = 0;
              __s10Foundation10URLRequestVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
              puVar4 = &DAT_100a88a88;
              FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
              iVar2 = *(int *)(puVar4 + 0x30);
              uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
              _swift_errorRetain(uVar7);
              *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
              uVar7 = 0;
            }
            else {
              lVar8 = 0;
              __s10Foundation10URLRequestVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
              puVar4 = &DAT_100a88a88;
              FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
              iVar2 = *(int *)(puVar4 + 0x30);
              uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
              _swift_errorRetain(uVar7);
              *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
              uVar7 = 1;
            }
          }
          else if (iVar2 == 2) {
            lVar8 = 0;
            __s10Foundation10URLRequestVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
            puVar4 = &DAT_100a88a88;
            FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
            iVar2 = *(int *)(puVar4 + 0x30);
            uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
            _swift_errorRetain(uVar7);
            *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
            uVar7 = 2;
          }
          else if (iVar2 == 3) {
            lVar8 = 0;
            __s10Foundation10URLRequestVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
            puVar4 = &DAT_100a88a88;
            FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
            iVar2 = *(int *)(puVar4 + 0x30);
            uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
            _swift_errorRetain(uVar7);
            *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
            uVar7 = 3;
          }
          else {
            lVar8 = 0;
            __s10Foundation10URLRequestVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
            puVar4 = &DAT_100a88a88;
            FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
            iVar2 = *(int *)(puVar4 + 0x30);
            uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
            _swift_errorRetain(uVar7);
            *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
            uVar7 = 4;
          }
        }
        else if (iVar2 < 7) {
          if (iVar2 == 5) {
            lVar8 = 0;
            __s10Foundation10URLRequestVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
            puVar4 = &DAT_100a88a88;
            FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
            iVar2 = *(int *)(puVar4 + 0x30);
            uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
            _swift_errorRetain(uVar7);
            *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
            uVar7 = 5;
          }
          else {
            lVar8 = 0;
            __s10Foundation10URLRequestVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
            puVar4 = &DAT_100a88a88;
            FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
            iVar2 = *(int *)(puVar4 + 0x30);
            uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
            _swift_errorRetain(uVar7);
            *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
            uVar7 = 6;
          }
        }
        else if (iVar2 == 7) {
          lVar8 = 0;
          __s10Foundation10URLRequestVMa();
          (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
          puVar4 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar2 = *(int *)(puVar4 + 0x30);
          uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
          _swift_errorRetain(uVar7);
          *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
          uVar7 = 7;
        }
        else if (iVar2 == 8) {
          lVar8 = 0;
          __s10Foundation10URLRequestVMa();
          (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
          puVar4 = &DAT_100a88a88;
          FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
          iVar2 = *(int *)(puVar4 + 0x30);
          uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
          _swift_errorRetain(uVar7);
          *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
          uVar7 = 8;
        }
        else {
          lVar8 = *param_2;
          _swift_errorRetain(lVar8);
          *param_1 = lVar8;
          uVar7 = 9;
        }
        _swift_storeEnumTagMultiPayload(param_1,uVar3,uVar7);
        uVar3 = 0;
      }
      else if (iVar2 == 1) {
        uVar3 = 0;
        FUN_100365860(0);
        plVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar3);
        lVar8 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar4 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        _swift_storeEnumTagMultiPayload(param_1,uVar3,plVar5);
        uVar3 = 1;
      }
      else {
        if (iVar2 != 2) {
LAB_100368fe4:
          plVar5 = _memcpy(param_1,param_2,*(size_t *)(lVar8 + 0x40));
          return plVar5;
        }
        uVar3 = 0;
        FUN_10036584c(0);
        plVar5 = param_2;
        _swift_getEnumCaseMultiPayload(param_2,uVar3);
        lVar8 = 0;
        __s10Foundation10URLRequestVMa();
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
        puVar4 = &DAT_100a88a88;
        FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
        iVar2 = *(int *)(puVar4 + 0x30);
        uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
        _swift_errorRetain(uVar7);
        *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
        _swift_storeEnumTagMultiPayload(param_1,uVar3,plVar5);
        uVar3 = 2;
      }
    }
    else if (iVar2 == 3) {
      uVar3 = 0;
      FUN_100365838(0);
      plVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar3);
      lVar8 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar2 = *(int *)(puVar4 + 0x30);
      uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
      _swift_errorRetain(uVar7);
      *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
      _swift_storeEnumTagMultiPayload(param_1,uVar3,plVar5);
      uVar3 = 3;
    }
    else if (iVar2 == 4) {
      uVar3 = 0;
      FUN_100365824(0);
      plVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,uVar3);
      lVar8 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
      puVar4 = &DAT_100a88a88;
      FUN_100004bb4(&DAT_100a88a88,&DAT_10081cd50);
      iVar2 = *(int *)(puVar4 + 0x30);
      uVar7 = *(undefined8 *)((long)param_2 + (long)iVar2);
      _swift_errorRetain(uVar7);
      *(undefined8 *)((long)param_1 + (long)iVar2) = uVar7;
      _swift_storeEnumTagMultiPayload(param_1,uVar3,plVar5);
      uVar3 = 4;
    }
    else {
      if (iVar2 != 5) goto LAB_100368fe4;
      lVar9 = *param_2;
      _swift_errorRetain(lVar9);
      lVar8 = param_2[1];
      *param_1 = lVar9;
      param_1[1] = lVar8;
      uVar3 = 5;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar8 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

