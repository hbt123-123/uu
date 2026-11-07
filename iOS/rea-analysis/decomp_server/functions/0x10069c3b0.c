// rea decompile_all
// name: FUN_10069c3b0
// address: 0x10069c3b0
// body: available
// range: 0x10069c3b0-0x10069c59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069c3b0(string *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  allocator *paVar6;
  allocator *paVar7;
  string *psVar8;
  char *pcVar9;
  long *plVar10;
  string *unaff_x20;
  void *local_40 [2];
  char local_29;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long **)(param_1 + 0x18) = param_2;
  bVar3 = *(byte *)((long)param_2 + 0x17);
  paVar6 = (allocator *)param_2[1];
  if (-1 < (char)bVar3) {
    paVar6 = (allocator *)(ulong)bVar3;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (paVar6 != (allocator *)0x0) {
    if (paVar6 == (allocator *)0x1) {
      plVar10 = (long *)*param_2;
      if (-1 < (char)bVar3) {
        plVar10 = param_2;
      }
      if ((char)*plVar10 == '/') {
LAB_10069c410:
        uVar5 = 0;
        paVar6 = (allocator *)0x1;
        goto LAB_10069c51c;
      }
      paVar7 = (allocator *)0x0;
    }
    else {
      if ((char)bVar3 < '\0') {
        plVar10 = (long *)*param_2;
        if ((char)*plVar10 == '/') goto LAB_10069c450;
LAB_10069c488:
        if (-1 < (char)bVar3) {
          plVar10 = param_2;
        }
        if ((char)*plVar10 == '/') {
          if (*(char *)((long)plVar10 + 1) == '/') {
            paVar7 = paVar6 + -2;
            paVar6 = (allocator *)0x1;
            pcVar9 = (char *)((long)plVar10 + 2);
            uVar4 = 1;
            do {
              uVar5 = uVar4;
              *(ulong *)(param_1 + 0x20) = uVar5;
              if (paVar7 == (allocator *)0x0) break;
              cVar2 = *pcVar9;
              paVar7 = paVar7 + -1;
              pcVar9 = pcVar9 + 1;
              uVar4 = uVar5 + 1;
            } while (cVar2 == '/');
            goto LAB_10069c51c;
          }
          goto LAB_10069c410;
        }
      }
      else {
        plVar10 = param_2;
        if ((char)*param_2 == '/') {
LAB_10069c450:
          if (*(char *)((long)plVar10 + 1) == '/') {
            if (paVar6 != (allocator *)0x2) {
              plVar10 = (long *)*param_2;
              plVar1 = plVar10;
              if (-1 < (char)bVar3) {
                plVar1 = param_2;
              }
              if (*(char *)((long)plVar1 + 2) == '/') goto LAB_10069c488;
            }
            paVar7 = (allocator *)0x2;
            goto LAB_10069c4e0;
          }
          plVar10 = (long *)*param_2;
          goto LAB_10069c488;
        }
      }
      paVar7 = (allocator *)0x0;
    }
LAB_10069c4e0:
    if (paVar6 <= paVar7) {
LAB_10069c518:
      paVar6 = paVar7;
      uVar5 = 0;
      goto LAB_10069c51c;
    }
    plVar10 = (long *)*param_2;
    if (-1 < (char)bVar3) {
      plVar10 = param_2;
    }
    do {
      if (*(allocator *)((long)plVar10 + (long)paVar7) == (allocator)0x2f) goto LAB_10069c518;
      paVar7 = paVar7 + 1;
    } while (paVar6 != paVar7);
  }
  uVar5 = 0;
LAB_10069c51c:
  std::string::string(unaff_x20,(string *)local_40,(ulong)param_2,uVar5,paVar6);
  std::string::operator=(unaff_x20,param_1);
  if (local_29 < '\0') {
    operator_delete(local_40[0]);
  }
  if ((char)param_1[0x17] < '\0') {
    if (*(long *)(param_1 + 8) != 1) {
      return;
    }
    psVar8 = *(string **)param_1;
  }
  else {
    psVar8 = param_1;
    if (param_1[0x17] != (string)0x1) {
      return;
    }
  }
  if (*psVar8 == (string)0x2f) {
    std::string::assign((char *)param_1);
  }
  return;
}

