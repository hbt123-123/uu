// rea decompile_all
// name: FUN_100241bf8
// address: 0x100241bf8
// body: available
// range: 0x100241bf8-0x100241cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100241bf8(ulong param_1)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  *(undefined1 *)(unaff_x20 + _TtC6FCount3RC4::I) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6FCount3RC4::J) = 0;
  uVar5 = *(ulong *)(param_1 + 0x10);
  uVar4 = param_1;
  _swift_bridgeObjectRetain();
  if (uVar5 != 0) {
    lVar7 = 0x20;
    uVar6 = uVar5;
    do {
      bVar3 = (byte)uVar4;
      if (uVar5 <= lVar7 - 0x20U) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100241cb8);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(param_1 + lVar7);
      FUN_100241b34();
      uVar4 = param_1;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar4 & 1) == 0) {
        FUN_100242634();
        uVar4 = param_1;
      }
      uVar5 = *(ulong *)(param_1 + 0x10);
      if (uVar5 <= lVar7 - 0x20U) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100241cbc);
        (*pcVar2)();
      }
      *(byte *)(param_1 + lVar7) = bVar3 ^ bVar1;
      lVar7 = lVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return param_1;
}

