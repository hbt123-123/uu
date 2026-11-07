// rea decompile_all
// name: FUN_1006a2ff4
// address: 0x1006a2ff4
// body: available
// range: 0x1006a2ff4-0x1006a338f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a338c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a2ff4(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 extraout_var;
  tm *ptVar6;
  undefined4 extraout_var_00;
  FILE *pFVar7;
  int *piVar8;
  char *pcVar9;
  size_t sVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auStack_958 [40];
  tm local_930;
  long local_8f8;
  timeval local_8f0;
  void *local_8e0 [2];
  char local_8c9;
  char local_4e0 [136];
  long local_458 [128];
  long local_58;
  long lVar5;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(char *)(param_1 + 0x1f) < '\0') {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_1006a309c;
  }
  else if (*(char *)(param_1 + 0x1f) == '\0') {
LAB_1006a309c:
    bVar3 = false;
    goto LAB_1006a3358;
  }
  iVar4 = _gettimeofday(&local_8f0,(void *)0x0);
  lVar5 = CONCAT44(extraout_var,iVar4);
  if (*(long *)(param_1 + 0x1a0) != 0) {
    local_458[0] = local_8f0.tv_sec;
    ptVar6 = _localtime(local_458);
    iVar4 = ptVar6->tm_mday;
    iVar1 = ptVar6->tm_mon;
    iVar2 = ptVar6->tm_year;
    ptVar6 = _localtime((time_t *)(param_1 + 0x1a8));
    if (((ptVar6->tm_year == iVar2) && (ptVar6->tm_mon == iVar1)) && (ptVar6->tm_mday == iVar4)) {
      bVar3 = true;
      goto LAB_1006a3358;
    }
    iVar4 = _fclose(*(FILE **)(param_1 + 0x1a0));
    lVar5 = CONCAT44(extraout_var_00,iVar4);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  FUN_1006951fc();
  local_8f8 = local_8f0.tv_sec;
  *(__darwin_time_t *)(param_1 + 0x1a8) = local_8f0.tv_sec;
  _bzero(local_458,0x400);
  plVar15 = (long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x37) < '\0') {
    plVar15 = (long *)*plVar15;
  }
  FUN_1006928dc(local_8e0,"xlog");
  FUN_1006a294c(param_1,&local_8f0,param_2,plVar15,local_8e0,local_458,0x400);
  if (local_8c9 < '\0') {
    operator_delete(local_8e0[0]);
  }
  if (local_8f0.tv_sec < *(long *)(param_1 + 600)) {
    pFVar7 = _fopen((char *)(param_1 + 0x268),"ab");
    *(FILE **)(param_1 + 0x1a0) = pFVar7;
    if (pFVar7 == (FILE *)0x0) {
      ___error();
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      FUN_1006a2da8(pcVar9,"open file error:%d %s, path:%s");
    }
  }
  else {
    pFVar7 = _fopen((char *)local_458,"ab");
    *(FILE **)(param_1 + 0x1a0) = pFVar7;
    if (pFVar7 == (FILE *)0x0) {
      ___error();
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      FUN_1006a2da8(pcVar9,"open file error:%d %s, path:%s");
    }
    lVar13 = *(time_t *)(param_1 + 600);
    if ((lVar13 != 0) &&
       ((long)((ulong)(lVar5 - *(long *)(param_1 + 0x260)) / 1000 + 300) < local_8f0.tv_sec - lVar13
       )) {
      ptVar6 = _localtime((time_t *)(param_1 + 600));
      local_930.tm_wday = ptVar6->tm_wday;
      local_930.tm_yday = ptVar6->tm_yday;
      local_930.tm_mon = ptVar6->tm_mon;
      local_930.tm_year = ptVar6->tm_year;
      local_930.tm_gmtoff = ptVar6->tm_gmtoff;
      local_930.tm_isdst = ptVar6->tm_isdst;
      local_930._36_4_ = *(undefined4 *)&ptVar6->field_0x24;
      local_930.tm_zone = ptVar6->tm_zone;
      local_930.tm_hour = ptVar6->tm_hour;
      local_930.tm_mday = ptVar6->tm_mday;
      local_930.tm_sec = ptVar6->tm_sec;
      local_930.tm_min = ptVar6->tm_min;
      local_4e0[0x68] = '\0';
      local_4e0[0x69] = '\0';
      local_4e0[0x6a] = '\0';
      local_4e0[0x6b] = '\0';
      local_4e0[0x6c] = '\0';
      local_4e0[0x6d] = '\0';
      local_4e0[0x6e] = '\0';
      local_4e0[0x6f] = '\0';
      local_4e0[0x60] = '\0';
      local_4e0[0x61] = '\0';
      local_4e0[0x62] = '\0';
      local_4e0[99] = '\0';
      local_4e0[100] = '\0';
      local_4e0[0x65] = '\0';
      local_4e0[0x66] = '\0';
      local_4e0[0x67] = '\0';
      local_4e0[0x78] = '\0';
      local_4e0[0x79] = '\0';
      local_4e0[0x7a] = '\0';
      local_4e0[0x7b] = '\0';
      local_4e0[0x7c] = '\0';
      local_4e0[0x7d] = '\0';
      local_4e0[0x7e] = '\0';
      local_4e0[0x7f] = '\0';
      local_4e0[0x70] = '\0';
      local_4e0[0x71] = '\0';
      local_4e0[0x72] = '\0';
      local_4e0[0x73] = '\0';
      local_4e0[0x74] = '\0';
      local_4e0[0x75] = '\0';
      local_4e0[0x76] = '\0';
      local_4e0[0x77] = '\0';
      local_4e0[0x48] = '\0';
      local_4e0[0x49] = '\0';
      local_4e0[0x4a] = '\0';
      local_4e0[0x4b] = '\0';
      local_4e0[0x4c] = '\0';
      local_4e0[0x4d] = '\0';
      local_4e0[0x4e] = '\0';
      local_4e0[0x4f] = '\0';
      local_4e0[0x40] = '\0';
      local_4e0[0x41] = '\0';
      local_4e0[0x42] = '\0';
      local_4e0[0x43] = '\0';
      local_4e0[0x44] = '\0';
      local_4e0[0x45] = '\0';
      local_4e0[0x46] = '\0';
      local_4e0[0x47] = '\0';
      local_4e0[0x58] = '\0';
      local_4e0[0x59] = '\0';
      local_4e0[0x5a] = '\0';
      local_4e0[0x5b] = '\0';
      local_4e0[0x5c] = '\0';
      local_4e0[0x5d] = '\0';
      local_4e0[0x5e] = '\0';
      local_4e0[0x5f] = '\0';
      local_4e0[0x50] = '\0';
      local_4e0[0x51] = '\0';
      local_4e0[0x52] = '\0';
      local_4e0[0x53] = '\0';
      local_4e0[0x54] = '\0';
      local_4e0[0x55] = '\0';
      local_4e0[0x56] = '\0';
      local_4e0[0x57] = '\0';
      _strftime(local_4e0 + 0x40,0x40,"%Y-%m-%d %z %H:%M:%S",&local_930);
      ptVar6 = _localtime(&local_8f8);
      local_930.tm_wday = ptVar6->tm_wday;
      local_930.tm_yday = ptVar6->tm_yday;
      local_930.tm_mon = ptVar6->tm_mon;
      local_930.tm_year = ptVar6->tm_year;
      local_930.tm_gmtoff = ptVar6->tm_gmtoff;
      local_930.tm_isdst = ptVar6->tm_isdst;
      local_930._36_4_ = *(undefined4 *)&ptVar6->field_0x24;
      local_930.tm_zone = ptVar6->tm_zone;
      local_930.tm_hour = ptVar6->tm_hour;
      local_930.tm_mday = ptVar6->tm_mday;
      local_930.tm_sec = ptVar6->tm_sec;
      local_930.tm_min = ptVar6->tm_min;
      local_4e0[0x28] = '\0';
      local_4e0[0x29] = '\0';
      local_4e0[0x2a] = '\0';
      local_4e0[0x2b] = '\0';
      local_4e0[0x2c] = '\0';
      local_4e0[0x2d] = '\0';
      local_4e0[0x2e] = '\0';
      local_4e0[0x2f] = '\0';
      local_4e0[0x20] = '\0';
      local_4e0[0x21] = '\0';
      local_4e0[0x22] = '\0';
      local_4e0[0x23] = '\0';
      local_4e0[0x24] = '\0';
      local_4e0[0x25] = '\0';
      local_4e0[0x26] = '\0';
      local_4e0[0x27] = '\0';
      local_4e0[0x38] = '\0';
      local_4e0[0x39] = '\0';
      local_4e0[0x3a] = '\0';
      local_4e0[0x3b] = '\0';
      local_4e0[0x3c] = '\0';
      local_4e0[0x3d] = '\0';
      local_4e0[0x3e] = '\0';
      local_4e0[0x3f] = '\0';
      local_4e0[0x30] = '\0';
      local_4e0[0x31] = '\0';
      local_4e0[0x32] = '\0';
      local_4e0[0x33] = '\0';
      local_4e0[0x34] = '\0';
      local_4e0[0x35] = '\0';
      local_4e0[0x36] = '\0';
      local_4e0[0x37] = '\0';
      local_4e0[8] = '\0';
      local_4e0[9] = '\0';
      local_4e0[10] = '\0';
      local_4e0[0xb] = '\0';
      local_4e0[0xc] = '\0';
      local_4e0[0xd] = '\0';
      local_4e0[0xe] = '\0';
      local_4e0[0xf] = '\0';
      local_4e0[0] = '\0';
      local_4e0[1] = '\0';
      local_4e0[2] = '\0';
      local_4e0[3] = '\0';
      local_4e0[4] = '\0';
      local_4e0[5] = '\0';
      local_4e0[6] = '\0';
      local_4e0[7] = '\0';
      local_4e0[0x18] = '\0';
      local_4e0[0x19] = '\0';
      local_4e0[0x1a] = '\0';
      local_4e0[0x1b] = '\0';
      local_4e0[0x1c] = '\0';
      local_4e0[0x1d] = '\0';
      local_4e0[0x1e] = '\0';
      local_4e0[0x1f] = '\0';
      local_4e0[0x10] = '\0';
      local_4e0[0x11] = '\0';
      local_4e0[0x12] = '\0';
      local_4e0[0x13] = '\0';
      local_4e0[0x14] = '\0';
      local_4e0[0x15] = '\0';
      local_4e0[0x16] = '\0';
      local_4e0[0x17] = '\0';
      _strftime(local_4e0,0x40,"%Y-%m-%d %z %H:%M:%S",&local_930);
      _bzero(local_8e0,0x400);
      _snprintf((char *)local_8e0,0x400,
                "[F][ last log file:%s from %s to %s, time_diff:%ld, tick_diff:%llu\n");
      FUN_1006919e4(auStack_958,0x80);
      uVar14 = *(undefined8 *)(param_1 + 0x78);
      sVar10 = _strnlen((char *)local_8e0,0x400);
      FUN_1006a8a14(uVar14,local_8e0,sVar10,auStack_958);
      puVar11 = auStack_958;
      FUN_100691fa4(puVar11,0);
      puVar12 = auStack_958;
      FUN_100691e98(puVar12);
      FUN_1006a2e64(param_1,puVar11,puVar12,*(undefined8 *)(param_1 + 0x1a0));
      FUN_1006919f4(auStack_958);
      local_8f0.tv_sec = local_8f8;
    }
    _memcpy((void *)(param_1 + 0x268),local_458,0x400);
    *(long *)(param_1 + 0x260) = lVar5;
    *(__darwin_time_t *)(param_1 + 600) = local_8f0.tv_sec;
  }
  bVar3 = *(long *)(param_1 + 0x1a0) != 0;
LAB_1006a3358:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar3);
}

