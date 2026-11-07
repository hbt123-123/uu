// rea decompile_all
// name: FUN_1002a47a0
// address: 0x1002a47a0
// body: available
// range: 0x1002a47a0-0x1002a538b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_1002a47a0(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar4 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  pvVar5 = param_1;
  (*pcVar15)(param_1,1,lVar4);
  pvVar6 = param_2;
  (*pcVar15)(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 != 0) {
      (**(code **)(lVar14 + 8))(param_1,lVar4);
      goto LAB_1002a484c;
    }
    (**(code **)(lVar14 + 0x28))(param_1,param_2,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar4);
  }
  else {
LAB_1002a484c:
    puVar7 = &DAT_100a82c30;
    FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  lVar4 = 0;
  FUN_100277ad0();
  lVar14 = *(long *)(lVar4 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar8 = puVar1;
  (*pcVar15)(puVar1,1,lVar4);
  puVar9 = puVar2;
  (*pcVar15)(puVar2,1,lVar4);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 == 0) {
      if (param_1 == param_2) {
        return param_1;
      }
      FUN_1000d27dc(puVar1,FUN_100277ad0);
      puVar8 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar4);
      iVar3 = (int)puVar8;
      if (iVar3 < 9) {
        if (iVar3 == 2) {
          *puVar1 = *puVar2;
          puVar7 = &DAT_100a82468;
          FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
          iVar3 = *(int *)(puVar7 + 0x30);
          lVar14 = 0;
          __s10Foundation3URLVMa();
          pcVar15 = *(code **)(*(long *)(lVar14 + -8) + 0x20);
          (*pcVar15)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,lVar14);
          (*pcVar15)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                     (long)puVar2 + (long)*(int *)(puVar7 + 0x40),lVar14);
          _swift_storeEnumTagMultiPayload(puVar1,lVar4,2);
          return param_1;
        }
        if (iVar3 == 4) {
          lVar14 = 0;
          FUN_100278198();
          puVar8 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar14);
          iVar3 = (int)puVar8;
          if (iVar3 < 5) {
            if (iVar3 < 2) {
              if (iVar3 == 0) {
                lVar10 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
                _swift_storeEnumTagMultiPayload(puVar1,lVar14,0);
                goto LAB_1002a5378;
              }
              if (iVar3 == 1) {
                lVar10 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
                _swift_storeEnumTagMultiPayload(puVar1,lVar14,1);
                goto LAB_1002a5378;
              }
            }
            else {
              if (iVar3 == 2) {
                lVar10 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
                _swift_storeEnumTagMultiPayload(puVar1,lVar14,2);
                goto LAB_1002a5378;
              }
              if (iVar3 == 3) {
                lVar10 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
                puVar7 = &DAT_100a824b0;
                FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
                *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)) =
                     *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
                _swift_storeEnumTagMultiPayload(puVar1,lVar14,3);
                goto LAB_1002a5378;
              }
              if (iVar3 == 4) {
                lVar10 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
                _swift_storeEnumTagMultiPayload(puVar1,lVar14,4);
                goto LAB_1002a5378;
              }
            }
          }
          else if (iVar3 < 8) {
            if (iVar3 == 5) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,5);
              goto LAB_1002a5378;
            }
            if (iVar3 == 6) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              puVar7 = &DAT_100a824b8;
              FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
              *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)) =
                   *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,6);
              goto LAB_1002a5378;
            }
            if (iVar3 == 7) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,7);
              goto LAB_1002a5378;
            }
          }
          else {
            if (iVar3 == 8) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,8);
              goto LAB_1002a5378;
            }
            if (iVar3 == 9) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,9);
              goto LAB_1002a5378;
            }
            if (iVar3 == 10) {
              lVar10 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
              _swift_storeEnumTagMultiPayload(puVar1,lVar14,10);
              goto LAB_1002a5378;
            }
          }
          _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar14 + -8) + 0x40));
