// rea decompile_all
// name: FUN_100633b90
// address: 0x100633b90
// body: available
// range: 0x100633b90-0x100633d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100633d54 to 0x1007df454 _swift_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100633b90(long *param_1,size_t param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar8 = ((ulong)unaff_x20[3] >> 1) - unaff_x20[2];
  if (SBORROW8((ulong)unaff_x20[3] >> 1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d5c);
    (*pcVar7)();
  }
  lVar10 = *param_1;
  lVar5 = *(long *)(lVar10 + 0x10) - param_2;
  if (SBORROW8(*(long *)(lVar10 + 0x10),param_2)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d60);
    (*pcVar7)();
  }
  sVar6 = lVar5 - param_3;
  if (SBORROW8(lVar5,param_3)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d64);
    (*pcVar7)();
  }
  if (SBORROW8(lVar8,param_2)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d68);
    (*pcVar7)();
  }
  lVar5 = (lVar8 - param_2) - sVar6;
  if (SBORROW8(lVar8 - param_2,sVar6)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d6c);
    (*pcVar7)();
  }
  pvVar1 = (void *)(lVar10 + 0x20);
  pvVar2 = (void *)((long)pvVar1 + param_2 + param_3);
  FUN_100634018(lVar8,param_6);
  if (lVar8 == 0) {
    lVar12 = unaff_x20[2];
    lVar8 = lVar12 + param_2;
    if (SCARRY8(lVar12,param_2)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d80);
      (*pcVar7)();
    }
    if (lVar8 < lVar12) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d84);
      (*pcVar7)();
    }
    if (SBORROW8(lVar8,lVar12)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d88);
      (*pcVar7)();
    }
    lVar11 = unaff_x20[1];
    _memcpy(pvVar1,(void *)(lVar11 + lVar12),lVar8 - lVar12);
    (*param_4)((long)pvVar1 + (lVar8 - lVar12),param_3);
    lVar4 = lVar8 + lVar5;
    if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d8c);
      (*pcVar7)();
    }
    uVar9 = (ulong)unaff_x20[3] >> 1;
    if ((long)uVar9 < lVar4) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d90);
      (*pcVar7)();
    }
    if (SBORROW8(uVar9,lVar4)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d94);
      (*pcVar7)();
    }
    _memcpy(pvVar2,(void *)(lVar11 + lVar4),uVar9 - lVar4);
  }
  else {
    lVar12 = unaff_x20[2];
    pvVar3 = (void *)(unaff_x20[1] + lVar12);
    if ((pvVar1 != pvVar3) || ((void *)((long)pvVar3 + param_2) <= pvVar1)) {
      _memmove(pvVar1,pvVar3,param_2);
    }
    (*param_4)((long)pvVar1 + param_2,param_3);
    pvVar3 = (void *)((long)((long)pvVar3 + param_2) + lVar5);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + sVar6) <= pvVar2) {
      _memmove(pvVar2,pvVar3,sVar6);
    }
    *(undefined8 *)(lVar8 + 0x10) = 0;
    _swift_release(lVar8);
  }
  _swift_unknownObjectRelease(*unaff_x20);
  if (SBORROW8(0,lVar12)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d70);
    (*pcVar7)();
  }
  lVar8 = lVar12 + *(long *)(lVar10 + 0x10);
  if (SCARRY8(lVar12,*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d74);
    (*pcVar7)();
  }
  if (lVar8 < lVar12) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d78);
    (*pcVar7)();
  }
  if (-1 < lVar8) {
    *unaff_x20 = lVar10;
    unaff_x20[1] = (long)pvVar1 - lVar12;
    unaff_x20[2] = lVar12;
    unaff_x20[3] = lVar8 * 2 | 1;
    _swift_retain(lVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100633d7c);
  (*pcVar7)();
}

