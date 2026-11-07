// rea decompile_all
// name: FUN_1006753d8
// address: 0x1006753d8
// body: available
// range: 0x1006753d8-0x100675507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006753d8(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_1;
  if (*(ulong *)(uVar5 + 0x10) < 2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006754e4);
    (*pcVar1)();
  }
  if (*(ulong *)(uVar5 + 0x10) < 7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006754e8);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(uVar5 + 0x28);
  uVar7 = *(undefined8 *)(uVar5 + 0x50);
  uVar2 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1006541e0();
  }
  *(undefined8 *)(uVar5 + 0x28) = uVar7;
  uVar2 = *(ulong *)(uVar5 + 0x10);
  if (uVar2 < 10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006754fc);
    (*pcVar1)();
  }
  *(undefined8 *)(uVar5 + 0x50) = *(undefined8 *)(uVar5 + 0x68);
  if (uVar2 < 0x17) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675500);
    (*pcVar1)();
  }
  *(undefined8 *)(uVar5 + 0x68) = *(undefined8 *)(uVar5 + 0xd0);
  *(undefined8 *)(uVar5 + 0xd0) = *(undefined8 *)(uVar5 + 0x90);
  uVar7 = *(undefined8 *)(uVar5 + 0x30);
  *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)(uVar5 + 0x80);
  *(undefined8 *)(uVar5 + 0x80) = *(undefined8 *)(uVar5 + 0x88);
  uVar3 = *(undefined8 *)(uVar5 + 0xc0);
  *(undefined8 *)(uVar5 + 0xc0) = uVar7;
  *(undefined8 *)(uVar5 + 0x90) = uVar3;
  *(undefined8 *)(uVar5 + 0x88) = *(undefined8 *)(uVar5 + 0xb8);
  if (uVar2 != 0x17) {
    *(undefined8 *)(uVar5 + 0xb8) = *(undefined8 *)(uVar5 + 0xd8);
    *(undefined8 *)(uVar5 + 0xd8) = *(undefined8 *)(uVar5 + 0x98);
    *(undefined8 *)(uVar5 + 0x98) = *(undefined8 *)(uVar5 + 0x40);
    if (0x18 < uVar2) {
      uVar3 = *(undefined8 *)(uVar5 + 0xe0);
      *(undefined8 *)(uVar5 + 0xe0) = *(undefined8 *)(uVar5 + 200);
      uVar7 = *(undefined8 *)(uVar5 + 0x58);
      *(undefined8 *)(uVar5 + 200) = *(undefined8 *)(uVar5 + 0x60);
      uVar4 = *(undefined8 *)(uVar5 + 0x48);
      *(undefined8 *)(uVar5 + 0x40) = uVar3;
      *(undefined8 *)(uVar5 + 0x48) = *(undefined8 *)(uVar5 + 0x38);
      *(undefined8 *)(uVar5 + 0x38) = *(undefined8 *)(uVar5 + 0xb0);
      uVar3 = *(undefined8 *)(uVar5 + 0xa0);
      *(undefined8 *)(uVar5 + 0xb0) = *(undefined8 *)(uVar5 + 0xa8);
      *(undefined8 *)(uVar5 + 0xa0) = uVar4;
      *(undefined8 *)(uVar5 + 0xa8) = *(undefined8 *)(uVar5 + 0x78);
      *(undefined8 *)(uVar5 + 0x58) = *(undefined8 *)(uVar5 + 0x70);
      *(undefined8 *)(uVar5 + 0x60) = uVar3;
      *(undefined8 *)(uVar5 + 0x70) = uVar6;
      *(undefined8 *)(uVar5 + 0x78) = uVar7;
      *param_1 = uVar5;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100675508);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100675504);
  (*pcVar1)();
}

