// rea decompile_all
// name: FUN_10042d2a8
// address: 0x10042d2a8
// body: available
// range: 0x10042d2a8-0x10042d6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042d348 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

ulong FUN_10042d2a8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  
  uVar4 = *param_1;
  uVar9 = param_1[1];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  uVar14 = param_1[4];
  uVar7 = param_1[5];
  uVar1 = param_1[6];
  uVar13 = param_1[8];
  uVar3 = (uint)(uVar13 >> 0x3b) & 6 | (uint)(uVar1 >> 0x3d) & 1;
  if (uVar3 < 4) {
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        if (((uint)(param_2[8] >> 0x3b) & 6) != 0 || ((uint)(param_2[6] >> 0x3d) & 1) != 0) {
          return 0;
        }
        FUN_1000094a4(uVar4,uVar9,*param_2,param_2[1]);
        return uVar4;
      }
      uVar13 = param_2[6];
      if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(uVar13 >> 0x3d) & 1) != 1) {
        return 0;
      }
      uVar8 = *param_2;
      uVar9 = param_2[4];
      uVar11 = param_2[5];
      if ((param_2[1] & 1) == 0) {
        if (uVar4 != uVar8) {
          return 0;
        }
      }
      else if (uVar8 == 0) {
        if (uVar4 != 0) {
          return 0;
        }
      }
      else if (uVar8 == 1) {
        if (uVar4 != 1) {
          return 0;
        }
      }
      else if (uVar4 != 2) {
        return 0;
      }
      if (((uVar6 != param_2[2]) || (uVar5 != param_2[3])) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar6,uVar5,param_2[2],param_2[3],0), (uVar6 & 1) == 0)) {
        return 0;
      }
      if ((int)uVar14 != (int)uVar9) {
        return 0;
      }
    }
    else {
      if (uVar3 != 2) {
        if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(param_2[6] >> 0x3d) & 1) != 3) {
          return 0;
        }
        goto LAB_10042d514;
      }
      uVar13 = param_2[6];
      if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(uVar13 >> 0x3d) & 1) != 2) {
        return 0;
      }
      uVar14 = param_2[2];
      uVar2 = param_2[3];
      uVar8 = param_2[4];
      uVar11 = param_2[5];
      if (((uVar4 != *param_2) || (uVar9 != param_2[1])) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar9,*param_2,param_2[1],0), (uVar4 & 1) == 0)) {
        return 0;
      }
      if ((int)uVar6 != (int)uVar14) {
        return 0;
      }
      if ((uVar8 & 1) == 0) {
        if (uVar5 != uVar2) {
          return 0;
        }
      }
      else if (uVar2 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else if (uVar2 == 1) {
        if (uVar5 != 1) {
          return 0;
        }
      }
      else if (uVar5 != 2) {
        return 0;
      }
    }
    FUN_1000094a4(uVar7,uVar1 & 0xdfffffffffffffff,uVar11,uVar13 & 0xdfffffffffffffff);
  }
  else {
    if (uVar3 < 6) {
      if (uVar3 == 4) {
        uVar8 = param_2[6];
        uVar14 = param_2[8];
        if (((uint)(uVar14 >> 0x3b) & 6 | (uint)(uVar8 >> 0x3d) & 1) != 4) {
          return 0;
        }
        if ((int)uVar4 != (int)*param_2) {
          return 0;
        }
        uVar11 = param_1[7];
        uVar4 = param_2[3];
        uVar2 = param_2[4];
        uVar15 = param_2[5];
        uVar10 = param_2[7];
        FUN_1000094a4(uVar9,uVar6,param_2[1],param_2[2]);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        iVar12 = (int)uVar1;
        iVar16 = (int)uVar8;
        if ((uVar2 & 1) == 0) {
          if (iVar12 != iVar16) {
            return 0;
          }
          if (uVar5 != uVar4) {
            return 0;
          }
        }
        else if (uVar4 == 0) {
          if (iVar12 != iVar16) {
            return 0;
          }
          if (uVar5 != 0) {
            return 0;
          }
        }
        else if (uVar4 == 1) {
          if (iVar12 != iVar16) {
            return 0;
          }
          if (uVar5 != 1) {
            return 0;
          }
        }
        else {
          if (iVar12 != iVar16) {
            return 0;
          }
          if (uVar5 != 2) {
            return 0;
          }
        }
        if (uVar7 != uVar15) {
          return 0;
        }
        FUN_1000094a4(uVar11,uVar13 & 0xcfffffffffffffff,uVar10,uVar14 & 0xcfffffffffffffff);
        uVar7 = uVar11;
        goto joined_r0x00010042d64c;
      }
      if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(param_2[6] >> 0x3d) & 1) != 5) {
        return 0;
      }
      if ((int)uVar4 != (int)*param_2) {
        return 0;
      }
    }
    else {
      if (uVar3 != 6) {
        if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(param_2[6] >> 0x3d) & 1) != 7) {
          return 0;
        }
        uVar9 = *param_2;
        if ((param_2[1] & 1) == 0) {
          if (uVar4 != uVar9) {
            return 0;
          }
        }
        else if (uVar9 == 0) {
          if (uVar4 != 0) {
            return 0;
          }
        }
        else if (uVar9 == 1) {
          if (uVar4 != 1) {
            return 0;
          }
        }
        else if (uVar4 != 2) {
          return 0;
        }
        FUN_1000094a4(uVar6,uVar5,param_2[2],param_2[3]);
        uVar7 = uVar6;
        goto joined_r0x00010042d64c;
      }
      if (((uint)(param_2[8] >> 0x3b) & 6 | (uint)(param_2[6] >> 0x3d) & 1) != 6) {
        return 0;
      }
LAB_10042d514:
      if (uVar4 != *param_2) {
        return 0;
      }
    }
    uVar7 = param_2[1];
    if ((param_2[2] & 1) == 0) {
      if (uVar9 != uVar7) {
        return 0;
      }
    }
    else if (uVar7 == 0) {
      if (uVar9 != 0) {
        return 0;
      }
    }
    else if (uVar7 == 1) {
      if (uVar9 != 1) {
        return 0;
      }
    }
    else if (uVar9 != 2) {
      return 0;
    }
    FUN_1000094a4(uVar5,uVar14,param_2[3],param_2[4]);
    uVar7 = uVar5;
  }
joined_r0x00010042d64c:
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  return 1;
}

