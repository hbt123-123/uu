// rea decompile_all
// name: FUN_100646ccc
// address: 0x100646ccc
// body: available
// range: 0x100646ccc-0x100646f0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100646ccc(ulong param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar10 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 2;
    uVar5 = unaff_x20[3];
    uVar4 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar4 == 0) || ((long)(*(ulong *)(uVar5 + 0x18) >> 1) < (long)param_1)) {
      FUN_10062958c();
      unaff_x20[3] = uVar4;
      uVar5 = uVar4;
    }
    else {
      unaff_x20[3] = uVar5;
    }
    if (uVar10 == 0) {
      if (uVar7 != 0) {
        uVar10 = *(ulong *)(uVar5 + 0x10);
        uVar4 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar10) {
          uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_10062958c(uVar4,uVar10 + 1,1,uVar5);
        }
        *(ulong *)(uVar4 + 0x10) = uVar10 + 1;
        *(ulong *)(uVar4 + uVar10 * 8 + 0x20) = uVar7;
        unaff_x20[3] = uVar4;
      }
    }
    else {
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar8 = *(ulong *)(uVar5 + 0x18);
      uVar9 = uVar8 >> 1;
      lVar1 = uVar4 + 1;
      uVar6 = uVar5;
      if (uVar9 <= uVar4) {
        uVar6 = (ulong)(1 < uVar8);
        FUN_10062958c(uVar6,lVar1,1,uVar5);
        uVar8 = *(ulong *)(uVar6 + 0x18);
        uVar9 = uVar8 >> 1;
      }
      *(long *)(uVar6 + 0x10) = lVar1;
      *(ulong *)(uVar6 + uVar4 * 8 + 0x20) = uVar7;
      lVar2 = uVar4 + 2;
      uVar7 = uVar6;
      if ((long)uVar9 < lVar2) {
        uVar7 = (ulong)(1 < uVar8);
        FUN_10062958c(uVar7,lVar2,1,uVar6);
      }
      *(long *)(uVar7 + 0x10) = lVar2;
      *(ulong *)(uVar7 + lVar1 * 8 + 0x20) = uVar10;
      unaff_x20[3] = uVar7;
    }
  }
  else if ((char)unaff_x20[2] == '\x01') {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 2;
    if (SBORROW8(uVar10,uVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646e90);
      (*pcVar3)();
    }
    uVar5 = uVar10 - uVar7;
    if ((long)(uVar10 - uVar7) <= (long)param_1) {
      uVar5 = param_1;
    }
    uVar4 = 0;
    FUN_10062958c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100995ea0);
    if ((long)uVar10 < (long)uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646e94);
      (*pcVar3)();
    }
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646e98);
      (*pcVar3)();
    }
    uVar5 = unaff_x20[3];
    if (*(ulong *)(uVar5 + 0x10) < uVar7 || (long)*(ulong *)(uVar5 + 0x10) < (long)uVar10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100646e9c);
      (*pcVar3)();
    }
    FUN_1006289c0(uVar5,uVar5 + 0x20,uVar7,uVar10 << 1 | 1);
    unaff_x20[3] = uVar4;
  }
  else {
    uVar10 = unaff_x20[3];
    uVar7 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)uVar7 == 0) || ((long)(*(ulong *)(uVar10 + 0x18) >> 1) < (long)param_1)) {
      FUN_10062958c();
      uVar10 = uVar7;
    }
    unaff_x20[3] = uVar10;
  }
  return;
}

