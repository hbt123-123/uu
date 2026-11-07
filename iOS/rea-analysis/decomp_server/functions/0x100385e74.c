// rea decompile_all
// name: FUN_100385e74
// address: 0x100385e74
// body: available
// range: 0x100385e74-0x100385faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100385e74(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar6 < 2) {
    uVar3 = uVar4 - 1 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_100385f40;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_100385f40;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_100385f40:
  lVar7 = *param_3;
  if (lVar7 != 0) {
    uVar8 = *(ulong *)(lVar7 + 8);
    if (uVar6 < 2) {
      uVar8 = uVar8 & uVar4 - 1;
    }
    else if (uVar4 <= uVar8) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar6 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar5;
      lVar7 = *param_3;
    }
  }
  *plVar5 = lVar7;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}

