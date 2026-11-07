// rea decompile_all
// name: FUN_1006946f8
// address: 0x1006946f8
// body: available
// range: 0x1006946f8-0x1006948bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006946f8(ulong *param_1,string *param_2)

{
  string *this;
  size_t sVar1;
  char cVar2;
  string *psVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  string *psVar8;
  size_t sVar9;
  string *psVar10;
  ulong uVar11;
  string *psVar12;
  long lVar13;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  
  this = (string *)(param_1 + 1);
  uVar7 = *param_1;
  cVar2 = *(char *)((long)param_1 + 0x1f);
  uVar11 = (ulong)cVar2;
  uVar6 = uVar11;
  psVar12 = this;
  if ((long)uVar11 < 0) {
    uVar6 = param_1[2];
    psVar12 = (string *)param_1[1];
  }
  sVar1 = *(size_t *)(param_2 + 8);
  psVar3 = *(string **)param_2;
  if (-1 < (char)param_2[0x17]) {
    sVar1 = (ulong)(byte)param_2[0x17];
    psVar3 = param_2;
  }
  lVar13 = uVar6 - uVar7;
  if (uVar7 <= uVar6 && lVar13 != 0) {
    psVar8 = psVar12 + uVar7;
    if (sVar1 == 0) {
LAB_100694784:
      uVar6 = (long)psVar8 - (long)psVar12;
      if (uVar6 != 0xffffffffffffffff) {
        psVar12 = this;
        uVar7 = uVar11;
        if (cVar2 < '\0') {
          psVar12 = (string *)param_1[1];
          uVar7 = param_1[2];
        }
        if ((sVar1 != 0) && (uVar6 < uVar7)) {
          psVar8 = psVar12 + uVar6;
          do {
            sVar9 = sVar1;
            psVar10 = psVar3;
            do {
              if (*psVar8 == *psVar10) {
                if ((psVar8 == psVar12 + uVar7) ||
                   (uVar7 = (long)psVar8 - (long)psVar12, uVar7 == 0xffffffffffffffff))
                goto LAB_100694854;
                std::string::string(this,(string *)&local_70,(ulong)this,uVar6,
                                    (allocator *)(uVar7 - uVar6));
                if (*(char *)((long)param_1 + 0x37) < '\0') {
                  operator_delete((void *)param_1[4]);
                }
                param_1[5] = uStack_68;
                param_1[4] = local_70;
                param_1[6] = local_60;
                uVar5 = 1;
                goto LAB_1006948a0;
              }
              psVar10 = psVar10 + 1;
              sVar9 = sVar9 - 1;
            } while (sVar9 != 0);
            psVar8 = psVar8 + 1;
          } while (psVar8 != psVar12 + uVar7);
        }
LAB_100694854:
        if (cVar2 < '\0') {
          uVar11 = param_1[2];
        }
        std::string::string(this,(string *)&local_70,(ulong)this,uVar6,(allocator *)(uVar11 - uVar6)
                           );
        if (*(char *)((long)param_1 + 0x37) < '\0') {
          operator_delete((void *)param_1[4]);
        }
        param_1[5] = uStack_68;
        param_1[4] = local_70;
        param_1[6] = local_60;
        uVar7 = (ulong)*(char *)((long)param_1 + 0x1f);
        if ((long)uVar7 < 0) {
          uVar7 = param_1[2];
        }
        uVar5 = 1;
        goto LAB_1006948a0;
      }
    }
    else {
      do {
        pvVar4 = _memchr(psVar3,(int)(char)*psVar8,sVar1);
        if (pvVar4 == (void *)0x0) goto LAB_100694784;
        psVar8 = psVar8 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  uVar5 = 0;
  uVar7 = uVar11;
  if (cVar2 < '\0') {
    uVar7 = param_1[2];
  }
LAB_1006948a0:
  *param_1 = uVar7;
  return uVar5;
}

