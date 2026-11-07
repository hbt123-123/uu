// rea decompile_all
// name: FUN_100675508
// address: 0x100675508
// body: available
// range: 0x100675508-0x1006755f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100675508(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar10 = *param_1;
  uVar5 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_1006541e0();
  }
  puVar6 = (ulong *)(uVar10 + 0x40);
  uVar5 = 0;
  while( true ) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    if (uVar7 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006755d8);
      (*pcVar3)();
    }
    if (uVar7 <= uVar5 + 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006755dc);
      (*pcVar3)();
    }
    if (uVar7 <= uVar5 + 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006755e0);
      (*pcVar3)();
    }
    uVar1 = puVar6[-4];
    uVar2 = puVar6[-3];
    uVar8 = puVar6[-2];
    puVar6[-4] = uVar8 & (uVar2 ^ 0xffffffffffffffff) ^ uVar1;
    if (uVar7 <= uVar5 + 3) break;
    uVar9 = puVar6[-1];
    puVar6[-3] = uVar9 & (uVar8 ^ 0xffffffffffffffff) ^ uVar2;
    if (uVar7 <= uVar5 + 4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006755e8);
      (*pcVar3)();
    }
    uVar7 = *puVar6;
    puVar6[-2] = uVar7 & (uVar9 ^ 0xffffffffffffffff) ^ uVar8;
    puVar6[-1] = uVar1 & (uVar7 ^ 0xffffffffffffffff) ^ uVar9;
    *puVar6 = uVar7 ^ uVar2 & (uVar1 ^ 0xffffffffffffffff);
    bVar4 = 0x13 < uVar5;
    puVar6 = puVar6 + 5;
    uVar5 = uVar5 + 5;
    if (bVar4) {
      *param_1 = uVar10;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006755e4);
  (*pcVar3)();
}

