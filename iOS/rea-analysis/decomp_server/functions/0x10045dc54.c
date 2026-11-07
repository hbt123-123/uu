// rea decompile_all
// name: FUN_10045dc54
// address: 0x10045dc54
// body: available
// range: 0x10045dc54-0x10045dee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045decc to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10045dc54(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    if (lVar1 != lVar2) {
      return 0;
    }
  }
  else if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else if (lVar1 != 1) {
      return 0;
    }
  }
  else if (lVar2 == 2) {
    if (lVar1 != 2) {
      return 0;
    }
  }
  else if (lVar2 == 3) {
    if (lVar1 != 3) {
      return 0;
    }
  }
  else if (lVar1 != 4) {
    return 0;
  }
  lVar1 = param_1[2];
  lVar2 = param_2[2];
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    if (lVar1 != lVar2) {
      return 0;
    }
  }
  else if (lVar2 < 3) {
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else if (lVar2 == 1) {
      if (lVar1 != 1) {
        return 0;
      }
    }
    else if (lVar1 != 2) {
      return 0;
    }
  }
  else if (lVar2 < 5) {
    if (lVar2 == 3) {
      if (lVar1 != 3) {
        return 0;
      }
    }
    else if (lVar1 != 4) {
      return 0;
    }
  }
  else if (lVar2 == 5) {
    if (lVar1 != 5) {
      return 0;
    }
  }
  else if (lVar1 != 6) {
    return 0;
  }
  lVar1 = param_1[4];
  lVar2 = param_2[4];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (lVar1 != lVar2) {
      return 0;
    }
  }
  else if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        return 0;
      }
    }
    else if (lVar1 != 1) {
      return 0;
    }
  }
  else if (lVar2 == 2) {
    if (lVar1 != 2) {
      return 0;
    }
  }
  else if (lVar2 == 3) {
    if (lVar1 != 3) {
      return 0;
    }
  }
  else if (lVar1 != 4) {
    return 0;
  }
  if (((*(int *)((long)param_1 + 0x2c) == *(int *)((long)param_2 + 0x2c)) &&
      ((int)param_1[6] == (int)param_2[6])) &&
     (*(int *)((long)param_1 + 0x34) == *(int *)((long)param_2 + 0x34))) {
    lVar1 = param_1[7];
    lVar2 = param_2[7];
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      if (lVar1 != lVar2) {
        return 0;
      }
    }
    else if (lVar2 < 2) {
      if (lVar2 == 0) {
        if (lVar1 != 0) {
          return 0;
        }
      }
      else if (lVar1 != 1) {
        return 0;
      }
    }
    else if (lVar2 == 2) {
      if (lVar1 != 2) {
        return 0;
      }
    }
    else if (lVar2 == 3) {
      if (lVar1 != 3) {
        return 0;
      }
    }
    else if (lVar1 != 4) {
      return 0;
    }
    if (((*(int *)((long)param_1 + 0x44) == *(int *)((long)param_2 + 0x44)) &&
        ((int)param_1[9] == (int)param_2[9])) &&
       (*(int *)((long)param_1 + 0x4c) == *(int *)((long)param_2 + 0x4c))) {
      lVar1 = param_1[10];
      lVar2 = param_2[10];
      if ((*(byte *)(param_2 + 0xb) & 1) == 0) {
        if (lVar1 == lVar2) goto LAB_10045debc;
      }
      else if (lVar2 == 0) {
        if (lVar1 == 0) goto LAB_10045debc;
      }
      else if (lVar2 == 1) {
        if (lVar1 == 1) {
LAB_10045debc:
          lVar1 = param_1[0xc];
          FUN_1000094a4(lVar1,param_1[0xd],param_2[0xc],param_2[0xd]);
          return lVar1;
        }
      }
      else if (lVar1 == 2) goto LAB_10045debc;
    }
  }
  return 0;
}