LAB_1002a5378:
          _swift_storeEnumTagMultiPayload(puVar1,lVar4,4);
          return param_1;
        }
      }
      else {
        if (iVar3 == 9) {
          lVar14 = 0;
          FUN_1002782c4();
          puVar8 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar14);
          if ((int)puVar8 == 0) {
            lVar10 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
            _swift_storeEnumTagMultiPayload(puVar1,lVar14,0);
          }
          else {
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar14 + -8) + 0x40));
          }
          _swift_storeEnumTagMultiPayload(puVar1,lVar4,9);
          return param_1;
        }
        if (iVar3 == 10) {
          lVar14 = 0;
          FUN_100278368();
          puVar8 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar14);
          if ((int)puVar8 == 1) {
            lVar10 = 0;
            __sSS10FoundationE8EncodingVMa();
            (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
            _swift_storeEnumTagMultiPayload(puVar1,lVar14,1);
          }
          else if ((int)puVar8 == 0) {
            lVar10 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar10 + -8) + 0x20))(puVar1,puVar2,lVar10);
            _swift_storeEnumTagMultiPayload(puVar1,lVar14,0);
          }
          else {
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar14 + -8) + 0x40));
          }
          _swift_storeEnumTagMultiPayload(puVar1,lVar4,10);
          return param_1;
        }
      }
      sVar12 = *(size_t *)(lVar14 + 0x40);
      goto LAB_1002a49b0;
    }
    FUN_1000d27dc(puVar1,FUN_100277ad0);
  }
  else if ((int)puVar9 == 0) {
    puVar8 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar4);
    iVar3 = (int)puVar8;
    if (iVar3 < 9) {
      if (iVar3 == 2) {
        *puVar1 = *puVar2;
        puVar7 = &DAT_100a82468;
        FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
        iVar3 = *(int *)(puVar7 + 0x30);
        lVar10 = 0;
        __s10Foundation3URLVMa();
        pcVar15 = *(code **)(*(long *)(lVar10 + -8) + 0x20);
        (*pcVar15)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,lVar10);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar7 + 0x40),lVar10);
        uVar13 = 2;
      }
      else {
        if (iVar3 != 4) {
LAB_1002a4af0:
          _memcpy(puVar1,puVar2,*(size_t *)(lVar14 + 0x40));
          goto LAB_1002a5140;
        }
        lVar10 = 0;
        FUN_100278198();
        puVar8 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar10);
        iVar3 = (int)puVar8;
        if (iVar3 < 5) {
          if (iVar3 < 2) {
            if (iVar3 == 0) {
              lVar11 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
              _swift_storeEnumTagMultiPayload(puVar1,lVar10,0);
            }
            else if (iVar3 == 1) {
              lVar11 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
              _swift_storeEnumTagMultiPayload(puVar1,lVar10,1);
            }
            else {
LAB_1002a511c:
              _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
            }
          }
          else if (iVar3 == 2) {
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,2);
          }
          else if (iVar3 == 3) {
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            puVar7 = &DAT_100a824b0;
            FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
            *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)) =
                 *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,3);
          }
          else {
            if (iVar3 != 4) goto LAB_1002a511c;
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,4);
          }
        }
        else if (iVar3 < 8) {
          if (iVar3 == 5) {
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,5);
          }
          else if (iVar3 == 6) {
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            puVar7 = &DAT_100a824b8;
            FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
            *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)) =
                 *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,6);
          }
          else {
            if (iVar3 != 7) goto LAB_1002a511c;
            lVar11 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
            _swift_storeEnumTagMultiPayload(puVar1,lVar10,7);
          }
        }
        else if (iVar3 == 8) {
          lVar11 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
          _swift_storeEnumTagMultiPayload(puVar1,lVar10,8);
        }
        else if (iVar3 == 9) {
          lVar11 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
          _swift_storeEnumTagMultiPayload(puVar1,lVar10,9);
        }
        else {
          if (iVar3 != 10) goto LAB_1002a511c;
          lVar11 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
          _swift_storeEnumTagMultiPayload(puVar1,lVar10,10);
        }
        uVar13 = 4;
      }
    }
    else if (iVar3 == 9) {
      lVar10 = 0;
      FUN_1002782c4();
      puVar8 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar10);
      if ((int)puVar8 == 0) {
        lVar11 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
        _swift_storeEnumTagMultiPayload(puVar1,lVar10,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
      }
      uVar13 = 9;
    }
    else {
      if (iVar3 != 10) goto LAB_1002a4af0;
      lVar10 = 0;
      FUN_100278368();
      puVar8 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar10);
      if ((int)puVar8 == 1) {
        lVar11 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
        _swift_storeEnumTagMultiPayload(puVar1,lVar10,1);
      }
      else if ((int)puVar8 == 0) {
        lVar11 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar11 + -8) + 0x20))(puVar1,puVar2,lVar11);
        _swift_storeEnumTagMultiPayload(puVar1,lVar10,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar10 + -8) + 0x40));
      }
      uVar13 = 10;
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar4,uVar13);
LAB_1002a5140:
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar4);
    return param_1;
  }
  puVar7 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  sVar12 = *(size_t *)(*(long *)(puVar7 + -8) + 0x40);
LAB_1002a49b0:
  _memcpy(puVar1,puVar2,sVar12);
  return param_1;
}

