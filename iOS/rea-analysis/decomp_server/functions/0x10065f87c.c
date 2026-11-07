// rea decompile_all
// name: FUN_10065f87c
// address: 0x10065f87c
// body: available
// range: 0x10065f87c-0x10065fa87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10065f87c(long param_1,long param_2,char param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_3 == '\0') {
    if (param_2 == 0 && param_1 == 0) {
      return 0;
    }
  }
  else {
    if (param_3 == '\x01') {
      lVar8 = param_2 - param_1;
      if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa88);
        (*pcVar2)();
      }
    }
    else {
      lVar8 = *(long *)(param_4 + 0x10);
    }
    if (lVar8 < 1) {
      return 0;
    }
  }
  lVar8 = 0;
  uVar4 = 0;
  bVar3 = SBORROW8(param_2,param_1);
  uVar1 = param_2 - param_1;
  uVar6 = (ulong)(param_1 != 0);
  if (param_2 != 0) {
    uVar6 = 2;
  }
  if (param_3 != '\0') goto LAB_10065f954;
  do {
    if (param_2 == 0) {
      if (param_1 == 0) {
        lVar5 = param_2;
        if (uVar4 == 1) goto LAB_10065f914;
        uVar7 = uVar6;
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa84);
          (*pcVar2)();
        }
      }
      else {
        if (uVar4 == 0) {
LAB_10065fa30:
          FUN_100644580();
          uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          lVar5 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
          if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa80);
            (*pcVar2)();
          }
          return lVar8 + lVar5;
        }
        uVar7 = uVar6;
        if (uVar4 == 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa78);
          (*pcVar2)();
        }
      }
    }
    else {
      lVar5 = param_1;
      if (uVar4 == 0) goto LAB_10065f914;
      lVar5 = param_2;
      if (uVar4 == 1) goto LAB_10065f914;
      uVar7 = uVar6;
      if (uVar4 == 2) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa68);
        (*pcVar2)();
      }
    }
LAB_10065f93c:
    while( true ) {
      if ((long)uVar7 <= (long)uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa54);
        (*pcVar2)();
      }
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 0x40;
      if (param_3 == '\0') break;
LAB_10065f954:
      if (param_3 == '\x01') {
        uVar7 = uVar1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa5c);
          (*pcVar2)();
        }
      }
      else {
        uVar7 = *(ulong *)(param_4 + 0x10);
      }
      if (uVar4 == uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa58);
        (*pcVar2)();
      }
      if (param_3 != '\x02') goto LAB_10065f998;
      uVar7 = *(ulong *)(param_4 + 0x10);
      if (uVar4 < *(ulong *)(param_4 + 0x10)) {
        lVar5 = *(long *)(param_4 + uVar4 * 8 + 0x20);
        goto LAB_10065f914;
      }
    }
  } while( true );
LAB_10065f998:
  if (bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa60);
    (*pcVar2)();
  }
  uVar7 = uVar1;
  if ((long)uVar4 < (long)uVar1) {
    uVar7 = param_1 + uVar4;
    if (SCARRY8(param_1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa6c);
      (*pcVar2)();
    }
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa70);
      (*pcVar2)();
    }
    if (*(ulong *)(param_4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa74);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_4 + 0x20 + uVar7 * 8);
LAB_10065f914:
    if (lVar5 != 0) {
      if (uVar4 + 0xfe00000000000000 >> 0x3a < 0x3f) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa7c);
        (*pcVar2)();
      }
      goto LAB_10065fa30;
    }
    uVar7 = uVar6;
    if (param_3 != '\0') {
      if (param_3 == '\x01') {
        uVar7 = uVar1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10065fa64);
          (*pcVar2)();
        }
      }
      else {
        uVar7 = *(ulong *)(param_4 + 0x10);
      }
    }
  }
  goto LAB_10065f93c;
}

