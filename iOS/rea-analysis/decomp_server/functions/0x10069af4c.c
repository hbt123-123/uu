// rea decompile_all
// name: FUN_10069af4c
// address: 0x10069af4c
// body: available
// range: 0x10069af4c-0x10069b1cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069af4c(string *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  void *pvVar4;
  char **ppcVar5;
  char *pcVar6;
  int iVar7;
  string *psVar8;
  uint uVar9;
  long lVar10;
  char *local_a8;
  ulong uStack_a0;
  undefined3 local_98;
  undefined1 uStack_95;
  undefined3 uStack_94;
  char local_91;
  char *local_90;
  char *pcStack_88;
  char *local_80;
  undefined3 uStack_78;
  undefined1 local_75;
  undefined3 uStack_74;
  char *local_70;
  ulong uStack_68;
  undefined8 local_60;
  
  uVar1 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  uVar9 = DAT_100b2c4a8;
  if (uVar1 != 0) {
    uVar9 = 0;
  }
  uVar1 = (ulong)uVar9;
  FUN_100699888();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uStack_74 = 0;
  uStack_78 = 0;
  local_75 = 0;
  lVar10 = *(long *)param_1;
  puVar2 = (undefined8 *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
  }
  _opendir();
  *(undefined8 **)(lVar10 + 0x28) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    piVar3 = ___error();
    iVar7 = *piVar3;
    FUN_10069f164();
    pcVar6 = (char *)0x0;
    uVar1 = 0;
    uVar9 = 0;
    if (iVar7 == 0) goto LAB_10069b058;
LAB_10069b028:
    FUN_10069b1d0(param_1);
    FUN_100699888(iVar7,param_2,param_3,"mars_boost::filesystem::directory_iterator::construct");
  }
  else {
    FUN_1006928dc(&local_70,".");
    uVar1 = uStack_68;
    pcVar6 = local_70;
    uVar9 = (uint)local_60._7_1_;
    uStack_78 = (undefined3)local_60;
    local_75 = (undefined1)((ulong)local_60 >> 0x18);
    uStack_74 = (undefined3)((ulong)local_60 >> 0x20);
    if (DAT_100b2c490 == 0) {
      pvVar4 = _malloc(0x419);
      *(void **)(lVar10 + 0x30) = pvVar4;
    }
    else {
      iVar7 = DAT_100b2c490;
      if (DAT_100b2c490 != 0) goto LAB_10069b028;
    }
LAB_10069b058:
    psVar8 = *(string **)param_1;
    if (*(long *)(psVar8 + 0x28) == 0) {
      FUN_10069b1d0(param_1);
    }
    else {
      if (uVar9 >> 7 == 0) {
        _local_98 = CONCAT13(local_75,uStack_78);
        uStack_94 = uStack_74;
        local_91 = (char)uVar9;
        local_a8 = pcVar6;
        uStack_a0 = uVar1;
      }
      else {
        FUN_100384eb8(&local_a8,pcVar6,uVar1);
      }
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_100384eb8(&local_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        local_70 = (char *)*param_2;
        local_60 = param_2[2];
      }
      ppcVar5 = &local_70;
      FUN_10069bf10(ppcVar5,&local_a8);
      if (*(char *)((long)ppcVar5 + 0x17) < '\0') {
        FUN_100384eb8(&local_90,*ppcVar5,ppcVar5[1]);
      }
      else {
        pcStack_88 = ppcVar5[1];
        local_90 = *ppcVar5;
        local_80 = ppcVar5[2];
      }
      if (local_60 < 0) {
        operator_delete(local_70);
      }
      std::string::operator=(param_1,psVar8);
      *(undefined8 *)(psVar8 + 0x20) = 0xffff00000000;
      *(undefined8 *)(psVar8 + 0x18) = 0xffff00000000;
      if ((long)local_80 < 0) {
        operator_delete(local_90);
      }
      if (local_91 < '\0') {
        operator_delete(local_a8);
        if (uVar9 >> 7 != 0) goto LAB_10069b174;
LAB_10069b13c:
        if (((ulong)pcVar6 & 0xff) != 0x2e) {
          return;
        }
        if (uVar9 != 1) {
          if (((ulong)pcVar6 & 0xff00) != 0x2e00) {
            return;
          }
          uVar1 = (ulong)uVar9;
          goto LAB_10069b194;
        }
      }
      else {
        if (uVar9 >> 7 == 0) goto LAB_10069b13c;
LAB_10069b174:
        if (*pcVar6 != '.') goto LAB_10069b1ac;
        if (uVar1 != 1) {
          if (pcVar6[1] != '.') goto LAB_10069b1ac;
LAB_10069b194:
          if (uVar1 != 2) goto LAB_10069b1a8;
        }
      }
      FUN_10069b24c(param_1,param_3);
    }
  }
LAB_10069b1a8:
  if (uVar9 >> 7 == 0) {
    return;
  }
LAB_10069b1ac:
  operator_delete(pcVar6);
  return;
}

