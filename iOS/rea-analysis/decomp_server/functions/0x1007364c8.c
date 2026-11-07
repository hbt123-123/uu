// rea decompile_all
// name: FUN_1007364c8
// address: 0x1007364c8
// body: available
// range: 0x1007364c8-0x100736b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100736b64 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007364c8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  int param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  code *pcVar13;
  char *pcVar14;
  undefined8 local_4d0;
  long local_4c8;
  undefined8 local_4c0;
  long local_4b8;
  undefined8 local_4b0;
  char local_4a4;
  code *local_498;
  code *local_490;
  undefined8 local_168;
  char acStack_160 [240];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar5 = param_4;
  FUN_10079e7ac();
  puVar6 = param_4;
  FUN_10079e6e0();
  puVar7 = param_4;
  FUN_10079e6e0();
  puVar8 = *(undefined8 **)(param_3 + 0x10);
  FUN_10079e6e0();
  if (puVar7 == puVar8) {
    _memcpy(&local_4d0,*(void **)(param_3 + 0x38),0x368);
  }
  else {
    FUN_100769e5c(&local_4d0,0x96,param_4);
  }
  (*(code *)param_1[0xe])(param_1,param_2);
  (*(code *)param_1[0xe])(param_1,"backtrace");
  (*(code *)param_1[0xf])(param_1,"contents");
  iVar4 = (int)&local_4d0;
  (*local_498)();
  if (iVar4 != 0) {
    do {
      (*(code *)param_1[0xe])(param_1,0);
      iVar4 = (int)&local_4d0;
      (*local_490)();
      if (iVar4 != 0) {
        if (local_4c8 != 0) {
          pcVar13 = (code *)param_1[4];
          lVar9 = local_4c8;
          FUN_10074a39c();
          (*pcVar13)(param_1,"object_name",lVar9);
        }
        (*(code *)param_1[3])(param_1,"object_addr",local_4c0);
        if (local_4b8 != 0) {
          (*(code *)param_1[4])(param_1,"symbol_name");
        }
        (*(code *)param_1[3])(param_1,"symbol_addr",local_4b0);
      }
      (*(code *)param_1[3])(param_1,"instruction_addr",local_4d0);
      (*(code *)param_1[0x10])(param_1);
      uVar10 = 0;
      (*local_498)();
    } while ((uVar10 & 1) != 0);
  }
  (*(code *)param_1[0x10])(param_1);
  (*(code *)param_1[2])(param_1,"skipped",0);
  (*(code *)param_1[0x10])(param_1);
  puVar7 = param_4;
  FUN_10079e78c();
  if ((int)puVar7 != 0) {
    (*(code *)param_1[0xe])(param_1,"registers");
    puVar7 = param_1;
    (*(code *)param_1[0xe])(param_1,"basic");
    uVar3 = (uint)puVar7;
    FUN_100761fe4();
    if (0 < (int)uVar3) {
      pcVar14 = (char *)0x0;
      do {
        pcVar11 = pcVar14;
        FUN_100761fec();
        if (pcVar11 == (char *)0x0) {
          pcVar11 = acStack_160;
          _snprintf(acStack_160,0x1e,"r%d");
        }
        pcVar13 = (code *)param_1[3];
        puVar7 = param_4;
        FUN_10076200c(param_4,pcVar14);
        (*pcVar13)(param_1,pcVar11,puVar7);
        uVar1 = (int)pcVar14 + 1;
        pcVar14 = (char *)(ulong)uVar1;
      } while (uVar3 != uVar1);
    }
    (*(code *)param_1[0x10])(param_1);
    puVar7 = param_4;
    FUN_10079ec00();
    if ((int)puVar7 != 0) {
      puVar7 = param_1;
      (*(code *)param_1[0xe])(param_1,"exception");
      uVar3 = (uint)puVar7;
      FUN_1007620ac();
      if (0 < (int)uVar3) {
        pcVar14 = (char *)0x0;
        do {
          pcVar11 = pcVar14;
          FUN_1007620b4();
          if (pcVar11 == (char *)0x0) {
            pcVar11 = acStack_160;
            _snprintf(acStack_160,0x1e,"r%d");
          }
          pcVar13 = (code *)param_1[3];
          puVar7 = param_4;
          FUN_10076210c(param_4,pcVar14);
          (*pcVar13)(param_1,pcVar11,puVar7);
          uVar1 = (int)pcVar14 + 1;
          pcVar14 = (char *)(ulong)uVar1;
        } while (uVar3 != uVar1);
      }
      (*(code *)param_1[0x10])(param_1);
    }
    (*(code *)param_1[0x10])(param_1);
  }
  (*(code *)param_1[2])(param_1,"index",(long)param_5);
  puVar7 = puVar6;
  FUN_100782f14();
  if (puVar7 != (undefined8 *)0x0) {
    (*(code *)param_1[4])(param_1,"name",puVar7);
  }
  puVar7 = puVar6;
  FUN_100782f64();
  if (puVar7 != (undefined8 *)0x0) {
    (*(code *)param_1[4])(param_1,"dispatch_queue",puVar7);
  }
  puVar7 = param_1;
  (*(code *)*param_1)(param_1,"crashed",puVar5);
  pcVar13 = (code *)*param_1;
  FUN_1007871b4();
  (*pcVar13)(param_1,"current_thread",puVar6 == puVar7);
  if ((int)puVar5 != 0) {
    puVar5 = param_4;
    FUN_100761f88();
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = puVar5;
      FUN_100762180();
      iVar4 = (int)puVar6;
      uVar10 = (long)puVar5 + (long)(iVar4 * -0xa0);
      FUN_100762180();
      uVar12 = (long)puVar5 + (long)(iVar4 * 0x50);
      uVar2 = uVar12;
      if (uVar12 <= uVar10) {
        uVar2 = uVar10;
      }
      if (uVar10 <= uVar12) {
        uVar12 = uVar10;
      }
      puVar6 = param_1;
      (*(code *)param_1[0xe])(param_1,"stack");
      iVar4 = (int)puVar6;
      pcVar13 = (code *)param_1[4];
      FUN_100762180();
      pcVar14 = "+";
      if (iVar4 < 1) {
        pcVar14 = "-";
      }
      (*pcVar13)(param_1,"grow_direction",pcVar14);
      (*(code *)param_1[3])(param_1,"dump_start",uVar12);
      (*(code *)param_1[3])(param_1,"dump_end",uVar2);
      (*(code *)param_1[3])(param_1,"stack_pointer",puVar5);
      (*(code *)*param_1)(param_1,"overflow",local_4a4 != '\0');
      iVar4 = (int)uVar2 - (int)uVar12;
      FUN_1007ae6e0(uVar12,acStack_160,iVar4);
      if ((int)uVar12 == 0) {
        (*(code *)param_1[4])(param_1,"error","Stack contents not accessible");
      }
      else {
        (*(code *)param_1[8])(param_1,"contents",acStack_160,iVar4);
      }
      (*(code *)param_1[0x10])(param_1);
    }
    if (param_6 != 0) {
      puVar5 = param_1;
      (*(code *)param_1[0xe])(param_1,"notable_addresses");
      uVar3 = (uint)puVar5;
      FUN_100761fe4();
      if (0 < (int)uVar3) {
        pcVar14 = (char *)0x0;
        do {
          pcVar11 = pcVar14;
          FUN_100761fec();
          if (pcVar11 == (char *)0x0) {
            pcVar11 = acStack_160;
            _snprintf(acStack_160,0x1e,"r%d");
          }
          puVar5 = param_4;
          FUN_10076200c(param_4,pcVar14);
          FUN_100737b5c(param_1,pcVar11,puVar5);
          uVar1 = (int)pcVar14 + 1;
          pcVar14 = (char *)(ulong)uVar1;
        } while (uVar3 != uVar1);
      }
      FUN_100761f88();
      if (param_4 != (undefined8 *)0x0) {
        puVar5 = param_4;
        FUN_100762180();
        iVar4 = (int)puVar5;
        uVar10 = (long)param_4 + (long)(iVar4 * -0xa0);
        FUN_100762180();
        uVar12 = (long)param_4 + (long)(iVar4 * 0x50);
        uVar2 = uVar12;
        if (uVar10 <= uVar12) {
          uVar2 = uVar10;
        }
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        for (; uVar2 < uVar12; uVar2 = uVar2 + 8) {
          uVar10 = uVar2;
          FUN_1007ae6e0(uVar2,&local_168,8);
          if ((int)uVar10 != 0) {
            _snprintf(acStack_160,0x28,"stack@%p");
            FUN_100737b5c(param_1,acStack_160,local_168);
          }
        }
      }
      (*(code *)param_1[0x10])(param_1);
    }
  }
  (*(code *)param_1[0x10])(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

