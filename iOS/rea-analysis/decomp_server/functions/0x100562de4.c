// rea decompile_all
// name: FUN_100562de4
// address: 0x100562de4
// body: available
// range: 0x100562de4-0x10056301b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100562de4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = param_1 + 0x3118a41200;
  if (SCARRY8(param_1,0x3118a41200)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562fe0);
    (*pcVar2)();
  }
  FUN_100523044(lVar3,0x15180);
  if (SCARRY8(lVar3,0x579)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562fe4);
    (*pcVar2)();
  }
  if (lVar3 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562fe8);
    (*pcVar2)();
  }
  lVar4 = lVar3 * 4 + 0x42f65;
  if (SCARRY8(lVar3 * 4,0x42f65)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562fec);
    (*pcVar2)();
  }
  FUN_100523044(lVar4,0x23ab1);
  lVar5 = lVar4 * 3;
  if (SUB168(SEXT816(lVar4) * SEXT816(3),8) != lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562ff0);
    (*pcVar2)();
  }
  FUN_100523044(lVar5,4);
  lVar4 = lVar3 + 0x579 + lVar5;
  if (SCARRY8(lVar3 + 0x579,lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562ff4);
    (*pcVar2)();
  }
  if (SBORROW8(lVar4,0x26)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100562ff8);
    (*pcVar2)();
  }
  if (2 < lVar4 + 0xdfffffffffffffdaU >> 0x3e) {
    uVar6 = (lVar4 + -0x26) * 4 | 3;
    lVar4 = (long)uVar6 % 0x5b5;
    lVar3 = lVar4 + 0x5b5;
    if (-1 < lVar4) {
      lVar3 = lVar4;
    }
    FUN_100523044(lVar3,4);
    if (SUB168(SEXT816(lVar3) * SEXT816(5),8) != lVar3 * 5 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100563000);
      (*pcVar2)();
    }
    lVar3 = lVar3 * 5 + 2;
    lVar5 = lVar3 % 0x99;
    lVar4 = lVar5 + 0x99;
    if (-1 < lVar5) {
      lVar4 = lVar5;
    }
    FUN_100523044(lVar4,5);
    lVar5 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100563004);
      (*pcVar2)();
    }
    FUN_100523044(lVar3,0x99);
    lVar4 = lVar3 + 2;
    if (SCARRY8(lVar3,2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100563008);
      (*pcVar2)();
    }
    lVar4 = lVar4 + (((ulong)(lVar4 / 6 + (lVar4 >> 0x3f)) >> 1) - (lVar4 >> 0x3f)) * -0xc;
    lVar3 = lVar4 + 0xc;
    if (-1 < lVar4) {
      lVar3 = lVar4;
    }
    FUN_100523044(uVar6,0x5b5);
    if (SCARRY8(uVar6,-0x126c)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10056300c);
      (*pcVar2)();
    }
    lVar4 = 0xd - lVar3;
    FUN_100523044(lVar4,0xc);
    uVar1 = (uVar6 - 0x126c) + lVar4;
    if (SCARRY8(uVar6 - 0x126c,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100563010);
      (*pcVar2)();
    }
    if ((long)uVar1 < 0x80000000) {
      if (lVar5 < -0x80000000 || (long)uVar1 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100563018);
        (*pcVar2)();
      }
      if (lVar5 < 0x80000000) {
        auVar7._8_8_ = lVar5;
        auVar7._0_8_ = (uVar1 & 0xffffffff | lVar3 << 0x20) + 0x100000000;
        return auVar7;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10056301c);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100563014);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100562ffc);
  (*pcVar2)();
}

