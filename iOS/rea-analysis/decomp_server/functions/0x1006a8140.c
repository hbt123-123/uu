// rea decompile_all
// name: FUN_1006a8140
// address: 0x1006a8140
// body: available
// range: 0x1006a8140-0x1006a8707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a8704 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a8140(char *param_1,int param_2,int param_3,ulong *param_4,ulong *param_5,char *param_6
                  )

{
  undefined8 *****pppppuVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FILE *pFVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  void **ppvVar16;
  char *pcVar17;
  ulong local_510;
  int local_508;
  undefined8 ****local_500 [2];
  char local_4e9;
  void *local_4e8 [2];
  char local_4d1;
  void *local_4d0;
  void *pvStack_4c8;
  void *local_4c0;
  void *local_4b0;
  void *pvStack_4a8;
  void *local_4a0;
  undefined8 ****local_490;
  void *pvStack_488;
  void *local_480;
  undefined8 local_478;
  char local_470 [1024];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  _bzero(local_470,0x400);
  if ((param_1 == (char *)0x0) || (param_3 <= param_2)) {
    pcVar17 = "NULL == _logPath || _endHour <= _beginHour, %d, %d";
LAB_1006a820c:
    _snprintf(local_470,0x400,pcVar17);
    std::string::append(param_6);
  }
  else {
    pFVar6 = _fopen(param_1,"rb");
    if (pFVar6 == (FILE *)0x0) {
      piVar7 = ___error();
      _strerror(*piVar7);
      pcVar17 = "open file fail:%s";
      goto LAB_1006a820c;
    }
    iVar3 = _fseek(pFVar6,0,2);
    if (iVar3 == 0) {
      uVar8 = _ftell(pFVar6);
      uVar4 = _fseek(pFVar6,0,0);
      uVar15 = (ulong)uVar4;
      if (uVar4 == 0) {
        *param_5 = 0;
        *param_4 = 0;
        FUN_1006aa5cc();
        pbVar10 = operator_new__(uVar15 & 0xffffffff);
        local_510 = 0;
        local_508 = -1;
        bVar2 = false;
LAB_1006a82e0:
        do {
          iVar3 = _feof(pFVar6);
          if ((iVar3 != 0) || (iVar3 = _ferror(pFVar6), iVar3 != 0)) goto LAB_1006a867c;
          uVar11 = _ftell(pFVar6);
          uVar12 = uVar11;
          FUN_1006aa5cc();
          uVar15 = uVar12 & 0xffffffff;
          FUN_1006aa5d4();
          if ((long)uVar8 < (long)(uVar11 + uVar15 + (uVar12 & 0xffffffff))) {
            builtin_strncpy(local_470,
                            "ftell(file) + __GetHeaderLen() + sizeof(kMagicEnd)) > file_size error",
                            0x46);
            goto LAB_1006a867c;
          }
          uVar11 = _ftell(pFVar6);
          uVar15 = uVar11;
          FUN_1006aa5cc();
          uVar12 = uVar15;
          FUN_1006aa5cc();
          uVar12 = _fread(pbVar10,1,uVar12 & 0xffffffff,pFVar6);
          if (uVar12 != (uVar15 & 0xffffffff)) {
            iVar3 = _ferror(pFVar6);
            _strerror(iVar3);
            pcVar17 = "fread(buff.Ptr(), 1, __GetHeaderLen(), file) error:%s, before_len:%ld.";
            goto LAB_1006a8670;
          }
          if (*pbVar10 - 6 < 8) {
            FUN_1006aa5cc();
            pbVar13 = pbVar10;
            FUN_1006aa65c(pbVar10,uVar12 & 0xffffffff);
            lVar14 = _ftell(pFVar6);
            if ((long)(lVar14 + ((ulong)pbVar13 & 0xffffffff) + 1) <= (long)uVar8) {
              iVar3 = _fseek(pFVar6,(ulong)pbVar13 & 0xffffffff,1);
              if (iVar3 != 0) {
                iVar3 = _ferror(pFVar6);
                _strerror(iVar3);
                pcVar17 = "fseek(file, len, SEEK_CUR):%s, before_len:%ld, len:%u.";
                goto LAB_1006a8670;
              }
              uVar15 = _fread(&local_490,1,1,pFVar6);
              if (uVar15 != 1) {
                iVar3 = _ferror(pFVar6);
                _strerror(iVar3);
                pcVar17 = "fread(&end, 1, 1, file) err:%s, before_len:%ld, len:%u.";
                goto LAB_1006a8670;
              }
              if ((char)local_490 != '\0') goto LAB_1006a83c8;
              local_478 = 0;
              FUN_1006aa5cc();
              pbVar13 = pbVar10;
              FUN_1006aa5dc(pbVar10,uVar15 & 0xffffffff,(long)&local_478 + 4,&local_478);
              if (((ulong)pbVar13 & 1) == 0) {
                pcVar17 = 
                "__GetLogHour(buff.Ptr(), buff.Length(), beginHour, endHour) err, before_len:%ld.";
                goto LAB_1006a8670;
              }
              iVar3 = (int)local_478;
              iVar5 = local_478._4_4_;
              if ((int)local_478 < local_478._4_4_) {
                local_478 = CONCAT44((int)local_478,(int)local_478);
                iVar5 = (int)local_478;
              }
              if ((-1 < param_6[0x17]) || (*(ulong *)(param_6 + 8) >> 0x14 == 0)) {
                std::to_string(iVar5);
                ppvVar16 = local_4e8;
                std::string::append((char *)ppvVar16);
                local_4c0 = ppvVar16[2];
                pvStack_4c8 = ppvVar16[1];
                local_4d0 = *ppvVar16;
                ppvVar16[1] = (void *)0x0;
                ppvVar16[2] = (void *)0x0;
                *ppvVar16 = (void *)0x0;
                std::to_string((int)local_478);
                pppppuVar1 = (undefined8 *****)local_500[0];
                if (-1 < local_4e9) {
                  pppppuVar1 = local_500;
                }
                ppvVar16 = &local_4d0;
                std::string::append((char *)ppvVar16,(ulong)pppppuVar1);
                local_4a0 = ppvVar16[2];
                pvStack_4a8 = ppvVar16[1];
                local_4b0 = *ppvVar16;
                ppvVar16[1] = (void *)0x0;
                ppvVar16[2] = (void *)0x0;
                *ppvVar16 = (void *)0x0;
                ppvVar16 = &local_4b0;
                std::string::append((char *)ppvVar16);
                local_480 = ppvVar16[2];
                pvStack_488 = ppvVar16[1];
                local_490 = *ppvVar16;
                ppvVar16[1] = (void *)0x0;
                ppvVar16[2] = (void *)0x0;
                *ppvVar16 = (void *)0x0;
                pppppuVar1 = (undefined8 *****)local_490;
                if (-1 < (long)local_480) {
                  pppppuVar1 = &local_490;
                }
                std::string::append(param_6,(ulong)pppppuVar1);
                if ((long)local_480 < 0) {
                  operator_delete(local_490);
                }
                if ((long)local_4a0 < 0) {
                  operator_delete(local_4b0);
                }
                if (local_4e9 < '\0') {
                  operator_delete(local_500[0]);
                }
                if ((long)local_4c0 < 0) {
                  operator_delete(local_4d0);
                }
                if (local_4d1 < '\0') {
                  operator_delete(local_4e8[0]);
                }
                iVar3 = (int)local_478;
                iVar5 = local_478._4_4_;
              }
              if (bVar2) {
LAB_1006a8574:
                if ((iVar5 < param_3) && (param_3 <= iVar3)) {
                  uVar15 = _ftell(pFVar6);
                  *param_5 = uVar15;
                  iVar5 = local_478._4_4_;
                }
                bVar2 = true;
                if ((local_508 < param_3) && (param_3 <= iVar5)) {
                  *param_5 = local_510;
                  bVar2 = true;
                }
              }
              else {
                if ((param_2 <= iVar3 && iVar5 < param_2) ||
                   (local_508 < param_2 && param_2 <= iVar5)) {
                  *param_4 = uVar11;
                  goto LAB_1006a8574;
                }
                bVar2 = false;
              }
              local_508 = (int)local_478;
              local_510 = _ftell(pFVar6);
              goto LAB_1006a82e0;
            }
          }
LAB_1006a83c8:
          iVar3 = _fseek(pFVar6,uVar11 + 1,0);
        } while (iVar3 == 0);
        iVar3 = _ferror(pFVar6);
        _strerror(iVar3);
        pcVar17 = "fseek(file, before_len+1, SEEK_SET) err:%s, before_len:%ld.";
LAB_1006a8670:
        _snprintf(local_470,0x400,pcVar17);
LAB_1006a867c:
        operator_delete__(pbVar10);
        if ((bool)(bVar2 & local_508 < param_3)) {
          *param_5 = uVar8;
        }
        _fclose(pFVar6);
        if (*param_4 < *param_5) {
          uVar9 = 1;
          goto LAB_1006a8284;
        }
        std::string::append(param_6);
        _bzero(local_470,0x400);
        pcVar17 = "begintpos:%lu, endpos:%lu, filesize:%ld.";
        goto LAB_1006a820c;
      }
      iVar3 = _ferror(pFVar6);
      _strerror(iVar3);
      pcVar17 = "fseek(file, 0, SEEK_SET) error:%s";
    }
    else {
      iVar3 = _ferror(pFVar6);
      _strerror(iVar3);
      pcVar17 = "fseek(file, 0, SEEK_END):%s";
    }
    _snprintf(local_470,0x400,pcVar17);
    std::string::append(param_6);
    _fclose(pFVar6);
  }
  uVar9 = 0;
LAB_1006a8284:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar9);
  }
  return;
}

