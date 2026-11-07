// rea decompile_all
// name: FUN_10064ba88
// address: 0x10064ba88
// body: available
// range: 0x10064ba88-0x10064bb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_10064ba88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  ulong local_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  uVar4 = param_2;
  FUN_10065f798();
  if (!SCARRY8(lVar2,7)) {
    if ((long)(lVar2 + 7U) < 8) {
      local_50 = 0;
      uStack_48 = 0xc000000000000000;
    }
    else {
      uVar5 = lVar2 + 7U >> 3;
      uVar3 = uVar5;
      FUN_10009a308();
      local_50 = uVar3;
      uStack_48 = uVar4;
      _swift_bridgeObjectRetain(param_4);
      FUN_10064c1f8(&local_50,uVar5,param_1,param_2,param_3,param_4);
    }
    auVar6._8_8_ = uStack_48;
    auVar6._0_8_ = local_50;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064bb28);
  (*pcVar1)();
}

