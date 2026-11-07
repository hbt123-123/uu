// rea decompile_all
// name: FUN_100660be4
// address: 0x100660be4
// body: available
// range: 0x100660be4-0x100660d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100660be4(void)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  cVar3 = (char)unaff_x20[2];
  lVar8 = unaff_x20[3];
  bVar4 = *(byte *)(unaff_x20 + 4);
  lVar6 = lVar1;
  uVar7 = uVar2;
  FUN_10065f638(lVar1,uVar2,cVar3,lVar8);
  if ((bVar4 & 1) == 0) {
    if (((uVar7 & 1) == 0) && (lVar6 < 0)) {
      if (cVar3 == '\0') {
        uVar7 = (ulong)(lVar1 != 0);
        if (uVar2 != 0) {
          uVar7 = 2;
        }
      }
      else if (cVar3 == '\x01') {
        uVar7 = uVar2 - lVar1;
        if (SBORROW8(uVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100660c60);
          (*pcVar5)();
        }
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (!SCARRY8(uVar7,1)) {
        return uVar7 + 1;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100660cd8);
      (*pcVar5)();
    }
    if (cVar3 == '\0') goto LAB_100660c78;
    if (cVar3 == '\x01') {
      if (!SBORROW8(uVar2,lVar1)) {
        return uVar2 - lVar1;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100660c78);
      (*pcVar5)();
    }
  }
  else {
    if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100660d18);
      (*pcVar5)();
    }
    if (lVar6 < 0) {
      if (cVar3 == '\0') {
        uVar7 = (ulong)(lVar1 != 0);
        if (uVar2 != 0) {
          uVar7 = 2;
        }
      }
      else if (cVar3 == '\x01') {
        uVar7 = uVar2 - lVar1;
        if (SBORROW8(uVar2,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100660cb0);
          (*pcVar5)();
        }
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (!SCARRY8(uVar7,1)) {
        return uVar7 + 1;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100660d14);
      (*pcVar5)();
    }
    if (cVar3 == '\0') {
LAB_100660c78:
      if (uVar2 == 0) {
        return (ulong)(lVar1 != 0);
      }
      return 2;
    }
    if (cVar3 == '\x01') {
      if (!SBORROW8(uVar2,lVar1)) {
        return uVar2 - lVar1;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100660c40);
      (*pcVar5)();
    }
  }
  return *(ulong *)(lVar8 + 0x10);
}

