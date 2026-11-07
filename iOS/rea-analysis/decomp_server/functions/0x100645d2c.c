// rea decompile_all
// name: FUN_100645d2c
// address: 0x100645d2c
// body: available
// range: 0x100645d2c-0x100645ee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100645d2c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  
  if ((char)unaff_x20[2] == '\0') {
    return;
  }
  if ((char)unaff_x20[2] != '\x01') {
    uVar2 = unaff_x20[3];
    lVar3 = *(long *)(uVar2 + 0x10);
    if (lVar3 == 0) {
      return;
    }
    if (*(long *)(uVar2 + lVar3 * 8 + 0x18) != 0) {
      return;
    }
    while( true ) {
      if (*(long *)(uVar2 + lVar3 * 8 + 0x18) != 0) {
        return;
      }
      uVar6 = uVar2;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1006541a4();
        lVar3 = *(long *)(uVar2 + 0x10);
      }
      else {
        lVar3 = *(long *)(uVar2 + 0x10);
      }
      if (lVar3 == 0) break;
      *(long *)(uVar2 + 0x10) = lVar3 + -1;
      unaff_x20[3] = uVar2;
      lVar3 = *(long *)(uVar2 + 0x10);
      if (lVar3 == 0) {
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ed0);
    (*pcVar1)();
  }
  uVar6 = *unaff_x20;
  uVar5 = unaff_x20[1];
  uVar2 = uVar5;
  if ((long)uVar6 <= (long)uVar5) {
    uVar2 = uVar6;
  }
  do {
    uVar4 = uVar2;
    if ((long)uVar5 <= (long)uVar6) break;
    if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ec8);
      (*pcVar1)();
    }
    if (*(ulong *)(unaff_x20[3] + 0x10) <= uVar5 - 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ecc);
      (*pcVar1)();
    }
    lVar3 = uVar5 * 8;
    uVar4 = uVar5;
    uVar5 = uVar5 - 1;
  } while (*(long *)(unaff_x20[3] + lVar3 + 0x18) == 0);
  lVar3 = uVar4 - uVar6;
  if (SBORROW8(uVar4,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ed4);
    (*pcVar1)();
  }
  if (lVar3 == 2) {
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645edc);
      (*pcVar1)();
    }
    uVar2 = unaff_x20[3];
    if (*(ulong *)(uVar2 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ee4);
      (*pcVar1)();
    }
    if (*(ulong *)(uVar2 + 0x10) <= uVar6 + 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ee8);
      (*pcVar1)();
    }
    lVar3 = uVar2 + uVar6 * 8;
    uVar6 = *(ulong *)(lVar3 + 0x20);
    unaff_x20[1] = *(ulong *)(lVar3 + 0x28);
    *unaff_x20 = uVar6;
  }
  else {
    if (lVar3 != 1) {
      if (uVar4 != uVar6) {
        if (*(long *)(unaff_x20[3] + 0x10) == lVar3) {
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          *(undefined1 *)(unaff_x20 + 2) = 2;
          return;
        }
        unaff_x20[1] = uVar4;
        *(undefined1 *)(unaff_x20 + 2) = 1;
        return;
      }
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      *(undefined1 *)(unaff_x20 + 2) = 0;
      uVar2 = unaff_x20[3];
      goto LAB_100645e78;
    }
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ed8);
      (*pcVar1)();
    }
    uVar2 = unaff_x20[3];
    if (*(ulong *)(uVar2 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100645ee0);
      (*pcVar1)();
    }
    *unaff_x20 = *(ulong *)(uVar2 + uVar6 * 8 + 0x20);
    unaff_x20[1] = 0;
  }
  *(undefined1 *)(unaff_x20 + 2) = 0;
LAB_100645e78:
  _swift_bridgeObjectRelease(uVar2);
  unaff_x20[3] = (ulong)PTR___swiftEmptyArrayStorage_100995ea0;
  return;
}

