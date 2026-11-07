// rea decompile_all
// name: FUN_10079ac28
// address: 0x10079ac28
// body: available
// range: 0x10079ac28-0x10079ae47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079ae44 to 0x10074d7cc FUN_10074d7cc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079ac28(undefined8 *param_1)

{
  undefined8 *puVar1;
  thread_act_t tVar2;
  undefined *puVar3;
  kern_return_t kVar4;
  thread_act_t *ptVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  thread_act_array_t local_98;
  uint local_8c;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = PTR__mach_task_self__1009954c8;
  kVar4 = _task_threads(*(task_t *)PTR__mach_task_self__1009954c8,&local_98,&local_8c);
  if (kVar4 == 0) {
    uVar15 = (ulong)local_8c;
    if (local_8c == 0) {
      uVar15 = 0;
    }
    else {
      uVar14 = 0;
      puVar1 = param_1 + 2;
      do {
        tVar2 = local_98[uVar14];
        ptVar5 = operator_new(0x10);
        *ptVar5 = tVar2;
        *(undefined1 *)(ptVar5 + 1) = 1;
        ptVar5[2] = 0;
        ptVar5[3] = 0;
        puVar8 = (undefined8 *)param_1[1];
        if (puVar8 < (undefined8 *)param_1[2]) {
          *puVar8 = ptVar5;
          param_1[1] = puVar8 + 1;
        }
        else {
          puVar7 = (undefined8 *)*param_1;
          lVar16 = (long)puVar8 - (long)puVar7 >> 3;
          uVar15 = lVar16 + 1;
          if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_10074d7cc(param_1);
          }
          uVar9 = (long)param_1[2] - (long)puVar7;
          uVar13 = (long)uVar9 >> 2;
          if (uVar13 <= uVar15) {
            uVar13 = uVar15;
          }
          if (0x7ffffffffffffff7 < uVar9) {
            uVar13 = 0x1fffffffffffffff;
          }
          local_68 = puVar1;
          if (uVar13 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            puVar6 = puVar1;
            FUN_10038c0f4();
            puVar7 = (undefined8 *)*param_1;
            puVar8 = (undefined8 *)param_1[1];
          }
          puVar10 = puVar6 + lVar16;
          puVar11 = puVar10 + 1;
          *puVar10 = ptVar5;
          local_88 = puVar7;
          if (puVar8 != puVar7) {
            do {
              puVar8 = puVar8 + -1;
              uVar12 = *puVar8;
              *puVar8 = 0;
              puVar10 = puVar10 + -1;
              *puVar10 = uVar12;
            } while (puVar8 != puVar7);
            puVar7 = (undefined8 *)param_1[1];
            local_88 = (undefined8 *)*param_1;
          }
          *param_1 = puVar10;
          param_1[1] = puVar11;
          local_70 = param_1[2];
          param_1[2] = puVar6 + uVar13;
          puStack_80 = local_88;
          local_78 = puVar7;
          FUN_10079b54c(&local_88);
          uVar15 = (ulong)local_8c;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar15);
    }
  }
  else {
    FUN_1007a671c();
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                  ,0x32,"%s failed with kern return code: %d, description: %s");
    uVar15 = (ulong)local_8c;
  }
  kVar4 = _vm_deallocate(*(vm_map_t *)puVar3,(vm_address_t)local_98,uVar15 << 2);
  if (kVar4 != 0) {
    FUN_1007a671c();
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                  ,0x3b,"%s failed with kern return code: %d, description: %s");
  }
  return;
}

