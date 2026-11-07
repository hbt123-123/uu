// rea decompile_all
// name: FUN_10079ae54
// address: 0x10079ae54
// body: available
// range: 0x10079ae54-0x10079b107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079b104 to 0x10074d7cc FUN_10074d7cc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079ae54(undefined8 *param_1)

{
  mach_port_name_t name;
  undefined8 *****pppppuVar1;
  undefined *puVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  kern_return_t kVar5;
  undefined8 ****ppppuVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  undefined8 *****pppppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  mach_port_name_t *local_b8;
  thread_act_array_t local_b0;
  uint local_a4;
  undefined8 ****local_a0;
  undefined8 ****ppppuStack_98;
  undefined8 ****local_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****local_80;
  undefined8 ****local_78;
  undefined8 ****local_70;
  undefined8 ****local_68;
  
  local_a0 = (undefined8 *****)0x0;
  ppppuStack_98 = (undefined8 *****)0x0;
  local_90 = (undefined8 *****)0x0;
  FUN_10079abe4(&local_b8);
  puVar2 = PTR__mach_task_self__1009954c8;
  kVar5 = _task_threads(*(task_t *)PTR__mach_task_self__1009954c8,&local_b0,&local_a4);
  if (kVar5 == 0) {
    uVar8 = (ulong)local_a4;
    if (local_a4 != 0) {
      uVar12 = 0;
      do {
        name = local_b0[uVar12];
        if (name == *local_b8) {
          kVar5 = _mach_port_deallocate(*(ipc_space_t *)puVar2,name);
          if (kVar5 != 0) {
            FUN_1007a671c();
            FUN_1007b02e4("ERROR",
                          "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                          ,0x4f,"%s failed with kern return code: %d, description: %s");
          }
        }
        else {
          ppppuVar6 = operator_new(0x10);
          *(mach_port_name_t *)ppppuVar6 = name;
          *(undefined1 *)((long)ppppuVar6 + 4) = 1;
          ppppuVar6[1] = (undefined8 ***)0x0;
          if (ppppuStack_98 < local_90) {
            *ppppuStack_98 = ppppuVar6;
            ppppuStack_98 = ppppuStack_98 + 1;
          }
          else {
            lVar11 = (long)ppppuStack_98 - (long)local_a0 >> 3;
            uVar8 = lVar11 + 1;
            if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_10074d7cc(&local_a0);
            }
            uVar10 = (long)local_90 - (long)local_a0 >> 2;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_90 - (long)local_a0)) {
              uVar10 = 0x1fffffffffffffff;
            }
            local_68 = &local_90;
            if (uVar10 == 0) {
              pppppuVar7 = (undefined8 *****)0x0;
            }
            else {
              pppppuVar7 = &local_90;
              FUN_10038c0f4();
            }
            pppppuVar9 = pppppuVar7 + lVar11;
            local_70 = pppppuVar7 + uVar10;
            *pppppuVar9 = ppppuVar6;
            pppppuVar4 = pppppuVar9 + 1;
            local_78 = local_a0;
            pppppuVar7 = (undefined8 *****)ppppuStack_98;
            pppppuVar3 = (undefined8 *****)ppppuStack_98;
            pppppuVar1 = (undefined8 *****)local_90;
            while (ppppuStack_98 = pppppuVar4, pppppuVar7 != (undefined8 *****)local_a0) {
              pppppuVar7 = pppppuVar7 + -1;
              ppppuVar6 = *pppppuVar7;
              *pppppuVar7 = (undefined8 ****)0x0;
              pppppuVar9 = pppppuVar9 + -1;
              local_90 = pppppuVar1;
              local_78 = ppppuStack_98;
              *pppppuVar9 = ppppuVar6;
              ppppuStack_98 = pppppuVar3;
              pppppuVar4 = (undefined8 *****)local_78;
              local_78 = ppppuStack_98;
              pppppuVar3 = (undefined8 *****)ppppuStack_98;
              pppppuVar1 = (undefined8 *****)local_90;
            }
            ppppuStack_88 = local_a0;
            local_a0 = pppppuVar9;
            local_90 = local_70;
            local_80 = ppppuStack_88;
            local_70 = pppppuVar1;
            FUN_10079b54c(&ppppuStack_88);
          }
        }
        uVar12 = uVar12 + 1;
        uVar8 = (ulong)local_a4;
      } while (uVar12 < uVar8);
    }
  }
  else {
    FUN_1007a671c();
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                  ,0x46,"%s failed with kern return code: %d, description: %s");
    uVar8 = (ulong)local_a4;
  }
  kVar5 = _vm_deallocate(*(vm_map_t *)puVar2,(vm_address_t)local_b0,uVar8 << 2);
  if (kVar5 != 0) {
    FUN_1007a671c();
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryThreadHandle.cpp"
                  ,0x54,"%s failed with kern return code: %d, description: %s");
  }
  ppppuVar6 = local_90;
  param_1[1] = ppppuStack_98;
  *param_1 = local_a0;
  local_a0 = (undefined8 ****)0x0;
  ppppuStack_98 = (undefined8 ****)0x0;
  local_90 = (undefined8 ****)0x0;
  param_1[2] = ppppuVar6;
  param_1[3] = local_b8;
  FUN_10078709c(&local_a0);
  return;
}

