// rea decompile_all
// name: FUN_10069d3b4
// address: 0x10069d3b4
// body: available
// range: 0x10069d3b4-0x10069d847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069d844 to 0x100384eb8 FUN_100384eb8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010069d458) */
/* WARNING: Removing unreachable block (ram,0x00010069d804) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10069d3b4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *******pppppppbVar3;
  bool bVar4;
  undefined8 uVar5;
  byte *******local_130;
  long lStack_128;
  long local_120;
  undefined8 *local_118;
  long lStack_110;
  byte *******local_100;
  long lStack_f8;
  undefined8 local_f0;
  byte *******local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  long lStack_c0;
  void *local_b8 [2];
  char local_a1;
  undefined8 *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  long local_70;
  byte *******local_68;
  long lStack_60;
  undefined7 local_58;
  undefined1 uStack_51;
  undefined8 *local_50;
  long lStack_48;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0) {
      FUN_100384eb8(param_1,*param_2,0);
      return;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) == '\0') {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[2] = param_2[2];
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10069c3b0(&local_68,param_2);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_70 = (long)*(char *)((long)param_2 + 0x17);
  if (local_70 < 0) {
    local_70 = param_2[1];
  }
  local_78 = param_2;
  FUN_10069d848(local_b8,&local_90,0);
  lStack_d8 = lStack_60;
  local_e0 = local_68;
  local_d0 = CONCAT17(uStack_51,local_58);
  lStack_c0 = lStack_48;
  local_c8 = local_50;
  if ((local_50 != local_a0) || (lStack_48 != local_98)) {
    do {
      if (local_d0 < 0) {
        pppppppbVar3 = local_e0;
        if (lStack_d8 == 1) goto LAB_10069d4c4;
        uVar1 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
        }
        if (uVar1 == 0 || lStack_d8 != 2) goto LAB_10069d770;
LAB_10069d578:
        pppppppbVar3 = local_e0;
        if (*(byte *)local_e0 == 0x2e) {
LAB_10069d588:
          if (*(byte *)((long)pppppppbVar3 + 1) == 0x2e) {
            FUN_10069cde4(&local_130,param_1);
            if (local_120 < 0) {
              FUN_100384eb8(&local_100,local_130,lStack_128);
              if (local_120 < 0) {
                operator_delete(local_130);
              }
            }
            else {
              lStack_f8 = lStack_128;
              local_100 = local_130;
              local_f0 = local_120;
            }
            if (local_f0 < 0) {
              if (lStack_f8 != 0) {
                if (lStack_f8 == 1) {
                  if (((ulong)*local_100 & 0xfe) == 0x2e) goto LAB_10069d684;
                }
                else if (lStack_f8 == 2) {
                  pppppppbVar3 = local_100;
                  if (*(byte *)local_100 != 0x2e) goto LAB_10069d64c;
                  goto LAB_10069d684;
                }
                goto LAB_10069d690;
              }
LAB_10069d684:
              operator_delete(local_100);
            }
            else if (local_f0._7_1_ == '\x02') {
              if ((byte)local_100 == 0x2e) goto LAB_10069d770;
              pppppppbVar3 = (byte *******)&local_100;
LAB_10069d64c:
              if (*(byte *)((long)pppppppbVar3 + 1) != 0x2e) goto LAB_10069d690;
              bVar4 = true;
              if (((uint)(int)local_f0._7_1_ >> 7 & 1) != 0) goto LAB_10069d660;
joined_r0x00010069d668:
              if (!bVar4) goto LAB_10069d77c;
            }
            else if (local_f0._7_1_ == '\x01') {
              if (((byte)local_100 & 0xfe) != 0x2e) goto LAB_10069d690;
            }
            else if (local_f0._7_1_ != '\0') {
LAB_10069d690:
              puVar2 = param_1;
              FUN_10069c638();
              std::string::erase((ulong)param_1,(ulong)puVar2);
              if (local_d0 < 0) {
                FUN_100384eb8(&local_130,local_e0,lStack_d8);
              }
              else {
                lStack_128 = lStack_d8;
                local_130 = local_e0;
                local_120 = local_d0;
              }
              lStack_110 = lStack_c0;
              local_118 = local_c8;
              uVar1 = param_1[1];
              if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
                uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
              }
              if (((uVar1 == 0) &&
                  (((FUN_10069d89c(&local_130), local_118 != local_a0 || (lStack_110 != local_98))
                   && (local_118 == local_78)))) && (lStack_110 == local_70)) {
                FUN_10069cfb0();
                puVar2 = &local_90;
                FUN_10069c180(puVar2,&DAT_100b2c4f8);
                if ((int)puVar2 == 0) {
                  FUN_10069cfb0();
                  FUN_10069bf10(param_1,&DAT_100b2c4f8);
                }
              }
              if (local_120 < 0) {
                operator_delete(local_130);
              }
              bVar4 = false;
              if (local_f0 < 0) {
LAB_10069d660:
                operator_delete(local_100);
              }
              goto joined_r0x00010069d668;
            }
          }
        }
LAB_10069d770:
        FUN_10069bf10(param_1,&local_e0);
      }
      else {
        if (local_d0._7_1_ != '\x01') {
          uVar1 = param_1[1];
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
          }
          if (uVar1 != 0) {
LAB_10069d53c:
            if ((local_d0._7_1_ == '\x02') && ((char)local_e0 == '.')) {
              pppppppbVar3 = (byte *******)&local_e0;
              goto LAB_10069d588;
            }
          }
          goto LAB_10069d770;
        }
        pppppppbVar3 = (byte *******)&local_e0;
LAB_10069d4c4:
        if (((*(byte *)pppppppbVar3 != 0x2e) || (local_c8 == local_50 && lStack_c0 == lStack_48)) ||
           ((local_c8 == local_78 && (lStack_c0 == local_70)))) {
          uVar1 = param_1[1];
          if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
          }
          if (uVar1 != 0) {
            if (-1 < local_d0) goto LAB_10069d53c;
            if (lStack_d8 == 2) goto LAB_10069d578;
          }
          goto LAB_10069d770;
        }
      }
LAB_10069d77c:
      FUN_10069d89c(&local_e0);
    } while ((local_c8 != local_a0) || (lStack_c0 != local_98));
  }
  if (local_d0 < 0) {
    operator_delete(local_e0);
  }
  uVar1 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 == 0) {
    FUN_10069cfb0();
    FUN_10069bf10(param_1,&DAT_100b2c4f8);
  }
  if (local_a1 < '\0') {
    operator_delete(local_b8[0]);
  }
  return;
}

