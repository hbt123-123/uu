// rea decompile_all
// name: FUN_10038f378
// address: 0x10038f378
// body: available
// range: 0x10038f378-0x10038f773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038f378(string *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  char *local_90 [2];
  char local_79;
  char ***local_78;
  ulong uStack_70;
  byte local_61;
  size_t local_60 [2];
  
  *(undefined4 *)param_1 = 0;
  *param_2 = 0;
  _sysctlbyname("hw.machine",(void *)0x0,local_60,(void *)0x0,0);
  pvVar3 = _malloc(local_60[0]);
  _sysctlbyname("hw.machine",pvVar3,local_60,(void *)0x0,0);
  FUN_100384ff4(&local_78,pvVar3);
  _free(pvVar3);
  ppppcVar6 = (char ****)local_78;
  if (-1 < (long)(char)local_61) {
    ppppcVar6 = &local_78;
  }
  uVar11 = uStack_70;
  if (-1 < (char)local_61) {
    uVar11 = (long)(char)local_61;
  }
  plVar1 = (long *)((long)ppppcVar6 + uVar11);
  ppppcVar5 = ppppcVar6;
  uVar9 = uVar11;
  if (7 < (long)uVar11) {
    while (plVar4 = _memchr(ppppcVar5,0x50,uVar9 - 7), plVar4 != (long *)0x0) {
      if (*plVar4 == 0x63614d7265776f50) {
        if ((plVar4 != plVar1) && ((long)plVar4 - (long)ppppcVar6 != -1)) goto LAB_10038f4fc;
        break;
      }
      uVar9 = (long)plVar1 - ((long)plVar4 + 1);
      ppppcVar5 = (char ****)((long)plVar4 + 1);
      if ((long)uVar9 < 8) break;
    }
    ppppcVar5 = ppppcVar6;
    uVar9 = uVar11;
    if (0xe < (long)uVar11) {
      while (plVar4 = _memchr(ppppcVar5,0x50,uVar9 - 0xe), plVar4 != (long *)0x0) {
        if (*plVar4 == 0x614d207265776f50 && *(long *)((long)plVar4 + 7) == 0x68736f746e696361) {
          if ((plVar4 != plVar1) && ((long)plVar4 - (long)ppppcVar6 != -1)) goto LAB_10038f4fc;
          break;
        }
        uVar9 = (long)plVar1 - ((long)plVar4 + 1);
        ppppcVar5 = (char ****)((long)plVar4 + 1);
        if ((long)uVar9 < 0xf) break;
      }
    }
  }
  ppppcVar5 = ppppcVar6;
  uVar9 = uVar11;
  if (2 < (long)uVar11) {
    while (plVar4 = _memchr(ppppcVar5,0x4d,uVar9 - 2), plVar4 != (long *)0x0) {
      if ((short)*plVar4 == 0x614d && *(char *)((long)plVar4 + 2) == 'c') {
        if ((plVar4 != plVar1) && ((long)plVar4 - (long)ppppcVar6 != -1)) goto LAB_10038f5d4;
        break;
      }
      uVar9 = (long)plVar1 - ((long)plVar4 + 1);
      ppppcVar5 = (char ****)((long)plVar4 + 1);
      if ((long)uVar9 < 3) break;
    }
    ppppcVar5 = ppppcVar6;
    if (8 < (long)uVar11) {
      while (plVar4 = _memchr(ppppcVar5,0x4d,uVar11 - 8), plVar4 != (long *)0x0) {
        if (*plVar4 == 0x736f746e6963614d && (char)plVar4[1] == 'h') {
          if ((plVar4 != plVar1) && ((long)plVar4 - (long)ppppcVar6 != -1)) goto LAB_10038f5d4;
          break;
        }
        uVar11 = (long)plVar1 - ((long)plVar4 + 1);
        ppppcVar5 = (char ****)((long)plVar4 + 1);
        if ((long)uVar11 < 9) break;
      }
    }
  }
  ppppcVar6 = &local_78;
  FUN_10038f790(ppppcVar6,"iPhone",0);
  if (ppppcVar6 == (char ****)0xffffffffffffffff) {
    ppppcVar6 = &local_78;
    FUN_10038f790(ppppcVar6,"iPod",0);
    if (ppppcVar6 == (char ****)0xffffffffffffffff) {
      ppppcVar6 = &local_78;
      FUN_10038f790(ppppcVar6,"iPad",0);
      if (ppppcVar6 == (char ****)0xffffffffffffffff) {
        ppppcVar6 = &local_78;
        FUN_10038f790(ppppcVar6,"AppleTV",0);
        if (ppppcVar6 == (char ****)0xffffffffffffffff) {
          ppppcVar6 = &local_78;
          FUN_10038f790(ppppcVar6,"AppleWatch",0);
          if (ppppcVar6 == (char ****)0xffffffffffffffff) goto LAB_10038f690;
          uVar7 = 7;
        }
        else {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 5;
      }
    }
    else {
      uVar7 = 4;
    }
  }
  else {
    uVar7 = 3;
  }
LAB_10038f68c:
  *(undefined4 *)param_1 = uVar7;
LAB_10038f690:
  uVar8 = (uint)(char)local_61;
  ppppcVar6 = (char ****)local_78;
  if (-1 < (int)uVar8) {
    uStack_70 = (ulong)local_61;
    ppppcVar6 = &local_78;
  }
  if (uStack_70 != 0) {
    ppppcVar5 = ppppcVar6;
    do {
      lVar10 = 0;
      do {
        if (*(char *)ppppcVar5 == "0123456789"[lVar10]) {
          if ((ppppcVar5 != (char ****)((long)ppppcVar6 + uStack_70)) &&
             ((long)ppppcVar5 - (long)ppppcVar6 != 0xffffffffffffffff)) {
            std::string::string(param_1,(string *)local_90,(ulong)&local_78,
                                (long)ppppcVar5 - (long)ppppcVar6,(allocator *)0xffffffffffffffff);
            if (local_79 < '\0') {
              iVar2 = _atoi(local_90[0]);
              *param_2 = iVar2;
              operator_delete(local_90[0]);
            }
            else {
              iVar2 = _atoi((char *)local_90);
              *param_2 = iVar2;
            }
            uVar8 = (uint)local_61;
          }
          goto LAB_10038f74c;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 10);
      ppppcVar5 = (char ****)((long)ppppcVar5 + 1);
    } while (ppppcVar5 != (char ****)((long)ppppcVar6 + uStack_70));
  }
LAB_10038f74c:
  if ((uVar8 >> 7 & 1) != 0) {
    operator_delete(local_78);
  }
  return;
LAB_10038f4fc:
  uVar7 = 1;
  goto LAB_10038f68c;
LAB_10038f5d4:
  uVar7 = 2;
  goto LAB_10038f68c;
}

