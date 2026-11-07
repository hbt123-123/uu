// rea decompile_all
// name: FUN_100388d7c
// address: 0x100388d7c
// body: available
// range: 0x100388d7c-0x10038925f inclusive
// range: 0x1003892f8-0x100389487 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100389484 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100388d7c(ulong param_1,char *param_2,ID param_3,ulong param_4)

{
  uint uVar1;
  ID IVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ID *pIVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  undefined8 *local_a0;
  long local_98;
  ID local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined4 uStack_81;
  undefined1 uStack_7d;
  char local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  undefined5 uStack_5b;
  undefined2 uStack_56;
  undefined8 uStack_54;
  undefined1 local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_90 = param_3;
  if ((param_4 & 1) == 0) {
    uVar5 = (ulong)(byte)param_2[1];
    if (*param_2 != '\0') {
      uVar5 = *(ulong *)(param_2 + 2);
    }
    if (uVar5 != 0) goto LAB_100388dd0;
  }
  else {
LAB_100388dd0:
    IVar2 = objc_stub::length(param_3);
    if (IVar2 != 0) {
      local_98 = *(long *)(param_1 + 0xb8);
      if (local_98 != 0) {
        FUN_100392994();
      }
      local_a0 = *(undefined8 **)(param_1 + 0xd0);
      if ((local_a0 != (undefined8 *)0x0) && (*(char *)((long)local_a0 + 0xc) == '\x01')) {
        FUN_10037dd20(*local_a0,*(undefined4 *)(local_a0 + 1));
      }
      FUN_10038774c(param_1);
      if (*(long *)(param_1 + 0xb0) == 0) {
        lVar4 = *(long *)(param_1 + 0x68);
        FUN_100385ff8(lVar4,&local_90);
        if (lVar4 != 0) {
          if (((*(char *)(param_1 + 0xe0) != '\x01') || ((*(byte *)(param_1 + 0xd8) & 1) != 0)) ||
             (*(long *)(param_1 + 0x70) != 0)) {
LAB_100389300:
            uVar5 = param_1;
            if ((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0) {
              if (*(char *)(param_1 + 0xd8) != '\x01') {
LAB_100389344:
                FUN_1003897c4(param_1,param_2,lVar4 + 0x18,param_4);
                goto LAB_100389358;
              }
LAB_1003893b4:
              FUN_100389600(param_1,param_2,local_90,param_4);
LAB_1003893c8:
              local_68 = (char)uVar5;
              uStack_61 = (undefined1)(uVar5 >> 0x38);
              uStack_63 = (undefined2)(uVar5 >> 0x28);
              uStack_67 = (undefined4)(uVar5 >> 8);
              uStack_60 = SUB82(param_2,0);
              uStack_5e = (undefined2)((ulong)param_2 >> 0x10);
              uStack_5c = (undefined1)((ulong)param_2 >> 0x20);
              if ((uVar5 & 1) == 0) goto LAB_100389420;
              lVar4 = *(long *)(param_1 + 0x68);
              FUN_100385ff8(lVar4,&local_90);
              if (lVar4 == 0) {
                FUN_10038e0c8(*(undefined8 *)(param_1 + 0x68),&local_90,&local_90);
              }
              else {
                *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)((ulong)&local_68 | 1);
                *(undefined4 *)(lVar4 + 0x20) =
                     *(undefined4 *)((undefined8 *)((ulong)&local_68 | 1) + 1);
              }
              goto LAB_100389380;
            }
            lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 0x18);
            if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
              uStack_60 = 0;
              uStack_5e = 0;
              uStack_5c = 0;
              local_68 = '\0';
              uStack_67 = 0;
              uStack_63 = 0;
              uStack_61 = 0;
              if (lVar8 != 1) goto LAB_1003893b4;
              FUN_10038955c(param_1,param_2,local_90,param_4);
              goto LAB_1003893c8;
            }
            if (lVar8 != 1) goto LAB_100389344;
            FUN_1003896a4(param_1,param_2,lVar4 + 0x18,param_4);
LAB_100389358:
            if ((uVar5 & 1) != 0) {
              *(char *)(lVar4 + 0x1e) = (char)(uVar5 >> 0x38);
              *(short *)(lVar4 + 0x1c) = (short)(uVar5 >> 0x28);
              *(int *)(lVar4 + 0x18) = (int)(uVar5 >> 8);
              *(int *)(lVar4 + 0x1f) = (int)param_2;
              *(char *)(lVar4 + 0x23) = (char)((ulong)param_2 >> 0x20);
              goto LAB_100389380;
            }
            goto LAB_100389420;
          }
          FUN_10037e108(&local_68,lVar4 + 0x18,*(long *)(*(long *)(param_1 + 0x80) + 0x20) + 4);
          if ((int)param_4 == 0) {
            pcVar6 = &local_68;
            FUN_10037e964(pcVar6,param_2);
          }
          else {
            uVar5 = (ulong)(byte)uStack_67;
            lVar8 = (long)&uStack_67 + 1;
            if (local_68 != '\0') {
              uVar5 = CONCAT26(uStack_60,CONCAT15(uStack_61,CONCAT23(uStack_63,uStack_67._1_3_)));
              lVar8 = CONCAT53(uStack_5b,CONCAT12(uStack_5c,uStack_5e));
            }
            FUN_10037c13c(&local_b8,lVar8,uVar5);
            FUN_10037c6e4(&local_88,&local_68);
            FUN_10037ec2c(&local_68,&local_88);
            thunk_FUN_10037edac(&local_88);
            pcVar6 = &local_68;
            FUN_10037e964(pcVar6,param_2);
          }
          if (((ulong)pcVar6 & 1) == 0) {
            thunk_FUN_10037edac(&local_68);
            goto LAB_100389300;
          }
          thunk_FUN_10037edac(&local_68);
          goto LAB_100389384;
        }
        uVar5 = param_1;
        if (((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x68) + 0x18) == 0)) {
          uStack_60 = 0;
          uStack_5e = 0;
          uStack_5c = 0;
          local_68 = '\0';
          uStack_67 = 0;
          uStack_63 = 0;
          uStack_61 = 0;
          if (*(long *)(param_1 + 0x88) == 0) goto LAB_1003890e4;
          FUN_10038955c(param_1,param_2,local_90,param_4);
        }
        else {
LAB_1003890e4:
          FUN_100389600(param_1,param_2,local_90,param_4);
        }
        local_68 = (char)uVar5;
        uStack_61 = (undefined1)(uVar5 >> 0x38);
        uStack_63 = (undefined2)(uVar5 >> 0x28);
        uStack_67 = (undefined4)(uVar5 >> 8);
        uStack_60 = SUB82(param_2,0);
        uStack_5e = (undefined2)((ulong)param_2 >> 0x10);
        uStack_5c = (undefined1)((ulong)param_2 >> 0x20);
        if ((uVar5 & 1) != 0) {
          FUN_10038e0c8(*(undefined8 *)(param_1 + 0x68),&local_90,&local_90,(ulong)&local_68 | 1);
          goto LAB_100389380;
        }
LAB_100389420:
        uVar9 = 0;
      }
      else {
        if ((int)param_4 == 0) {
LAB_100388f34:
          uVar9 = 0;
        }
        else {
          uVar1 = (uint)(byte)param_2[1];
          if (*param_2 != '\0') {
            uVar1 = *(uint *)(param_2 + 2);
          }
          uVar3 = (ulong)uVar1;
          FUN_10039280c();
          uVar5 = (ulong)(byte)param_2[1];
          if (*param_2 != '\0') {
            uVar5 = *(ulong *)(param_2 + 2);
          }
          if (uVar5 + (uVar3 & 0xffffffff) < 0x101) {
            FUN_100391804(&local_68,param_2);
            FUN_10037ec2c(param_2,&local_68);
            thunk_FUN_10037edac(&local_68);
            goto LAB_100388f34;
          }
          uVar9 = 1;
        }
        lVar4 = *(long *)(param_1 + 0x70);
        FUN_100385ff8(lVar4,&local_90);
        if (lVar4 == 0) {
          uVar5 = param_1;
          pcVar6 = param_2;
          if (((*(uint *)(param_1 + 0x30) >> 1 & 1) == 0) &&
             (*(long *)(*(long *)(param_1 + 0x70) + 0x18) == 0)) {
            uStack_7d = 0;
            local_88 = 0;
            uStack_84 = 0;
            uStack_82 = 0;
            uStack_81 = 0;
            if (*(long *)(param_1 + 0x88) == 0) goto LAB_10038902c;
            FUN_10038955c(param_1,param_2,local_90,uVar9);
          }
          else {
LAB_10038902c:
            FUN_100389600(param_1,param_2,local_90,uVar9);
          }
          uStack_82 = (undefined1)(uVar5 >> 0x38);
          uStack_84 = (undefined2)(uVar5 >> 0x28);
          local_88 = (undefined4)(uVar5 >> 8);
          uStack_81 = SUB84(pcVar6,0);
          uStack_7d = (undefined1)((ulong)pcVar6 >> 0x20);
          if ((uVar5 & 1) == 0) goto LAB_100389420;
          uStack_81._0_1_ = SUB81(pcVar6,0);
          uVar1 = CONCAT13((undefined1)uStack_81,(int3)(uVar5 >> 0x28));
          lVar4 = *(long *)(param_1 + 0x70);
          if (uVar1 < 0x101) {
            thunk_FUN_10037e1f0(&local_68,param_2);
            FUN_10038de18(lVar4,&local_90,&local_90,&local_68);
            FUN_10037e53c(&local_68);
          }
          else {
            FUN_10037e358(&local_68,(uint)(uVar5 >> 0x18) & 0xffff,uVar1,(ulong)pcVar6 >> 8);
            pIVar7 = &local_90;
            FUN_10038de18(lVar4,pIVar7,&local_90,&local_68);
            FUN_10037e53c(&local_68);
            uVar9 = _DAT_100ad13e8;
            if (((ulong)pIVar7 & 1) != 0) {
              *(undefined8 *)(lVar4 + 0x2c) = uRam0000000100ad13f0;
              *(undefined8 *)(lVar4 + 0x24) = uVar9;
              *(undefined1 *)(lVar4 + 0x34) = DAT_100ad13f8;
            }
          }
        }
        else {
          uVar5 = param_1;
          pcVar6 = param_2;
          if ((*(uint *)(param_1 + 0x30) >> 1 & 1) == 0) {
            uStack_ad = 0;
            local_b8 = 0;
            uStack_b4 = 0;
            uStack_b2 = 0;
            uStack_b1 = 0;
            if (*(long *)(*(long *)(param_1 + 0x70) + 0x18) != 1) goto LAB_100388f88;
            FUN_10038ec18(param_1,param_2,local_90,lVar4 + 0x18,uVar9);
          }
          else {
LAB_100388f88:
            FUN_10038ea7c(param_1,param_2,local_90,lVar4 + 0x18,uVar9);
          }
          uStack_b2 = (undefined1)(uVar5 >> 0x38);
          uStack_b4 = (undefined2)(uVar5 >> 0x28);
          local_b8 = (undefined4)(uVar5 >> 8);
          uStack_b1 = SUB84(pcVar6,0);
          uStack_ad = (undefined1)((ulong)pcVar6 >> 0x20);
          if ((uVar5 & 1) == 0) goto LAB_100389420;
          local_68 = '\0';
          uStack_b1._0_1_ = SUB81(pcVar6,0);
          uVar1 = CONCAT13((undefined1)uStack_b1,(int3)(uVar5 >> 0x28));
          if (uVar1 < 0x101) {
            thunk_FUN_10037e1f0(&local_88,param_2);
            FUN_10037e484(&local_68,&local_88);
            FUN_10037e53c(&local_88);
          }
          else {
            FUN_10037e358(&local_88,(uint)(uVar5 >> 0x18) & 0xffff,uVar1,(ulong)pcVar6 >> 8);
            FUN_10037e484(&local_68,&local_88);
            FUN_10037e53c(&local_88);
            uStack_54 = uRam0000000100ad13f0;
            uStack_5c = (undefined1)_DAT_100ad13e8;
            uStack_5b = (undefined5)((ulong)_DAT_100ad13e8 >> 8);
            uStack_56 = (undefined2)((ulong)_DAT_100ad13e8 >> 0x30);
            local_4c = DAT_100ad13f8;
          }
          if (*(char *)(param_1 + 0xd8) == '\x01') {
            lVar4 = *(long *)(param_1 + 0x70);
            FUN_100385ff8(lVar4,&local_90);
            if (lVar4 != 0) goto LAB_100389174;
            FUN_10038de18(*(undefined8 *)(param_1 + 0x70),&local_90,&local_90,&local_68);
          }
          else {
LAB_100389174:
            FUN_10037e484(lVar4 + 0x18,&local_68);
          }
          FUN_10037e53c(&local_68);
        }
LAB_100389380:
        *(undefined1 *)(param_1 + 0x99) = 0;
LAB_100389384:
        uVar9 = 1;
      }
      FUN_100385fb0(&local_a0);
      FUN_100385098(&local_98);
      goto LAB_100389434;
    }
  }
  uVar9 = 0;
LAB_100389434:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

