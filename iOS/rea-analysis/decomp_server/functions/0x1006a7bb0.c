// rea decompile_all
// name: FUN_1006a7bb0
// address: 0x1006a7bb0
// body: available
// range: 0x1006a7bb0-0x1006a80ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001006a7d64) */
/* WARNING: Removing unreachable block (ram,0x0001006a7cd4) */
/* WARNING: Removing unreachable block (ram,0x0001006a8094) */

long FUN_1006a7bb0(ulong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,__thread_struct *param_6,ulong param_7)

{
  size_t sVar1;
  undefined8 ****ppppuVar2;
  string *psVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined4 extraout_var;
  pthread_t p_Var11;
  undefined8 ****ppppuVar12;
  pthread_t *pp_Var13;
  pthread_t p_Var14;
  ulong uVar15;
  long *plVar16;
  undefined8 ***local_128 [2];
  char local_111;
  undefined8 ***local_110 [2];
  char local_f9;
  undefined8 ***local_f8 [2];
  char local_e1;
  pthread_t local_e0;
  undefined8 **ppuStack_d8;
  undefined8 **local_d0;
  pthread_t local_c0;
  pthread_t p_Stack_b8;
  pthread_t local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined8 local_88;
  long *plStack_80;
  long *plStack_78;
  
  plVar8 = operator_new(0xa8);
  plVar16 = plVar8 + 1;
  *plVar16 = 0;
  *plVar8 = (long)&PTR_FUN_1009e6d98;
  plStack_80 = plVar8 + 3;
  plVar8[2] = 0;
  plVar8[3] = (long)plStack_80;
  plVar8[4] = (long)plStack_80;
  plVar8[6] = 0x32aaaba7;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar8[0xc] = 0;
  plVar8[0xb] = 0;
  plVar8[0xd] = 0;
  p_Var14 = (pthread_t)(plVar8 + 0xe);
  p_Var14->__sig = 0x3cb0b1bb;
  plVar8[0x10] = 0;
  plVar8[0xf] = 0;
  plVar8[0x12] = 0;
  plVar8[0x11] = 0;
  plVar8[0x13] = 0;
  plVar8[0x14] = 1;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    FUN_100384eb8(&local_a0,*param_1,param_1[1]);
  }
  else {
    uStack_98 = param_1[1];
    local_a0 = *param_1;
    local_90 = param_1[2];
  }
  local_88 = CONCAT44(param_3,param_2);
  plVar8[1] = plVar8[1] + 1;
  plStack_78 = plVar8;
  pvVar9 = operator_new(8);
  std::__thread_struct::__thread_struct(param_6);
  puVar10 = operator_new(0x38);
  *puVar10 = pvVar9;
  puVar10[2] = uStack_98;
  puVar10[1] = local_a0;
  puVar10[3] = local_90;
  puVar10[4] = local_88;
  puVar10[6] = plStack_78;
  puVar10[5] = plStack_80;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  iVar7 = _pthread_create(&local_e0,(pthread_attr_t *)0x0,(void **)FUN_1006a8d94,puVar10);
  lVar5 = CONCAT44(extraout_var,iVar7);
  if (iVar7 != 0) {
    std::__throw_system_error(iVar7,"thread constructor failed");
    plVar8 = *(long **)(lVar5 + 8);
    if (plVar8 != (long *)0x0) {
      LOAcquire();
      lVar6 = plVar8[1];
      plVar8[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        std::__shared_weak_count::__release_weak();
      }
    }
    return lVar5;
  }
  p_Var11 = (pthread_t)(plVar8 + 6);
  local_c0 = (pthread_t)0x0;
  FUN_1006a8ee8(&local_c0);
  std::thread::detach();
  std::thread::~thread((thread *)param_6);
  if (plStack_78 != (long *)0x0) {
    LOAcquire();
    lVar5 = plStack_78[1];
    plStack_78[1] = lVar5 + -1;
    LORelease();
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_a0 = local_a0 & 0xffffffffffffff00;
  local_90 = 0;
  uStack_98 = 0;
  plStack_80 = (long *)0x0;
  local_88 = 0;
  plStack_78 = (long *)0x0;
  p_Stack_b8 = (pthread_t)CONCAT71(p_Stack_b8._1_7_,1);
  local_c0 = p_Var11;
  std::mutex::lock();
  if (plVar8[5] == 0) {
    std::chrono::steady_clock::now();
    puVar10 = (undefined8 *)((long)p_Var11 + (param_7 & 0xffffffff) * 1000000);
    std::chrono::steady_clock::now();
    if ((long)p_Var11 < (long)puVar10) {
      std::chrono::steady_clock::now();
      uVar15 = (long)puVar10 - (long)p_Var11;
      if (0 < (long)uVar15) {
        std::chrono::steady_clock::now();
        std::chrono::system_clock::now();
        if (p_Var11 == (pthread_t)0x0) {
          lVar5 = 0;
LAB_1006a7e94:
          lVar5 = lVar5 + uVar15;
        }
        else {
          if ((long)p_Var11 < 1) {
            if ((pthread_t)0xffdf3b645a1cac08 < p_Var11) goto LAB_1006a7e78;
            lVar5 = -0x8000000000000000;
            goto LAB_1006a7e94;
          }
          if (p_Var11 < (pthread_t)0x20c49ba5e353f8) {
LAB_1006a7e78:
            lVar5 = (long)p_Var11 * 1000;
          }
          else {
            lVar5 = 0x7fffffffffffffff;
          }
          if (lVar5 <= (long)(uVar15 ^ 0x7fffffffffffffff)) goto LAB_1006a7e94;
          lVar5 = 0x7fffffffffffffff;
        }
        std::condition_variable::__do_timed_wait(p_Var14,&local_c0,lVar5);
        std::chrono::steady_clock::now();
        p_Var11 = p_Var14;
      }
      std::chrono::steady_clock::now();
      if ((long)p_Var11 < (long)puVar10) goto LAB_1006a7d9c;
    }
    iVar7 = 0;
  }
  else {
LAB_1006a7d9c:
    lVar5 = plVar8[4];
    uStack_98 = *(undefined8 *)(lVar5 + 0x18);
    local_a0 = *(ulong *)(lVar5 + 0x10);
    local_90 = *(undefined8 *)(lVar5 + 0x20);
    plStack_80 = *(long **)(lVar5 + 0x30);
    local_88 = *(undefined8 *)(lVar5 + 0x28);
    plStack_78 = *(long **)(lVar5 + 0x38);
    *(undefined1 *)(lVar5 + 0x3f) = 0;
    *(undefined1 *)(lVar5 + 0x28) = 0;
    lVar5 = *(long *)plVar8[4];
    plVar4 = (long *)((long *)plVar8[4])[1];
    *(long **)(lVar5 + 8) = plVar4;
    *plVar4 = lVar5;
    plVar8[5] = plVar8[5] + -1;
    FUN_1006a8d64();
    iVar7 = 1;
  }
  if ((char)p_Stack_b8 == '\x01') {
    std::mutex::unlock();
  }
  if ((iVar7 == 0) || ((local_a0 & 1) == 0)) {
    sVar1 = *(size_t *)(param_6 + 8);
    if (-1 < (char)*(string *)(param_6 + 0x17)) {
      sVar1 = (ulong)(byte)*(string *)(param_6 + 0x17);
    }
    FUN_1006a5804(local_f8,sVar1 + 10,&local_c0);
    ppppuVar2 = (undefined8 ****)local_f8[0];
    if (-1 < local_e1) {
      ppppuVar2 = local_f8;
    }
    if (sVar1 != 0) {
      psVar3 = *(string **)param_6;
      if (-1 < (char)*(string *)(param_6 + 0x17)) {
        psVar3 = (string *)param_6;
      }
      _memmove(ppppuVar2,psVar3,sVar1);
    }
    builtin_strncpy((char *)((long)ppppuVar2 + sVar1),"recv_succ:",0xb);
    std::to_string(iVar7);
    ppppuVar2 = (undefined8 ****)local_110[0];
    if (-1 < local_f9) {
      ppppuVar2 = local_110;
    }
    ppppuVar12 = local_f8;
    std::string::append((char *)ppppuVar12,(ulong)ppppuVar2);
    local_d0 = ppppuVar12[2];
    ppuStack_d8 = ppppuVar12[1];
    local_e0 = (pthread_t)*ppppuVar12;
    ppppuVar12[1] = (undefined8 ***)0x0;
    ppppuVar12[2] = (undefined8 ***)0x0;
    *ppppuVar12 = (undefined8 ***)0x0;
    pp_Var13 = &local_e0;
    std::string::append((char *)pp_Var13);
    local_b0 = pp_Var13[2];
    p_Stack_b8 = pp_Var13[1];
    local_c0 = *pp_Var13;
    pp_Var13[1] = (pthread_t)0x0;
    pp_Var13[2] = (pthread_t)0x0;
    *pp_Var13 = (pthread_t)0x0;
    std::to_string((uint)(byte)local_a0);
    ppppuVar2 = (undefined8 ****)local_128[0];
    if (-1 < local_111) {
      ppppuVar2 = local_128;
    }
    pp_Var13 = &local_c0;
    std::string::append((char *)pp_Var13,(ulong)ppppuVar2);
    p_Var14 = *pp_Var13;
    *pp_Var13 = (pthread_t)0x0;
    pp_Var13[1] = (pthread_t)0x0;
    pp_Var13[2] = (pthread_t)0x0;
    if (*(char *)((long)pp_Var13 + 0x17) < '\0') {
      operator_delete(p_Var14);
    }
    if (local_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    if ((long)local_d0 < 0) {
      operator_delete(local_e0);
    }
    if (local_f9 < '\0') {
      operator_delete(local_110[0]);
    }
    if (local_e1 < '\0') {
      operator_delete(local_f8[0]);
    }
    lVar5 = 0;
  }
  else {
    *param_4 = uStack_98;
    *param_5 = local_90;
    std::string::operator=((string *)param_6,(string *)param_6);
    lVar5 = 1;
  }
  LOAcquire();
  lVar6 = *plVar16;
  *plVar16 = lVar6 + -1;
  LORelease();
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
  }
  return lVar5;
}

