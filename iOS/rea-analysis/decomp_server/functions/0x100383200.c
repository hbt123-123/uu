// rea decompile_all
// name: FUN_100383200
// address: 0x100383200
// body: available
// range: 0x100383200-0x10038350b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100383508 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003834a4) */

long FUN_100383200(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  long *plVar7;
  undefined8 ***local_138 [2];
  char local_121;
  undefined8 ***local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 ***local_108;
  undefined8 uStack_100;
  byte bStack_f1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined1 uStack_91;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  long *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = (long *)0x0;
  local_a0 = 0x3f800000;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_d0 = 0x3f800000;
  puStack_88 = &local_f0;
  local_90 = &PTR_FUN_1009b5a78;
  local_80 = &local_c0;
  local_78 = &local_90;
  FUN_10039070c(param_2,1,&local_90);
  if (local_78 == &local_90) {
    lVar6 = 0x20;
  }
  else {
    if (local_78 == (long *)0x0) goto LAB_1003832a8;
    lVar6 = 0x28;
  }
  (**(code **)(*local_78 + lVar6))();
LAB_1003832a8:
  if ((local_a8 == 0) || (FUN_10039046c(param_1), local_b0 == (long *)0x0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    plVar7 = local_b0;
    do {
      sVar3 = plVar7[3];
      if (-1 < (char)*(byte *)((long)plVar7 + 0x27)) {
        sVar3 = (ulong)*(byte *)((long)plVar7 + 0x27);
      }
      FUN_1003856e0(&local_90,sVar3 + 4,&local_108);
      plVar1 = plVar7 + 2;
      if (sVar3 != 0) {
        plVar2 = (long *)plVar7[2];
        if (-1 < *(char *)((long)plVar7 + 0x27)) {
          plVar2 = plVar1;
        }
        _memmove(&local_90,plVar2,sVar3);
      }
      *(undefined4 *)((long)&local_90 + sVar3) = 0x6372632e;
      *(undefined1 *)((long)&local_90 + sVar3 + 4) = 0;
      puVar4 = &local_f0;
      FUN_1003850cc(puVar4,&local_90);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_100386734(2,"MMKV.cpp","backupAllToDirectory",0x54b,"crc not exist [%s]");
      }
      else {
        FUN_10038315c(&local_108,plVar1);
        if ((int)param_3 == 0) {
          FUN_10037fd50(&local_120,&local_108,param_2);
        }
        else if ((char)bStack_f1 < '\0') {
          FUN_100384eb8(&local_120,local_108,uStack_100);
        }
        else {
          uStack_118 = uStack_100;
          local_120 = local_108;
          local_110 = (ulong)bStack_f1 << 0x38;
        }
        sVar3 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          sVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
        }
        FUN_1003856e0(local_138,sVar3 + 1,&uStack_91);
        ppppuVar5 = (undefined8 ****)local_138[0];
        if (-1 < local_121) {
          ppppuVar5 = local_138;
        }
        if (sVar3 != 0) {
          puVar4 = (void *)*param_1;
          if (-1 < *(char *)((long)param_1 + 0x17)) {
            puVar4 = param_1;
          }
          _memmove(ppppuVar5,puVar4,sVar3);
        }
        *(undefined2 *)((long)ppppuVar5 + sVar3) = 0x2f;
        ppppuVar5 = (undefined8 ****)local_108;
        if (-1 < (char)bStack_f1) {
          ppppuVar5 = &local_108;
        }
        std::string::append((char *)local_138,(ulong)ppppuVar5);
        ppppuVar5 = &local_120;
        FUN_100382538(ppppuVar5,local_138,plVar1,param_3);
        if (local_121 < '\0') {
          operator_delete(local_138[0]);
        }
        if (local_110 < 0) {
          operator_delete(local_120);
        }
        if ((char)bStack_f1 < '\0') {
          operator_delete(local_108);
        }
        lVar6 = lVar6 + ((ulong)ppppuVar5 & 0xffffffff);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  FUN_100385cf8(&local_f0);
  FUN_100385cf8(&local_c0);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

