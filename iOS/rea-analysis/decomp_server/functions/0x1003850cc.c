// rea decompile_all
// name: FUN_1003850cc
// address: 0x1003850cc
// body: available
// range: 0x1003850cc-0x1003851c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1003850cc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  plVar2 = param_1 + 3;
  FUN_1003851c8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar9 = CONCAT17(POPCOUNT((char)((ulong)plVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar5 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar5 >> 8)),POPCOUNT((char)plVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      plVar7 = (long *)((long)plVar5 - 1U & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1 + 4;
          FUN_100385670(plVar4,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar3;
          }
        }
        else {
          if (uVar6 < 2) {
            plVar4 = (long *)((ulong)plVar4 & (long)plVar5 - 1U);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

