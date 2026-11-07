// rea decompile_all
// name: FUN_100782c00
// address: 0x100782c00
// body: available
// range: 0x100782c00-0x100782e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100782c00(void)

{
  bool bVar1;
  task_t target_task;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  kern_return_t error_value;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 *puVar11;
  pthread_t p_Var12;
  char *pcVar13;
  undefined8 *puVar14;
  vm_size_t size;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  char local_460 [1000];
  thread_act_array_t local_78;
  uint local_6c [3];
  
  _usleep(1);
  puVar2 = PTR__mach_task_self__1009954c8;
  do {
    uVar8 = DAT_100b2e030;
    if (DAT_100b2e020 < 1) {
      target_task = *(task_t *)puVar2;
      uVar17 = (ulong)DAT_100b2e030;
      error_value = _task_threads(target_task,&local_78,local_6c);
      uVar15 = local_6c[0];
      if (error_value == 0) {
        uVar16 = (ulong)local_6c[0];
        pvVar9 = _calloc(uVar16,8);
        pvVar10 = _calloc(uVar16,8);
        puVar11 = _calloc(uVar16,8);
        DAT_100b2e048 = puVar11;
        DAT_100b2e050 = _calloc(uVar16,8);
        if (uVar15 == 0) {
          puVar14 = DAT_100b2e050;
          uVar15 = 0;
        }
        else {
          uVar16 = 0;
          do {
            uVar15 = local_78[uVar16];
            p_Var12 = _pthread_from_mach_thread_np(uVar15);
            *(ulong *)((long)pvVar9 + uVar16 * 8) = (ulong)uVar15;
            *(pthread_t *)((long)pvVar10 + uVar16 * 8) = p_Var12;
            if ((p_Var12 != (pthread_t)0x0) &&
               (iVar7 = _pthread_getname_np(p_Var12,local_460,1000),
               iVar7 == 0 && local_460[0] != '\0')) {
              pcVar13 = _strdup(local_460);
              DAT_100b2e048[uVar16] = pcVar13;
            }
            uVar16 = uVar16 + 1;
            puVar14 = DAT_100b2e050;
            puVar11 = DAT_100b2e048;
            uVar15 = local_6c[0];
          } while (uVar16 < local_6c[0]);
        }
        pvVar6 = DAT_100b2e058;
        puVar5 = DAT_100b2e040;
        pvVar4 = DAT_100b2e038;
        puVar3 = DAT_100b2e028;
        DAT_100b2e048 = DAT_100b2e028;
        DAT_100b2e050 = DAT_100b2e040;
        bVar1 = DAT_100b2e038 != (void *)0x0;
        DAT_100b2e028 = puVar11;
        DAT_100b2e030 = uVar15;
        DAT_100b2e038 = pvVar9;
        DAT_100b2e040 = puVar14;
        DAT_100b2e058 = pvVar10;
        if (bVar1) {
          _free(pvVar4);
        }
        if (pvVar6 != (void *)0x0) {
          _free(pvVar6);
        }
        if (puVar3 != (undefined8 *)0x0) {
          puVar11 = puVar3;
          uVar16 = uVar17;
          if (0 < (int)uVar8) {
            do {
              if ((void *)*puVar11 != (void *)0x0) {
                _free((void *)*puVar11);
              }
              puVar11 = puVar11 + 1;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          _free(puVar3);
        }
        if (puVar5 != (undefined8 *)0x0) {
          puVar11 = puVar5;
          if (0 < (int)uVar8) {
            do {
              if ((void *)*puVar11 != (void *)0x0) {
                _free((void *)*puVar11);
              }
              uVar17 = uVar17 - 1;
              puVar11 = puVar11 + 1;
            } while (uVar17 != 0);
          }
          _free(puVar5);
        }
        if (local_6c[0] == 0) {
          size = 0;
        }
        else {
          uVar17 = 0;
          do {
            _mach_port_deallocate(target_task,local_78[uVar17]);
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_6c[0]);
          size = (ulong)local_6c[0] << 2;
        }
        _vm_deallocate(target_task,(vm_address_t)local_78,size);
      }
      else {
        _mach_error_string(error_value);
        FUN_1007b02e4("ERROR",
                      "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/SentryCrashCachedData.c"
                      ,0x46,"task_threads: %s");
      }
    }
    uVar8 = DAT_100b2e014;
    if (0 < DAT_100abb41c) {
      uVar8 = 1;
      DAT_100abb41c = DAT_100abb41c + -1;
    }
    _sleep(uVar8);
  } while( true );
}

