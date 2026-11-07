// rea decompile_all
// name: FUN_100385758
// address: 0x100385758
// body: available
// range: 0x100385758-0x1003859ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100385758(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x27;
  undefined2 uVar10;
  undefined1 auVar11 [16];
  long *local_78 [3];
  
  plVar7 = param_1 + 3;
  FUN_1003851c8();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)plVar9 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)plVar9 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)plVar9 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)plVar9 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)plVar9 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)plVar9 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  plVar9 >> 8)),POPCOUNT((char)plVar9))))))));
    uVar10 = NEON_uaddlv(uVar1,1);
    uVar4 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar6 * (long)plVar9);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar2 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar2, plVar8 != (long *)0x0)) {
      do {
        plVar3 = (long *)plVar8[1];
        if (plVar3 == plVar7) {
          plVar3 = param_1 + 4;
          FUN_100385670(plVar3,plVar8 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            local_78[0] = plVar8;
            goto LAB_100385980;
          }
        }
        else {
          if (uVar4 < 2) {
            plVar3 = (long *)((ulong)plVar3 & (long)plVar9 - 1U);
          }
          else if (plVar9 <= plVar3) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar3 / (ulong)plVar9;
            }
            plVar3 = (long *)((long)plVar3 - uVar6 * (long)plVar9);
          }
          if (plVar3 != unaff_x27) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  FUN_1003859d0(local_78,param_1,plVar7,param_3,param_4,param_5);
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar4 = 1;
    if ((long *)0x2 < plVar9) {
      uVar4 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar4 = uVar4 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    FUN_100385a7c(param_1,uVar4);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x27 = plVar7;
      if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar7 = *(long **)(lVar5 + (long)unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *local_78[0] = *plVar7;
    *plVar7 = (long)local_78[0];
    *(long **)(lVar5 + (long)unaff_x27 * 8) = plVar7;
    if (*local_78[0] != 0) {
      plVar7 = *(long **)(*local_78[0] + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar4 = 0;
        if (plVar9 != (long *)0x0) {
          uVar4 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar4 * (long)plVar9);
      }
      *(long **)(*param_1 + (long)plVar7 * 8) = local_78[0];
    }
  }
  else {
    *local_78[0] = *plVar7;
    *plVar7 = (long)local_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
LAB_100385980:
  auVar11._8_8_ = uVar1;
  auVar11._0_8_ = local_78[0];
  return auVar11;
}

