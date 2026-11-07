// rea decompile_all
// name: FUN_10069b24c
// address: 0x10069b24c
// body: available
// range: 0x10069b24c-0x10069b517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010069b4e8) */
/* WARNING: Removing unreachable block (ram,0x00010069b4f8) */

void FUN_10069b24c(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  void *local_d8 [2];
  char local_c1;
  undefined **local_c0;
  long lStack_b8;
  long local_b0;
  long *local_80;
  undefined1 local_70 [24];
  undefined8 local_58;
  long lStack_50;
  undefined8 local_48;
  
  local_58 = (undefined **)0x0;
  lStack_50 = 0;
  local_48 = 0;
  FUN_10069f164();
  lVar4 = *param_1;
  lVar5 = *(long *)(lVar4 + 0x28);
LAB_10069b284:
  do {
    ppuVar6 = *(undefined ***)(lVar4 + 0x30);
    lVar2 = _sysconf(0x5b);
    if (lVar2 < 0) {
      local_c0 = (undefined **)0x0;
      piVar3 = ___error();
      *piVar3 = 0;
      _readdir();
      if (lVar5 == 0) {
        piVar3 = ___error();
        iVar1 = *piVar3;
        goto joined_r0x00010069b308;
      }
      _strcpy((char *)((long)ppuVar6 + 0x15),(char *)(lVar5 + 0x15));
      local_c0 = ppuVar6;
      if (ppuVar6 == (undefined **)0x0) goto LAB_10069b2ec;
LAB_10069b314:
      piVar3 = (int *)&local_58;
      std::string::assign((char *)piVar3);
      iVar1 = DAT_100b2c490;
    }
    else {
      _readdir_r(lVar5,ppuVar6,&local_c0);
      iVar1 = (int)lVar5;
joined_r0x00010069b308:
      if (iVar1 == 0) {
        if (local_c0 != (undefined **)0x0) goto LAB_10069b314;
LAB_10069b2ec:
        piVar3 = (int *)(lVar4 + 0x28);
        FUN_10069aed4(piVar3,(undefined8 *)(lVar4 + 0x30));
        iVar1 = (int)piVar3;
      }
      else {
        piVar3 = ___error();
        iVar1 = *piVar3;
        FUN_10069f164();
      }
    }
    if (iVar1 != 0) {
      FUN_10069cd8c(local_70,*param_1);
      FUN_10069b1d0(param_1);
      if (param_2 != (int *)0x0) {
        piVar3 = ___error();
        iVar1 = *piVar3;
        FUN_10069f164();
        *param_2 = iVar1;
        *(int **)(param_2 + 2) = piVar3;
        return;
      }
      FUN_1006928dc(local_d8,"mars_boost::filesystem::directory_iterator::operator++");
      piVar3 = ___error();
      iVar1 = *piVar3;
      FUN_10069f164();
      FUN_10069b5dc(&local_c0,local_d8,local_70,iVar1,piVar3);
      FUN_1006924cc(&local_c0);
      local_c0 = &PTR_FUN_1009e6910;
      if (local_80 != (long *)0x0) {
        LOAcquire();
        iVar1 = (int)local_80[1];
        *(int *)(local_80 + 1) = iVar1 + -1;
        LORelease();
        if (iVar1 == 1) {
          (**(code **)(*local_80 + 0x10))(local_80);
          LOAcquire();
          iVar1 = *(int *)((long)local_80 + 0xc);
          *(int *)((long)local_80 + 0xc) = iVar1 + -1;
          LORelease();
          if (iVar1 == 1) {
            (**(code **)(*local_80 + 0x18))(local_80);
          }
        }
      }
      FUN_10069b978(&local_c0);
      if (-1 < local_c1) {
        return;
      }
      operator_delete(local_d8[0]);
      return;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      FUN_10069f164();
      *(int **)(param_2 + 2) = piVar3;
    }
    lVar4 = *param_1;
    lVar5 = *(long *)(lVar4 + 0x28);
    if (lVar5 == 0) {
      FUN_10069b1d0(param_1);
      return;
    }
    lVar2 = (long)local_48._7_1_;
    if (lVar2 < 0) {
      if (*(char *)local_58 != '.') goto LAB_10069b3fc;
      if (lStack_50 == 1) goto LAB_10069b284;
      lVar2 = lStack_50;
      if (*(char *)((long)local_58 + 1) != '.') goto LAB_10069b3fc;
    }
    else {
      if ((char)local_58 != '.') goto LAB_10069b3a8;
      if (local_48._7_1_ == '\x01') goto LAB_10069b284;
      if (local_58._1_1_ != '.') goto LAB_10069b3a8;
    }
    if (lVar2 != 2) {
      if (local_48 < 0) {
LAB_10069b3fc:
        FUN_100384eb8(&local_c0,local_58,lStack_50);
      }
      else {
LAB_10069b3a8:
        lStack_b8 = lStack_50;
        local_c0 = local_58;
        local_b0 = local_48;
      }
      FUN_10069c604(lVar4);
      FUN_10069bf10(lVar4,&local_c0);
      *(undefined8 *)(lVar4 + 0x20) = 0xffff00000000;
      *(undefined8 *)(lVar4 + 0x18) = 0xffff00000000;
      if (local_b0 < 0) {
        operator_delete(local_c0);
      }
      return;
    }
  } while( true );
}

