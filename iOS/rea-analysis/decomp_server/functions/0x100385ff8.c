// rea decompile_all
// name: FUN_100385ff8
// address: 0x100385ff8
// body: available
// range: 0x100385ff8-0x1003860f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100385ff8(long *param_1,ID *param_2)

{
  ulong uVar1;
  ID IVar2;
  long *plVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  IVar2 = objc_stub::hash(*param_2);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & IVar2;
    }
    else {
      uVar7 = IVar2;
      if (uVar5 <= IVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = IVar2 / uVar5;
        }
        uVar7 = IVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
      do {
        IVar4 = plVar3[1];
        if (IVar4 == IVar2) {
          if (plVar3[2] == *param_2) {
            return plVar3;
          }
          IVar4 = objc_stub::isEqualToString_(plVar3[2]);
          if ((IVar4 & 1) != 0) {
            return plVar3;
          }
        }
        else {
          if (uVar6 < 2) {
            IVar4 = IVar4 & uVar5 - 1;
          }
          else if (uVar5 <= IVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = IVar4 / uVar5;
            }
            IVar4 = IVar4 - uVar1 * uVar5;
          }
          if (IVar4 != uVar7) {
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

