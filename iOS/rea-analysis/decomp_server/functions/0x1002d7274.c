// rea decompile_all
// name: FUN_1002d7274
// address: 0x1002d7274
// body: available
// range: 0x1002d7274-0x1002d808f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_1002d7274(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  size_t sVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  
  *param_1 = *param_2;
  plVar13 = (long *)(param_1 + 8);
  lVar11 = *(long *)(param_2 + 8);
  if (*plVar13 == 0) {
LAB_1002d72fc:
    lVar11 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *plVar13 = lVar11;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (lVar11 == 0) {
      FUN_100040bb4(plVar13,&DAT_100a84108,0x100818aa0);
      goto LAB_1002d72fc;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar11;
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    _swift_release(uVar4);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  plVar13 = (long *)(param_1 + 0x20);
  lVar11 = *(long *)(param_2 + 0x20);
  if (*plVar13 == 0) {
LAB_1002d7368:
    lVar11 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *plVar13 = lVar11;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    lVar11 = *(long *)(param_1 + 0x50);
  }
  else {
    if (lVar11 == 0) {
      FUN_100040bb4(plVar13,&DAT_100a84108,0x100818aa0);
      goto LAB_1002d7368;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x20) = lVar11;
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    _swift_release(uVar4);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    lVar11 = *(long *)(param_1 + 0x50);
  }
  if (lVar11 != 0) {
    FUN_10003f094(param_1 + 0x38);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10003f094(param_1 + 0x60);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  uVar16 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar16;
  *(undefined8 *)(param_1 + 0x70) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  plVar13 = (long *)(param_1 + 0x88);
  if (*plVar13 == 0) {
LAB_1002d7408:
    lVar11 = *(long *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *plVar13 = lVar11;
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  }
  else {
    if (*(long *)(param_2 + 0x88) == 0) {
      FUN_100040bb4(plVar13,&DAT_100a82be0,&DAT_1008171b8);
      goto LAB_1002d7408;
    }
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar12 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar12;
    _swift_release(uVar4);
  }
  plVar13 = (long *)(param_1 + 0xa0);
  lVar11 = *(long *)(param_2 + 0xa0);
  if (*plVar13 == 0) {
LAB_1002d7464:
    lVar11 = *(long *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *plVar13 = lVar11;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  }
  else {
    if (lVar11 == 0) {
      FUN_100040bb4(plVar13,&DAT_100a82be0,&DAT_1008171b8);
      goto LAB_1002d7464;
    }
    *(long *)(param_1 + 0xa0) = lVar11;
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar12 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = uVar12;
    _swift_release(uVar4);
  }
  plVar13 = (long *)(param_1 + 0xb8);
  lVar11 = *(long *)(param_2 + 0xb8);
  if (*plVar13 == 0) {
LAB_1002d74c0:
    lVar11 = *(long *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *plVar13 = lVar11;
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  }
  else {
    if (lVar11 == 0) {
      FUN_100040bb4(plVar13,&DAT_100a82be0,&DAT_1008171b8);
      goto LAB_1002d74c0;
    }
    *(long *)(param_1 + 0xb8) = lVar11;
    uVar4 = *(undefined8 *)(param_1 + 200);
    uVar12 = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xc0) = uVar12;
    _swift_release(uVar4);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xd8] = param_2[0xd8];
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xe8] = param_2[0xe8];
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_10003f094(param_1 + 0xf0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0xf0);
  uVar16 = *(undefined8 *)(param_2 + 0x108);
  uVar12 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0x108) = uVar16;
  *(undefined8 *)(param_1 + 0x100) = uVar12;
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_10003f094(param_1 + 0x118);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  uVar16 = *(undefined8 *)(param_2 + 0x130);
  uVar12 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(undefined8 *)(param_1 + 0x130) = uVar16;
  *(undefined8 *)(param_1 + 0x128) = uVar12;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  uVar4 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x5c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x5c));
  lVar11 = 0;
  FUN_100277ad0();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  puVar5 = puVar1;
  (*pcVar14)(puVar1,1,lVar11);
  puVar6 = puVar2;
  (*pcVar14)(puVar2,1,lVar11);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      FUN_1000d27dc(puVar1,FUN_100277ad0);
      goto LAB_1002d7688;
    }
    if (param_1 == param_2) goto LAB_1002d7e3c;
    FUN_1000d27dc(puVar1,FUN_100277ad0);
    puVar5 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar11);
    iVar3 = (int)puVar5;
    if (iVar3 < 9) {
      if (iVar3 == 2) {
        *puVar1 = *puVar2;
        puVar9 = &DAT_100a82468;
        FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
        iVar3 = *(int *)(puVar9 + 0x30);
        lVar15 = 0;
        __s10Foundation3URLVMa();
        pcVar14 = *(code **)(*(long *)(lVar15 + -8) + 0x20);
        (*pcVar14)((undefined1 *)((long)puVar1 + (long)iVar3),
                   (undefined1 *)((long)puVar2 + (long)iVar3),lVar15);
        (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x40)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x40)),lVar15);
        _swift_storeEnumTagMultiPayload(puVar1,lVar11,2);
        goto LAB_1002d7e3c;
      }
      if (iVar3 == 4) {
        lVar15 = 0;
        FUN_100278198();
        puVar5 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar15);
        iVar3 = (int)puVar5;
        if (iVar3 < 5) {
          if (iVar3 < 2) {
            if (iVar3 == 0) {
              lVar7 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
              _swift_storeEnumTagMultiPayload(puVar1,lVar15,0);
            }
            else if (iVar3 == 1) {
              lVar7 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
              _swift_storeEnumTagMultiPayload(puVar1,lVar15,1);
            }
            else {
LAB_1002d8068:
              _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar15 + -8) + 0x40));
            }
          }
          else if (iVar3 == 2) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,2);
          }
          else if (iVar3 == 3) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            puVar9 = &DAT_100a824b0;
            FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
            *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x30)) =
                 *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x30));
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,3);
          }
          else {
            if (iVar3 != 4) goto LAB_1002d8068;
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,4);
          }
        }
        else if (iVar3 < 8) {
          if (iVar3 == 5) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,5);
          }
          else if (iVar3 == 6) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            puVar9 = &DAT_100a824b8;
            FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
            *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x30)) =
                 *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x30));
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,6);
          }
          else {
            if (iVar3 != 7) goto LAB_1002d8068;
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar15,7);
          }
        }
        else if (iVar3 == 8) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,8);
        }
        else if (iVar3 == 9) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,9);
        }
        else {
          if (iVar3 != 10) goto LAB_1002d8068;
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,10);
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar11,4);
        goto LAB_1002d7e3c;
      }
    }
    else {
      if (iVar3 == 9) {
        lVar15 = 0;
        FUN_1002782c4();
        puVar5 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar15);
        if ((int)puVar5 == 0) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,0);
        }
        else {
          _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar15 + -8) + 0x40));
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar11,9);
        goto LAB_1002d7e3c;
      }
      if (iVar3 == 10) {
        lVar15 = 0;
        FUN_100278368();
        puVar5 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar15);
        if ((int)puVar5 == 1) {
          lVar7 = 0;
          __sSS10FoundationE8EncodingVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,1);
        }
        else if ((int)puVar5 == 0) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar15,0);
        }
        else {
          _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar15 + -8) + 0x40));
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar11,10);
        goto LAB_1002d7e3c;
      }
    }
    sVar10 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    if ((int)puVar6 == 0) {
      puVar5 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar11);
      iVar3 = (int)puVar5;
      if (iVar3 < 9) {
        if (iVar3 == 2) {
          *puVar1 = *puVar2;
          puVar9 = &DAT_100a82468;
          FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
          iVar3 = *(int *)(puVar9 + 0x30);
          lVar7 = 0;
          __s10Foundation3URLVMa();
          pcVar14 = *(code **)(*(long *)(lVar7 + -8) + 0x20);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)iVar3),
                     (undefined1 *)((long)puVar2 + (long)iVar3),lVar7);
          (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x40)),lVar7);
          uVar4 = 2;
          goto LAB_1002d7e20;
        }
        if (iVar3 == 4) {
          lVar7 = 0;
          FUN_100278198();
          puVar5 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar7);
          iVar3 = (int)puVar5;
          if (iVar3 < 5) {
            if (iVar3 < 2) {
              if (iVar3 == 0) {
                lVar8 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
                _swift_storeEnumTagMultiPayload(puVar1,lVar7,0);
              }
              else if (iVar3 == 1) {
                lVar8 = 0;
                __s10Foundation3URLVMa();
                (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
                _swift_storeEnumTagMultiPayload(puVar1,lVar7,1);
              }
              else {
LAB_1002d7e00:
                _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
              }
            }
            else if (iVar3 == 2) {
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,2);
            }
            else if (iVar3 == 3) {
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              puVar9 = &DAT_100a824b0;
              FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
              *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x30)) =
                   *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x30));
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,3);
            }
            else {
              if (iVar3 != 4) goto LAB_1002d7e00;
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,4);
            }
          }
          else if (iVar3 < 8) {
            if (iVar3 == 5) {
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,5);
            }
            else if (iVar3 == 6) {
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              puVar9 = &DAT_100a824b8;
              FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
              *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar9 + 0x30)) =
                   *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar9 + 0x30));
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,6);
            }
            else {
              if (iVar3 != 7) goto LAB_1002d7e00;
              lVar8 = 0;
              __s10Foundation3URLVMa();
              (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
              _swift_storeEnumTagMultiPayload(puVar1,lVar7,7);
            }
          }
          else if (iVar3 == 8) {
            lVar8 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,8);
          }
          else if (iVar3 == 9) {
            lVar8 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,9);
          }
          else {
            if (iVar3 != 10) goto LAB_1002d7e00;
            lVar8 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,10);
          }
          uVar4 = 4;
          goto LAB_1002d7e20;
        }
