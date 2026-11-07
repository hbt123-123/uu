// rea decompile_all
// name: FUN_1002a4150
// address: 0x1002a4150
// body: available
// range: 0x1002a4150-0x1002a479f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1002a4150(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar11 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar4);
  }
  else {
    puVar6 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar4 = 0;
  FUN_100277ad0();
  lVar11 = *(long *)(lVar4 + -8);
  puVar7 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar7 != 0) {
    puVar6 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    return param_1;
  }
  puVar7 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar4);
  iVar3 = (int)puVar7;
  if (iVar3 < 9) {
    if (iVar3 == 2) {
      *puVar1 = *puVar2;
      puVar6 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar3 = *(int *)(puVar6 + 0x30);
      lVar8 = 0;
      __s10Foundation3URLVMa();
      pcVar12 = *(code **)(*(long *)(lVar8 + -8) + 0x20);
      (*pcVar12)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,lVar8);
      (*pcVar12)((long)puVar1 + (long)*(int *)(puVar6 + 0x40),
                 (long)puVar2 + (long)*(int *)(puVar6 + 0x40),lVar8);
      uVar10 = 2;
    }
    else {
      if (iVar3 != 4) {
LAB_1002a436c:
        _memcpy(puVar1,puVar2,*(size_t *)(lVar11 + 0x40));
        goto LAB_1002a4768;
      }
      lVar8 = 0;
      FUN_100278198();
      puVar7 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar8);
      iVar3 = (int)puVar7;
      if (iVar3 < 5) {
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            lVar9 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
            _swift_storeEnumTagMultiPayload(puVar1,lVar8,0);
          }
          else if (iVar3 == 1) {
            lVar9 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
            _swift_storeEnumTagMultiPayload(puVar1,lVar8,1);
          }
          else {
LAB_1002a4744:
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
          }
        }
        else if (iVar3 == 2) {
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,2);
        }
        else if (iVar3 == 3) {
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          puVar6 = &DAT_100a824b0;
          FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
          *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)) =
               *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30));
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,3);
        }
        else {
          if (iVar3 != 4) goto LAB_1002a4744;
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,4);
        }
      }
      else if (iVar3 < 8) {
        if (iVar3 == 5) {
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,5);
        }
        else if (iVar3 == 6) {
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          puVar6 = &DAT_100a824b8;
          FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
          *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)) =
               *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30));
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,6);
        }
        else {
          if (iVar3 != 7) goto LAB_1002a4744;
          lVar9 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,7);
        }
      }
      else if (iVar3 == 8) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
        _swift_storeEnumTagMultiPayload(puVar1,lVar8,8);
      }
      else if (iVar3 == 9) {
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
        _swift_storeEnumTagMultiPayload(puVar1,lVar8,9);
      }
      else {
        if (iVar3 != 10) goto LAB_1002a4744;
        lVar9 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
        _swift_storeEnumTagMultiPayload(puVar1,lVar8,10);
      }
      uVar10 = 4;
    }
  }
  else if (iVar3 == 9) {
    lVar8 = 0;
    FUN_1002782c4();
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if ((int)puVar7 == 0) {
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,0);
    }
    else {
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    uVar10 = 9;
  }
  else {
    if (iVar3 != 10) goto LAB_1002a436c;
    lVar8 = 0;
    FUN_100278368();
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if ((int)puVar7 == 1) {
      lVar9 = 0;
      __sSS10FoundationE8EncodingVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,1);
    }
    else if ((int)puVar7 == 0) {
      lVar9 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x20))(puVar1,puVar2,lVar9);
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,0);
    }
    else {
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar8 + -8) + 0x40));
    }
    uVar10 = 10;
  }
  _swift_storeEnumTagMultiPayload(puVar1,lVar4,uVar10);
LAB_1002a4768:
  (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar4);
  return param_1;
}

