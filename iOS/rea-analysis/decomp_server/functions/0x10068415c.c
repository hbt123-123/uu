// rea decompile_all
// name: FUN_10068415c
// address: 0x10068415c
// body: available
// range: 0x10068415c-0x1006843af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10068415c(ulong param_1,ulong param_2,uint param_3,long param_4,ulong param_5,long param_6
                   ,byte param_7)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006843ac);
    (*pcVar2)();
  }
  FUN_100690ab4();
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      uVar1 = param_3 >> 6 & 3;
      if (uVar1 == 0) {
        if (param_7 < 0x40) {
LAB_100684230:
          if (param_1 == param_5) {
            FUN_100690ae8(param_5,param_2);
            return 0;
          }
          if (0x3f < (param_3 & 0xff)) goto LAB_100684258;
        }
        if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100684398);
          (*pcVar2)();
        }
        param_2 = 0;
        param_3 = 0;
        param_1 = param_1 + 1;
      }
      else if (uVar1 == 1) {
        if ((param_7 & 0xc0) == 0x40) {
          if (((param_3 & 1) != 0) || ((param_7 & 1) != 0)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006843b0);
            (*pcVar2)();
          }
          if ((int)param_2 != (int)param_6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006843a8);
            (*pcVar2)();
          }
          goto LAB_100684230;
        }
LAB_100684258:
        if ((long)param_1 < 0) {
LAB_100684398:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068439c);
          (*pcVar2)();
        }
        lVar3 = *(long *)(unaff_x20 + 8);
        uVar7 = 1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
        if ((long)uVar7 <= (long)param_1) goto LAB_100684398;
        uVar6 = param_1 >> 6;
        uVar5 = *(ulong *)(lVar3 + 0x40 + uVar6 * 8);
        if ((uVar5 >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006843a0);
          (*pcVar2)();
        }
        if (*(int *)(lVar3 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006843a4);
          (*pcVar2)();
        }
        uVar5 = uVar5 & -2L << (param_1 & 0x3f);
        if (uVar5 == 0) {
          lVar9 = uVar6 << 6;
          puVar4 = (ulong *)(lVar3 + uVar6 * 8 + 0x48);
          do {
            uVar6 = uVar6 + 1;
            if (uVar7 + 0x3f >> 6 <= uVar6) {
              FUN_100690ae8(param_1,param_2);
              goto LAB_10068433c;
            }
            uVar5 = *puVar4;
            lVar9 = lVar9 + 0x40;
            puVar4 = puVar4 + 1;
          } while (uVar5 == 0);
          FUN_100690ae8(param_1,param_2);
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + lVar9;
        }
        else {
          FUN_100690ae8(param_1,param_2);
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | param_1 & 0x7fffffffffffffc0;
        }
LAB_10068433c:
        param_2 = param_2 & 0xffffffff;
        param_3 = 0x40;
        param_1 = uVar7;
      }
      else if (((param_6 == 0 && param_5 == 0) && param_7 == 0x80) && (param_7 & 0xc0) == 0x80) {
        return 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_4);
  }
  return param_1;
}

