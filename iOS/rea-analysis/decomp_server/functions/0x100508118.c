// rea decompile_all
// name: FUN_100508118
// address: 0x100508118
// body: available
// range: 0x100508118-0x1005082f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100508118(ulong param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_2 << 3 < 0x80) {
    if (param_1 < 0x80) {
      lVar4 = 1;
      lVar3 = 1;
      goto LAB_1005082d8;
    }
    if ((long)param_1 < 0) {
      lVar3 = 1;
      goto LAB_100508278;
    }
    if (param_1 >> 0x23 != 0) {
      lVar3 = 1;
      goto LAB_100508294;
    }
    lVar3 = 1;
    if (param_1 < 0x200000) goto LAB_1005081ac;
LAB_1005082c8:
    lVar4 = 4;
LAB_1005082cc:
    param_1 = param_1 >> 0x1c;
joined_r0x0001005082a4:
    if (param_1 == 0) goto LAB_1005082d8;
  }
  else {
    if (param_2 << 3 < 0x4000) {
      if (param_1 < 0x80) {
        lVar3 = 2;
        lVar4 = 1;
        goto LAB_1005082d8;
      }
      if ((long)param_1 < 0) {
        lVar3 = 2;
        goto LAB_100508278;
      }
      if (param_1 >> 0x23 != 0) {
        lVar3 = 2;
        goto LAB_100508294;
      }
      if (param_1 >> 0x15 != 0) {
        lVar3 = 2;
        goto LAB_1005082c8;
      }
      lVar3 = 2;
    }
    else {
      bVar2 = param_1 < 0x80;
      if ((param_2 & 0x1fffffff) >> 0x12 == 0) {
        if (bVar2) {
          lVar3 = 3;
          lVar4 = 1;
          goto LAB_1005082d8;
        }
        if ((long)param_1 < 0) {
          lVar3 = 3;
          goto LAB_100508278;
        }
        if (param_1 >> 0x23 != 0) {
          lVar3 = 3;
          goto LAB_100508294;
        }
        if (param_1 >> 0x15 != 0) {
          lVar3 = 3;
          goto LAB_1005082c8;
        }
        lVar3 = 3;
      }
      else if ((param_2 & 0x1fffffff) >> 0x19 == 0) {
        if (bVar2) {
          lVar3 = 4;
          lVar4 = 1;
          goto LAB_1005082d8;
        }
        if ((long)param_1 < 0) {
          lVar3 = 4;
LAB_100508278:
          lVar4 = 10;
          goto LAB_1005082d8;
        }
        if (param_1 >> 0x23 != 0) {
          lVar3 = 4;
LAB_100508294:
          if (param_1 >> 0x31 != 0) {
            param_1 = param_1 >> 0x1c;
            lVar4 = 8;
            goto LAB_1005082cc;
          }
          lVar4 = 6;
          param_1 = param_1 >> 0x2a;
          goto joined_r0x0001005082a4;
        }
        if (param_1 >> 0x15 != 0) {
          lVar4 = 4;
          lVar3 = 4;
          goto LAB_1005082cc;
        }
        lVar3 = 4;
      }
      else {
        if (bVar2) {
          lVar3 = 5;
          lVar4 = 1;
          goto LAB_1005082d8;
        }
        if ((long)param_1 < 0) {
          lVar3 = 5;
          goto LAB_100508278;
        }
        if (param_1 >> 0x23 != 0) {
          lVar3 = 5;
          goto LAB_100508294;
        }
        if (param_1 >> 0x15 != 0) {
          lVar3 = 5;
          goto LAB_1005082c8;
        }
        lVar3 = 5;
      }
    }
LAB_1005081ac:
    lVar4 = 2;
    if (param_1 < 0x4000) goto LAB_1005082d8;
  }
  lVar4 = lVar4 + 1;
LAB_1005082d8:
  if (!SCARRY8(*unaff_x20,lVar3 + lVar4)) {
    *unaff_x20 = *unaff_x20 + lVar3 + lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005082f4);
  (*pcVar1)();
}

