// rea decompile_all
// name: FUN_1002d6bc4
// address: 0x1002d6bc4
// body: available
// range: 0x1002d6bc4-0x1002d7273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1002d6bc4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar12 = *(undefined8 *)(param_2 + 0x68);
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  uVar14 = *(undefined8 *)(param_2 + 0x78);
  uVar13 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x68) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  *(undefined8 *)(param_1 + 0x70) = uVar13;
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar9 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = uVar9;
  param_1[0xd8] = param_2[0xd8];
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  param_1[0xe8] = param_2[0xe8];
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar13 = *(undefined8 *)(param_2 + 0xf0);
  uVar12 = *(undefined8 *)(param_2 + 0x108);
  uVar9 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = uVar13;
  *(undefined8 *)(param_1 + 0x108) = uVar12;
  *(undefined8 *)(param_1 + 0x100) = uVar9;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar13 = *(undefined8 *)(param_2 + 0x118);
  uVar12 = *(undefined8 *)(param_2 + 0x130);
  uVar9 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar13;
  *(undefined8 *)(param_1 + 0x130) = uVar12;
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x140);
  uVar13 = *(undefined8 *)(param_2 + 0x158);
  uVar12 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar9;
  *(undefined8 *)(param_1 + 0x158) = uVar13;
  *(undefined8 *)(param_1 + 0x150) = uVar12;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x5c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x5c));
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  lVar4 = 0;
  FUN_100277ad0();
  lVar10 = *(long *)(lVar4 + -8);
  puVar5 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar4);
  if ((int)puVar5 != 0) {
    puVar8 = &DAT_100a82460;
    FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    goto LAB_1002d723c;
  }
  puVar5 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 9) {
    if (iVar3 == 2) {
      *puVar1 = *puVar2;
      puVar8 = &DAT_100a82468;
      FUN_100004bb4(&DAT_100a82468,&DAT_100816c00);
      iVar3 = *(int *)(puVar8 + 0x30);
      lVar6 = 0;
      __s10Foundation3URLVMa();
      pcVar11 = *(code **)(*(long *)(lVar6 + -8) + 0x20);
      (*pcVar11)((undefined1 *)((long)puVar1 + (long)iVar3),
                 (undefined1 *)((long)puVar2 + (long)iVar3),lVar6);
      (*pcVar11)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),lVar6);
      uVar9 = 2;
      goto LAB_1002d7220;
    }
    if (iVar3 == 4) {
      lVar6 = 0;
      FUN_100278198();
      puVar5 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar6);
      iVar3 = (int)puVar5;
      if (iVar3 < 5) {
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar6,0);
          }
          else if (iVar3 == 1) {
            lVar7 = 0;
            __s10Foundation3URLVMa();
            (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
            _swift_storeEnumTagMultiPayload(puVar1,lVar6,1);
          }
          else {
LAB_1002d7200:
            _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar6 + -8) + 0x40));
          }
        }
        else if (iVar3 == 2) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,2);
        }
        else if (iVar3 == 3) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          puVar8 = &DAT_100a824b0;
          FUN_100004bb4(&DAT_100a824b0,&DAT_100816d00);
          *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)) =
               *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30));
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,3);
        }
        else {
          if (iVar3 != 4) goto LAB_1002d7200;
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,4);
        }
      }
      else if (iVar3 < 8) {
        if (iVar3 == 5) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,5);
        }
        else if (iVar3 == 6) {
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          puVar8 = &DAT_100a824b8;
          FUN_100004bb4(&DAT_100a824b8,&DAT_1008176b0);
          *(undefined8 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)) =
               *(undefined8 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30));
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,6);
        }
        else {
          if (iVar3 != 7) goto LAB_1002d7200;
          lVar7 = 0;
          __s10Foundation3URLVMa();
          (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
          _swift_storeEnumTagMultiPayload(puVar1,lVar6,7);
        }
      }
      else if (iVar3 == 8) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,8);
      }
      else if (iVar3 == 9) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,9);
      }
      else {
        if (iVar3 != 10) goto LAB_1002d7200;
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,10);
      }
      uVar9 = 4;
      goto LAB_1002d7220;
    }
LAB_1002d6e20:
    _memcpy(puVar1,puVar2,*(size_t *)(lVar10 + 0x40));
  }
  else {
    if (iVar3 == 9) {
      lVar6 = 0;
      FUN_1002782c4();
      puVar5 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar6);
      if ((int)puVar5 == 0) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar6 + -8) + 0x40));
      }
      uVar9 = 9;
    }
    else {
      if (iVar3 != 10) goto LAB_1002d6e20;
      lVar6 = 0;
      FUN_100278368();
      puVar5 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar6);
      if ((int)puVar5 == 1) {
        lVar7 = 0;
        __sSS10FoundationE8EncodingVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,1);
      }
      else if ((int)puVar5 == 0) {
        lVar7 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,puVar2,lVar7);
        _swift_storeEnumTagMultiPayload(puVar1,lVar6,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(lVar6 + -8) + 0x40));
      }
      uVar9 = 10;
    }
LAB_1002d7220:
    _swift_storeEnumTagMultiPayload(puVar1,lVar4,uVar9);
  }
  (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar4);
LAB_1002d723c:
  iVar3 = *(int *)(param_3 + 100);
  param_1[*(int *)(param_3 + 0x60)] = param_2[*(int *)(param_3 + 0x60)];
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  return param_1;
}