LAB_1002d77cc:
        _memcpy(puVar1,puVar2,*(size_t *)(lVar15 + 0x40));
      }
      else {
        if (iVar3 == 9) {
          lVar7 = 0;
          FUN_1002782c4();
          puVar5 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar7);
          if ((int)puVar5 == 0) {
            lVar8 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,0);
          }
          else {
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
          }
          uVar4 = 9;
        }
        else {
          if (iVar3 != 10) goto LAB_1002d77cc;
          lVar7 = 0;
          FUN_100278368();
          puVar5 = puVar2;
          _swift_getEnumCaseMultiPayload(puVar2,lVar7);
          if ((int)puVar5 == 1) {
            lVar8 = 0;
            __sSS10FoundationE8EncodingVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,1);
          }
          else if ((int)puVar5 == 0) {
            lVar8 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar8 + -8) + 0x20))(puVar1,puVar2,lVar8);
            _swift_storeEnumTagMultiPayload(puVar1,lVar7,0);
          }
          else {
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar7 + -8) + 0x40));
          }
          uVar4 = 10;
        }
LAB_1002d7e20:
        _swift_storeEnumTagMultiPayload(puVar1,lVar11,uVar4);
      }
      (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar11);
      goto LAB_1002d7e3c;
    }
LAB_1002d7688:
    puVar9 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    sVar10 = *(size_t *)(*(long *)(puVar9 + -8) + 0x40);
  }
  _memcpy(puVar1,puVar2,sVar10);
LAB_1002d7e3c:
  iVar3 = *(int *)(param_3 + 100);
  param_1[*(int *)(param_3 + 0x60)] = param_2[*(int *)(param_3 + 0x60)];
  uVar4 = *(undefined8 *)(param_1 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}

