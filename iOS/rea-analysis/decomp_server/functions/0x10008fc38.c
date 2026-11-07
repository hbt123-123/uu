// rea decompile_all
// name: FUN_10008fc38
// address: 0x10008fc38
// body: available
// range: 0x10008fc38-0x10009098f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10009098c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10008fc38(int *param_1,ID param_2,undefined *param_3,long param_4,undefined8 param_5,
                   int param_6)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined *puVar12;
  long lVar13;
  ID IVar14;
  undefined1 *puVar15;
  ulong uVar16;
  char *pcVar17;
  int iVar18;
  ulong uVar19;
  undefined4 *puVar20;
  char *pcVar21;
  uint uVar22;
  ulong uVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined1 auStack_110 [16];
  int local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  int **local_e8;
  char *local_d8;
  char *pcStack_d0;
  undefined *local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  int *local_80;
  ID IStack_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  piVar7 = param_1;
  IVar11 = param_2;
  puVar10 = param_3;
  FUN_1004e242c();
  iVar26 = *param_1;
  iVar18 = iVar26;
  local_80 = piVar7;
  IStack_78 = IVar11;
  local_70 = puVar10;
  if (((iVar26 < 1) && (iVar18 = param_6, param_6 < 1)) && (iVar18 = param_1[0xf], iVar18 < 1)) {
    IVar11 = _objc_msgSend(param_2,"fps");
    iVar18 = (int)IVar11;
    if (iVar18 < 0x5a) goto LAB_10008fcb8;
LAB_10008fcf4:
    if (iVar18 != 0x5a) {
      if (iVar18 == 0x90) {
        uVar8 = 4;
        goto LAB_10008fd18;
      }
      goto LAB_10008fd0c;
    }
    uVar8 = 3;
  }
  else {
    if (0x59 < iVar18) goto LAB_10008fcf4;
LAB_10008fcb8:
    if (iVar18 == 0x1e) {
      uVar8 = 1;
    }
    else if (iVar18 == 0x3c) {
      uVar8 = 2;
    }
    else {
LAB_10008fd0c:
      uVar8 = 0;
    }
  }
