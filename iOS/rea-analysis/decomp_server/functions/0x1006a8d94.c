// rea decompile_all
// name: FUN_1006a8d94
// address: 0x1006a8d94
// body: available
// range: 0x1006a8d94-0x1006a8ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006a8d94(pthread_key_t *param_1)

{
  pthread_key_t *ppVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  pthread_key_t *local_98;
  long local_90;
  long lStack_88;
  long local_80;
  void *local_78;
  long lStack_70;
  long local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  long lStack_58;
  long lStack_50;
  void *local_48;
  long lStack_40;
  long local_38;
  
  ppVar1 = param_1;
  local_98 = param_1;
  std::__thread_local_data();
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  _pthread_setspecific(*ppVar1,pvVar3);
  local_60 = 0;
  lStack_50 = 0;
  lStack_58 = 0;
  lStack_40 = 0;
  local_48 = (void *)0x0;
  local_38 = 0;
  ppVar1 = (pthread_key_t *)param_1[1];
  if (-1 < *(char *)((long)param_1 + 0x1f)) {
    ppVar1 = param_1 + 1;
  }
  FUN_1006a8140(ppVar1,(int)param_1[4],*(undefined4 *)((long)param_1 + 0x24),&lStack_58,&lStack_50,
                &local_48);
  local_60 = SUB81(ppVar1,0);
  plVar5 = (long *)param_1[5];
  local_80 = lStack_50;
  local_90 = CONCAT71(uStack_5f,local_60);
  lStack_88 = lStack_58;
  if (local_38 < 0) {
    FUN_100384eb8(&local_78,local_48,lStack_40);
  }
  else {
    lStack_70 = lStack_40;
    local_78 = local_48;
    local_68 = local_38;
  }
  std::mutex::lock();
  plVar2 = operator_new(0x40);
  plVar2[3] = lStack_88;
  plVar2[2] = local_90;
  plVar2[4] = local_80;
  plVar2[6] = lStack_70;
  plVar2[5] = (long)local_78;
  plVar2[7] = local_68;
  local_78 = (void *)0x0;
  lStack_70 = 0;
  local_68 = 0;
  lVar4 = *plVar5;
  *plVar2 = lVar4;
  plVar2[1] = (long)plVar5;
  *(long **)(lVar4 + 8) = plVar2;
  *plVar5 = (long)plVar2;
  plVar5[2] = plVar5[2] + 1;
  std::condition_variable::notify_one();
  std::mutex::unlock();
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  FUN_1006a8ee8(&local_98);
  return 0;
}

