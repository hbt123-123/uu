// rea decompile_all
// name: FUN_10079a87c
// address: 0x10079a87c
// body: available
// range: 0x10079a87c-0x10079aa63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10079a87c(mach_header_64 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  uint32_t uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  mach_header_64 *pmVar6;
  cpu_subtype_t *pcVar7;
  uint32_t uVar8;
  ulong uVar9;
  ulong local_70;
  ulong uStack_68;
  ulong local_58;
  
  uVar8 = param_1->magic;
  if ((int)uVar8 < -0x1120532) {
    if (uVar8 == 0xcefaedfe) {
LAB_10079a904:
      pmVar6 = (mach_header_64 *)&param_1->reserved;
      goto LAB_10079a910;
    }
    if (uVar8 != 0xcffaedfe) {
      return 0;
    }
  }
  else if (uVar8 != 0xfeedfacf) {
    if (uVar8 != 0xfeedface) {
      return 0;
    }
    goto LAB_10079a904;
  }
  pmVar6 = param_1 + 1;
LAB_10079a910:
  uVar8 = param_1->ncmds;
  if (uVar8 == 0) {
    pcVar7 = (cpu_subtype_t *)0x0;
    uStack_68 = 0;
    local_70 = 0;
  }
  else {
    pcVar7 = (cpu_subtype_t *)0x0;
    uStack_68 = 0;
    local_70 = 0;
    do {
      uVar1 = pmVar6->magic;
      if (uVar1 == 0x1b) {
        pcVar7 = &pmVar6->cpusubtype;
      }
      else if (uVar1 == 0x19) {
        iVar2 = _strcmp((char *)&pmVar6->cpusubtype,"__TEXT");
        if (iVar2 == 0) {
          uStack_68._0_4_ = pmVar6[1].magic;
          uStack_68._4_4_ = pmVar6[1].cputype;
          local_70._0_4_ = pmVar6->flags;
          local_70._4_4_ = pmVar6->reserved;
        }
      }
      else if ((uVar1 == 1) && (iVar2 = _strcmp((char *)&pmVar6->cpusubtype,"__TEXT"), iVar2 == 0))
      {
        uVar9._0_4_ = pmVar6->flags;
        uVar9._4_4_ = pmVar6->reserved;
        local_70 = uVar9 & 0xffffffff;
        uStack_68 = uVar9 >> 0x20;
      }
      pmVar6 = (mach_header_64 *)((long)&pmVar6->magic + (ulong)(uint)pmVar6->cputype);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *param_3 = param_1;
  param_3[2] = uStack_68;
  param_3[1] = local_70;
  param_3[3] = param_2;
  param_3[4] = pcVar7;
  param_3[5] = *(undefined8 *)&param_1->cputype;
  if ((param_4 & 1) != 0) {
    local_58 = 0;
    puVar3 = (uint *)_getsectiondata(param_1,"__DATA","__crash_info",&local_58);
    if ((((puVar3 != (uint *)0x0) && (0x27 < local_58)) &&
        (puVar4 = puVar3, FUN_1007ae524(puVar3,0x28), (int)puVar4 != 0)) &&
       (((*puVar3 & 0xfffffffe) == 4 &&
        ((lVar5 = *(long *)(puVar3 + 2), lVar5 != 0 || (*(long *)(puVar3 + 8) != 0)))))) {
      FUN_10079aa64();
      if ((int)lVar5 != 0) {
        param_3[6] = *(undefined8 *)(puVar3 + 2);
      }
      iVar2 = (int)*(undefined8 *)(puVar3 + 8);
      FUN_10079aa64();
      if (iVar2 != 0) {
        param_3[7] = *(undefined8 *)(puVar3 + 8);
      }
    }
  }
  return 1;
}