LAB_10008fd18:
  FUN_1004e29a4(uVar8,1);
  iVar1 = param_1[0xf];
  local_b8._0_4_ = iVar18;
  if (iVar1 < 1) {
    if (iVar26 < 1) {
      IVar11 = _objc_msgSend(param_2,"fps");
      local_b8._0_4_ = (int)IVar11;
      goto joined_r0x00010008ff0c;
    }
    if (param_3 != (undefined *)0x0) goto LAB_10008fd54;
LAB_10008ff10:
    iVar26 = 0;
    bVar6 = true;
    uVar22 = 1;
  }
  else {
    if (iVar1 <= iVar18) {
      local_b8._0_4_ = iVar1;
    }
joined_r0x00010008ff0c:
    if (param_3 == (undefined *)0x0) goto LAB_10008ff10;
LAB_10008fd54:
    lVar13 = *(long *)(param_3 + 0x10);
    local_c0 = (int *)param_4;
    if (lVar13 == 0) {
      uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      if (uVar23 != 0) goto LAB_10008fdec;
    }
    else {
      local_b0 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_10006fafc(0,lVar13,0);
      puVar20 = (undefined4 *)(param_3 + 0x24);
      uVar19 = *(ulong *)(local_b0 + 0x10);
      do {
        uVar2 = *puVar20;
        uVar23 = uVar19 + 1;
        if (*(ulong *)(local_b0 + 0x18) >> 1 <= uVar19) {
          FUN_10006fafc(1 < *(ulong *)(local_b0 + 0x18),uVar23,1);
        }
        *(ulong *)(local_b0 + 0x10) = uVar23;
        *(undefined4 *)(local_b0 + uVar19 * 4 + 0x20) = uVar2;
        lVar13 = lVar13 + -1;
        puVar20 = puVar20 + 4;
        puVar12 = local_b0;
        uVar19 = uVar23;
      } while (lVar13 != 0);
LAB_10008fdec:
      lVar13 = 0x20;
      puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
      do {
        iVar26 = *(int *)(puVar12 + lVar13);
        if (0 < iVar26) {
          puVar9 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          local_b0 = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_10006fafc(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar19 = *(ulong *)(local_b0 + 0x10);
          if (*(ulong *)(local_b0 + 0x18) >> 1 <= uVar19) {
            FUN_10006fafc(1 < *(ulong *)(local_b0 + 0x18),uVar19 + 1,1);
          }
          *(ulong *)(local_b0 + 0x10) = uVar19 + 1;
          *(int *)(local_b0 + uVar19 * 4 + 0x20) = iVar26;
          puVar10 = local_b0;
        }
        lVar13 = lVar13 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    _swift_bridgeObjectRelease(puVar12);
    param_3 = puVar10;
    FUN_10008c198();
    _swift_release(puVar10);
    uVar22 = (uint)((ulong)param_3 >> 0x20) & 1;
    lVar13 = *(long *)((long)local_c0 + 0x10);
    if (lVar13 == 0) {
      iVar26 = 0;
      bVar6 = true;
    }
    else {
      piVar7 = (int *)((long)local_c0 + 0x24);
      do {
        iVar1 = piVar7[-1];
        iVar26 = *piVar7;
        IVar11 = _objc_msgSend(param_2,"screenId");
        bVar5 = iVar1 != (int)IVar11;
        bVar6 = bVar5 || iVar26 < 1;
        if (!bVar5 && iVar26 >= 1) goto LAB_10008ff1c;
        piVar7 = piVar7 + 4;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar26 = 0;
    }
  }
LAB_10008ff1c:
  puVar10 = &DAT_100a759b8;
  FUN_100004bb4(&DAT_100a759b8,&DAT_10080a9a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(int *)(puVar10 + 0x20) = (int)local_b8;
  if (uVar22 == 0) {
    puVar12 = (undefined *)0x1;
    FUN_100033f28(1,2,1,puVar10);
    *(undefined8 *)(puVar12 + 0x10) = 2;
    *(int *)(puVar12 + 0x24) = (int)param_3;
  }
  else {
    IVar11 = _objc_msgSend(param_2,"fps");
    puVar12 = puVar10;
    if (0 < (int)IVar11) {
      IVar11 = _objc_msgSend(param_2,"fps");
      puVar12 = (undefined *)0x1;
      FUN_100033f28(1,2,1,puVar10);
      *(undefined8 *)(puVar12 + 0x10) = 2;
      *(int *)(puVar12 + 0x24) = (int)IVar11;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_f0 = CONCAT44(local_f0._4_4_,iVar18);
    local_e8 = (int **)param_2;
    FUN_1003fb4bc(FUN_10009165c,&local_100,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                  0x800000010087eea0,0x244,0);
  }
  local_c0 = param_1;
  if (bVar6 == false) {
    uVar23 = *(ulong *)(puVar12 + 0x10);
    if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar23) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
      FUN_100033f28(puVar12,uVar23 + 1,1);
    }
    *(ulong *)(puVar12 + 0x10) = uVar23 + 1;
    *(int *)(puVar12 + uVar23 * 4 + 0x20) = iVar26;
  }
  local_c8 = puVar12;
  FUN_10008c318();
  iStack_fc = (int)local_b8;
  iVar1 = (int)puVar12;
  if (((ulong)puVar12 & 0x100000000) != 0) {
    iVar1 = (int)local_b8;
  }
  FUN_1004e4bf4(iVar1);
  uVar8 = 0;
  FUN_100401b14();
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar15 = auStack_110;
  local_f4 = (undefined1)uVar22;
  local_f0._0_5_ = CONCAT14(bVar6,iVar26);
  local_d8 = "reportedAutoFrameQuality";
  pcStack_d0 = s___screenID__10087ee90 + 0x10;
  local_100 = iVar18;
  local_f8 = (int)param_3;
  local_e8 = &local_80;
  local_b8 = uVar8;
  FUN_1003fb45c(FUN_100091668,puVar15,0xd00000000000009f,0x800000010087e740,0xd000000000000049,
                0x800000010087eea0,0x248,0);
  piVar7 = local_c0;
  uVar23 = DAT_100a73f80;
  uVar22 = local_c0[1];
  uVar19 = (ulong)uVar22;
  if ((int)uVar22 < 0) {
    uVar25 = (uint)DAT_100a73f88;
    if ((DAT_100a73f88 & 1) == 0) {
      IVar11 = 0;
    }
    else {
      IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f80 * 8);
    }
    IVar14 = _objc_msgSend(param_2,"frameQuality");
    uVar19 = DAT_100a73f90;
    if (IVar11 != IVar14) {
      uVar25 = (uint)DAT_100a73f98;
      if (uVar25 == 1) {
        IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f90 * 8);
      }
      else {
        IVar11 = 0;
      }
      IVar14 = _objc_msgSend(param_2,"frameQuality");
      uVar16 = DAT_100a73fa0;
      uVar23 = uVar19;
      if (IVar11 != IVar14) {
        uVar25 = (uint)DAT_100a73fa8;
        if (uVar25 == 1) {
          IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fa0 * 8);
        }
        else {
          IVar11 = 0;
        }
        IVar14 = _objc_msgSend(param_2,"frameQuality");
        uVar19 = DAT_100a73fb0;
        uVar23 = uVar16;
        if (IVar11 != IVar14) {
          uVar25 = (uint)DAT_100a73fb8;
          if (uVar25 == 1) {
            IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fb0 * 8);
          }
          else {
            IVar11 = 0;
          }
          IVar14 = _objc_msgSend(param_2,"frameQuality");
          uVar16 = DAT_100a73fc0;
          uVar23 = uVar19;
          if (IVar11 != IVar14) {
            uVar25 = (uint)DAT_100a73fc8;
            if (uVar25 == 1) {
              IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fc0 * 8);
            }
            else {
              IVar11 = 0;
            }
            IVar14 = _objc_msgSend(param_2,"frameQuality");
            uVar19 = DAT_100a73fd0;
            uVar23 = uVar16;
            if (IVar11 != IVar14) {
              uVar25 = (uint)DAT_100a73fd8;
              if (uVar25 == 1) {
                IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fd0 * 8);
              }
              else {
                IVar11 = 0;
              }
              IVar14 = _objc_msgSend(param_2,"frameQuality");
              uVar23 = uVar19;
              if (IVar11 != IVar14) {
                uVar23 = 5;
                uVar25 = 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_10043e6e4(uVar19);
    bVar6 = ((ulong)puVar15 & 0x100) == 0;
    uVar23 = 5;
    if (bVar6) {
      uVar23 = uVar19;
    }
    uVar25 = 1;
    if (bVar6) {
      uVar25 = (uint)puVar15;
    }
  }
  uVar16 = (ulong)(uVar25 & 1);
  FUN_1004e2bc8(uVar23);
  uVar23 = DAT_100a73f80;
  uVar25 = piVar7[2];
  uVar19 = (ulong)uVar25;
  if ((int)uVar25 < 0) {
    uVar27 = (uint)DAT_100a73f88;
    if ((DAT_100a73f88 & 1) == 0) {
      IVar11 = 0;
    }
    else {
      IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f80 * 8);
    }
    IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
    uVar19 = DAT_100a73f90;
    if (IVar11 != IVar14) {
      uVar27 = (uint)DAT_100a73f98;
      if (uVar27 == 1) {
        IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f90 * 8);
      }
      else {
        IVar11 = 0;
      }
      IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
      uVar16 = DAT_100a73fa0;
      uVar23 = uVar19;
      if (IVar11 != IVar14) {
        uVar27 = (uint)DAT_100a73fa8;
        if (uVar27 == 1) {
          IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fa0 * 8);
        }
        else {
          IVar11 = 0;
        }
        IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
        uVar19 = DAT_100a73fb0;
        uVar23 = uVar16;
        if (IVar11 != IVar14) {
          uVar27 = (uint)DAT_100a73fb8;
          if (uVar27 == 1) {
            IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fb0 * 8);
          }
          else {
            IVar11 = 0;
          }
          IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
          uVar16 = DAT_100a73fc0;
          uVar23 = uVar19;
          if (IVar11 != IVar14) {
            uVar27 = (uint)DAT_100a73fc8;
            if (uVar27 == 1) {
              IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fc0 * 8);
            }
            else {
              IVar11 = 0;
            }
            IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
            uVar19 = DAT_100a73fd0;
            uVar23 = uVar16;
            if (IVar11 != IVar14) {
              uVar27 = (uint)DAT_100a73fd8;
              if (uVar27 == 1) {
                IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fd0 * 8);
              }
              else {
                IVar11 = 0;
              }
              IVar14 = _objc_msgSend(param_2,"autoStartupQuality");
              uVar23 = uVar19;
              if (IVar11 != IVar14) {
                uVar23 = 2;
                uVar27 = 1;
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_10043e6e4(uVar19);
    bVar6 = (uVar16 & 0x100) == 0;
    uVar23 = 2;
    if (bVar6) {
      uVar23 = uVar19;
    }
    uVar27 = 1;
    if (bVar6) {
      uVar27 = (uint)uVar16;
    }
  }
  FUN_1004e3fe0(uVar23,uVar27 & 1);
  if ((uVar22 != 5) || (-1 < (int)uVar25)) {
    _swift_bridgeObjectRelease(local_c8);
    goto LAB_100090524;
  }
  IVar11 = _objc_msgSend(param_2,"frameQuality");
  bVar24 = DAT_100a73f88;
  uVar23 = DAT_100a73f80;
  if (IVar11 - 3 < 2) {
    if (DAT_100a73f88 == 1) {
      IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f80 * 8);
    }
    else {
      IVar11 = 0;
    }
    IVar14 = _objc_msgSend(param_2,"frameQuality");
    bVar3 = DAT_100a73f98;
    uVar19 = DAT_100a73f90;
    if (IVar11 != IVar14) {
      if (DAT_100a73f98 == 1) {
        IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73f90 * 8);
      }
      else {
        IVar11 = 0;
      }
      IVar14 = _objc_msgSend(param_2,"frameQuality");
      bVar4 = DAT_100a73fa8;
      uVar16 = DAT_100a73fa0;
      uVar23 = uVar19;
      bVar24 = bVar3;
      if (IVar11 != IVar14) {
        if (DAT_100a73fa8 == 1) {
          IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fa0 * 8);
        }
        else {
          IVar11 = 0;
        }
        IVar14 = _objc_msgSend(param_2,"frameQuality");
        bVar3 = DAT_100a73fb8;
        uVar19 = DAT_100a73fb0;
        uVar23 = uVar16;
        bVar24 = bVar4;
        if (IVar11 != IVar14) {
          if (DAT_100a73fb8 == 1) {
            IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fb0 * 8);
          }
          else {
            IVar11 = 0;
          }
          IVar14 = _objc_msgSend(param_2,"frameQuality");
          bVar4 = DAT_100a73fc8;
          uVar16 = DAT_100a73fc0;
          uVar23 = uVar19;
          bVar24 = bVar3;
          if (IVar11 != IVar14) {
            if (DAT_100a73fc8 == 1) {
              IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fc0 * 8);
            }
            else {
              IVar11 = 0;
            }
            IVar14 = _objc_msgSend(param_2,"frameQuality");
            bVar3 = DAT_100a73fd8;
            uVar19 = DAT_100a73fd0;
            uVar23 = uVar16;
            bVar24 = bVar4;
            if (IVar11 != IVar14) {
              if (DAT_100a73fd8 == 1) {
                IVar11 = *(ID *)(&DAT_10080b148 + DAT_100a73fd0 * 8);
              }
              else {
                IVar11 = 0;
              }
              IVar14 = _objc_msgSend(param_2,"frameQuality");
              uVar23 = uVar19;
              bVar24 = bVar3;
              if (IVar11 != IVar14) {
                bVar24 = 1;
                uVar23 = 2;
              }
            }
          }
        }
      }
    }
    _swift_bridgeObjectRelease(local_c8);
