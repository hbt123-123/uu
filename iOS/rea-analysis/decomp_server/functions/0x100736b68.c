// rea decompile_all
// name: FUN_100736b68
// address: 0x100736b68
// body: available
// range: 0x100736b68-0x10073753f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073753c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100736b68(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined1 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  undefined8 *puVar15;
  code *local_ab8;
  code *local_ab0;
  code *local_aa8;
  code *local_aa0;
  code *local_a98;
  code *pcStack_a90;
  code *local_a88;
  code *pcStack_a80;
  code *local_a78;
  code *pcStack_a70;
  code *local_a68;
  code *pcStack_a60;
  code *local_a58;
  code *pcStack_a50;
  code *local_a48;
  code *local_a40;
  code *local_a38;
  undefined1 *local_a30;
  undefined1 auStack_a28 [28];
  undefined4 local_a0c;
  undefined1 auStack_a08 [8];
  undefined1 *local_a00;
  undefined1 auStack_928 [1024];
  undefined8 local_528 [154];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar3 = auStack_a28;
  FUN_10074adfc(puVar3,param_2,auStack_928,0x400);
  if ((int)puVar3 != 0) {
    FUN_100782ec8();
    local_ab8 = FUN_1007377bc;
    local_ab0 = FUN_1007377c4;
    local_aa8 = FUN_1007377cc;
    local_aa0 = FUN_1007377d4;
    local_a98 = FUN_1007377dc;
    pcStack_a90 = FUN_1007377e8;
    local_a88 = FUN_100737944;
    pcStack_a80 = FUN_100737a48;
    local_a78 = FUN_100737a50;
    pcStack_a70 = FUN_100737a58;
    local_a68 = FUN_100737a60;
    pcStack_a60 = FUN_100737a68;
    local_a58 = FUN_100737a70;
    pcStack_a50 = FUN_100737540;
    local_a48 = FUN_100737b44;
    local_a40 = FUN_100737b4c;
    local_a30 = auStack_a08;
    local_a38 = FUN_100737b54;
    local_a00 = auStack_a28;
    FUN_1007a5460(auStack_a08,1,FUN_100736080,auStack_a28);
    (*local_a48)(&local_ab8,"report");
    FUN_1007360b0(&local_ab8,"standard",*param_1,param_1[0x2f]);
    FUN_10074aec8(auStack_a28);
    (*local_a40)(&local_ab8,"binary_images");
    FUN_1007a1660(FUN_100738320,&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_10074aec8(auStack_a28);
    (*local_a48)(&local_ab8,"process");
    if (param_1[0x36] != 0) {
      (*local_a48)(&local_ab8,"last_dealloced_nsexception");
      (*local_aa0)(&local_ab8,"address",param_1[0x36]);
      (*local_a98)(&local_ab8,"name",param_1[0x37]);
      (*local_a98)(&local_ab8,"reason",param_1[0x38]);
      pcVar11 = (char *)param_1[0x38];
      local_528[0] = 0;
      if (pcVar11 != (char *)0x0) {
        sVar4 = _strlen(pcVar11);
        FUN_10079ecf0(pcVar11,sVar4,local_528);
        if ((int)pcVar11 != 0) {
          local_a0c = 0xf;
          FUN_100737be0(&local_ab8,"referenced_object",local_528[0],&local_a0c);
        }
      }
      (*local_a38)(&local_ab8);
    }
    (*local_a38)(&local_ab8);
    FUN_10074aec8(auStack_a28);
    (*local_a48)(&local_ab8,"system");
    (*local_a98)(&local_ab8,"system_name",param_1[0x1c]);
    (*local_a98)(&local_ab8,"system_version",param_1[0x1d]);
    (*local_a98)(&local_ab8,"machine",param_1[0x1e]);
    (*local_a98)(&local_ab8,"model",param_1[0x1f]);
    (*local_a98)(&local_ab8,"kernel_version",param_1[0x20]);
    (*local_a98)(&local_ab8,"os_version",param_1[0x21]);
    (*local_ab8)(&local_ab8,"jailbroken",*(undefined1 *)(param_1 + 0x22));
    (*local_a98)(&local_ab8,"app_start_time",param_1[0x24]);
    (*local_a98)(&local_ab8,"CFBundleExecutablePath",param_1[0x25]);
    (*local_a98)(&local_ab8,"CFBundleExecutable",param_1[0x26]);
    (*local_a98)(&local_ab8,"CFBundleIdentifier",param_1[0x27]);
    (*local_a98)(&local_ab8,"CFBundleName",param_1[0x28]);
    (*local_a98)(&local_ab8,"CFBundleVersion",param_1[0x29]);
    (*local_a98)(&local_ab8,"CFBundleShortVersionString",param_1[0x2a]);
    (*local_a98)(&local_ab8,"app_uuid",param_1[0x2b]);
    (*local_a98)(&local_ab8,"cpu_arch",param_1[0x2c]);
    (*local_aa8)(&local_ab8,"cpu_type",(long)*(int *)(param_1 + 0x2d));
    (*local_aa8)(&local_ab8,"cpu_subtype",(long)*(int *)((long)param_1 + 0x16c));
    (*local_aa8)(&local_ab8,"binary_cpu_type",(long)*(int *)(param_1 + 0x2e));
    (*local_aa8)(&local_ab8,"binary_cpu_subtype",(long)*(int *)((long)param_1 + 0x174));
    (*local_a98)(&local_ab8,"process_name",param_1[0x2f]);
    (*local_aa8)(&local_ab8,"process_id",(long)*(int *)(param_1 + 0x30));
    (*local_aa8)(&local_ab8,"parent_process_id",(long)*(int *)((long)param_1 + 0x184));
    (*local_a98)(&local_ab8,"device_app_hash",param_1[0x31]);
    (*local_a98)(&local_ab8,"build_type",param_1[0x32]);
    (*local_a48)(&local_ab8,"memory");
    (*local_aa0)(&local_ab8,"size",param_1[0x33]);
    (*local_aa0)(&local_ab8,"usable",param_1[0x35]);
    (*local_aa0)(&local_ab8,"free",param_1[0x34]);
    (*local_a38)(&local_ab8);
    (*local_a48)(&local_ab8,"application_stats");
    (*local_ab8)(&local_ab8,"application_active",*(undefined1 *)(param_1 + 0x1b));
    (*local_ab8)(&local_ab8,"application_in_foreground",*(undefined1 *)((long)param_1 + 0xd9));
    (*local_aa8)(&local_ab8,"launches_since_last_crash",(long)*(int *)(param_1 + 0x16));
    (*local_aa8)(&local_ab8,"sessions_since_last_crash",(long)*(int *)((long)param_1 + 0xb4));
    (*local_ab0)(param_1[0x14],&local_ab8,"active_time_since_last_crash");
    (*local_ab0)(param_1[0x15],&local_ab8,"background_time_since_last_crash");
    (*local_aa8)(&local_ab8,"sessions_since_launch",(long)*(int *)(param_1 + 0x19));
    (*local_ab0)(param_1[0x17],&local_ab8,"active_time_since_launch");
    (*local_ab0)(param_1[0x18],&local_ab8,"background_time_since_launch");
    (*local_a38)(&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_10074aec8(auStack_a28);
    (*local_a48)(&local_ab8,"crash");
    FUN_10073617c(&local_ab8,param_1);
    FUN_10074aec8(auStack_a28);
    cVar2 = DAT_100b2ca78;
    puVar12 = (undefined8 *)param_1[2];
    if (puVar12 != (undefined8 *)0x0) {
      puVar5 = puVar12;
      FUN_10079e6e0();
      puVar6 = puVar12;
      FUN_10079ebb4();
      (*local_a40)(&local_ab8,"threads");
      if (0 < (int)puVar6) {
        iVar14 = 0;
        do {
          puVar7 = puVar12;
          FUN_10079ebbc(puVar12,iVar14);
          puVar15 = puVar12;
          if (puVar7 != puVar5) {
            puVar15 = local_528;
            FUN_10079e6e8();
          }
          FUN_1007364c8(&local_ab8,0,param_1,puVar15,iVar14,cVar2 != '\0');
          iVar14 = iVar14 + 1;
        } while ((int)puVar6 != iVar14);
      }
      (*local_a38)(&local_ab8);
    }
    FUN_10074aec8(auStack_a28);
    ppcVar8 = &local_ab8;
    (*local_a38)();
    FUN_10076cb7c();
    (*local_a48)(&local_ab8,"sentry_sdk_scope");
    if (*ppcVar8 != (code *)0x0) {
      FUN_100737540(&local_ab8,"user",*ppcVar8,0);
    }
    if (ppcVar8[1] != (code *)0x0) {
      FUN_100737540(&local_ab8,"dist",ppcVar8[1],0);
    }
    if (ppcVar8[2] != (code *)0x0) {
      FUN_100737540(&local_ab8,"context",ppcVar8[2],0);
    }
    if (ppcVar8[3] != (code *)0x0) {
      FUN_100737540(&local_ab8,"traceContext",ppcVar8[3],0);
    }
    if (ppcVar8[4] != (code *)0x0) {
      FUN_100737540(&local_ab8,"environment",ppcVar8[4],0);
    }
    if (ppcVar8[5] != (code *)0x0) {
      FUN_100737540(&local_ab8,"tags",ppcVar8[5],0);
    }
    if (ppcVar8[6] != (code *)0x0) {
      FUN_100737540(&local_ab8,"extra",ppcVar8[6],0);
    }
    if (ppcVar8[7] != (code *)0x0) {
      FUN_100737540(&local_ab8,"fingerprint",ppcVar8[7],0);
    }
    if (ppcVar8[8] != (code *)0x0) {
      FUN_100737540(&local_ab8,"level",ppcVar8[8],0);
    }
    pcVar9 = ppcVar8[9];
    if ((pcVar9 != (code *)0x0) && (pcVar10 = ppcVar8[10], 0 < (long)pcVar10)) {
LAB_1007373bc:
      if (*(long *)pcVar9 == 0) goto code_r0x0001007373c4;
      (*local_a40)(&local_ab8,"breadcrumbs");
      pcVar9 = ppcVar8[10];
      if (0 < (long)pcVar9) {
        lVar13 = 0;
        do {
          lVar1 = 0;
          if (pcVar9 != (code *)0x0) {
            lVar1 = (long)(ppcVar8[0xb] + lVar13) / (long)pcVar9;
          }
          if (*(long *)(ppcVar8[9] + ((long)(ppcVar8[0xb] + lVar13) - lVar1 * (long)pcVar9) * 8) !=
              0) {
            FUN_100737540(&local_ab8,"crumb",
                          *(long *)(ppcVar8[9] +
                                   ((long)(ppcVar8[0xb] + lVar13) - lVar1 * (long)pcVar9) * 8),0);
            pcVar9 = ppcVar8[10];
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (long)pcVar9);
      }
      (*local_a38)(&local_ab8);
    }
LAB_100737448:
    (*local_a38)(&local_ab8);
    FUN_10074aec8(auStack_a28);
    if (DAT_100b2ca90 == 0) {
      (*local_a48)(&local_ab8,"user");
    }
    else {
      FUN_100737540(&local_ab8,"user",DAT_100b2ca90,0);
      FUN_10074aec8(auStack_a28);
    }
    (*local_a38)(&local_ab8);
    FUN_10074aec8(auStack_a28);
    (*local_a48)(&local_ab8,"debug");
    FUN_100737944(&local_ab8,"console_log",&DAT_100b2ca98);
    (*local_a38)(&local_ab8);
    (*local_a38)(&local_ab8);
    FUN_1007a5494(local_a30);
    FUN_10074ae8c(auStack_a28);
    FUN_100782eec();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
code_r0x0001007373c4:
  pcVar9 = pcVar9 + 8;
  pcVar10 = pcVar10 + -1;
  if (pcVar10 == (code *)0x0) goto LAB_100737448;
  goto LAB_1007373bc;
}

