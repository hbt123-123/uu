// rea decompile_all
// name: FUN_10062f7e8
// address: 0x10062f7e8
// body: available
// range: 0x10062f7e8-0x10062f8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062f7e8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long unaff_x20;
  
  if (param_1 < 1) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar5 + param_1;
  if (SCARRY8(lVar5,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062f8e4);
    (*pcVar4)();
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = (uint)(*(ulong *)(unaff_x20 + 0x18) >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar8 = *(ulong *)(unaff_x20 + 0x18) >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)lVar2 >> 0x20);
      if (SBORROW4(iVar7,(int)lVar2)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10062f8f4);
        (*pcVar4)();
      }
      uVar8 = (ulong)(iVar7 - (int)lVar2);
    }
  }
  else {
    if (uVar6 != 2) {
      if (0 < lVar1) goto LAB_10062f8a8;
      goto LAB_10062f854;
    }
    uVar8 = *(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x10);
    if (SBORROW8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10062f8f0);
      (*pcVar4)();
    }
  }
  if ((long)uVar8 < lVar1) {
LAB_10062f8a8:
    FUN_10062fb44();
    _swift_allocError(&DAT_1009e15d8,param_1,0,0);
    _swift_willThrow();
    return;
  }
LAB_10062f854:
  if (lVar1 < lVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10062f8e8);
    (*pcVar4)();
  }
  __s10Foundation4DataV7subdata2inACSnySiG_tF(lVar5);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x20),param_1)) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10062f8ec);
  (*pcVar4)();
}