LAB_100090900:
    FUN_1004e3fe0(uVar23,bVar24);
    pcVar21 = pcStack_d0;
    pcVar17 = local_d8;
  }
  else {
    _swift_bridgeObjectRelease(local_c8);
    if (IVar11 != 0) {
      uVar23 = 2;
      bVar24 = 1;
      goto LAB_100090900;
    }
    FUN_100004bb4(&DAT_100a76600,&DAT_10080b128);
    _swift_initStaticObject();
    piVar7 = local_80;
    FUN_1004e3fa0(local_80,IStack_78,local_70);
    FUN_100044758();
    pcVar21 = pcStack_d0;
    pcVar17 = local_d8;
    if (((ulong)piVar7 & 1) == 0) {
      FUN_1004e3fe0(2,1);
    }
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_e8 = &local_80;
  local_f0 = param_2;
  FUN_1003fb45c(FUN_1000916a4,&local_100,0xd00000000000009f,(ulong)pcVar17 | 0x8000000000000000,
                0xd000000000000049,(ulong)pcVar21 | 0x8000000000000000,0x25d,0);
  piVar7 = local_c0;
LAB_100090524:
  _objc_msgSend(param_2,"screenId");
  FUN_1004e2fdc();
  _objc_msgSend(param_2,"cursorCapture");
  FUN_1004e2de8();
  pcVar17 = (char *)0x0;
  _objc_msgSend(param_2,"hdr");
  FUN_1004e3de8();
  uVar23 = (ulong)(uint)piVar7[0xe];
  if (piVar7[0xe] < 0) {
    pcVar17 = "chromaSampling";
    uVar23 = _objc_msgSend(param_2,"chromaSampling");
  }
  FUN_10043e4f8();
  if (((ulong)pcVar17 & 0x100) != 0) {
    uVar23 = 1;
  }
  FUN_1004e35bc(uVar23,(uint)pcVar17 & 1 | ((uint)pcVar17 & 0x100) >> 8);
  iVar26 = piVar7[9];
  if (iVar26 < 0) {
    IVar11 = _objc_msgSend(param_2,"codecType");
    pcVar17 = (char *)0x1;
    iVar18 = 1;
    if (IVar11 == 2) {
      iVar18 = 2;
    }
  }
  else {
    iVar18 = iVar26;
    if (iVar26 == 1) {
      iVar18 = 1;
    }
    iVar1 = 2;
    if (iVar26 != 2) {
      iVar1 = iVar18;
    }
    uVar25 = 1;
    if (iVar26 != 2) {
      uVar25 = (uint)(iVar26 == 1);
    }
    iVar18 = iVar26;
    if (iVar26 != 0) {
      iVar18 = iVar1;
    }
    uVar27 = 1;
    if (iVar26 != 0) {
      uVar27 = uVar25;
    }
    pcVar17 = (char *)(ulong)uVar27;
  }
  FUN_1004e4204(iVar18);
  if (((int)uVar22 < 0) && (piVar7[6] < 1)) {
    pcVar17 = (char *)0x0;
    _objc_msgSend(param_2,"maxCustomBitrate");
  }
  FUN_1004e37dc();
  if (piVar7[10] < 0) {
    pcVar17 = "maxScaleWidth";
    _objc_msgSend(param_2,"maxScaleWidth");
  }
  FUN_1004e4424();
  if (piVar7[0xb] < 0) {
    pcVar17 = (char *)0x0;
    _objc_msgSend(param_2,"maxScaleHeight");
  }
  FUN_1004e4618();
  FUN_1004e31d0(piVar7[4]);
  FUN_1004e33c4(piVar7[5]);
  FUN_1004e480c(piVar7[0xc]);
  FUN_1004e4a00(piVar7[0xd]);
  FUN_1004e39d0(piVar7[7]);
  lVar13 = (long)piVar7[8];
  FUN_10043e4f8(lVar13);
  if (((ulong)pcVar17 & 0x100) != 0) {
    lVar13 = 1;
  }
  FUN_1004e3bc8(lVar13,(uint)pcVar17 & 1 | ((uint)pcVar17 & 0x100) >> 8);
  puVar10 = local_70;
  IVar11 = IStack_78;
  piVar7 = local_80;
  FUN_100008184(local_80,IStack_78);
  _swift_retain(puVar10);
  FUN_100006cdc(piVar7,IVar11);
  _swift_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar7;
}

