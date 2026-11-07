// rea decompile_all
// name: FUN_10038de18
// address: 0x10038de18
// body: available
// range: 0x10038de18-0x10038e067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10038de18(long *param_1,ID *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ID IVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ID unaff_x26;
  undefined2 uVar12;
  undefined1 auVar13 [16];
  
  IVar3 = objc_stub::hash(*param_2);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar4 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar11 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar11))))
                                               ))));
    uVar12 = NEON_uaddlv(uVar4,1);
    uVar7 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x26 = uVar11 - 1 & IVar3;
    }
    else {
      unaff_x26 = IVar3;
      if (uVar11 <= IVar3) {
        uVar2 = 0;
        if (uVar11 != 0) {
          uVar2 = IVar3 / uVar11;
        }
        unaff_x26 = IVar3 - uVar2 * uVar11;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x26 * 8);
    if ((puVar5 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar5, plVar10 != (long *)0x0)) {
      do {
        IVar6 = plVar10[1];
        if (IVar6 == IVar3) {
          if ((plVar10[2] == *param_2) ||
             (IVar6 = objc_stub::isEqualToString_(plVar10[2]), (IVar6 & 1) != 0)) {
            uVar4 = 0;
            goto LAB_10038e03c;
          }
        }
        else {
          if (uVar7 < 2) {
            IVar6 = IVar6 & uVar11 - 1;
          }
          else if (uVar11 <= IVar6) {
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = IVar6 / uVar11;
            }
            IVar6 = IVar6 - uVar2 * uVar11;
          }
          if (IVar6 != unaff_x26) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar1 = param_1 + 2;
  plVar10 = operator_new(0x38);
  *plVar10 = 0;
  plVar10[1] = IVar3;
  plVar10[2] = *param_3;
  FUN_10037e438(plVar10 + 3,param_4);
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar11) {
      uVar7 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar7 = uVar7 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    FUN_100385a7c(param_1,uVar7);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x26 = uVar11 - 1 & IVar3;
    }
    else {
      unaff_x26 = IVar3;
      if (uVar11 <= IVar3) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = IVar3 / uVar11;
        }
        unaff_x26 = IVar3 - uVar7 * uVar11;
      }
    }
  }
  lVar9 = *param_1;
  plVar8 = *(long **)(lVar9 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar10 = *plVar1;
    *plVar1 = (long)plVar10;
    *(long **)(lVar9 + unaff_x26 * 8) = plVar1;
    if (*plVar10 == 0) goto LAB_10038e02c;
    uVar7 = *(ulong *)(*plVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar7 = uVar7 & uVar11 - 1;
    }
    else if (uVar11 <= uVar7) {
      uVar2 = 0;
      if (uVar11 != 0) {
        uVar2 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar2 * uVar11;
    }
    plVar8 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar10 = *plVar8;
  }
  *plVar8 = (long)plVar10;
LAB_10038e02c:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10038e03c:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar10;
  return auVar13;
}

