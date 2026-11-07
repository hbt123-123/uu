// rea decompile_all
// name: FUN_1001e5f14
// address: 0x1001e5f14
// body: available
// range: 0x1001e5f14-0x1001e5f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1001e5f14(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_28;
  
  if (param_1 != 0) {
    local_28 = 0;
    _swift_stdlib_random(&local_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (local_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (local_28 * param_1 < uVar7) {
        do {
          local_28 = 0;
          _swift_stdlib_random(&local_28,8);
        } while (local_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1001e5f9c);
  (*pcVar5)();
}

