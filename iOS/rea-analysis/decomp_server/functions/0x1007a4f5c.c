// rea decompile_all
// name: FUN_1007a4f5c
// address: 0x1007a4f5c
// body: available
// range: 0x1007a4f5c-0x1007a513b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a5138 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a4f5c(undefined8 *param_1,long param_2,int param_3)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  long lVar9;
  byte abStack_270 [512];
  long local_70;
  
  iVar8 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  while (iVar8 < param_3) {
    lVar9 = (long)param_3 - (long)iVar8;
    pbVar7 = (byte *)(param_2 + iVar8);
    pbVar6 = pbVar7;
    if ((int)lVar9 < 0x101) {
      pbVar5 = pbVar7 + lVar9;
      if (0 < (int)lVar9) goto LAB_1007a4ff0;
      pbVar4 = abStack_270;
    }
    else {
      pbVar5 = pbVar7 + 0x100;
      lVar9 = 0x100;
LAB_1007a4ff0:
      pbVar3 = abStack_270;
      do {
        bVar1 = *pbVar6;
        pbVar4 = pbVar3;
        if (((bVar1 == 0x22) || (bVar1 == 0x5c)) || (bVar1 < 0x20)) break;
        pbVar4 = pbVar3 + 1;
        *pbVar3 = bVar1;
        pbVar6 = pbVar6 + 1;
        pbVar3 = pbVar4;
      } while (pbVar6 < pbVar5);
    }
    if (pbVar6 < pbVar5) {
      pbVar7 = pbVar7 + (lVar9 - (long)pbVar6);
      pbVar5 = pbVar4;
      do {
        bVar1 = *pbVar6;
        switch(bVar1) {
        case 8:
          pbVar4 = pbVar5 + 2;
          pbVar5[0] = 0x5c;
          pbVar5[1] = 0x62;
          break;
        case 9:
          pbVar4 = pbVar5 + 2;
          pbVar5[0] = 0x5c;
          pbVar5[1] = 0x74;
          break;
        case 10:
          pbVar4 = pbVar5 + 2;
          pbVar5[0] = 0x5c;
          pbVar5[1] = 0x6e;
          break;
        case 0xb:
switchD_1007a5060_caseD_b:
          if (bVar1 < 0x20) goto LAB_1007a50f8;
          pbVar4 = pbVar5 + 1;
          *pbVar5 = bVar1;
          break;
        case 0xc:
          pbVar4 = pbVar5 + 2;
          pbVar5[0] = 0x5c;
          pbVar5[1] = 0x66;
          break;
        case 0xd:
          pbVar4 = pbVar5 + 2;
          pbVar5[0] = 0x5c;
          pbVar5[1] = 0x72;
          break;
        default:
          if ((bVar1 != 0x5c) && (bVar1 != 0x22)) goto switchD_1007a5060_caseD_b;
          *pbVar5 = 0x5c;
          pbVar5[1] = bVar1;
          pbVar4 = pbVar5 + 2;
        }
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + -1;
        pbVar5 = pbVar4;
      } while (pbVar7 != (byte *)0x0);
    }
    lVar2 = (long)pbVar4 - (long)(int)((long)pbVar4 - (long)abStack_270);
    (*(code *)*param_1)(lVar2,(long)pbVar4 - (long)abStack_270,param_1[1]);
    iVar8 = (int)lVar9 + iVar8;
    if ((int)lVar2 != 0) break;
  }
LAB_1007a50f8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

