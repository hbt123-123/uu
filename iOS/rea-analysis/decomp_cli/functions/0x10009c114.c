// rea decompile_all
// name: FUN_10009c114
// address: 0x10009c114
// body: available
// range: 0x10009c114-0x10009c21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c114(ulong *param_1,ulong param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = *unaff_x20;
  uVar6 = unaff_x20[1];
  FUN_10009f444(param_2,param_3,param_4 & 0x1ff,lVar1,uVar6);
  uVar7 = 0;
  uVar8 = 0;
  if ((param_3 & 1) == 0) {
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c214);
      (*pcVar2)();
    }
    uVar3 = *(ulong *)(lVar1 + 0x10);
    if (uVar3 < uVar6 || (long)uVar3 < (long)param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c218);
      (*pcVar2)();
    }
    if ((long)param_2 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009c21c);
      (*pcVar2)();
    }
    if (param_2 != uVar3) {
      puVar5 = (ulong *)(lVar1 + param_2 * 0x40 + 0x30);
      do {
        if ((puVar5[5] & 1) != 0) {
          if ((*puVar5 & 0x6000000000000000) == 0x2000000000000000) {
            uVar8 = puVar5[4];
            uVar7 = puVar5[3];
            uVar6 = puVar5[-2];
            uVar3 = puVar5[-1];
            FUN_10009583c(uVar6,uVar3,*puVar5,puVar5[1],puVar5[2]);
            FUN_10009e42c();
            uVar4 = 1;
            goto LAB_10009c1ec;
          }
          break;
        }
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 8;
      } while (uVar3 != param_2);
    }
  }
  uVar4 = 0;
  uVar6 = 0;
  uVar3 = 0;
LAB_10009c1ec:
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  return;
}

