// rea decompile_all
// name: FUN_1006a3508
// address: 0x1006a3508
// body: available
// range: 0x1006a3508-0x1006a3a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a3a18 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_1006a3508(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  void *pvVar2;
  char ****ppppcVar3;
  int iVar4;
  int iVar5;
  char ***pppcVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined8 *****pppppuVar9;
  char *****pppppcVar10;
  FILE *pFVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char ****local_230;
  char ***pppcStack_228;
  char ***local_220;
  __darwin_time_t local_210;
  timeval local_208;
  undefined1 uStack_1f1;
  undefined8 ****local_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char ****local_170;
  char ***pppcStack_168;
  char ***local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char local_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  pcVar13 = "";
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    lVar12 = (long)*(char *)(param_1 + 0x1f);
    if (lVar12 < 0) {
      lVar12 = *(long *)(param_1 + 0x10);
    }
    pcVar13 = "";
    if (lVar12 != 0) {
      piVar7 = ___error();
      iVar4 = *piVar7;
      ppuVar8 = &PTR___tlv_bootstrap_100abd8a8;
      (*(code *)PTR___tlv_bootstrap_100abd8a8)();
      if (((ulong)*ppuVar8 & 1) == 0) {
        FUN_1006a7734();
      }
      ppuVar8 = &PTR___tlv_bootstrap_100abd890;
      (*(code *)PTR___tlv_bootstrap_100abd890)();
      if (*(char *)((long)ppuVar8 + 0x17) < '\0') {
        if (ppuVar8[1] != (undefined *)0x0) {
          **ppuVar8 = 0;
          ppuVar8[1] = (undefined *)0x0;
        }
      }
      else if (*(char *)((long)ppuVar8 + 0x17) != '\0') {
        *(undefined1 *)ppuVar8 = 0;
        *(undefined1 *)((long)ppuVar8 + 0x17) = 0;
      }
      local_208.tv_sec = 0;
      local_208.tv_usec = 0;
      local_208._12_4_ = 0;
      _gettimeofday(&local_208,(void *)0x0);
      local_210 = local_208.tv_sec;
      _localtime(&local_210);
      local_f0[0x68] = '\0';
      local_f0[0x69] = '\0';
      local_f0[0x6a] = '\0';
      local_f0[0x6b] = '\0';
      local_f0[0x6c] = '\0';
      local_f0[0x6d] = '\0';
      local_f0[0x6e] = '\0';
      local_f0[0x6f] = '\0';
      local_f0[0x60] = '\0';
      local_f0[0x61] = '\0';
      local_f0[0x62] = '\0';
      local_f0[99] = '\0';
      local_f0[100] = '\0';
      local_f0[0x65] = '\0';
      local_f0[0x66] = '\0';
      local_f0[0x67] = '\0';
      local_f0[0x78] = '\0';
      local_f0[0x79] = '\0';
      local_f0[0x7a] = '\0';
      local_f0[0x7b] = '\0';
      local_f0[0x7c] = '\0';
      local_f0[0x7d] = '\0';
      local_f0[0x7e] = '\0';
      local_f0[0x7f] = '\0';
      local_f0[0x70] = '\0';
      local_f0[0x71] = '\0';
      local_f0[0x72] = '\0';
      local_f0[0x73] = '\0';
      local_f0[0x74] = '\0';
      local_f0[0x75] = '\0';
      local_f0[0x76] = '\0';
      local_f0[0x77] = '\0';
      local_f0[0x48] = '\0';
      local_f0[0x49] = '\0';
      local_f0[0x4a] = '\0';
      local_f0[0x4b] = '\0';
      local_f0[0x4c] = '\0';
      local_f0[0x4d] = '\0';
      local_f0[0x4e] = '\0';
      local_f0[0x4f] = '\0';
      local_f0[0x40] = '\0';
      local_f0[0x41] = '\0';
      local_f0[0x42] = '\0';
      local_f0[0x43] = '\0';
      local_f0[0x44] = '\0';
      local_f0[0x45] = '\0';
      local_f0[0x46] = '\0';
      local_f0[0x47] = '\0';
      local_f0[0x58] = '\0';
      local_f0[0x59] = '\0';
      local_f0[0x5a] = '\0';
      local_f0[0x5b] = '\0';
      local_f0[0x5c] = '\0';
      local_f0[0x5d] = '\0';
      local_f0[0x5e] = '\0';
      local_f0[0x5f] = '\0';
      local_f0[0x50] = '\0';
      local_f0[0x51] = '\0';
      local_f0[0x52] = '\0';
      local_f0[0x53] = '\0';
      local_f0[0x54] = '\0';
      local_f0[0x55] = '\0';
      local_f0[0x56] = '\0';
      local_f0[0x57] = '\0';
      local_f0[0x28] = '\0';
      local_f0[0x29] = '\0';
      local_f0[0x2a] = '\0';
      local_f0[0x2b] = '\0';
      local_f0[0x2c] = '\0';
      local_f0[0x2d] = '\0';
      local_f0[0x2e] = '\0';
      local_f0[0x2f] = '\0';
      local_f0[0x20] = '\0';
      local_f0[0x21] = '\0';
      local_f0[0x22] = '\0';
      local_f0[0x23] = '\0';
      local_f0[0x24] = '\0';
      local_f0[0x25] = '\0';
      local_f0[0x26] = '\0';
      local_f0[0x27] = '\0';
      local_f0[0x38] = '\0';
      local_f0[0x39] = '\0';
      local_f0[0x3a] = '\0';
      local_f0[0x3b] = '\0';
      local_f0[0x3c] = '\0';
      local_f0[0x3d] = '\0';
      local_f0[0x3e] = '\0';
      local_f0[0x3f] = '\0';
      local_f0[0x30] = '\0';
      local_f0[0x31] = '\0';
      local_f0[0x32] = '\0';
      local_f0[0x33] = '\0';
      local_f0[0x34] = '\0';
      local_f0[0x35] = '\0';
      local_f0[0x36] = '\0';
      local_f0[0x37] = '\0';
      local_f0[8] = '\0';
      local_f0[9] = '\0';
      local_f0[10] = '\0';
      local_f0[0xb] = '\0';
      local_f0[0xc] = '\0';
      local_f0[0xd] = '\0';
      local_f0[0xe] = '\0';
      local_f0[0xf] = '\0';
      local_f0[0] = '\0';
      local_f0[1] = '\0';
      local_f0[2] = '\0';
      local_f0[3] = '\0';
      local_f0[4] = '\0';
      local_f0[5] = '\0';
      local_f0[6] = '\0';
      local_f0[7] = '\0';
      local_f0[0x18] = '\0';
      local_f0[0x19] = '\0';
      local_f0[0x1a] = '\0';
      local_f0[0x1b] = '\0';
      local_f0[0x1c] = '\0';
      local_f0[0x1d] = '\0';
      local_f0[0x1e] = '\0';
      local_f0[0x1f] = '\0';
      local_f0[0x10] = '\0';
      local_f0[0x11] = '\0';
      local_f0[0x12] = '\0';
      local_f0[0x13] = '\0';
      local_f0[0x14] = '\0';
      local_f0[0x15] = '\0';
      local_f0[0x16] = '\0';
      local_f0[0x17] = '\0';
      _snprintf(local_f0,0x80,"%d%02d%02d");
      sVar1 = *(size_t *)(param_1 + 0x10);
      if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
        sVar1 = (ulong)*(byte *)(param_1 + 0x1f);
      }
      FUN_1006a5804(&local_1f0,sVar1 + 1,&local_170);
      pppppuVar9 = (undefined8 *****)local_1f0;
      if (-1 < lStack_1e0) {
        pppppuVar9 = &local_1f0;
      }
      if (sVar1 != 0) {
        pvVar2 = *(void **)(param_1 + 8);
        if (-1 < *(char *)(param_1 + 0x1f)) {
          pvVar2 = (void *)(param_1 + 8);
        }
        _memmove(pppppuVar9,pvVar2,sVar1);
      }
      *(undefined2 *)((long)pppppuVar9 + sVar1) = 0x2f;
      pppppuVar9 = &local_1f0;
      std::string::append((char *)pppppuVar9);
      local_160 = (char ***)pppppuVar9[2];
      pppcStack_168 = (char ***)pppppuVar9[1];
      local_170 = (char ****)*pppppuVar9;
      pppppuVar9[1] = (undefined8 ****)0x0;
      pppppuVar9[2] = (undefined8 ****)0x0;
      *pppppuVar9 = (undefined8 ****)0x0;
      pppppcVar10 = &local_170;
      std::string::append((char *)pppppcVar10);
      local_220 = (char ***)pppppcVar10[2];
      pppcStack_228 = (char ***)pppppcVar10[1];
      local_230 = *pppppcVar10;
      pppppcVar10[1] = (char ****)0x0;
      pppppcVar10[2] = (char ****)0x0;
      *pppppcVar10 = (char ****)0x0;
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
      if (lStack_1e0 < 0) {
        operator_delete(local_1f0);
      }
      pppcVar6 = local_220;
      if ((long)local_220 < 0) {
        FUN_100384eb8(&local_170,local_230,pppcStack_228);
      }
      else {
        pppcStack_168 = pppcStack_228;
        local_170 = local_230;
        local_160 = local_220;
      }
      FUN_10069a9a4(&local_1f0,&local_170,0);
      uVar15 = (uint)local_1f0;
      if ((long)local_160 < 0) {
        operator_delete(local_170);
      }
      if (uVar15 < 2) {
        if ((long)pppcVar6 < 0) {
          FUN_100384eb8(&local_170,local_230,pppcStack_228);
        }
        else {
          pppcStack_168 = pppcStack_228;
          local_170 = local_230;
          local_160 = local_220;
        }
        FUN_100699458(&local_170,0);
        if ((long)local_160 < 0) {
          operator_delete(local_170);
        }
      }
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      local_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      pppcStack_168 = (char ***)0x0;
      local_170 = (char ****)0x0;
      uStack_158 = 0;
      local_160 = (char ***)0x0;
      _snprintf((char *)&local_170,0x80,"%d%02d%02d%02d%02d%02d_%d.dump");
      std::string::append((char *)&local_230);
      pppppcVar10 = (char *****)local_230;
      if (-1 < (long)local_220) {
        pppppcVar10 = &local_230;
      }
      pFVar11 = _fopen((char *)pppppcVar10,"wb");
      if (pFVar11 == (FILE *)0x0) {
        ___error();
        piVar7 = ___error();
        _strerror(*piVar7);
        FUN_10069554c("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/xlog/src/appender.cc",
                      0x42c,"Dump","nullptr != fileid","%s, errno:(%d, %s)");
        pcVar13 = "";
      }
      else {
        _fwrite(param_2,param_3,1,pFVar11);
        _fclose(pFVar11);
        std::string::append((char *)ppuVar8);
        ppppcVar3 = (char ****)pppcStack_228;
        if (-1 < (long)local_220) {
          ppppcVar3 = (char ****)((ulong)local_220 >> 0x38);
        }
        FUN_1006a5804(&local_1f0,(long)ppppcVar3 + 3,&uStack_1f1);
        pppppuVar9 = (undefined8 *****)local_1f0;
        if (-1 < lStack_1e0) {
          pppppuVar9 = &local_1f0;
        }
        if (ppppcVar3 != (char ****)0x0) {
          pppppcVar10 = (char *****)local_230;
          if (-1 < (long)local_220) {
            pppppcVar10 = &local_230;
          }
          _memmove(pppppuVar9,pppppcVar10,(size_t)ppppcVar3);
        }
        *(undefined4 *)((long)pppppuVar9 + (long)ppppcVar3) = 0xa3a20;
        pppppuVar9 = (undefined8 *****)local_1f0;
        if (-1 < lStack_1e0) {
          pppppuVar9 = &local_1f0;
        }
        std::string::append((char *)ppuVar8,(ulong)pppppuVar9);
        if (lStack_1e0 < 0) {
          operator_delete(local_1f0);
        }
        iVar14 = (int)param_3;
        if (0 < iVar14) {
          uVar15 = 0;
          iVar16 = 0;
          do {
            uStack_188 = 0;
            local_190 = 0;
            uStack_178 = 0;
            uStack_180 = 0;
            uStack_1a8 = 0;
            local_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            iVar5 = iVar14 - iVar16;
            if (0xf < iVar5) {
              iVar5 = 0x10;
            }
            uStack_1e8 = 0;
            local_1f0 = (undefined8 *****)0x0;
            uStack_1d8 = 0;
            lStack_1e0 = 0;
            FUN_1006a3a1c((long)param_2 + (long)iVar16,iVar5,&local_1f0);
            std::string::append((char *)ppuVar8);
            std::string::append((char *)ppuVar8);
            if (0x1e < uVar15) break;
            uVar15 = uVar15 + 1;
            iVar16 = iVar5 + iVar16;
          } while (iVar16 < iVar14);
        }
        pcVar13 = *ppuVar8;
        if (-1 < *(char *)((long)ppuVar8 + 0x17)) {
          pcVar13 = (char *)ppuVar8;
        }
      }
      if ((long)local_220 < 0) {
        operator_delete(local_230);
      }
      piVar7 = ___error();
      *piVar7 = iVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (undefined **)pcVar13;
}

